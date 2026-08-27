/* FUN_2c52290c @ 0x2c52290c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c52290c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *_LAB_2c5229dc;
  param_1[6] = (int)(param_1 + 8);
  param_1[4] = 4;
  param_1[0xc] = (int)(param_1 + 0xe);
  param_1[7] = 4;
  param_1[0x12] = (int)(param_1 + 0x14);
  param_1[8] = iVar2;
  param_1[0x18] = (int)(param_1 + 0x1a);
  param_1[3] = 1;
  param_1[0x1e] = (int)(param_1 + 0x20);
  param_1[5] = 0;
  param_1[0x28] = (int)(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2e] = (int)(param_1 + 0x30);
  uVar1 = _LAB_2c5229e0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  FUN_2c52270c(param_1 + 6,0,4,uVar1,0);
  FUN_2c52270c(param_1 + 0xc,0,param_1[0xd],_LAB_2c5229e0,0);
  piVar3 = _LAB_2c5229e4;
  if (*param_1 != 0) {
    return param_1;
  }
  if (*_LAB_2c5229e4 == 0) {
    FUN_2c4723c4();
    *piVar3 = 1;
  }
  piVar3 = (int *)FUN_2c47245c(0,4);
  *piVar3 = (int)param_1;
  *param_1 = (int)piVar3;
  return param_1;
}

