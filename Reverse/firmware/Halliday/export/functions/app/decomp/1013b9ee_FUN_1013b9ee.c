/* FUN_1013b9ee @ 0x1013b9ee */

undefined4 FUN_1013b9ee(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    iVar2 = *param_2 + 1;
    *param_2 = iVar2;
    if (iVar2 == *(int *)(param_1 + 0x10)) {
      iVar2 = 0;
    }
    *param_2 = iVar2;
    uVar1 = 0;
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
  }
  return uVar1;
}

