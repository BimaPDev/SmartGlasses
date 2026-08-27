/* FUN_2c4e4ace @ 0x2c4e4ace */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c4e4ace(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  *param_1 = param_4;
  param_1[8] = param_4 + 0x3c;
  if (param_1[0xc] != 0) {
    FUN_2c4e45b0();
  }
  iVar1 = _LAB_2c4e4af8;
  *param_1 = _LAB_2c4e4af8;
  param_1[8] = iVar1 + 0x3c;
  FUN_2c4dfb24(param_1);
  return param_1;
}

