/* FUN_2c6429b8 @ 0x2c6429b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c6429b8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_2c4c1614();
  iVar2 = func_0x2c49d180();
  iVar3 = func_0x2c4ec7b8();
  if (iVar3 == 0) {
    if (*_LAB_2c642bec == '\0') {
      iVar2 = ((int)((longlong)DAT_2c642bf0 * (longlong)iVar2 >> 0x22) - (iVar2 >> 0x1f)) + 1;
    }
    else {
      uVar1 = *DAT_2c642c10;
      iVar2 = *DAT_2c642c14;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c642bfc,0x20a,DAT_2c642c04,DAT_2c642c00,uVar1,iVar2,*DAT_2c642bf8,
                 *DAT_2c642bf4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c642bfc,0x1ff,DAT_2c642c04,_LAB_2c642c20);
}

