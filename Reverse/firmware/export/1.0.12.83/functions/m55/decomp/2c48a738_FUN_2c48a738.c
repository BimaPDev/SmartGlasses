/* FUN_2c48a738 @ 0x2c48a738 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48a738(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iStack_18;
  int iStack_14;
  
  puVar2 = _LAB_2c48a7e0;
  puVar1 = _LAB_2c48a7dc;
  iStack_14 = *_LAB_2c48a7d4;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x92,_LAB_2c48a7f0,_LAB_2c48a7ec,_LAB_2c48a7fc);
  }
  if (*_LAB_2c48a7d8 == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x96,_LAB_2c48a7f0,_LAB_2c48a7ec,_LAB_2c48a7e8);
  }
  iStack_18 = param_1;
  FUN_2c644044(*_LAB_2c48a7dc,0xffffffff);
  iVar3 = FUN_2c4858f0(*puVar2,_LAB_2c48a7e4,&iStack_18);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x9f,_LAB_2c48a7f0,_LAB_2c48a7ec,_LAB_2c48a7f8,_LAB_2c48a7f4,param_1);
  }
  FUN_2c485820(*puVar2,iVar3);
  FUN_2c644080(*puVar1);
  if (*_LAB_2c48a7d4 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

