/* FUN_2c658f04 @ 0x2c658f04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c658f04(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puStack_28;
  int iStack_24;
  int iStack_20;
  
  *param_1 = _LAB_2c658f9c;
  puStack_28 = param_1;
  iStack_24 = param_2;
  iStack_20 = param_3;
  FUN_2c65133a(&iStack_24,param_3,param_4,&puStack_28);
  iVar5 = iStack_24;
  uVar4 = (param_4 - param_3) * 2;
  iVar6 = iStack_24 + *(int *)(iStack_24 + -0xc);
  uVar1 = thunk_FUN_2c64ca5c(uVar4);
  while( true ) {
    uVar7 = func_0x2c665a88(param_2,uVar1,iVar5,uVar4);
    uVar2 = (uint)uVar7;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2 + 1;
      thunk_FUN_2c669588(uVar1,(int)((ulonglong)uVar7 >> 0x20),uVar2);
      uVar1 = thunk_FUN_2c64ca5c(uVar4);
      uVar2 = func_0x2c665a88(param_2,uVar1,iVar5,uVar4);
    }
    FUN_2c651180(param_1,uVar1,uVar2);
    iVar3 = FUN_2c66c4ec(iVar5);
    if (iVar6 == iVar3 + iVar5) break;
    iVar5 = iVar3 + iVar5 + 1;
    FUN_2c651292(param_1,0);
  }
  thunk_FUN_2c669588(uVar1);
  FUN_2c650e60(&iStack_24);
  return param_1;
}

