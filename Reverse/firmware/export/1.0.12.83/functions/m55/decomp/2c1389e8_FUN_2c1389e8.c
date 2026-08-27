/* FUN_2c1389e8 @ 0x2c1389e8 */

void FUN_2c1389e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x35);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      func_0x2c1387f8(param_1,uVar2,param_3,uVar1,param_4);
      uVar1 = (uint)*(byte *)(param_1 + 0x35);
      uVar2 = uVar2 + 1;
      param_3 = extraout_r2;
    } while (uVar2 < uVar1);
  }
  return;
}

