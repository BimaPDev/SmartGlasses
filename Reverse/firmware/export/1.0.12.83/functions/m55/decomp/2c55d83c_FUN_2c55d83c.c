/* FUN_2c55d83c @ 0x2c55d83c */

void FUN_2c55d83c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(*param_1 + -0x10);
  piVar4 = *(int **)((int)param_1 + iVar3 + 0x10);
  if ((piVar4 != (int *)0x0) && (piVar4[1] != 0)) {
    iVar1 = piVar4[1] + 1;
    piVar4[1] = iVar1;
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)((int)param_1 + iVar3 + 0xc);
    }
    FUN_2c606abc(uVar2,1);
    FUN_2c62e8ec((int)param_1 + *(int *)(*param_1 + -0x10) + 0x14);
    iVar3 = piVar4[1];
    piVar4[1] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      iVar3 = piVar4[2];
      piVar4[2] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c55d88e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar4 + 0xc))(piVar4);
        return;
      }
    }
    return;
  }
  FUN_2c606abc(0,1);
  FUN_2c62e8ec((int)param_1 + *(int *)(*param_1 + -0x10) + 0x14);
  return;
}

