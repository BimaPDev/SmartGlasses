/* FUN_2c62b3fc @ 0x2c62b3fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c62b3fc(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uStack_20;
  int iStack_1c;
  
  puVar1 = _LAB_2c62b448;
  iVar2 = 0;
  iStack_1c = *_LAB_2c62b444;
  uStack_20 = 0;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    do {
      iVar2 = iVar2 + 1;
      (*(code *)*puVar1)(param_1,&uStack_20);
    } while (uStack_20 < param_2);
  }
  if (*_LAB_2c62b444 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar2;
}

