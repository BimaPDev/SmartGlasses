/* FUN_1004cf14 @ 0x1004cf14 */

void FUN_1004cf14(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r2;
  int iVar6;
  
  uVar4 = 0;
  if (*DAT_1004cf38 != *DAT_1004cf38) {
    param_1 = FUN_1013cdc0();
    uVar4 = extraout_r2;
  }
  piVar1 = DAT_1004cec0;
  iVar6 = *DAT_1004cea8;
  if (param_1 < 0x163) {
    iVar3 = DAT_1004cebc;
    if (*DAT_1004cec0 == 0) goto LAB_1004ce94;
    iVar5 = *DAT_1004cec0 + param_1 * 0x1c;
    iVar3 = *(int *)(iVar5 + 0x14);
    if (iVar3 != 0) goto LAB_1004ce94;
    iVar3 = FUN_100e9404(DAT_1004cec8,DAT_1004cec4 + param_1 * 4,iVar5,1,param_1,iVar6,uVar4);
    if (-1 < iVar3) {
      iVar3 = *(int *)(param_1 * 0x1c + *piVar1 + 0x14);
      goto LAB_1004ce94;
    }
    uVar2 = (DAT_1004ceac - DAT_1004ceb0) * 0x20 & 0xff00U | 0x2f0000;
    uVar4 = DAT_1004cecc;
  }
  else {
    uVar2 = (DAT_1004ceac - DAT_1004ceb0) * 0x20 & 0xff00U | 0x210000;
    uVar4 = DAT_1004ceb4;
  }
  FUN_100a5b78(uVar2 | 0x11,DAT_1004ceb8,uVar4);
  iVar3 = DAT_1004cebc;
LAB_1004ce94:
  if (*DAT_1004cea8 != iVar6) {
    FUN_1013cdc0(iVar3);
  }
  return;
}

