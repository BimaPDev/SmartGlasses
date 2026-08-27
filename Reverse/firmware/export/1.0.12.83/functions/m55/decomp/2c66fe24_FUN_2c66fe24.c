/* FUN_2c66fe24 @ 0x2c66fe24 */

void FUN_2c66fe24(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_2c66fe44;
  *DAT_2c66fe44 = 0;
  iVar2 = FUN_2c4e6744(param_2,param_3,param_3,0,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

