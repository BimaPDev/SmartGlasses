/* FUN_1400728c @ 0x1400728c */

undefined4 FUN_1400728c(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == (undefined4 *)0x0) {
    return 0;
  }
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[3] = (int)param_4;
  param_1[5] = (int)param_4;
  param_1[1] = 0;
  param_1[4] = (int)((int)param_4 + param_3 * param_2);
  FUN_14003b50();
  iVar2 = param_2 + -1;
  puVar1 = param_4;
  if (iVar2 != 0) {
    do {
      iVar2 = iVar2 + -1;
      *puVar1 = (undefined4 *)((int)puVar1 + param_3);
      puVar1 = (undefined4 *)((int)puVar1 + param_3);
    } while (iVar2 != 0);
    param_4 = (undefined4 *)((int)param_4 + (param_3 * param_2 - param_3));
  }
  *param_4 = 0;
  return 1;
}

