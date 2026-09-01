/* FUN_1011f09a @ 0x1011f09a */

void FUN_1011f09a(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_1011ea48(param_1,0,0x20);
  uVar1 = param_2 - 1;
  if ((param_2 & uVar1) != 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(uint *)(param_1 + 0x18) = uVar1;
  return;
}

