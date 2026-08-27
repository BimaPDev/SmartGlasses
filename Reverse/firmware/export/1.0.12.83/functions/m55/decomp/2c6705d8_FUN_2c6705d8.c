/* FUN_2c6705d8 @ 0x2c6705d8 */

void FUN_2c6705d8(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_2c6705f4;
  *DAT_2c6705f4 = 0;
  iVar2 = FUN_2c4e66fc(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

