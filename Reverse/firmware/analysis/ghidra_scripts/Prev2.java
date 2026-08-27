import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.app.decompiler.*;
public class Prev2 extends GhidraScript {
  FunctionManager fm; DecompInterface dec;
  public void run() throws Exception {
    fm=currentProgram.getFunctionManager(); dec=new DecompInterface(); dec.openProgram(currentProgram);
    // find greatest function entry <= 0x2C5AA108 (owner of the pool holding set_sn ptr)
    Function best=null;
    for(Function f: fm.getFunctions(true)){
      long e=f.getEntryPoint().getOffset();
      if(e<=0x2C5AA108L){ if(best==null||e>best.getEntryPoint().getOffset()) best=f; }
      if(e>0x2C5AA108L) {} // keep scanning (iterator ordered ascending, but be safe)
    }
    println("owner-of-pool candidate: "+(best==null?"NONE":best.getName()+" @"+best.getEntryPoint()));
    if(best!=null){
      DecompileResults r=dec.decompileFunction(best,120,monitor);
      if(r!=null&&r.decompileCompleted()) println(r.getDecompiledFunction().getC());
    }
    // also list all function entries in 0x2C5A9F00..0x2C5AA200 to see boundaries
    println("\n-- function entries 0x2C5A9E00..0x2C5AA300 --");
    for(Function f: fm.getFunctions(true)){
      long e=f.getEntryPoint().getOffset();
      if(0x2C5A9E00L<=e && e<=0x2C5AA300L) println("  "+f.getEntryPoint()+"  "+f.getName());
    }
  }
}
