/* FUN_2c4dfa4e @ 0x2c4dfa4e */

undefined4 FUN_2c4dfa4e(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_2c4df4f8(param_1 + 0x10,0xc00);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_2c4df4f8(param_1 + 0x10,0x800);
  if ((iVar3 != 0) && (piVar1 = (int *)FUN_2c4df9ea(param_1), piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x2c4dfa22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x1c))();
    return uVar2;
  }
  return 0;
}

