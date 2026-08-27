import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class FindHeaderUnpack extends GhidraScript {
    public void run() throws Exception {
        String outDir="/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/ghidra_decoder/";
        PrintWriter w=new PrintWriter(new FileWriter(outDir+"header_unpack.txt"));
        Listing lst=currentProgram.getListing();
        FunctionManager fm=currentProgram.getFunctionManager();
        InstructionIterator it=lst.getInstructions(true);
        // collect UBFX with lsb 21 or 10 width 11, and note functions
        Map<Function,List<String>> hits=new LinkedHashMap<>();
        while(it.hasNext()){
            Instruction ins=it.next();
            String m=ins.getMnemonicString();
            if(m.equalsIgnoreCase("ubfx")){
                String rep=ins.toString();
                // operands: look for ,#0x15,#0xb or ,#0x1e... check lsb 21(0x15) or 10(0xa) width 11(0xb)
                if(rep.contains("#0x15,#0xb")||rep.contains("#0xa,#0xb")||rep.contains("#0x15, #0xb")||rep.contains("#0xa, #0xb")
                   ||rep.matches(".*#0x15.*#0xb.*")||rep.matches(".*#0xa.*#0xb.*")){
                    Function f=fm.getFunctionContaining(ins.getAddress());
                    hits.computeIfAbsent(f,k->new ArrayList<>()).add(ins.getAddress()+"  "+rep);
                }
            }
        }
        w.println("Functions with UBFX header-field extraction (lsb 21 or 10, width 11):");
        for(Map.Entry<Function,List<String>> e:hits.entrySet()){
            Function f=e.getKey();
            w.println("\n=== "+(f!=null?f.getName()+" @ "+f.getEntryPoint():"<none>")+" ===");
            for(String s:e.getValue()) w.println("   "+s);
        }
        w.close();
        println("header-unpack functions="+hits.size());
    }
}
