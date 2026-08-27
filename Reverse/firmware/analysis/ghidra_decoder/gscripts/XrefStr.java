import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.app.decompiler.*;
import java.io.*; import java.util.*;
public class XrefStr extends GhidraScript {
  public void run() throws Exception {
    String out="/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/ghidra_decoder/";
    PrintWriter w=new PrintWriter(new FileWriter(out+"xref_disp.txt"));
    FunctionManager fm=currentProgram.getFunctionManager();
    ReferenceManager rm=currentProgram.getReferenceManager();
    LinkedHashSet<Function> funcs=new LinkedHashSet<>();
    for(String s:getScriptArgs()){
      long a=Long.parseLong(s.replace("0x",""),16);
      Address addr=toAddr(a);
      w.println("=== xrefs to "+addr+" ===");
      ReferenceIterator it=rm.getReferencesTo(addr);
      int c=0;
      while(it.hasNext()){Reference r=it.next();Function f=fm.getFunctionContaining(r.getFromAddress());
        w.println("  "+r.getFromAddress()+" "+r.getReferenceType()+" in "+(f!=null?f.getName()+"@"+f.getEntryPoint():"<none>"));
        if(f!=null)funcs.add(f);c++;}
      if(c==0)w.println("  (none)");
    }
    DecompInterface di=new DecompInterface();di.openProgram(currentProgram);
    for(Function f:funcs){
      w.println("\n===== "+f.getName()+" @ "+f.getEntryPoint()+" =====");
      DecompileResults r=di.decompileFunction(f,120,monitor);
      if(r!=null&&r.decompileCompleted())w.println(r.getDecompiledFunction().getC());
    }
    w.close();println("funcs="+funcs.size());
  }
}
