/* FUN_1013b26c @ 0x1013b26c */

int FUN_1013b26c(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *extraout_r2;
  undefined4 uVar2;
  
  iVar1 = FUN_1013b026();
  if (iVar1 == 0) {
    iVar1 = 3;
  }
  else {
    uVar2 = *extraout_r2;
    if ((*(int *)(param_1 + *(int *)(param_1 + 0x6e4) * 4 + 0x6dc) + 0x10U <
         *(uint *)(param_1 + 0x6d8)) ||
       ((iVar1 = FUN_1010b660(param_1), iVar1 == 0 && (iVar1 = FUN_1010b62c(param_1,0), iVar1 == 0))
       )) {
      iVar1 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
      *(uint *)(*(int *)(iVar1 + 0x6d0) + *(int *)(iVar1 + 0x6dc)) = param_2 | 0x30010000;
      iVar1 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
      *(undefined4 *)(*(int *)(iVar1 + 0x6dc) + *(int *)(iVar1 + 0x6d0) + 4) = uVar2;
      param_1 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
      iVar1 = 0;
      *(int *)(param_1 + 0x6dc) = *(int *)(param_1 + 0x6dc) + 8;
    }
  }
  return iVar1;
}

