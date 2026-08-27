/* FUN_2c50b464 @ 0x2c50b464 */

void FUN_2c50b464(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x3c))();
  if (lVar2 == 0xf) {
    uVar1 = registry_lookup(DAT_2c50b4b0);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    return;
  }
  if (lVar2 != 0x1e) {
    uVar1 = DAT_2c50b4a8;
    if (lVar2 != 0x3c) {
      uVar1 = DAT_2c50b4ac;
    }
    uVar1 = registry_lookup(uVar1);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    return;
  }
  uVar1 = registry_lookup(DAT_2c50b4b4);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}

