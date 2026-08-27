/* FUN_2c492424 @ 0x2c492424 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c492424(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = func_0x2c49372c(5);
  piVar2 = _LAB_2c492470;
  pcVar1 = _LAB_2c49246c;
  if ((iVar3 == 0) && (*_LAB_2c492468 != '\0')) {
    uVar4 = 0;
    if (*_LAB_2c49246c != '\0') {
      iVar3 = *_LAB_2c492470;
      *(int *)(param_1 + -4) = iVar3;
      FUN_2c492250(4,param_1,param_2,iVar3,param_4);
      if (*pcVar1 == '\0') {
        return param_2;
      }
      *piVar2 = *piVar2 + 1;
      uVar4 = param_2;
    }
    return uVar4;
  }
  return 0;
}

