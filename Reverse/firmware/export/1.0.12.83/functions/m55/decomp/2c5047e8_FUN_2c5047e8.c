/* FUN_2c5047e8 @ 0x2c5047e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5047e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c504858;
  uStack_34 = _LAB_2c504854;
  uStack_30 = func_0x2c504588(param_1,*(undefined4 *)(param_1 + 0xc),0);
  uStack_2c = func_0x2c504588(param_1,*(undefined4 *)(param_1 + 0x10));
  uStack_28 = _LAB_2c50485c;
  uStack_24 = param_2;
  uVar1 = FUN_2c48e738();
  uVar2 = VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c504860);
  uStack_20 = uVar1;
  FUN_2c4861f4(&uStack_34);
  if (*_LAB_2c504858 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

