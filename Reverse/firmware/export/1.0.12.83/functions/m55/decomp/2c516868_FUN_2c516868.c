/* FUN_2c516868 @ 0x2c516868 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c516868(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar1 = FUN_2c602410();
  if (iVar1 == _LAB_2c516890) {
    iVar1 = 2;
  }
  else {
    iVar1 = 1;
  }
  iVar5 = _LAB_2c516890;
  FUN_2c511f90();
  if ((iVar1 == 3) && (iVar2 = func_0x2c5125b8(), iVar2 != 0)) {
    iVar1 = 4;
  }
  iVar3 = *(int *)(iVar4 + 0x308);
  iVar2 = iVar4 + 0x2b0;
  if (((iVar3 != iVar2) && (iVar2 = iVar4 + 0x2c4, iVar3 != iVar2)) &&
     (iVar2 = iVar4 + 0x2f8, iVar3 != iVar2)) {
    return;
  }
  func_0x2c5115c0(*(undefined4 *)(iVar4 + 0xc),iVar1,iVar2,iVar3,iVar5);
  func_0x2c5115c8(*(undefined4 *)(iVar4 + 0xc),0);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c515af4,0x1e6,_LAB_2c515ae8,_LAB_2c515aec,_LAB_2c515ae8);
}

