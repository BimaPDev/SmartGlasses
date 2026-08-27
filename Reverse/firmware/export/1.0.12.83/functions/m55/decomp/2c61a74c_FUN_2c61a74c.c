/* FUN_2c61a74c @ 0x2c61a74c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c61a74c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c61a7bc;
  iVar1 = FUN_2c62ca10(param_1 + 0x30,param_2,param_3,0);
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar3 = FUN_2c62b108(iVar1 + 8,0x57,&iStack_20);
      iVar2 = iStack_20;
      if (iVar3 != 1) {
        iVar2 = FUN_2c6033b4(param_1,0,0x57);
      }
      if (iVar4 < *(short *)(iVar2 + 8)) {
        iVar4 = (int)*(short *)(iVar2 + 8);
      }
      iVar1 = FUN_2c62ca20(param_1 + 0x30,iVar1);
    } while (iVar1 != 0);
  }
  if (*_LAB_2c61a7bc != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar4;
}

