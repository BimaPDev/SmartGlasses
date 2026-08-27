/* FUN_2c4b018e @ 0x2c4b018e */

void FUN_2c4b018e(float param_1,float param_2,float param_3,float param_4,short *param_5)

{
  int iVar1;
  
  iVar1 = FUN_2c4aff78(param_1 + param_3,param_2 + param_4);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_2c4affd0(param_1 - param_3,param_2 - param_4,param_5), iVar1 == 0)) {
    if (*param_5 == 0x1701) {
      *(undefined1 *)(*(int *)(param_5 + 0x1c) + 9) = 4;
      *(float *)(*(int *)(param_5 + 0x1c) + 0xc) = param_1;
      *(float *)(*(int *)(param_5 + 0x1c) + 0x10) = param_2;
    }
    else if (*param_5 == 0x1702) {
      **(float **)(param_5 + 0x1e) = **(float **)(param_5 + 0x1e) - param_4;
      *(float *)(*(int *)(param_5 + 0x1e) + 4) = *(float *)(*(int *)(param_5 + 0x1e) + 4) + param_3;
      **(float **)(param_5 + 0x1c) = **(float **)(param_5 + 0x1c) - param_4;
      *(float *)(*(int *)(param_5 + 0x1c) + 4) = *(float *)(*(int *)(param_5 + 0x1c) + 4) + param_3;
    }
    iVar1 = *(int *)(param_5 + 0x1c);
    *(int *)(*(int *)(param_5 + 0x1e) + 0x18) = iVar1;
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_5 + 0x1e);
    return;
  }
  return;
}

