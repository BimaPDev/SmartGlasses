/* FUN_2c49dbb0 @ 0x2c49dbb0 */

undefined4 FUN_2c49dbb0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_2c49dc94;
  if (*(int *)(DAT_2c49dc94 + 0x48) != 1) {
    if (*DAT_2c49dc90 != *DAT_2c49dc90) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return 0xffffffff;
  }
  iVar2 = *DAT_2c49dc98;
  if (iVar2 < 1) {
    FUN_2c49ce4c(DAT_2c49dc94);
    iVar2 = *(int *)(iVar1 + 0x14);
    if (*(int *)(iVar1 + 0x48) != 1) {
      uVar3 = 0x14;
      goto LAB_2c49dbe0;
    }
  }
  if ((int)*DAT_2c49dc9c < 0) {
    uVar3 = (uint)*(ushort *)(iVar1 + 0x20);
  }
  else {
    uVar3 = *DAT_2c49dc9c & 0xffff;
  }
LAB_2c49dbe0:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x55f,DAT_2c49dcac,DAT_2c49dca8,DAT_2c49dca0,DAT_2c49dca4,iVar2,uVar3);
}

