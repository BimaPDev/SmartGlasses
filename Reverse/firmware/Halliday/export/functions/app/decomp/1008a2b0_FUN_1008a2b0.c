/* FUN_1008a2b0 @ 0x1008a2b0 */

void FUN_1008a2b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  FUN_100932b0(param_1,DAT_1008a2d8,param_3,param_4,param_1,param_3,param_3);
  iVar2 = FUN_10126008(param_1);
  if (iVar2 - param_2 == 0) {
    return;
  }
  FUN_10089bf8();
  iVar3 = FUN_10125ffe(param_1);
  uVar1 = -iVar3;
  iVar4 = FUN_10125f40(param_1,0);
  if (iVar4 == 1) {
    if (0 < (int)uVar1) {
      iVar4 = FUN_1008a000(param_1);
      iVar5 = FUN_1008a0c0(param_1);
      uVar6 = iVar4 + iVar5 & ~(iVar4 + iVar5 >> 0x1f);
      if ((int)uVar1 <= (int)uVar6) {
        uVar6 = uVar1;
      }
      goto LAB_101260dc;
    }
  }
  else if ((int)uVar1 < 0) {
    iVar4 = FUN_1008a000(param_1);
    iVar5 = FUN_1008a0c0(param_1);
    uVar6 = -(iVar5 + iVar4 & ~(iVar5 + iVar4 >> 0x1f));
    if ((int)uVar6 < (int)uVar1) {
      uVar6 = uVar1;
    }
    goto LAB_101260dc;
  }
  uVar6 = 0;
LAB_101260dc:
  iVar4 = FUN_10126008(param_1);
  iVar2 = (iVar2 - param_2) - iVar4;
  if (iVar2 < 0) {
    iVar5 = FUN_10089f60(param_1);
    iVar5 = -(iVar4 + iVar5 & ~(iVar4 + iVar5 >> 0x1f));
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
  }
  else {
    iVar5 = 0;
  }
  if (iVar3 + uVar6 == 0 && iVar5 + iVar4 == 0) {
    return;
  }
  FUN_1008a178(param_1,iVar3 + uVar6,iVar5 + iVar4,param_3);
  return;
}

