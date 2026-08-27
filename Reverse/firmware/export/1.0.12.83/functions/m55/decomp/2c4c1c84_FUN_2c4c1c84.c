/* FUN_2c4c1c84 @ 0x2c4c1c84 */

void FUN_2c4c1c84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x35);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      func_0x2c4c1a94(param_1,uVar2,param_3,uVar1,param_4);
      uVar2 = uVar2 + 1;
      uVar1 = (uint)*(byte *)(param_1 + 0x35);
      param_3 = extraout_r2;
    } while (uVar2 < uVar1);
  }
  return;
}

