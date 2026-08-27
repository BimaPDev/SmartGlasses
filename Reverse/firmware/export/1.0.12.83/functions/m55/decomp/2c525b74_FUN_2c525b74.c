/* FUN_2c525b74 @ 0x2c525b74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c525b74(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_2c621080(param_2);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c525c94,0x5d,_LAB_2c525c90,_LAB_2c525ca4);
  }
  iVar2 = func_0x2c4ec7b8();
  uVar1 = _LAB_2c525c8c;
  if (iVar2 == 0) {
    iVar2 = *param_2;
    if (iVar2 == 0x1f4d) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c525c94,0x78,_LAB_2c525c90,_LAB_2c525ca0);
    }
    if (iVar2 == 0x1f52) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c525c94,0xc9,_LAB_2c525c9c,_LAB_2c525c98);
    }
    if (iVar2 == 0x1f4c) {
      FUN_2c5c55d8();
      uVar3 = func_0x2c5c5d28();
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c525c94,0x68,_LAB_2c525c90,uVar1,uVar3);
    }
  }
  return;
}

