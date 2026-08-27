/* FUN_2c66b3a8 @ 0x2c66b3a8 */

void FUN_2c66b3a8(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_2c66b3c4;
  *DAT_2c66b3c4 = 0;
  iVar2 = FUN_2c4e676c(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

