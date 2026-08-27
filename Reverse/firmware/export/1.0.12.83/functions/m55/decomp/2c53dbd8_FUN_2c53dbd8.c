/* FUN_2c53dbd8 @ 0x2c53dbd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53dbd8(int param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c53dc40;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c53dc4c,0x19,_LAB_2c53dc48,_DAT_2c53dc44);
  }
  FUN_2c535784(&uStack_24,param_2,param_3,param_4 + 1);
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0xc)) {
    FUN_2c534e60(param_1 + 4,puVar1,&uStack_24);
  }
  else {
    *puVar1 = uStack_24;
    puVar1[1] = uStack_20;
    puVar1[2] = uStack_1c;
    puVar1[3] = uStack_18;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  if (*_LAB_2c53dc40 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

