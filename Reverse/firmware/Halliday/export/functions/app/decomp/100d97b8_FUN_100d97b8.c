/* FUN_100d97b8 @ 0x100d97b8 */

void FUN_100d97b8(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_r2;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar3 = DAT_100d9830;
  iVar2 = DAT_100d982c;
  pbVar1 = DAT_100d9828;
  uVar8 = DAT_100d9818 | (DAT_100d9810 - DAT_100d9814) * 0x20 & 0xff00U;
  iVar6 = 0;
  iVar5 = DAT_100d9814;
  iVar4 = param_1;
  uVar7 = DAT_100d9820;
  if (param_1 == 0) {
    uVar7 = DAT_100d981c;
  }
  for (; iVar6 < (int)(uint)*pbVar1; iVar6 = iVar6 + 1) {
    iVar4 = FUN_10131f7c(iVar2 + iVar6 * 0x10,param_1,iVar5,(uint)*pbVar1,iVar4,param_2);
    FUN_100a5b78(uVar8,DAT_100d9824,uVar3,uVar7);
    iVar5 = extraout_r2;
  }
  return;
}

