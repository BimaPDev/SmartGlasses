/* FUN_2c5adfd4 @ 0x2c5adfd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5adfd4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  if (*(int *)(param_1 + 8) == 0) {
    uStack_10 = _LAB_2c5ae05c;
    uStack_18 = _LAB_2c5ae058;
    uStack_14 = _LAB_2c5ae060;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ae064,0x337);
  }
  FUN_2c48e424(param_2,_LAB_2c5ae050);
  iVar1 = FUN_2c48de10();
  if ((iVar1 != 0) &&
     (((iVar1 = FUN_2c6684cc(), uStack_18 = _LAB_2c5ae06c, iVar1 == 0x5dd ||
       (uStack_18 = _LAB_2c5ae054, iVar1 == 0x5de)) || (uStack_18 = _LAB_2c5ae068, iVar1 == 0x5df)))
     ) {
    iStack_c = *DAT_2c5e40ac;
    uStack_1c = 0;
    uStack_10 = 1;
    uStack_14 = 0;
    FUN_2c5e4008(&uStack_1c);
    if (*DAT_2c5e40ac != iStack_c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  return;
}

