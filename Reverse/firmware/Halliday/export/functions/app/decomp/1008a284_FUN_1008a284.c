/* FUN_1008a284 @ 0x1008a284 */

void FUN_1008a284(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_100932b0(param_1,DAT_1008a2ac,param_3,param_4,param_1,param_3,param_3);
  iVar1 = FUN_10125ffe(param_1);
  if (iVar1 - param_2 == 0) {
    return;
  }
  FUN_10089bf8();
  iVar2 = FUN_10125ffe(param_1);
  uVar6 = (iVar1 - param_2) - iVar2;
  iVar1 = FUN_10125f40(param_1,0);
  if (iVar1 == 1) {
    if (0 < (int)uVar6) {
      iVar1 = FUN_1008a000(param_1);
      iVar3 = FUN_1008a0c0(param_1);
      uVar5 = iVar1 + iVar3 & ~(iVar1 + iVar3 >> 0x1f);
      if ((int)uVar6 <= (int)uVar5) {
        uVar5 = uVar6;
      }
      goto LAB_101260dc;
    }
  }
  else if ((int)uVar6 < 0) {
    iVar1 = FUN_1008a000(param_1);
    iVar3 = FUN_1008a0c0(param_1);
    uVar5 = -(iVar3 + iVar1 & ~(iVar3 + iVar1 >> 0x1f));
    if ((int)uVar5 < (int)uVar6) {
      uVar5 = uVar6;
    }
    goto LAB_101260dc;
  }
  uVar5 = 0;
LAB_101260dc:
  iVar3 = FUN_10126008(param_1);
  iVar1 = -iVar3;
  if (iVar1 < 0) {
    iVar4 = FUN_10089f60(param_1);
    iVar4 = -(iVar3 + iVar4 & ~(iVar3 + iVar4 >> 0x1f));
    if (iVar4 < iVar1) {
      iVar4 = iVar1;
    }
  }
  else {
    iVar4 = 0;
  }
  if (iVar2 + uVar5 == 0 && iVar4 + iVar3 == 0) {
    return;
  }
  FUN_1008a178(param_1,iVar2 + uVar5,iVar4 + iVar3,param_3);
  return;
}

