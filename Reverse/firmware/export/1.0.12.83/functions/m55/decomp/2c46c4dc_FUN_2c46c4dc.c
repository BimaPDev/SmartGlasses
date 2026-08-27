/* FUN_2c46c4dc @ 0x2c46c4dc */

void FUN_2c46c4dc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_2c669588(*param_1);
  iVar2 = param_1[1];
  if ((iVar2 != 0) &&
     (iVar1 = *(int *)(iVar2 + 0xc) + -1, *(int *)(iVar2 + 0xc) = iVar1, iVar1 == 0)) {
    if (*(code **)(iVar2 + 0x20) != (code *)0x0) {
      (**(code **)(iVar2 + 0x20))(iVar2,*(undefined4 *)(iVar2 + 0x24));
    }
                    /* WARNING: Could not recover jumptable at 0x2c46c506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 4))(iVar2);
    return;
  }
  return;
}

