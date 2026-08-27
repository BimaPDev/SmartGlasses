/* FUN_2c63f440 @ 0x2c63f440 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63f440(int param_1)

{
  undefined1 uVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  int iStack_1c;
  
  pbVar2 = _LAB_2c63f6b0;
  iStack_1c = *_LAB_2c63f6a4;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 10:
    uVar1 = *_LAB_2c63f6a8;
    iVar4 = FUN_2c6411ac(uVar1,*_LAB_2c63f6b8);
    if ((iVar4 != 0) && (iVar4 = FUN_2c63ed48(uVar1,&uStack_44,0), iVar4 != 0)) {
      if ((*_LAB_2c63f6bc != 0) &&
         (cVar3 = (**(code **)(*_LAB_2c63f6bc + 0x110))(), cVar3 == '\x06')) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c63f6c0,0x22f,_FUN_2c63f6c8,_LAB_2c63f6c4,uStack_44,uStack_40,uStack_3c
                     ,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c63f6c0,0x22f,_FUN_2c63f6c8,_LAB_2c63f6c4,uStack_44,uStack_40,uStack_3c,1
                  );
    }
    break;
  case 0xb:
    FUN_2c48f42c(*_LAB_2c63f6b0);
    iVar4 = FUN_2c640a50();
    if ((iVar4 != 0) && (iVar4 = FUN_2c63ed48(*pbVar2,&uStack_30,1), iVar4 != 0)) {
      FUN_2c640a6c(&uStack_30,0);
    }
    uStack_2c = (uint)*pbVar2;
    uStack_28 = (uint)*_LAB_2c63f6b4;
    if (*_LAB_2c63f6a4 == iStack_1c) {
      uStack_24 = 1;
      uStack_30 = _LAB_2c63eca8;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,uRam2c63ecb4,0x19d,_FUN_2c63ecb0);
    }
    goto LAB_2c63f5b2;
  case 0xc:
    iVar4 = FUN_2c62bdd8(_LAB_2c63f6ac,1000,0);
    if (*_LAB_2c63f6a4 == iStack_1c) {
      *(undefined4 *)(iVar4 + 0x10) = 1;
      return;
    }
    goto LAB_2c63f5b2;
  case 0xd:
    iVar4 = FUN_2c63ed48(*_LAB_2c63f6a8,&uStack_30,0);
    if (iVar4 != 0) {
      FUN_2c63f0a8(&uStack_30,uStack_24 & 0xff,1,0);
    }
  }
  if (*_LAB_2c63f6a4 == iStack_1c) {
    return;
  }
LAB_2c63f5b2:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

