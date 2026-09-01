/* FUN_101147e4 @ 0x101147e4 */

undefined4 FUN_101147e4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_1c;
  int iStack_18;
  
  local_1c = param_1;
  iStack_18 = param_3;
  if (param_2 == 0) {
    iVar5 = param_3;
    iVar6 = param_4;
    FUN_10119dc2(DAT_10114864,DAT_10114860,DAT_1011485c,0x3d6,param_1,0,param_3,param_4,param_1);
    FUN_1011a1f0(DAT_1011485c,0x3d6,iVar5,iVar6);
  }
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
  FUN_1013caa0(param_2);
  if (param_3 == 0 && param_4 == 0) {
    uVar3 = FUN_1011436c(param_2,&local_1c);
  }
  else {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 8;
    *(undefined4 *)(param_2 + 0x28) = local_1c;
    FUN_10115740(param_2 + 0x10,DAT_10114868,param_3,param_4);
    uVar3 = 1;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}

