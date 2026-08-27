/* FUN_2c4975e8 @ 0x2c4975e8 */

void FUN_2c4975e8(int param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_1 == 0) {
    FUN_2c4c01d0(0x21);
    FUN_2c497518(param_2);
    if (param_4 == (undefined1 *)0x0) goto LAB_2c49761e;
  }
  else {
    FUN_2c4c01d0(0x4f);
    FUN_2c497518(param_2);
    if (param_4 == (undefined1 *)0x0) goto LAB_2c497638;
  }
  puVar2 = (undefined1 *)(param_3 + -1);
  do {
    FUN_2c497518(puVar2[1]);
    puVar1 = puVar2 + (2 - param_3);
    puVar2 = puVar2 + 1;
  } while (puVar1 < param_4);
  if (param_1 != 0) {
LAB_2c497638:
    FUN_2c4c0158(0x4f);
    return;
  }
LAB_2c49761e:
  FUN_2c4c0158(0x21);
  return;
}

