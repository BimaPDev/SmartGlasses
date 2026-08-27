/* FUN_2c548ca2 @ 0x2c548ca2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c548ca2(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c58cdb0();
  if ((((iVar1 < 0) || (iVar1 = FUN_2c55700c(param_1,_LAB_2c548dcc,param_2 + 0xa4,1), iVar1 < 0)) ||
      (iVar1 = FUN_2c55700c(param_1,_LAB_2c548dd0,param_2 + 0xbc,1), iVar1 < 0)) ||
     (iVar1 = FUN_2c556db0(param_1,_LAB_2c548dd4,param_2 + 0xd4,1), iVar1 < 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_2c48e424(param_1,_LAB_2c548dd8);
    iVar2 = FUN_2c48e86c();
    uVar3 = 0;
    if ((iVar2 != 0) && (uVar3 = 0, *(int *)(iVar1 + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c548de8,0x1e,_LAB_2c548de4,_LAB_2c548ddc);
    }
  }
  return uVar3;
}

