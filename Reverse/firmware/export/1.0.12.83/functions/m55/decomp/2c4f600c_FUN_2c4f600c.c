/* FUN_2c4f600c @ 0x2c4f600c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4f600c(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  int iStack_14;
  
  iStack_14 = *_LAB_2c4f6074;
  if ((param_2 == 6) &&
     (iVar2 = FUN_2c66c540(param_1,_LAB_2c4f6078,5,0), pcVar1 = _DAT_2c4f6080, iVar2 == 0)) {
    if ((*_DAT_2c4f6080 == '\0') && ((code *)*_DAT_2c4f6084 != (code *)0x0)) {
      (*(code *)*_DAT_2c4f6084)();
      *pcVar1 = '\x01';
    }
  }
  else {
    FUN_2c4f699c(_LAB_2c4f607c,param_1,param_2);
    auStack_18[0] = 1;
    func_0x2c4f6c18(auStack_18);
  }
  if (*_LAB_2c4f6074 == iStack_14) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

