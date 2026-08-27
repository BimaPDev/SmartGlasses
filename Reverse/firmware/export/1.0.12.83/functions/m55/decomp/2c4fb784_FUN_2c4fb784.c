/* FUN_2c4fb784 @ 0x2c4fb784 */

undefined4 FUN_2c4fb784(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = DAT_2c4fb7bc;
  if (*DAT_2c4fb7bc == 0) {
    *DAT_2c4fb7c4 = 0;
    return 0;
  }
  uVar2 = FUN_2c64730c();
  iVar3 = FUN_2c6441a4(DAT_2c4fb7c0,0);
  *piVar1 = iVar3;
  if (iVar3 != 0) {
    *DAT_2c4fb7c4 = 0;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4fb7c8);
}

