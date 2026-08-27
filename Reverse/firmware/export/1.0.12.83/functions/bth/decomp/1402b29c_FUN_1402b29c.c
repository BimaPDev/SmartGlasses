/* FUN_1402b29c @ 0x1402b29c */

void FUN_1402b29c(void)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [16];
  int local_14;
  
  local_14 = *DAT_1402b2f0;
  local_2c = 1;
  uStack_28 = 0x40;
  iVar1 = FUN_1402ca40(*DAT_1402b2fc,*DAT_1402b2f8,*DAT_1402b2f4,auStack_24,&local_2c,&uStack_28);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402b304,DAT_1402b300,iVar1);
  }
  if (*DAT_1402b2f0 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

