/* FUN_2c52576c @ 0x2c52576c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52576c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c620f0c(0x1f43,_LAB_2c5257a0,param_1);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  FUN_2c525874();
  iVar2 = FUN_2c5259cc();
  if (iVar2 != 0) {
    FUN_2c525874();
    FUN_2c5259cc();
    FUN_2c526d40();
  }
  FUN_2c525874(param_1);
  FUN_2c5259c0();
  uVar1 = func_0x2c5260a4();
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c525750,0x49,_LAB_2c52574c,_LAB_2c525748,uVar1);
}

