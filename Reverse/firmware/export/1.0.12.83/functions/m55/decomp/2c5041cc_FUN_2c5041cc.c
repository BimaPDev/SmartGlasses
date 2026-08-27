/* FUN_2c5041cc @ 0x2c5041cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5041cc(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  piVar1 = (int *)*piVar3;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (*(code **)(iVar2 + 0xc) != _LAB_2c5041f8) {
      (**(code **)(iVar2 + 0xc))();
      iVar2 = *(int *)*piVar3;
    }
    if (*(code **)(iVar2 + 0x14) != _LAB_2c5041fc) {
                    /* WARNING: Could not recover jumptable at 0x2c5041ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 0x14))();
      return;
    }
  }
  return;
}

