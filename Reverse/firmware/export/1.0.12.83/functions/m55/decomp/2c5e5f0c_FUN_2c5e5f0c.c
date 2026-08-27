/* FUN_2c5e5f0c @ 0x2c5e5f0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e5f0c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_a8;
  undefined1 auStack_a4 [64];
  undefined1 auStack_64 [64];
  int iStack_24;
  
  iStack_24 = *_LAB_2c5e5fa4;
  FUN_2c62c3b0(auStack_64,0x40,param_3,0);
  uVar2 = _LAB_2c5e5fac;
  uVar1 = _LAB_2c5e5fa8;
  if (1 < param_1) {
    iVar4 = 1;
    do {
      iVar3 = FUN_2c66c4ec(auStack_64);
      param_2 = param_2 + 1;
      FUN_2c62dbd4(auStack_64 + iVar3,0x3f - iVar3,uVar1,*param_2);
      if (iVar4 < param_1 + -1) {
        iVar3 = FUN_2c66c4ec(auStack_64);
        FUN_2c62dbd4(auStack_64 + iVar3,0x3f - iVar3,uVar2);
      }
      iVar4 = iVar4 + 1;
    } while (param_1 != iVar4);
  }
  FUN_2c62c3b0(&uStack_a8,0x44);
  uStack_a8 = 1;
  FUN_2c66c568(auStack_a4,auStack_64,0x40);
  FUN_2c6419a8(&uStack_a8);
  if (*_LAB_2c5e5fa4 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

