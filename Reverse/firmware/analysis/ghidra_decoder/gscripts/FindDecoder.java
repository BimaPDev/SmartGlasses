import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

public class FindDecoder extends GhidraScript {
    public void run() throws Exception {
        String outDir = "/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/ghidra_decoder/";
        PrintWriter w = new PrintWriter(new FileWriter(outDir+"xrefs.txt"));
        long[] targets = {0x2c41b324L,0x2c41b4e0L,0x2c41b55cL,0x2c41b597L,
                          0x2c3af594L,0x2c34c314L,0x2c34cff4L};
        String[] names = {"nibtbl1","nibtbl2","nibtbl3","bpptbl",
                          "dsc_logo","dsc_icon0","dsc_icon1"};
        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager rm = currentProgram.getReferenceManager();
        Set<Function> funcs = new LinkedHashSet<>();
        for (int i=0;i<targets.length;i++){
            Address a = toAddr(targets[i]);
            w.println("=== "+names[i]+" @ "+a+" ===");
            ReferenceIterator it = rm.getReferencesTo(a);
            int c=0;
            while(it.hasNext()){
                Reference r = it.next();
                Address from = r.getFromAddress();
                Function f = fm.getFunctionContaining(from);
                w.println("  from "+from+" ("+r.getReferenceType()+") in "+(f!=null?f.getName()+"@"+f.getEntryPoint():"<none>"));
                if(f!=null) funcs.add(f);
                c++;
            }
            if(c==0) w.println("  (no references)");
        }
        w.println("\n\n########## DECOMPILATIONS ##########");
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        for(Function f: funcs){
            w.println("\n===== "+f.getName()+" @ "+f.getEntryPoint()+" =====");
            DecompileResults res = di.decompileFunction(f, 90, monitor);
            if(res!=null && res.decompileCompleted()){
                w.println(res.getDecompiledFunction().getC());
            } else w.println("  <decompile failed>");
        }
        w.close();
        println("done, functions="+funcs.size());
    }
}
