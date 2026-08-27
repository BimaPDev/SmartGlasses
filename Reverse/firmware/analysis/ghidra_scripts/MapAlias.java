import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;

public class MapAlias extends GhidraScript {
  public void run() throws Exception {
    Memory mem = currentProgram.getMemory();
    Address base = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(0x2C000000L);
    Address alias = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(0x3C000000L);
    long size = mem.getBlock(base).getSize();
    if(mem.getBlock(alias)==null){
      mem.createByteMappedBlock("rodata_3C_alias", alias, base, size, false);
      println("created 0x3C alias block size="+size);
    } else {
      println("alias block already present");
    }
  }
}
