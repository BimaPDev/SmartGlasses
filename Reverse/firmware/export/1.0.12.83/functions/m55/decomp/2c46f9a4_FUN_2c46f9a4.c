/* FUN_2c46f9a4 @ 0x2c46f9a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46f9a4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *_LAB_2c46fa88;
  iVar1 = FUN_2c478b68();
  if (iVar1 == 0) {
    if (*_LAB_2c46fa88 == iVar2) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  iVar1 = (**(code **)(iVar1 + 0x94))();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x500,_LAB_2c46fa94,_LAB_2c46fa98,_LAB_2c46fa90,_LAB_2c46fa8c);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x4fc,_LAB_2c46fa94,_LAB_2c46fa98,_LAB_2c46faa8,_LAB_2c46fa8c);
}

