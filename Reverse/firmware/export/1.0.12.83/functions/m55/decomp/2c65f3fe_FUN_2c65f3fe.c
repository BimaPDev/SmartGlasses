/* FUN_2c65f3fe @ 0x2c65f3fe */

int FUN_2c65f3fe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_2c [4];
  int iStack_28;
  int aiStack_24 [2];
  
  FUN_2c651a4c(&iStack_28,param_2,param_3,aiStack_24);
  FUN_2c651a4c(aiStack_24,param_4,param_5,auStack_2c);
  iVar4 = *(int *)(iStack_28 + -0xc);
  iVar3 = aiStack_24[0] + *(int *)(aiStack_24[0] + -0xc) * 4;
  iVar2 = aiStack_24[0];
  iVar5 = iStack_28;
  do {
    iVar1 = func_0x2c665a92(param_1,iVar5,iVar2);
    if (iVar1 != 0) {
LAB_2c65f460:
      FUN_2c6515c0(aiStack_24);
      FUN_2c6515c0(&iStack_28);
      return iVar1;
    }
    iVar1 = FUN_2c66ea0c(iVar5);
    iVar5 = iVar5 + iVar1 * 4;
    iVar1 = FUN_2c66ea0c(iVar2);
    iVar2 = iVar2 + iVar1 * 4;
    if (iStack_28 + iVar4 * 4 == iVar5) {
      iVar1 = 0;
      if (iVar3 != iVar2) {
        iVar1 = -1;
      }
      goto LAB_2c65f460;
    }
    if (iVar3 == iVar2) {
      iVar1 = 1;
      goto LAB_2c65f460;
    }
    iVar5 = iVar5 + 4;
    iVar2 = iVar2 + 4;
  } while( true );
}

