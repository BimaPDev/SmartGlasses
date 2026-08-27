/* FUN_2c62ecbc @ 0x2c62ecbc */

void FUN_2c62ecbc(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar3;
  undefined4 *puVar2;
  
  uVar3 = param_3;
  puVar1 = param_1;
  if (param_3 < 0x11) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    do {
      uVar3 = uVar3 - 0x10;
      *puVar1 = param_2;
      puVar1[1] = param_2;
      puVar1[2] = param_2;
      puVar1[3] = param_2;
      puVar1[4] = param_2;
      puVar1[5] = param_2;
      puVar1[6] = param_2;
      puVar1[7] = param_2;
      puVar1[8] = param_2;
      puVar1[9] = param_2;
      puVar1[10] = param_2;
      puVar1[0xb] = param_2;
      puVar1[0xc] = param_2;
      puVar1[0xd] = param_2;
      puVar1[0xe] = param_2;
      puVar1[0xf] = param_2;
      puVar1 = puVar1 + 0x10;
    } while (0x10 < uVar3);
    uVar3 = param_3 - 0x11 >> 4;
    param_1 = param_1 + (uVar3 + 1) * 0x10;
    param_3 = (param_3 - 0x10) + uVar3 * -0x10;
  }
  puVar1 = param_1;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = param_2;
    puVar1 = puVar2;
  } while (puVar2 != param_1 + param_3);
  return;
}

