/* FUN_1013ba14 @ 0x1013ba14 */

undefined4 FUN_1013ba14(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_100f0524(0x18);
    *param_2 = iVar1;
    if (iVar1 == 0) {
      uVar2 = 5;
    }
    else {
      FUN_1011ea48(iVar1,0,0x18);
      iVar1 = *param_2;
      if (*(int **)(param_1 + 0x5c) == (int *)0x0) {
        *(int *)(param_1 + 0x58) = iVar1;
        *(int *)(param_1 + 0x5c) = iVar1;
        uVar2 = 0;
      }
      else {
        **(int **)(param_1 + 0x5c) = iVar1;
        uVar2 = 0;
        *(int *)(param_1 + 0x5c) = *param_2;
      }
    }
  }
  return uVar2;
}

