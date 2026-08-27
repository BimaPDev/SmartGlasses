/* FUN_1402a64c @ 0x1402a64c */

undefined4 FUN_1402a64c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = DAT_1402a6e4;
  iVar2 = *DAT_1402a6dc;
  uVar1 = 0;
  if (*DAT_1402a6d8 != '\0') {
    if (*DAT_1402a6e0 == '\0') {
      if (-1 < param_1 << 0x11) {
        uVar1 = FUN_1402a548();
        goto LAB_1402a67a;
      }
      if (*DAT_1402a6e4 - 1 < 2) {
        FUN_14029e30();
      }
      uVar1 = FUN_1402a548(param_1,param_2);
    }
    else {
      uVar1 = FUN_1402a548();
      pbVar3 = DAT_1402a6e4;
      if (-1 < param_1 << 0x11) goto LAB_1402a67a;
    }
    if (*pbVar3 - 1 < 2) {
      FUN_14029e30();
    }
  }
LAB_1402a67a:
  if (*DAT_1402a6dc != iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return uVar1;
}

