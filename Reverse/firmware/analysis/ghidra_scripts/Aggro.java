import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.lang.Register;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.Reference;
import java.util.*;
public class Aggro extends GhidraScript {
  FunctionManager fm; Listing L; Memory mem;
  String fnOf(Address a){ Function f=fm.getFunctionContaining(a); return f==null?"<no>":f.getEntryPoint().toString(); }
  List<Long> memFind(String s){ List<Long> o=new ArrayList<>(); byte[] p=(s+"\0").getBytes(); Address a=mem.getMinAddress();
    while(a!=null){ Address h=mem.findBytes(a,p,null,true,monitor); if(h==null)break; if(h.getOffset()<0x3c000000L) o.add(h.getOffset()&0xFFFFFFL); try{a=h.add(1);}catch(Exception e){break;} } return o; }
  public void run() throws Exception {
    fm=currentProgram.getFunctionManager(); L=currentProgram.getListing(); mem=currentProgram.getMemory();
    long start=0x2C430000L, end=0x2C670000L;
    int dis=0;
    Address a=toAddr(start);
    while(a.getOffset()<end){
      if(L.getInstructionAt(a)==null && L.getDefinedDataAt(a)==null){
        try{ disassemble(a); dis++; }catch(Exception e){}
      }
      Instruction ins=L.getInstructionAt(a);
      if(ins!=null) a=ins.getMaxAddress().add(1); else a=a.add(2);
    }
    println("disassemble calls="+dis+" funcCount="+fm.getFunctionCount());

    Map<Long,String> want=new HashMap<>();
    for(String s: new String[]{"en_usb","set_sn","eshell >","handleSystemMsg","Invalid UART ID: %d","fac_cmd_trd","enable usb","no handler for action %s","hal_uart_open"})
      for(Long fo: memFind(s)) want.put(fo,s);
    Set<Long> full=new HashSet<>();
    for(Long fo: want.keySet()){ full.add(0x2C000000L|fo); full.add(0x3C000000L|fo); }

    HashMap<String,long[]> movw=new HashMap<>();
    InstructionIterator it=L.getInstructions(true);
    int hFull=0,hOff=0,hRef=0;
    while(it.hasNext()){ Instruction ins=it.next(); String mn=ins.getMnemonicString().toLowerCase();
      if(mn.equals("movw")){ Object[] o=ins.getOpObjects(0),v=ins.getOpObjects(1);
        if(o.length>0&&o[0] instanceof Register&&v.length>0&&v[0] instanceof Scalar) movw.put(((Register)o[0]).getName(),new long[]{((Scalar)v[0]).getUnsignedValue(),ins.getAddress().getOffset()}); }
      else if(mn.equals("movt")){ Object[] o=ins.getOpObjects(0),v=ins.getOpObjects(1);
        if(o.length>0&&o[0] instanceof Register&&v.length>0&&v[0] instanceof Scalar){ long[] lo=movw.get(((Register)o[0]).getName());
          if(lo!=null){ long full1=(lo[0]&0xFFFF)|((((Scalar)v[0]).getUnsignedValue()&0xFFFF)<<16); long off1=full1&0xFFFFFF;
            if(full.contains(full1)){ println("FULL movw/movt -> "+want.get(off1)+" @0x"+Long.toHexString(lo[1])+" in "+fnOf(ins.getAddress())); hFull++; }
            else if(want.containsKey(full1)){ println("OFFSET movw/movt -> "+want.get(full1)+" @0x"+Long.toHexString(lo[1])+" in "+fnOf(ins.getAddress())); hOff++; } } } }
      for(Reference r: ins.getReferencesFrom()){ long t=r.getToAddress().getOffset(); if(full.contains(t)||full.contains(t&~1L)){ println("REF -> "+want.get(t&0xFFFFFF)+" @"+ins.getAddress()+" in "+fnOf(ins.getAddress())); hRef++; } }
    }
    println("hits full="+hFull+" offset="+hOff+" ref="+hRef);
  }
}
