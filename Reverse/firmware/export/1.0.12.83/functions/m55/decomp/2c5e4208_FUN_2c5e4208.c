/* FUN_2c5e4208 @ 0x2c5e4208 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5e4208(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = _LAB_2c5e4240;
  if (param_1 == 0) {
    iVar2 = (**(code **)(_LAB_2c5e4240[1] + 0x44))();
    iVar3 = (**(code **)(*piVar1 + 0x44))(0);
    iVar4 = (**(code **)(piVar1[2] + 0x44))(0);
    return iVar4 + iVar2 + iVar3;
  }
  iVar2 = FUN_2c5e4128();
                    /* WARNING: Could not recover jumptable at 0x2c5e423e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(iVar2 + 0x44))(param_1);
  return iVar2;
}

