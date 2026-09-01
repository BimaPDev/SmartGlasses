/* FUN_100ff2d0 @ 0x100ff2d0 */

void FUN_100ff2d0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = (**(code **)(param_1 + 0x204))(param_1,DAT_100ff318,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    param_1 = param_1 + 0xd8;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x204))(param_1,DAT_100ff310,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    param_1 = param_1 + 0x128;
  }
  iVar1 = FUN_100fb104(param_2,DAT_100ff314,param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

