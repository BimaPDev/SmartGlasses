/* FUN_1012f9c8 @ 0x1012f9c8 */

void FUN_1012f9c8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x40) != 0) {
      FUN_10064adc();
    }
    if (*(int *)(iVar1 + 0xd0) != 0) {
      (**(code **)(iVar1 + 0xcc))(*(int *)(iVar1 + 0xd0),1,0);
    }
    FUN_100a92e4(iVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_100a0a70();
    FUN_100a0b00(*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}

