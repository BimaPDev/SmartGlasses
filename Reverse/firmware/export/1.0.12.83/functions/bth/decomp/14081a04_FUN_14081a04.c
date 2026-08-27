/* FUN_14081a04 @ 0x14081a04 */

void FUN_14081a04(int param_1,undefined4 param_2)

{
  uint extraout_r1;
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_24 [16];
  uint local_14;
  
  local_14 = *DAT_14081a70;
  FUN_140dc3ac(auStack_24,DAT_14081a74,param_2,0);
  if (param_1 == 0) {
    uVar2 = (ulonglong)extraout_r1 << 0x20;
  }
  else {
    uVar1 = FUN_140dd3a4(auStack_24);
    uVar2 = uVar1 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      if (*(byte *)(param_1 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_14081a80,*(undefined1 *)(param_1 + 0xc),DAT_14081a7c,
                     *(byte *)(param_1 + 0xec));
      }
      uVar2 = FUN_1407edac(param_1,DAT_14081a78,auStack_24,(int)uVar1,0,0xff);
    }
  }
  if ((*DAT_14081a70 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc((int)uVar2,(int)(uVar2 >> 0x20),*DAT_14081a70 ^ local_14,0);
}

