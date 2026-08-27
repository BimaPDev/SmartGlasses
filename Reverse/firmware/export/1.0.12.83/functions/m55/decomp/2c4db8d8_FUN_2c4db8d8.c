/* FUN_2c4db8d8 @ 0x2c4db8d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4db8d8(undefined4 param_1)

{
  int *piVar1;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c4db910;
  uStack_10 = param_1;
  func_0x2c4db8ac();
  uStack_10 = param_1;
  piVar1 = (int *)FUN_2c4db8c8();
  (**(code **)(*piVar1 + 0x10))(piVar1,&uStack_10);
  if (*_LAB_2c4db910 != iStack_c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

