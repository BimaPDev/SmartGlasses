/* FUN_2c58c174 @ 0x2c58c174 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c58c174(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [16];
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined2 uStack_22;
  undefined4 uStack_20;
  int iStack_1c;
  
  uVar1 = _LAB_2c58c1dc;
  iStack_1c = *_LAB_2c58c1d8;
  uStack_24 = 0xb;
  uStack_40 = 0;
  uStack_20 = 0xffffffff;
  auStack_3c[0] = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_22 = 7;
  uStack_48 = _LAB_2c58c1dc;
  puStack_44 = auStack_3c;
  FUN_2c58c9d8(param_1,&uStack_48);
  uStack_48 = uVar1;
  if (puStack_44 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*_LAB_2c58c1d8 == iStack_1c) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

