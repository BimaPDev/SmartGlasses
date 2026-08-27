/* FUN_2c5e6a0c @ 0x2c5e6a0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e6a0c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_2c606b94(*param_3);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e6ab0,0xcf,_LAB_2c5e6ab4,_LAB_2c5e6ab8);
  }
  iVar1 = FUN_2c602408(param_1);
  if (iVar1 == 0xd) {
    iVar1 = FUN_2c602618(param_1);
    iVar2 = FUN_2c5e6664();
    if (iVar2 == 0) {
      if (iVar1 == 0xd4) {
        return;
      }
    }
    else {
      if (0xb < iVar1 - 0xceU) {
        return;
      }
      if (-1 < (int)((0xc33U >> (iVar1 - 0xceU & 0xff)) << 0x1f)) {
        return;
      }
    }
    if (*(char *)(_LAB_2c5e6aa8 + 0x20) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5e6ab0,0xe4,_LAB_2c5e6ab4,_LAB_2c5e6aac,0xd,iVar1,
                   *(char *)(_LAB_2c5e6aa8 + 0x20));
    }
  }
  return;
}

