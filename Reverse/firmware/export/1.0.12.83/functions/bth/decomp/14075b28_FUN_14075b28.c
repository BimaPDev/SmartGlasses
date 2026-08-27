/* FUN_14075b28 @ 0x14075b28 */

void FUN_14075b28(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_14075c18;
  if ((DAT_14075bf4 < param_1) && (param_1 < DAT_14075bf4 + 0x2800)) {
    iVar2 = *DAT_14075c04;
LAB_14075b54:
    if (param_1 == 0) goto LAB_14075b8c;
    if (iVar2 != 0) {
      FUN_140a2a30(iVar2,param_1 - 8);
      if (*DAT_14075c00 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_14075c0c,param_2,param_3);
      }
      return;
    }
  }
  else {
    if ((DAT_14075bf8 < param_1) && (param_1 < DAT_14075bf8 + 0x5000)) {
      iVar2 = *DAT_14075bfc;
      goto LAB_14075b54;
    }
    if (param_1 == 0) goto LAB_14075b8c;
  }
  uVar1 = DAT_14075c08;
LAB_14075b8c:
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,uVar1,param_2,param_3);
}

