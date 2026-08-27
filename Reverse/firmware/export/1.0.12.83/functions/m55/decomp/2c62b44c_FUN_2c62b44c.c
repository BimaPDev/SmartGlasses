/* FUN_2c62b44c @ 0x2c62b44c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c62b44c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uStack_20;
  int iStack_1c;
  
  puVar1 = _LAB_2c62b4a8;
  iStack_1c = *_LAB_2c62b4a4;
  if (param_1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    uStack_20 = 0;
    while (((uVar2 = uStack_20, uVar4 = FUN_2c66c4ec(param_1), uVar2 < uVar4 &&
            (*(char *)(param_1 + uVar2) != '\0')) &&
           (iVar3 = (*(code *)*puVar1)(param_1,&uStack_20), iVar3 != 0))) {
      iVar5 = iVar5 + 1;
    }
  }
  if (*_LAB_2c62b4a4 == iStack_1c) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

