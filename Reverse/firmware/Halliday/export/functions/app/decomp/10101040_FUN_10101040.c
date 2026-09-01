/* FUN_10101040 @ 0x10101040 */

void FUN_10101040(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x204))(param_1,DAT_10101068,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_100fb104(param_2,DAT_1010106c,param_1 + 0xa0);
  return;
}

