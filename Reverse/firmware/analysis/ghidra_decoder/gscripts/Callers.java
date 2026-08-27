import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
public class Callers extends GhidraScript {
  public void run() throws Exception {
    FunctionManager fm=currentProgram.getFunctionManager();
    ReferenceManager rm=currentProgram.getReferenceManager();
    for(String s: getScriptArgs()){
      long a=Long.parseLong(s.replace("0x",""),16);
      Address addr=toAddr(a);
      Function tf=fm.getFunctionContaining(addr);
      println("### callers of "+(tf!=null?tf.getName():s)+" @ "+addr);
      ReferenceIterator it=rm.getReferencesTo(tf!=null?tf.getEntryPoint():addr);
      while(it.hasNext()){
        Reference r=it.next();
        Function f=fm.getFunctionContaining(r.getFromAddress());
        println("   "+r.getFromAddress()+" ("+r.getReferenceType()+") in "+(f!=null?f.getName()+"@"+f.getEntryPoint():"<none>"));
      }
    }
  }
}
