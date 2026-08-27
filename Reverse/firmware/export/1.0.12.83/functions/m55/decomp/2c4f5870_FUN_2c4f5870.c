/* FUN_2c4f5870 @ 0x2c4f5870 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4f5870(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  int iStack_14;
  
  iStack_14 = *_LAB_2c4f58d8;
  if ((param_2 == 6) &&
     (iVar2 = FUN_2c66c540(param_1,_LAB_2c4f58dc,5,0), pcVar1 = _LAB_2c4f58e4, iVar2 == 0)) {
    if ((*_LAB_2c4f58e4 == '\0') && ((code *)*_LAB_2c4f58e8 != (code *)0x0)) {
      (*(code *)*_LAB_2c4f58e8)();
      *pcVar1 = '\x01';
    }
  }
  else {
    FUN_2c4f699c(_LAB_2c4f58e0,param_1,param_2);
    auStack_18[0] = 2;
    func_0x2c4f6c18(auStack_18);
  }
  if (*_LAB_2c4f58d8 == iStack_14) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

