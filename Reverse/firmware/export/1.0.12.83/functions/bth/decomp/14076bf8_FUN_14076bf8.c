/* FUN_14076bf8 @ 0x14076bf8 */

void FUN_14076bf8(void)

{
  int iVar1;
  
  iVar1 = DAT_14076c40;
  FUN_140e5148(*(undefined4 *)(DAT_14076c40 + 4),0xffffffff);
  if (*(short *)(iVar1 + 0x264) != 0) {
    *(short *)(iVar1 + 0x264) = *(short *)(iVar1 + 0x264) + -1;
    FUN_140e52d8(*(undefined4 *)(iVar1 + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_14076c44,0,1);
}

