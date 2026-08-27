/* FUN_2c4ebf60 @ 0x2c4ebf60 */

void FUN_2c4ebf60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + 4) != (code *)0x0) {
    (**(code **)(iVar1 + 4))(*(undefined4 *)(iVar1 + 8));
  }
  if ((iVar1 != DAT_2c62beb8) && (iVar1 != 0)) {
    FUN_2c4726f0();
    return;
  }
  return;
}

