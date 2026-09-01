/* FUN_1012c8d6 @ 0x1012c8d6 */

undefined4 FUN_1012c8d6(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [20];
  
  if (((*(byte *)(param_2 + 0x28) & 0x38) == 0x10) || (iVar2 = FUN_1009dbd4(), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_1012a896(auStack_28,param_4,*(undefined4 *)(param_1 + 8));
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      FUN_1012a87c(auStack_28,-**(int **)(param_1 + 4),-(*(int **)(param_1 + 4))[1]);
      local_30 = *param_4 - **(int **)(param_1 + 4);
      local_2c = param_4[1] - (*(int **)(param_1 + 4))[1];
      uVar1 = FUN_1009d320(auStack_28,param_3,&local_30,param_5,param_2);
    }
  }
  return uVar1;
}

