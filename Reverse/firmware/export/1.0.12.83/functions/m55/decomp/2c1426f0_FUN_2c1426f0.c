/* FUN_2c1426f0 @ 0x2c1426f0 */

void FUN_2c1426f0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_2c14270c;
  *DAT_2c14270c = 0;
  iVar2 = FUN_2c144698(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

