/* FUN_2c4a0738 @ 0x2c4a0738 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a0738(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined2 uStack_18;
  undefined1 uStack_16;
  int iStack_14;
  
  piVar1 = _LAB_2c4a07bc;
  iStack_14 = *param_3;
  if (*param_4 == 1) {
    uStack_16 = 1;
    uStack_18 = 0;
    FUN_2c4a06fc(&uStack_18);
  }
  else {
    cVar2 = FUN_2c4c02f4(0x48,param_2,0);
    iVar3 = *piVar1;
    if (cVar2 == '\0') {
      iVar3 = iVar3 + 1;
      *piVar1 = iVar3;
    }
    if ((1 < iVar3) && (*_LAB_2c4a07c0 == 0)) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x179,_LAB_2c4a07cc,_LAB_2c4a07c8,_LAB_2c4a07c4);
    }
  }
  if (*_LAB_2c4a07b8 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

