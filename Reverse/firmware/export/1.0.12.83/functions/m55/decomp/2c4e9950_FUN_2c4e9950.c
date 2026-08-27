/* FUN_2c4e9950 @ 0x2c4e9950 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e9950(void)

{
  int iVar1;
  
  iVar1 = _LAB_2c4e9a20;
  if (*_LAB_2c4e9a14 == 0) {
    *_LAB_2c4e9a14 = _LAB_2c4e9a20;
    FUN_2c674268(iVar1,0,700,0);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xa2,_LAB_2c4e9a2c,_LAB_2c4e9a28,_LAB_2c4e9a24);
  }
  if ((*_LAB_2c4e9a18 ^ *_LAB_2c4e9a18) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(*_LAB_2c4e9a1c,*_LAB_2c4e9a14,*_LAB_2c4e9a18 ^ *_LAB_2c4e9a18,0);
}

