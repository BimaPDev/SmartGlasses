/* FUN_100c1488 @ 0x100c1488 */

int FUN_100c1488(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  
  uVar10 = param_1;
  iVar6 = param_3;
  iVar4 = thunk_FUN_10115958();
  uVar5 = FUN_10131956();
  iVar6 = FUN_1013710c(param_1,param_2,param_3,param_4,uVar10,param_4,iVar6);
  FUN_1013197e(uVar5);
  iVar7 = thunk_FUN_10115958();
  if (0x14 < (uint)(iVar7 - iVar4)) {
    FUN_10119dc2(DAT_100c152c);
  }
  piVar1 = DAT_100c1530;
  if (0x32 < (uint)(iVar4 - *DAT_100c1530)) {
    FUN_10119dc2(DAT_100c1534);
  }
  *piVar1 = iVar4;
  piVar3 = DAT_100c1548;
  puVar2 = DAT_100c1544;
  piVar1 = DAT_100c153c;
  if (iVar6 < 0) {
    FUN_10119dc2(DAT_100c1538,iVar6);
  }
  else {
    uVar8 = *DAT_100c1544;
    iVar9 = *DAT_100c1548;
    iVar7 = *DAT_100c153c;
    *DAT_100c1544 = param_3 + uVar8;
    *piVar1 = iVar7 + 1;
    if (5000 < (uint)(iVar4 - iVar9)) {
      FUN_10119dc2(DAT_100c1540,(param_3 + uVar8) / 5);
      *piVar3 = iVar4;
      *puVar2 = 0;
      *piVar1 = 0;
    }
  }
  return iVar6;
}

