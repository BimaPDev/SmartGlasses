/* FUN_2c5718e0 @ 0x2c5718e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5718e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_2c48e738();
  FUN_2c48e714();
  iVar2 = *(int *)(param_1 + 4) * (*(int *)(param_1 + 0xc) + -1);
  iVar1 = *(int *)(param_1 + 4) + iVar2;
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
  if (iVar1 <= iVar3) {
    iVar3 = iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c571984,0x6c,_LAB_2c57198c,_LAB_2c571988,iVar2,iVar3);
}

