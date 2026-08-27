// Bookmark BTH factory/MMI entry strings and stub a call-graph from
// app_poweron_key_init / app_factorymode_enter.
// @category StarAir

import java.io.File;
import java.io.FileWriter;
import java.nio.charset.StandardCharsets;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;

public class FactoryKeyEntry extends GhidraScript {

	private static final String[] STRINGS = {
		"hal_key_boot_handler",
		"app_factorymode_enter",
		"app_factorymode_key_init",
		"app_factorymode_test_key_init",
		"app_poweron_key_init",
		"app_factorymode_init mode:",
		"To enter test mode!!!",
		"PWR KEY DITHER!",
		"power on case:",
		"ENGINEER_MODE",
		"BT_DUT_MODE",
		"HAL_KEY_EVENT_LONGPRESS_500_MS",
		"HAL_KEY_EVENT_LONGPRESS_3000_MS",
		"HAL_KEY_EVENT_LONGPRESS_5000_MS",
		"app_enter_normal_mode",
	};

	private static final int[] IMMS = { 500, 3000, 5000 };

	private static final String[] SEEDS = {
		"app_poweron_key_init",
		"app_factorymode_enter",
		"app_factorymode_key_init",
		"app_factorymode_init",
		"hal_key_boot_handler",
		"app_init",
		"app_watch_init",
	};

	@Override
	public void run() throws Exception {
		String out;
		if (getScriptArgs() != null && getScriptArgs().length > 0) {
			out = getScriptArgs()[0];
		}
		else {
			out = currentProgram.getExecutablePath() + ".factory_key.md";
		}

		StringBuilder md = new StringBuilder();
		md.append("# BTH factory key-hold — Ghidra scan\n\n");
		md.append("- program: `").append(currentProgram.getName()).append("`\n");
		md.append("- image base: `0x")
			.append(Long.toHexString(currentProgram.getMinAddress().getOffset()))
			.append("`\n\n");

		md.append("## Strings\n\n");
		md.append("| string | VA | xrefs | in function |\n");
		md.append("|---|---|---|---|\n");

		for (String s : STRINGS) {
			if (monitor.isCancelled()) {
				break;
			}
			Address addr = findBytes(currentProgram.getMinAddress(), s);
			if (addr == null) {
				println("[FactoryKeyEntry] missing " + s);
				md.append("| `").append(s).append("` | — | 0 | — |\n");
				continue;
			}
			createBookmark(addr, "factory-key", s);
			String label = s.replaceAll("[^A-Za-z0-9_]+", "_");
			if (label.length() > 60) {
				label = label.substring(0, 60);
			}
			createLabel(addr, label, true);
			Reference[] refs = getReferencesTo(addr);
			Function fn = getFunctionContaining(addr);
			String fns = fn != null ? fn.getName() : "—";
			md.append("| `").append(s).append("` | `0x")
				.append(Long.toHexString(addr.getOffset())).append("` | ")
				.append(refs.length).append(" | ").append(fns).append(" |\n");
			println("[FactoryKeyEntry] " + s + " @ " + addr + " xrefs=" + refs.length);
			for (int i = 0; i < refs.length && i < 8; i++) {
				if (getFunctionContaining(refs[i].getFromAddress()) == null) {
					createFunction(refs[i].getFromAddress(), null);
				}
			}
		}

		md.append("M55-only strings (`BTH_TO_M55_FACTORY_TEST_MODE`, `enter MMI mode!`) live in `platform_tester.bin`, not this BTH image.\n\n");
		md.append("## Immediates 500 / 3000 / 5000 in disassembled code\n\n");

		List<String> immRows = scanImmediates();
		if (immRows.isEmpty()) {
			md.append("None in the instruction listing (run auto-analysis).\n");
		}
		else {
			md.append("| VA | function | insn | imm |\n|---|---|---|---|\n");
			int n = 0;
			for (String row : immRows) {
				md.append(row).append("\n");
				if (++n >= 80) {
					break;
				}
			}
		}

		md.append("\n## Call-graph stub (callees ← callers)\n\n");
		for (String seed : SEEDS) {
			md.append("### seed `").append(seed).append("`\n");
			Function fn = findFunctionByName(seed);
			if (fn == null) {
				md.append("Function not created yet — analyze, then re-run this script.\n\n");
				continue;
			}
			for (String row : callers(fn, 4, 80)) {
				md.append(row).append("\n");
			}
			md.append("\n");
		}

		md.append("## Next (manual)\n\n");
		md.append("After auto-analysis, factory log strings still have **0 xrefs** ");
		md.append("(BES trace-hash). Named seeds like `app_poweron_key_init` are ");
		md.append("`.rodata` labels, not Thumb functions — create functions from ");
		md.append("the boot/key `.text` around `0x1404xxxx` / GPIO scan, not from ");
		md.append("the string VAs.\n\n");
		md.append("1. `app_init` / `power on case:%d` → branch into `app_factorymode_enter`.\n");
		md.append("2. That branch's key event is one of LONGPRESS_500/3000/5000_MS.\n");
		md.append("3. Confirm mailbox `BTH_TO_M55_FACTORY_TEST_MODE` (M55: `enter MMI mode!`).\n");
		md.append("4. GUI: `ghidraRun` → `firmware/ghidra/project` → `StarAirBth` → ");
		md.append("`best1600_watch_bth.bin`. Bookmarks category `factory-key`.\n");

		File dest = new File(out);
		File parent = dest.getParentFile();
		if (parent != null) {
			parent.mkdirs();
		}
		try (FileWriter w = new FileWriter(dest)) {
			w.write(md.toString());
		}
		println("[FactoryKeyEntry] wrote " + dest.getAbsolutePath());
	}

	private Function findFunctionByName(String name) {
		List<Function> listed = getGlobalFunctions(name);
		if (listed != null && !listed.isEmpty()) {
			return listed.get(0);
		}
		SymbolIterator it = currentProgram.getSymbolTable().getSymbols(name);
		while (it.hasNext()) {
			Symbol sym = it.next();
			Function fn = getFunctionAt(sym.getAddress());
			if (fn != null) {
				return fn;
			}
		}
		return null;
	}

	private List<String> callers(Function seed, int depth, int limit) {
		List<String> rows = new ArrayList<>();
		Set<Long> seen = new HashSet<>();
		ArrayDeque<Object[]> q = new ArrayDeque<>();
		q.add(new Object[] { seed, Integer.valueOf(0) });
		while (!q.isEmpty() && rows.size() < limit) {
			Object[] item = q.remove();
			Function cur = (Function) item[0];
			int d = ((Integer) item[1]).intValue();
			long key = cur.getEntryPoint().getOffset();
			if (!seen.add(key)) {
				continue;
			}
			StringBuilder indent = new StringBuilder();
			for (int i = 0; i < d; i++) {
				indent.append("  ");
			}
			rows.add("- " + indent + "`" + cur.getName() + "` @ `0x" +
				Long.toHexString(cur.getEntryPoint().getOffset()) + "`");
			if (d >= depth) {
				continue;
			}
			for (Reference r : getReferencesTo(cur.getEntryPoint())) {
				if (monitor.isCancelled()) {
					return rows;
				}
				Function parent = getFunctionContaining(r.getFromAddress());
				if (parent != null) {
					q.add(new Object[] { parent, Integer.valueOf(d + 1) });
				}
			}
		}
		return rows;
	}

	private List<String> scanImmediates() {
		List<String> hits = new ArrayList<>();
		InstructionIterator it = currentProgram.getListing().getInstructions(true);
		while (it.hasNext() && !monitor.isCancelled()) {
			Instruction ins = it.next();
			for (int n = 0; n < ins.getNumOperands(); n++) {
				Object[] objs = ins.getOpObjects(n);
				for (Object obj : objs) {
					Long val = null;
					try {
						if (obj instanceof Number) {
							val = Long.valueOf(((Number) obj).longValue());
						}
						else {
							java.lang.reflect.Method m = obj.getClass().getMethod("getValue");
							Object v = m.invoke(obj);
							if (v instanceof Number) {
								val = Long.valueOf(((Number) v).longValue());
							}
						}
					}
					catch (Exception ignored) {
						continue;
					}
					if (val == null) {
						continue;
					}
					String text = ins.toString();
					// sp+#0x1f4 is a stack slot, not a 500 ms timeout
					if (text.contains("sp") && val.longValue() == 500) {
						continue;
					}
					for (int imm : IMMS) {
						if (val.longValue() == imm) {
							Function fn = getFunctionContaining(ins.getAddress());
							String fname = fn != null ? fn.getName() : "?";
							hits.add("| `0x" + Long.toHexString(ins.getAddress().getOffset()) +
								"` | `" + fname + "` | `" + ins.toString() + "` | " + imm + " |");
						}
					}
				}
			}
		}
		return hits;
	}
}
