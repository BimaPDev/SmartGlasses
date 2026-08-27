import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;

public class ForceDis extends GhidraScript {
  public void run() throws Exception {
    Memory mem=currentProgram.getMemory();
    FunctionManager fm=currentProgram.getFunctionManager();
    Listing listing=currentProgram.getListing();

    long START=0x2C010000L, END=0x2C675000L;
    println("funcs before="+fm.getFunctionCount());

    // sweep for Thumb push{...,lr} prologues and disassemble/create functions
    int made=0, dis=0;
    byte[] buf=new byte[2];
    for(long a=START; a<END; a+=2){
      Address ad=toAddr(a);
      // skip if already inside an instruction
      if(getInstructionAt(ad)!=null) continue;
      mem.getBytes(ad, buf);
      int b0=buf[0]&0xFF, b1=buf[1]&0xFF;
      boolean push16 = (b1==0xB5);                  // push {..., lr}
      boolean pushw  = (b0==0x2D && b1==0xE9);       // stmdb sp!,{...} little-endian E92D..
      if(push16 || pushw){
        try{
          disassemble(ad); dis++;
          if(fm.getFunctionContaining(ad)==null){
            createFunction(ad,null); made++;
          }
        }catch(Exception e){}
      }
    }
    println("disassembled="+dis+" functionsCreated="+made+" funcs after="+fm.getFunctionCount());
  }
}
