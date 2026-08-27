import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.app.decompiler.*;
import java.util.*;

public class FindUsers2 extends GhidraScript {
  FunctionManager fm; Listing listing; Memory mem; ReferenceManager rm; DecompInterface dec;
  String fnOf(Address a){ Function f=fm.getFunctionContaining(a); return f==null?"<no-func:"+a+">":(f.getName()+" @"+f.getEntryPoint()); }
  List<Address> memFind(String s){
    List<Address> out=new ArrayList<>(); byte[] pat=(s+"\0").getBytes(); Address a=mem.getMinAddress();
    while(a!=null){ Address h=mem.findBytes(a,pat,null,true,monitor); if(h==null)break; if(h.getOffset()<0x3c000000L) out.add(h); try{a=h.add(1);}catch(Exception e){break;} }
    return out;
  }
  // collect functions that ultimately use string via direct or pool-indirect refs
  Set<Function> usersOf(Address strAddr){
    Set<Function> fs=new LinkedHashSet<>();
    long fo=strAddr.getOffset()&0xFFFFFF;
    for(long base: new long[]{0x2C000000L,0x3C000000L}){
      Address sa=toAddr(base|fo);
      for(Reference r: iter(rm.getReferencesTo(sa))){
        Address fa=r.getFromAddress();
        Function f=fm.getFunctionContaining(fa);
        if(f!=null){ fs.add(f); }
        else { // pool word -> find instruction referencing the pool
          for(Reference r2: iter(rm.getReferencesTo(fa))){
            Function f2=fm.getFunctionContaining(r2.getFromAddress());
            if(f2!=null) fs.add(f2);
          }
        }
      }
    }
    return fs;
  }
  List<Reference> iter(ReferenceIterator it){ List<Reference> l=new ArrayList<>(); while(it.hasNext())l.add(it.next()); return l; }
  void decompile(Function f,String why){
    println("\n===== DECOMP "+why+": "+f.getName()+" @"+f.getEntryPoint()+" =====");
    DecompileResults r=dec.decompileFunction(f,120,monitor);
    if(r!=null&&r.decompileCompleted()) println(r.getDecompiledFunction().getC());
    else println("  fail "+(r==null?"null":r.getErrorMessage()));
  }
  public void run() throws Exception {
    fm=currentProgram.getFunctionManager(); listing=currentProgram.getListing(); mem=currentProgram.getMemory();
    rm=currentProgram.getReferenceManager();
    dec=new DecompInterface(); dec.openProgram(currentProgram);
    println("funcs="+fm.getFunctionCount());
    String[] needles={"en_usb","eshell >","handleSystemMsg","no handler for action %s","Invalid UART ID: %d","hal_uart_open"};
    Map<String,Set<Function>> res=new LinkedHashMap<>();
    for(String s:needles){
      Set<Function> all=new LinkedHashSet<>();
      for(Address h:memFind(s)){ println("STR "+s+" @"+h); all.addAll(usersOf(h)); }
      res.put(s,all);
      println("["+s+"] users: "+all.size());
      for(Function f:all) println("    "+f.getName()+" @"+f.getEntryPoint());
    }
    // decompile
    for(String s: new String[]{"en_usb","hal_uart_open","no handler for action %s","eshell >"}){
      int n=0; for(Function f:res.get(s)){ decompile(f,"user-of["+s+"]"); if(++n>=2)break; }
    }
  }
}
