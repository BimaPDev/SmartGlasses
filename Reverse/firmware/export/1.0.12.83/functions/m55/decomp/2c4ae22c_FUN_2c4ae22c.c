/* FUN_2c4ae22c @ 0x2c4ae22c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ae22c(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = *_LAB_2c4ae2e4;
  uStack_2c = 0x24;
  iVar1 = FUN_2c4b4674(10,&uStack_2c,0);
  iVar4 = iStack_28;
  if (iVar1 != 0) {
    iVar4 = 0;
  }
  uStack_2c = 0x20;
  iVar1 = FUN_2c4b4674(10,&uStack_2c);
  uVar2 = _LAB_2c4ae2f0;
  if (iVar1 == 0) {
    iVar1 = iStack_28;
    if ((iStack_28 == 0x265) || (iStack_28 == 0x555)) {
      uVar3 = 0xd;
      uVar2 = _LAB_2c4ae2ec;
    }
    else if (iStack_28 == 0x255) {
      uVar3 = 0xc;
      uVar2 = _LAB_2c4ae2e8;
    }
    else if (iStack_28 == 0x355) {
      uVar3 = 6;
      uVar2 = _LAB_2c4ae2f4;
    }
    else {
      uVar3 = 8;
    }
  }
  else {
    uVar3 = 8;
    iVar1 = 0;
  }
  if (param_1 != 0) {
    FUN_2c674668(param_1,uVar2,uVar3);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar4;
  }
  if (*_LAB_2c4ae2e4 == iStack_24) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

