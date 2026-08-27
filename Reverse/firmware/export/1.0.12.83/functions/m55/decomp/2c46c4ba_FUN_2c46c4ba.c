/* FUN_2c46c4ba @ 0x2c46c4ba */

void FUN_2c46c4ba(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))(param_1,*(undefined4 *)(param_1 + 0x24));
  }
                    /* WARNING: Could not recover jumptable at 0x2c46c4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 4))(param_1);
  return;
}

