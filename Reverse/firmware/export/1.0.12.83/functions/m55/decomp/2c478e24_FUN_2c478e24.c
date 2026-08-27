/* FUN_2c478e24 @ 0x2c478e24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c478e24(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = _LAB_2c478f40;
  iVar3 = *_LAB_2c478f3c;
  iVar2 = FUN_2c478b68();
  *piVar1 = iVar2;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x9a,_LAB_2c478f50,_LAB_2c478f4c,_LAB_2c478f48,_LAB_2c478f44,param_1);
  }
  if (*_LAB_2c478f3c == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

