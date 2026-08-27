/* FUN_2c515b0c @ 0x2c515b0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c515b0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_2c511f90();
  if ((param_2 == 3) && (iVar1 = func_0x2c5125b8(), iVar1 != 0)) {
    param_2 = 4;
  }
  iVar2 = *(int *)(param_1 + 0x308);
  iVar1 = param_1 + 0x2b0;
  if (((iVar2 != iVar1) && (iVar1 = param_1 + 0x2c4, iVar2 != iVar1)) &&
     (iVar1 = param_1 + 0x2f8, iVar2 != iVar1)) {
    return;
  }
  func_0x2c5115c0(*(undefined4 *)(param_1 + 0xc),param_2,iVar1,iVar2,param_4);
  func_0x2c5115c8(*(undefined4 *)(param_1 + 0xc),0);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c515af4,0x1e6,_LAB_2c515ae8,_LAB_2c515aec,_LAB_2c515ae8);
}

