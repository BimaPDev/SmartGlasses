/* FUN_10054e90 @ 0x10054e90 */

void FUN_10054e90(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_10054ed4;
  while (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if ((-1 < param_1[3] << 0x17) &&
       (((param_1[2] == 0 || (FUN_10054e90(), -1 < param_1[3] << 0x17)) && (param_1[4] != 0)))) {
      (**(code **)(iVar1 + 4))();
    }
    if ((-1 < param_1[3] << 0x16) && (param_1[8] != 0)) {
      (**(code **)(iVar1 + 4))();
    }
    (**(code **)(iVar1 + 4))(param_1);
    param_1 = (int *)iVar2;
  }
  return;
}

