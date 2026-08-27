/* FUN_2c4924c4 @ 0x2c4924c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4924c4(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = func_0x2c49372c(6);
  if (((iVar2 != 0) || (iVar2 = func_0x2c49372c(3), pcVar1 = _LAB_2c492518, iVar2 != 0)) ||
     (*_LAB_2c492514 == '\0')) {
    return 0;
  }
  iVar2 = 0;
  if (*_LAB_2c492518 != '\0') {
    iVar2 = *_LAB_2c49251c;
  }
  *(int *)(param_1 + -4) = iVar2;
  FUN_2c492250(2,param_1,param_2);
  if (*pcVar1 != '\0') {
    *_LAB_2c49251c = *_LAB_2c49251c + 1;
    return param_2;
  }
  return param_2;
}

