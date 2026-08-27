/* FUN_2c5ff4ec @ 0x2c5ff4ec */

void FUN_2c5ff4ec(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*DAT_2c5ff594;
    *(byte *)((int)param_1 + 5) = *(byte *)((int)param_1 + 5) | 2;
    if (puVar1 == param_1) {
      *DAT_2c5ff598 = 0;
    }
    if (1 < *(byte *)*param_1 - 1) {
      return;
    }
    if (param_2 == 0) {
      param_1[0xc] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
    }
    else {
      if (param_1[0xc] == param_2) {
        param_1[0xc] = 0;
      }
      if (param_1[9] == param_2) {
        param_1[9] = 0;
      }
      if (param_1[10] != param_2) {
        return;
      }
      param_1[10] = 0;
    }
    return;
  }
  while (puVar1 = (undefined4 *)FUN_2c62a5c0(), puVar1 != (undefined4 *)0x0) {
    while (*(byte *)((int)puVar1 + 5) = *(byte *)((int)puVar1 + 5) | 2, 1 < *(byte *)*puVar1 - 1) {
      puVar1 = (undefined4 *)FUN_2c62a5c0();
      if (puVar1 == (undefined4 *)0x0) goto LAB_2c5ff538;
    }
    if (param_2 == 0) {
      puVar1[0xc] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
    }
    else {
      if (puVar1[0xc] == param_2) {
        puVar1[0xc] = 0;
      }
      if (puVar1[9] == param_2) {
        puVar1[9] = 0;
      }
      if (puVar1[10] == param_2) {
        puVar1[10] = 0;
      }
    }
  }
LAB_2c5ff538:
  *DAT_2c5ff598 = 0;
  return;
}

