/* FUN_2c5e8950 @ 0x2c5e8950 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e8950(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_2c5e9594(_LAB_2c5e8a2c);
  puVar1 = (undefined4 *)FUN_2c5e7270(6,3);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e8a34,0x8f,_LAB_2c5e8a3c,_LAB_2c5e8a44);
  }
  iVar2 = FUN_2c5e6eec();
  if ((iVar2 == 6 || iVar2 == 0) && (iVar2 = FUN_2c5e44c0(), iVar2 == 3)) {
    if (param_1 - 0xd2U < 2) {
      if (puVar1[3] == 0) {
        puVar1[3] = param_1;
        if ((code *)puVar1[2] != (code *)0x0) {
          (*(code *)puVar1[2])(param_1,puVar1);
        }
      }
    }
    else if (param_1 == 0xd4) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5e8a34,0x9b,_LAB_2c5e8a3c,_LAB_2c5e8a38,*puVar1);
    }
  }
  else {
    FUN_2c5e6ce4(1,0);
    if ((code *)puVar1[2] != (code *)0x0) {
      (*(code *)puVar1[2])(puVar1[3],puVar1);
    }
    FUN_2c5e71bc(6,3);
    FUN_2c5e70b0(6,3,4);
    (**(code **)(_LAB_2c5e8a30 + 0x2c))(3,4);
  }
  return 1;
}

