/* FUN_100e855c @ 0x100e855c */

undefined4 FUN_100e855c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = DAT_100e8640;
  piVar1 = DAT_100e8634;
  if (param_1 == 0) {
    iVar6 = DAT_100e8624 - DAT_100e8620;
    uVar3 = DAT_100e8630;
    uVar5 = DAT_100e862c;
  }
  else {
    if (*DAT_100e8634 != 0) {
      for (iVar6 = 0; iVar6 < *piVar2; iVar6 = iVar6 + 1) {
        if (*(int *)(*piVar1 + iVar6 * 8) != 0) {
          FUN_100e833c();
        }
      }
      FUN_100e833c();
      *piVar1 = 0;
    }
    iVar6 = FUN_100e825c(param_2 << 3);
    *piVar1 = iVar6;
    if (iVar6 != 0) {
      for (iVar6 = 0; iVar6 < param_2; iVar6 = iVar6 + 1) {
        if (*(int *)(param_1 + iVar6 * 8) != 0) {
          iVar4 = FUN_1011ea10();
          iVar7 = *piVar1;
          uVar5 = FUN_100e825c(iVar4 + 1);
          iVar4 = *piVar1;
          *(undefined4 *)(iVar7 + iVar6 * 8) = uVar5;
          FUN_1011e9f0(*(undefined4 *)(iVar4 + iVar6 * 8),*(undefined4 *)(param_1 + iVar6 * 8));
          *(undefined4 *)(iVar6 * 8 + iVar4 + 4) = *(undefined4 *)(param_1 + 4 + iVar6 * 8);
        }
      }
      *DAT_100e8640 = param_2;
      return 0;
    }
    iVar6 = DAT_100e8624 - DAT_100e8620;
    uVar3 = DAT_100e863c;
    uVar5 = DAT_100e8638;
  }
  FUN_100a5b78(uVar3 | iVar6 * 0x20 & 0xff00U,DAT_100e8628,uVar5);
  return 0xffffffff;
}

