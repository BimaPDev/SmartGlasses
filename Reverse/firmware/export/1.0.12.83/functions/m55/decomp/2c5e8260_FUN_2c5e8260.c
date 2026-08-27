/* FUN_2c5e8260 @ 0x2c5e8260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e8260(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_2c5e7270(4,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e82f0,0x113,_LAB_2c5e82ec,_LAB_2c5e82f4);
  }
  piVar3 = *(int **)(_LAB_2c5e82e4 + 0x14);
  do {
    piVar3 = (int *)*piVar3;
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5e82f0,0x114,_LAB_2c5e82ec,_LAB_2c5e82e8,param_1);
    }
    iVar2 = FUN_2c66b624(*(undefined4 *)(piVar3[2] + 0x18),param_1);
  } while (iVar2 != 0);
  FUN_2c66b624(*(undefined4 *)(iVar1 + 0x18),param_1);
  FUN_2c5e6ca0();
  FUN_2c5e7238(4,0,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5e7fb8,0xd3,DAT_2c5e7fbc,DAT_2c5e7fb4);
}

