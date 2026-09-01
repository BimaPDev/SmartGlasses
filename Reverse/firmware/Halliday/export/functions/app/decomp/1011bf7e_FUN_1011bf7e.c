/* FUN_1011bf7e @ 0x1011bf7e */

undefined4 FUN_1011bf7e(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  
  while( true ) {
    uVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar3 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    *param_1 = (byte)~((char)param_1[1] >> 7) >> 7;
    if ((char)param_1[1] < '\0') break;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
    FUN_1011401c(param_1 + 0x54,param_2,0xffffffff,0xffffffff,param_4);
    param_2 = extraout_r1;
  }
  return uVar3;
}

