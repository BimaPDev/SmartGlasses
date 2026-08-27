/* FUN_2c6431b8 @ 0x2c6431b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6431b8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = _LAB_2c6432f4;
  if (*(int *)(_LAB_2c6432f4 + 0x108) == 0) {
    iVar3 = _LAB_2c6432f4 + 0x5c;
    FUN_2c674268(_LAB_2c6432f4,0,0x108,0);
    uVar2 = DAT_2c6432fc;
    *(undefined4 *)(iVar1 + 0x58) = 2;
    FUN_2c66c568(iVar3,uVar2,0x3f);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c643308,200,DAT_2c643304,DAT_2c643300);
  }
  if (*DAT_2c6432f8 == *DAT_2c6432f8) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

