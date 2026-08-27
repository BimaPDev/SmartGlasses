/* FUN_2c4b462c @ 0x2c4b462c */

void FUN_2c4b462c(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    FUN_2c4b43a8();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_2c4b43a8();
    param_1[1] = 0;
  }
  if (param_1[6] != 0) {
    FUN_2c4b43a8();
    param_1[6] = 0;
  }
  FUN_2c4b4460();
  iVar1 = *DAT_2c4b4670;
  *DAT_2c4b4670 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  FUN_2c4b4520();
  return;
}

