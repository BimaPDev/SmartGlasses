/* FUN_2c5eb91e @ 0x2c5eb91e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5eb91e(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
LAB_2c5eb95a:
    uVar2 = 0;
  }
  else {
    iVar4 = *(int *)(*_LAB_2c5eb964 + 0x54);
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) goto LAB_2c5eb95a;
      iVar4 = *(int *)(iVar3 + 0x54);
    } while ((((*(char *)(iVar3 + 0x58) != '\0') || (*(int *)(iVar3 + 0x4c) != param_3)) ||
             (*(int *)(iVar3 + 0x44) != param_2)) ||
            (iVar1 = (**(code **)(iVar3 + 0x50))(iVar3,param_1), iVar1 != 0));
    uVar2 = *(undefined4 *)(iVar3 + 0x5c);
  }
  return uVar2;
}

