import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import ghidra.app.decompiler.*;
import java.util.*;

public class Verify extends GhidraScript {
  FunctionManager fm; DecompInterface dec; ReferenceManager rm;
  void dc(long va,String why){
    Address a=toAddr(va);
    Function f=fm.getFunctionContaining(a);
    if(f==null){ disassemble(a); try{createFunction(a,null);}catch(Exception e){} f=fm.getFunctionContaining(a); }
    println("\n===== "+why+" @0x"+Long.toHexString(va)+" (func "+(f==null?"NONE":f.getEntryPoint().toString())+") =====");
    if(f==null) return;
    DecompileResults r=dec.decompileFunction(f,120,monitor);
    if(r!=null&&r.decompileCompleted()) println(r.getDecompiledFunction().getC());
    else println("  fail "+(r==null?"null":r.getErrorMessage()));
  }
  public void run() throws Exception {
    fm=currentProgram.getFunctionManager(); rm=currentProgram.getReferenceManager();
    dec=new DecompInterface(); dec.openProgram(currentProgram);
    // who references the vtable at 0x2C1825B4 (constructor stores vptr)
    println("### refs to vtable 0x2C1825B4 / 0x3C1825B4 ###");
    for(long base: new long[]{0x2C1825B4L,0x3C1825B4L}){
      Address v=toAddr(base);
      ReferenceIterator it=rm.getReferencesTo(v);
      int n=0; while(it.hasNext()){ Reference r=it.next(); Function f=fm.getFunctionContaining(r.getFromAddress());
        println("  from "+r.getFromAddress()+" "+r.getReferenceType()+" in "+(f==null?"<none>":f.getEntryPoint().toString())); if(++n>10)break; }
      if(n==0) println("  (none for 0x"+Long.toHexString(base)+")");
    }
    dc(0x2C5AA114L,"claimed set_sn");
    dc(0x2C5AAB48L,"claimed en_usb");
    dc(0x2C606A28L,"shared helper 0x2C606A28");
    // vtable targets
    dc(0x2C5AAAB4L,"vtable[0] 0x2C5AAAB5");
    dc(0x2C5EEDC4L,"vtable entry 0x2C5EEDC5");
  }
}
