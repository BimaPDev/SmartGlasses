/* FUN_1005cf54 @ 0x1005cf54 */

uint FUN_1005cf54(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar3 = DAT_1005cfbc;
  if (param_2 != 0) {
    while( true ) {
      uVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar5 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      if (param_2 < (uint)(puVar3[4] - puVar3[3])) {
        FUN_1011b8c6(DAT_1005cfc0,param_1,param_2,puVar3[4] - puVar3[3],param_4);
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar5);
        }
        InstructionSynchronizationBarrier(0xf);
        return param_2;
      }
      puVar3[7] = puVar3[7] + param_2;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar5);
      }
      InstructionSynchronizationBarrier(0xf);
      if ((((uint)puVar3[7] < 0x10001) || (iVar4 = FUN_1006cfc8(*puVar3), iVar4 == 0)) ||
         (puVar3[9] == 0)) break;
      FUN_1005cf2c(puVar3);
    }
  }
  return 0;
}

