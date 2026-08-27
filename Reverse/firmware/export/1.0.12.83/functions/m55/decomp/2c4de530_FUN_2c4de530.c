/* FUN_2c4de530 @ 0x2c4de530 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4de530(int param_1,int param_2,int *param_3)

{
  int iVar1;
  char in_ZR;
  bool in_CY;
  
  if (in_ZR != '\0') {
    iVar1 = *(int *)(param_1 + 0x38);
LAB_2c4de56a:
    *param_3 = iVar1;
    return 1;
  }
  if (in_CY) {
    if ((param_2 == _LAB_2c4de57c) || (param_2 == _LAB_2c4de57c + 0x9005b34)) {
      iVar1 = func_0x2c4de9bc(param_1 + 0x30);
      *param_3 = iVar1;
      return 1;
    }
  }
  else if (param_2 == _LAB_2c4de578) {
    iVar1 = *(int *)(param_1 + 0x3c);
    goto LAB_2c4de56a;
  }
  if (param_2 == _LAB_2c4de5c8) {
    iVar1 = *(int *)(param_1 + 0xc);
    *param_3 = *(int *)(param_1 + 8);
    param_3[1] = iVar1;
  }
  else {
    if (param_2 != _LAB_2c4de5c8 + 0x56015306) {
      return 0;
    }
    *param_3 = param_1 + 8;
  }
  return 1;
}

