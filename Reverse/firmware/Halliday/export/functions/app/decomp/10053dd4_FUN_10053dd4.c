/* FUN_10053dd4 @ 0x10053dd4 */

void FUN_10053dd4(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_10119e3a();
  if ((0x7fff < *(uint *)(param_1 + 8)) && (iVar2 == 1)) {
    return;
  }
  uVar3 = FUN_10119e92(param_1,iVar2);
  iVar2 = param_1 + uVar3 * 4;
  uVar5 = 1 << (uVar3 & 0xff);
  uVar3 = *(uint *)(param_1 + 0xc) & uVar5;
  if (*(int *)(iVar2 + 0x10) == 0) {
    if (uVar3 != 0) {
      FUN_10119dc2(DAT_10053e9c,DAT_10053e98,0x38);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0);
      }
      software_interrupt(2);
    }
    *(uint *)(param_1 + 0xc) = uVar5 | *(uint *)(param_1 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = param_2;
    FUN_10053ae8(param_1,param_2,2,param_2);
    uVar4 = 3;
    uVar6 = param_2;
  }
  else {
    if (uVar3 == 0) {
      FUN_10119dc2(DAT_10053e9c,DAT_10053e98,0x40);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0);
      }
      software_interrupt(2);
    }
    uVar6 = *(undefined4 *)(iVar2 + 0x10);
    uVar4 = FUN_10119e24(param_1,uVar6,2);
    FUN_10053ae8(param_1,param_2,2,uVar4);
    FUN_10053ae8(param_1,param_2,3,uVar6);
    FUN_10053ae8(param_1,uVar4,3,param_2);
    uVar4 = 2;
  }
  FUN_10053ae8(param_1,uVar6,uVar4,param_2);
  return;
}

