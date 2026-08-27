/* FUN_2c46f420 @ 0x2c46f420 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46f420(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_84 [112];
  int iStack_14;
  
  iStack_14 = *_LAB_2c46f4b0;
  iVar2 = FUN_2c478b68();
  uVar1 = _LAB_2c46f4b4;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xbc))(auStack_84);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4d8,_LAB_2c46f4bc,_LAB_2c46f4b8,uVar1);
  }
  if (*_LAB_2c46f4b0 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

