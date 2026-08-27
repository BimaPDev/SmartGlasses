/* FUN_2c658e82 @ 0x2c658e82 */

int FUN_2c658e82(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_2c [4];
  int iStack_28;
  int aiStack_24 [2];
  
  FUN_2c65133a(&iStack_28,param_2,param_3,aiStack_24);
  FUN_2c65133a(aiStack_24,param_4,param_5,auStack_2c);
  iVar5 = *(int *)(iStack_28 + -0xc);
  iVar4 = *(int *)(aiStack_24[0] + -0xc) + aiStack_24[0];
  iVar3 = aiStack_24[0];
  iVar6 = iStack_28;
  do {
    iVar1 = func_0x2c665a72(param_1,iVar6,iVar3);
    if (iVar1 != 0) {
LAB_2c658ede:
      FUN_2c650e60(aiStack_24);
      FUN_2c650e60(&iStack_28);
      return iVar1;
    }
    iVar1 = FUN_2c66c4ec(iVar6);
    iVar2 = FUN_2c66c4ec(iVar3);
    iVar3 = iVar3 + iVar2;
    if (iVar5 + iStack_28 == iVar6 + iVar1) {
      iVar1 = 0;
      if (iVar4 != iVar3) {
        iVar1 = -1;
      }
      goto LAB_2c658ede;
    }
    if (iVar4 == iVar3) {
      iVar1 = 1;
      goto LAB_2c658ede;
    }
    iVar6 = iVar6 + iVar1 + 1;
    iVar3 = iVar3 + 1;
  } while( true );
}

