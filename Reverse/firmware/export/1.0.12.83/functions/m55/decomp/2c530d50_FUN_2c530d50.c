/* FUN_2c530d50 @ 0x2c530d50 */

undefined4 FUN_2c530d50(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_1c;
  int *local_18;
  int local_14;
  
  local_14 = *DAT_2c530de0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c530df0,0x1f9,DAT_2c530dec,DAT_2c530de8);
  }
  local_18 = (int *)0x0;
  local_1c = param_2;
  local_18 = (int *)FUN_2c64ca5c(0x10);
  *local_18 = DAT_2c530de4;
  local_18[3] = param_2;
  local_18[1] = 1;
  local_18[2] = 1;
  uVar2 = FUN_2c530a70(param_1,&local_1c);
  piVar1 = local_18;
  if ((local_18 != (int *)0x0) && (iVar3 = local_18[1], local_18[1] = iVar3 + -1, iVar3 + -1 == 0))
  {
    (**(code **)(*local_18 + 8))(local_18);
    iVar3 = piVar1[2];
    piVar1[2] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
  }
  if (*DAT_2c530de0 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

