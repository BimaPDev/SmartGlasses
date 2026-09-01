/* FUN_10114490 @ 0x10114490 */

int FUN_10114490(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_1;
  uStack_10 = param_3;
  if (param_2 == 0) {
    FUN_10119dc2(DAT_101144f4,DAT_101144f0,DAT_101144ec,0x169,param_1,0,param_3,param_4,param_1);
    FUN_1011a1f0(DAT_101144ec,0x169,param_3,param_4);
  }
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
  iVar3 = FUN_1011436c(param_2,&local_14);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((0 < iVar3) && (iVar4 = FUN_10115470(), iVar4 != 0)) {
    FUN_10115218();
  }
  return iVar3;
}

