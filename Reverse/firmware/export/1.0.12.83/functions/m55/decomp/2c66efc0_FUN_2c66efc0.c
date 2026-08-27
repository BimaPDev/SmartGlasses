/* FUN_2c66efc0 @ 0x2c66efc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c66efc0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _LAB_2c66efdc;
  *_LAB_2c66efdc = 0;
  iVar2 = func_0x2c4e666c(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

