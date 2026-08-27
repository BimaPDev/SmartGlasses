/* FUN_2c5abe78 @ 0x2c5abe78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c5abe78(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = _LAB_2c5abf54;
  uVar1 = _LAB_2c5abf50;
  param_1[6] = 0;
  param_1[10] = 0;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_2c674268(param_1 + 0xb,0,0x7c);
  uVar1 = _LAB_2c5abf58;
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  param_1[0x36] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = uVar1;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_2c674268(param_1 + 0x37,0,0x7c);
  uVar1 = _LAB_2c5abf5c;
  param_1[0x58] = 0;
  *(undefined2 *)(param_1 + 0x59) = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0xffffffff;
  param_1[0x68] = uVar1;
  param_1[0x69] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  piVar3 = _LAB_2c5abf60;
  FUN_2c674268((int)param_1 + 0x1b9,0,0x20);
  iVar5 = *piVar3;
  *(undefined1 *)((int)param_1 + 0x1d9) = 1;
  if (iVar5 == 0) {
    FUN_2c4723c4();
    *piVar3 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x10);
  *puVar4 = _LAB_2c5abf64;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  param_1[0x60] = puVar4;
  return param_1;
}

