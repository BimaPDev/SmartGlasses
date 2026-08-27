/* FUN_2c48a1f4 @ 0x2c48a1f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48a1f4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iStack_18;
  int iStack_14;
  
  puVar2 = _LAB_2c48a29c;
  puVar1 = _LAB_2c48a298;
  iStack_14 = *DAT_2c48a290;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1c0,_LAB_2c48a2ac,_LAB_2c48a2a8,_LAB_2c48a2b4);
  }
  if (*_LAB_2c48a294 == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1c4,_LAB_2c48a2ac,_LAB_2c48a2a8,_LAB_2c48a2a4);
  }
  FUN_2c644044(*_LAB_2c48a298,0xffffffff);
  iStack_18 = param_1;
  iVar3 = FUN_2c4858f0(*puVar2,_LAB_2c48a2a0,&iStack_18);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1cd,_LAB_2c48a2ac,_LAB_2c48a2a8,_LAB_2c48a2b0);
  }
  FUN_2c485820(*puVar2,iVar3);
  FUN_2c644080(*puVar1);
  if (*DAT_2c48a290 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

