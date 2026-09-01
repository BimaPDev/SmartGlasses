/* FUN_100f6170 @ 0x100f6170 */

uint FUN_100f6170(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = 0;
  iVar3 = FUN_10138c9e();
  piVar2 = DAT_100f6244;
  uVar7 = 0xffffffff;
  uVar6 = 0xffffffff;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar3 = *piVar2 + uVar5 * 0x10;
      if ((*(int *)(*piVar2 + iVar4) == param_1) && (*(int *)(iVar3 + 8) == param_2)) {
        *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
        return uVar5;
      }
      if ((*(int *)(iVar3 + 8) == 0) &&
         (bVar1 = (int)uVar6 < 0, uVar6 = uVar6 & ~((int)uVar6 >> 0x20), bVar1)) {
        uVar6 = uVar5;
      }
      if (((int)uVar7 < 0) && (*(int *)(iVar3 + 0xc) == 0)) {
        uVar7 = uVar5;
      }
      iVar3 = FUN_10138c9e();
      uVar5 = uVar5 + 1;
      iVar4 = uVar5 * 0x10;
    } while ((int)uVar5 < iVar3);
  }
  piVar2 = DAT_100f6244;
  if ((int)uVar6 < 0) {
    if ((int)uVar7 < 0) {
      uVar7 = (DAT_100f624c - DAT_100f6248) * 0x20 & 0xff00;
      FUN_100a5b78(DAT_100f6250 | uVar7,DAT_100f6258,DAT_100f6254,uVar7,param_4);
      uVar7 = 0xffffffff;
    }
    else {
      iVar4 = *DAT_100f6244 + uVar7 * 0x10;
      iVar3 = *(int *)(iVar4 + 4);
      *(int *)(*DAT_100f6244 + uVar7 * 0x10) = param_1;
      *(int *)(iVar4 + 8) = param_2;
      *(undefined4 *)(iVar4 + 0xc) = 1;
      if (iVar3 != 0) {
        FUN_100f9880();
        *(undefined4 *)(uVar7 * 0x10 + *piVar2 + 4) = 0;
      }
    }
    return uVar7;
  }
  iVar3 = *DAT_100f6244;
  *(int *)(iVar3 + uVar6 * 0x10) = param_1;
  iVar3 = iVar3 + uVar6 * 0x10;
  *(int *)(iVar3 + 8) = param_2;
  *(undefined4 *)(iVar3 + 0xc) = 1;
  return uVar6;
}

