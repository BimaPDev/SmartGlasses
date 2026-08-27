/* FUN_2c63f438 @ 0x2c63f438 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63f438(int param_1)

{
  undefined1 uVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  int unaff_r4;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_fc;
  
  pbVar2 = _LAB_2c63f6b0;
  iStack_fc = unaff_r4 + -0x7e;
  iStack_104 = *_LAB_2c63f6a4;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 10:
    uVar1 = *_LAB_2c63f6a8;
    iVar4 = FUN_2c6411ac(uVar1,*_LAB_2c63f6b8);
    if ((iVar4 != 0) && (iVar4 = FUN_2c63ed48(uVar1,&uStack_12c,0), iVar4 != 0)) {
      if ((*_LAB_2c63f6bc != 0) &&
         (cVar3 = (**(code **)(*_LAB_2c63f6bc + 0x110))(), cVar3 == '\x06')) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c63f6c0,0x22f,_FUN_2c63f6c8,_LAB_2c63f6c4,uStack_12c,uStack_128,
                     uStack_124,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c63f6c0,0x22f,_FUN_2c63f6c8,_LAB_2c63f6c4,uStack_12c,uStack_128,
                   uStack_124,1);
    }
    break;
  case 0xb:
    FUN_2c48f42c(*_LAB_2c63f6b0);
    iVar4 = FUN_2c640a50();
    if ((iVar4 != 0) && (iVar4 = FUN_2c63ed48(*pbVar2,&uStack_118,1), iVar4 != 0)) {
      FUN_2c640a6c(&uStack_118,0);
    }
    uStack_114 = (uint)*pbVar2;
    uStack_110 = (uint)*_LAB_2c63f6b4;
    if (*_LAB_2c63f6a4 == iStack_104) {
      iStack_108 = iStack_fc;
      uStack_10c = 1;
      uStack_118 = _LAB_2c63eca8;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,uRam2c63ecb4,0x19d,_FUN_2c63ecb0);
    }
    goto LAB_2c63f5b2;
  case 0xc:
    iVar4 = FUN_2c62bdd8(_LAB_2c63f6ac,1000,0);
    if (*_LAB_2c63f6a4 == iStack_104) {
      *(undefined4 *)(iVar4 + 0x10) = 1;
      return;
    }
    goto LAB_2c63f5b2;
  case 0xd:
    iVar4 = FUN_2c63ed48(*_LAB_2c63f6a8,&uStack_118,0);
    if (iVar4 != 0) {
      FUN_2c63f0a8(&uStack_118,uStack_10c & 0xff,1,0);
    }
  }
  if (*_LAB_2c63f6a4 == iStack_104) {
    return;
  }
LAB_2c63f5b2:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

