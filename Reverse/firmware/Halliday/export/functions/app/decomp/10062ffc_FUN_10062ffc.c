/* FUN_10062ffc @ 0x10062ffc */

undefined4
FUN_10062ffc(int param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 *param_5,
            int *param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*DAT_1006307c != 0) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar3 = FUN_10053f54(*DAT_1006307c,0x40,param_1 + 0x3fU & 0xffffffc0);
    *param_6 = iVar3;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar4);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar3 = *param_6;
    if (iVar3 == 0) {
      FUN_100a5b78((DAT_10063090 - DAT_1006308c) * 0x20 & 0xff00U | 0xf30011,DAT_10063098,
                   DAT_10063094,param_1);
      uVar4 = 2;
    }
    else {
      *param_3 = iVar3;
      *param_4 = iVar3;
      uVar4 = FUN_1011a9aa();
      *param_5 = uVar4;
      uVar4 = 0;
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_10063088,0xe9,DAT_10063084,DAT_10063080);
}

