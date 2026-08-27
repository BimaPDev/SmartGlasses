/* FUN_2c5d574c @ 0x2c5d574c */

void FUN_2c5d574c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_2c621080(param_2);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x289) = 1;
    FUN_2c5d51e4(iVar1,1,0);
    if (*(char *)(iVar1 + 0x260) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5d57a4,0x14c,DAT_2c5d57a0,DAT_2c5d579c);
    }
  }
  return;
}

