/* FUN_2c63ea8c @ 0x2c63ea8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63ea8c(undefined4 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar3 = DAT_2c63eb60;
  puVar2 = DAT_2c63eb5c;
  piVar1 = DAT_2c63eb58;
  if (*DAT_2c63eb58 != 0) {
    uVar4 = FUN_2c607e50(*DAT_2c63eb58);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c63eb6c,0x1d1,DAT_2c63eb68,DAT_2c63eb64,*piVar1,*puVar3,uVar4,param_1,
                 *puVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c63eb6c,0x1cc,DAT_2c63eb68,_LAB_2c63eb80);
}

