/* FUN_2c670688 @ 0x2c670688 */

void FUN_2c670688(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_2c6706a8;
  *DAT_2c6706a8 = 0;
  iVar2 = FUN_2c4e6720(param_2,param_3,param_4,param_4,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

