/* FUN_2c4e91f8 @ 0x2c4e91f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_2c4e91f8(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c4e9238;
  uStack_14 = 0;
  uStack_10 = 0;
  func_0x2c4eff20(param_1,&uStack_14,0);
  iVar1 = func_0x2c674218(&uStack_14);
  if (*_LAB_2c4e9238 == iStack_c) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

