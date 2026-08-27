/* FUN_2c5f6de4 @ 0x2c5f6de4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5f6de4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c5f53dc(0,param_1);
  if (iVar1 != 0) {
    uVar2 = func_0x2c5fb768(param_1,2,param_2,param_3);
    *(undefined4 *)(iVar1 + 0x70) = uVar2;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5f6e28,0x3a,_LAB_2c5f6e24,_LAB_2c5f6e20);
}

