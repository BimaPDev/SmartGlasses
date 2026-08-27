/* FUN_140bcf34 @ 0x140bcf34 */

void FUN_140bcf34(int *param_1,undefined4 param_2)

{
  if (*param_1 != 8000) {
    FUN_140e5188(param_1 + 4,param_2,param_2);
    return;
  }
  FUN_140bce3c(param_1[2],param_2,param_1[1],0x3c);
  FUN_140e5188(param_1 + 4,param_1[1]);
  FUN_140bce3c(param_1[3],param_1[1],param_2,0x78);
  return;
}

