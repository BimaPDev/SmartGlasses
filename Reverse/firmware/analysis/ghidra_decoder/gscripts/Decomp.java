import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import java.io.*;

public class Decomp extends GhidraScript {
    public void run() throws Exception {
        String outDir="/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/ghidra_decoder/";
        String[] args=getScriptArgs();
        DecompInterface di=new DecompInterface();
        di.openProgram(currentProgram);
        FunctionManager fm=currentProgram.getFunctionManager();
        PrintWriter w=new PrintWriter(new FileWriter(outDir+"decomp_"+args[0]+".txt"));
        for(int i=1;i<args.length;i++){
            long addr=Long.parseLong(args[i].replace("0x",""),16);
            Function f=fm.getFunctionContaining(toAddr(addr));
            if(f==null){w.println("no func @ "+args[i]);continue;}
            w.println("\n\n========== "+f.getName()+" @ "+f.getEntryPoint()+" ==========");
            DecompileResults r=di.decompileFunction(f,120,monitor);
            if(r!=null&&r.decompileCompleted()) w.println(r.getDecompiledFunction().getC());
            else w.println("<decompile failed>");
        }
        w.close(); println("done");
    }
}
