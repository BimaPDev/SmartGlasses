/* FUN_2c664b98 @ 0x2c664b98 */

void FUN_2c664b98(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 < param_2) {
    FUN_2c664b84(param_1,param_2 - uVar1);
  }
  else if (uVar1 != param_2) {
    FUN_2c664850();
  }
  return;
}

