/* thunk_FUN_2c63b6c8 @ 0x2c5d6604 */

undefined4 thunk_FUN_2c63b6c8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_14;
  
  puVar1 = DAT_2c63b728;
  iStack_14 = *DAT_2c63b724;
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uStack_20 = 0x1e;
    uStack_1c = 0;
    FUN_2c644044(*DAT_2c63b728,0xffffffff);
    uVar2 = FUN_2c5e31b4(4,&uStack_20);
    *param_1 = uStack_20;
    param_1[1] = uStack_1c;
    FUN_2c644080(*puVar1);
  }
  if (*DAT_2c63b724 == iStack_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

