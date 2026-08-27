/* FUN_2c48966c @ 0x2c48966c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48966c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iStack_18;
  int iStack_14;
  
  puVar2 = _LAB_2c489710;
  puVar1 = _LAB_2c48970c;
  iStack_14 = *_LAB_2c489704;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xbf,_LAB_2c489720,_LAB_2c48971c,_LAB_2c489728);
  }
  if (*_LAB_2c489708 == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xc3,_LAB_2c489720,_LAB_2c48971c,_LAB_2c489718);
  }
  FUN_2c644044(*_LAB_2c48970c,0xffffffff);
  iStack_18 = param_1;
  iVar3 = FUN_2c4858f0(*puVar2,_LAB_2c489714,&iStack_18);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xcc,_LAB_2c489720,_LAB_2c48971c,_LAB_2c489724);
  }
  FUN_2c485820(*puVar2,iVar3);
  FUN_2c644080(*puVar1);
  if (*_LAB_2c489704 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

