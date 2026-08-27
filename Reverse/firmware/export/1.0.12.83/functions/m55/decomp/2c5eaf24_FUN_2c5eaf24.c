/* FUN_2c5eaf24 @ 0x2c5eaf24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5eaf24(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_2c5e9594(_LAB_2c5eaff8);
  puVar1 = (undefined4 *)FUN_2c5e7270(6,2);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5eb004,0x92,_LAB_2c5eb008,_LAB_2c5eb010);
  }
  iVar2 = FUN_2c5e6eec();
  if ((iVar2 == 6 || iVar2 == 0) && (iVar2 = FUN_2c5e44c0(), iVar2 == 2)) {
    if (param_1 - 0xd2U < 2) {
      if (puVar1[3] == 0) {
        puVar1[3] = param_1;
        if ((code *)puVar1[2] != (code *)0x0) {
          (*(code *)puVar1[2])(param_1,puVar1[4]);
        }
      }
    }
    else if (param_1 == 0xd4) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5eb004,0x9e,_LAB_2c5eb008,_LAB_2c5eb000,*puVar1);
    }
  }
  else {
    FUN_2c5e6ce4(1,0);
    if ((code *)puVar1[2] != (code *)0x0) {
      (*(code *)puVar1[2])(puVar1[3],puVar1[4]);
    }
    FUN_2c5e71bc(6,2);
    FUN_2c5e70b0(6,2,4);
    (**(code **)(_LAB_2c5eaffc + 0x2c))(2,4);
  }
  return 1;
}

