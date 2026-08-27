/* FUN_2c5eb166 @ 0x2c5eb166 */

/* WARNING: Removing unreachable block (ram,0x2c5e4b82) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5eb166(void)

{
  int iVar1;
  undefined4 *in_r3;
  undefined4 uVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_54;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_1c;
  
  FUN_2c62be40(*in_r3);
  uVar2 = *_LAB_2c5eb190;
  FUN_2c5e6ce4(0);
  iVar1 = _LAB_2c5eb194;
  iStack_1c = *DAT_2c5e4ba0;
  FUN_2c62e7b4(&uStack_60,_LAB_2c5eb194,0xff,0);
  uStack_38 = 0;
  uStack_34 = 400;
  uStack_5c = DAT_2c5e4ba4;
  uStack_40 = 0xff;
  uStack_3c = 0xff;
  uStack_44 = DAT_2c5e4ba8;
  if (iVar1 != 0) {
    iStack_54 = iVar1;
  }
  uStack_60 = uVar2;
  FUN_2c62e8ec(&uStack_60);
  if (*DAT_2c5e4ba0 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

