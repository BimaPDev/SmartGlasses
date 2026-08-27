/* FUN_2c6047b0 @ 0x2c6047b0 */

int FUN_2c6047b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_2c606bc8();
  *(short *)(*(int *)(param_1 + 8) + 0x10) =
       *(short *)(*(int *)(param_1 + 8) + 0x10) + (short)param_2;
  *(short *)(*(int *)(param_1 + 8) + 0x12) =
       *(short *)(*(int *)(param_1 + 8) + 0x12) + (short)param_3;
  FUN_2c6075e8(param_1,param_2,param_3,1);
  iVar1 = FUN_2c602340(param_1,0xb,0);
  if (iVar1 != 1) {
    return iVar1;
  }
  FUN_2c607df0(param_1);
  return 1;
}

