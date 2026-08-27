/* FUN_2c4a08bc @ 0x2c4a08bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a08bc(void)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4a0918;
  uStack_20 = 0x501;
  uStack_1c = _LAB_2c4a091c;
  uStack_18 = 0;
  iVar1 = FUN_2c4bc9b4(0,&uStack_20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1b6,_LAB_2c4a092c,_LAB_2c4a0928,_LAB_2c4a0924,_LAB_2c4a0920,0,iVar1);
  }
  if (*_LAB_2c4a0918 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

