/* FUN_1008765c @ 0x1008765c */

void FUN_1008765c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    while (puVar1 = (undefined4 *)FUN_10093034(), puVar1 != (undefined4 *)0x0) {
      *(byte *)((int)puVar1 + 5) = *(byte *)((int)puVar1 + 5) | 2;
      if ((*(byte *)*puVar1 - 1 < 2) &&
         ((((((param_2 == 0 || (puVar1[0x15] == param_2)) && (puVar1[0x15] = 0, param_2 == 0)) ||
            (puVar1[0x12] == param_2)) && (puVar1[0x12] = 0, param_2 == 0)) ||
          (puVar1[0x13] == param_2)))) {
        puVar1[0x13] = 0;
      }
    }
    *DAT_100876f8 = 0;
  }
  else {
    *(byte *)((int)param_1 + 5) = *(byte *)((int)param_1 + 5) | 2;
    if ((undefined4 *)*DAT_100876f4 == param_1) {
      *DAT_100876f8 = 0;
    }
    if ((*(byte *)*param_1 - 1 < 2) &&
       ((((((param_2 == 0 || (param_1[0x15] == param_2)) && (param_1[0x15] = 0, param_2 == 0)) ||
          (param_1[0x12] == param_2)) && (param_1[0x12] = 0, param_2 == 0)) ||
        (param_1[0x13] == param_2)))) {
      param_1[0x13] = 0;
    }
  }
  return;
}

