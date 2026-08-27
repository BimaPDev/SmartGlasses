/* FUN_2c5143e8 @ 0x2c5143e8 */

void FUN_2c5143e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_2c5146d4;
  iVar1 = FUN_2c602618(param_2,param_2,param_3,0);
  if (iVar1 == 0xd2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5146e0,0x2dc,DAT_2c5146d8,DAT_2c5146e4,DAT_2c5146d8);
  }
  if (iVar1 == 0xd3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5146e0,0x305,DAT_2c5146d8,DAT_2c5146f4,DAT_2c5146d8);
  }
  if ((iVar1 == 0xce) || (iVar1 == 0xdd)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5146e0,0x31d,DAT_2c5146d8,DAT_2c5146dc,DAT_2c5146d8);
  }
  if ((iVar1 != 0xcf) && (iVar1 != 0xde)) {
    if (*DAT_2c5146d4 == iVar2) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5146e0,0x338,DAT_2c5146d8,DAT_2c5146f8,DAT_2c5146d8);
}

