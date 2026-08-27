/* FUN_2c49cd50 @ 0x2c49cd50 */

undefined4 FUN_2c49cd50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte local_21;
  undefined2 local_20;
  int local_1c;
  
  iVar1 = DAT_2c49ce2c;
  local_1c = *DAT_2c49ce30;
  local_21 = 0;
  iVar2 = FUN_2c49c6a0(DAT_2c49ce2c,0xb,&local_21);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1d9,DAT_2c49ce40,DAT_2c49ce3c,DAT_2c49ce38,DAT_2c49ce34,iVar2);
  }
  bVar4 = local_21 & 0x7f;
  if ((local_21 & 0x80) != 0) {
    iVar2 = FUN_2c49c8c4(0xb,bVar4);
    local_20 = 0;
    iVar3 = FUN_2c49c9e8(iVar1,0xa4,&local_20);
    if (iVar3 < 0) {
      iVar2 = iVar2 + iVar3;
    }
    else {
      iVar3 = (uint)local_20._1_1_ + (uint)(byte)local_20 * 0x100;
      *DAT_2c49ce44 = (short)iVar3;
      *(int *)(iVar1 + 0x30) = iVar3 >> 4;
    }
    iVar3 = FUN_2c49c7b0();
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1d2,DAT_2c49ce40,DAT_2c49ce3c,DAT_2c49ce48,DAT_2c49ce34,*(undefined4 *)(iVar1 + 0x14),
          *(undefined4 *)(iVar1 + 0x20),local_21,bVar4,iVar2 + iVar3);
  }
  if (*DAT_2c49ce30 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

