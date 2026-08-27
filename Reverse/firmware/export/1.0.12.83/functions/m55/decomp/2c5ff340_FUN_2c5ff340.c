/* FUN_2c5ff340 @ 0x2c5ff340 */

void FUN_2c5ff340(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_2c5ff370;
  if (param_1 == 0) {
    return;
  }
  if (*DAT_2c5ff370 != 0) {
    FUN_2c602f64();
    return;
  }
  iVar2 = FUN_2c602d28();
  *piVar1 = iVar2;
  FUN_2c602f64(iVar2,param_1);
  return;
}

