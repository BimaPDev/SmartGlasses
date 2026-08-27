/* FUN_2c5bbe54 @ 0x2c5bbe54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5bbe54(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *_LAB_2c5bbf04;
  iVar1 = FUN_2c5bb8dc();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5bbf10,0x23,_LAB_2c5bbf08,_LAB_2c5bbf0c,_LAB_2c5bbf08,
                 *(undefined4 *)(param_2 + 4));
  }
  if (*_LAB_2c5bbf04 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

