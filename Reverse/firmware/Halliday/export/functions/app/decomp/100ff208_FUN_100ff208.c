/* FUN_100ff208 @ 0x100ff208 */

void FUN_100ff208(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x204))(param_1,DAT_100ff230,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_100fb104(param_2,DAT_100ff234,param_1 + 0x1dc);
  return;
}

