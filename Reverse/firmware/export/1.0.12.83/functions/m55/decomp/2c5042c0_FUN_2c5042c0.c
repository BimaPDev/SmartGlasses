/* FUN_2c5042c0 @ 0x2c5042c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5042c0(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    if (*(code **)(iVar1 + 0x10) != _LAB_2c504300) {
      (**(code **)(iVar1 + 0x10))(param_2);
      iVar1 = *param_2;
    }
    (**(code **)(iVar1 + 0x38))(param_2);
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0x34))(param_3);
    if (*(code **)(*param_3 + 0xc) != _LAB_2c504304) {
                    /* WARNING: Could not recover jumptable at 0x2c5042f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0xc))(param_3);
      return;
    }
  }
  return;
}

