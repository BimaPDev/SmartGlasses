/* FUN_10053c24 @ 0x10053c24 */

void FUN_10053c24(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = FUN_10119e24(param_1,param_2,1);
  if (iVar2 << 0x1f < 0) {
    FUN_10119dc2(DAT_10053ce4,DAT_10053ce0,0x19);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  iVar2 = param_1 + param_3 * 4;
  if (*(int *)(iVar2 + 0x10) == 0) {
    FUN_10119dc2(DAT_10053ce4,DAT_10053ce0,0x1a);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  uVar5 = 1 << (param_3 & 0xff);
  if ((uVar5 & *(uint *)(param_1 + 0xc)) == 0) {
    FUN_10119dc2(DAT_10053ce4,DAT_10053ce0,0x1b);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  iVar3 = FUN_10119e24(param_1,param_2,3);
  if (param_2 == iVar3) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & ~uVar5;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    return;
  }
  uVar4 = FUN_10119e24(param_1,param_2,2);
  *(int *)(iVar2 + 0x10) = iVar3;
  FUN_10053ae8(param_1,uVar4,3,iVar3);
  FUN_10053ae8(param_1,iVar3,2,uVar4);
  return;
}

