/* FUN_2c65f484 @ 0x2c65f484 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c65f484(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puStack_28;
  int iStack_24;
  
  *param_1 = _LAB_2c65f534;
  puStack_28 = param_1;
  iStack_24 = param_2;
  FUN_2c651a4c(&iStack_24,param_3,param_4,&puStack_28);
  iVar4 = iStack_24;
  uVar5 = param_4 - param_3 >> 1;
  iVar6 = iStack_24 + *(int *)(iStack_24 + -0xc) * 4;
  if (_DAT_2c65f538 < (uint)(param_4 - param_3)) {
    iVar1 = -1;
  }
  else {
    iVar1 = uVar5 << 2;
  }
  uVar2 = thunk_FUN_2c64ca5c(iVar1);
  while( true ) {
    uVar7 = FUN_2c665aa8(param_2,uVar2,iVar4,uVar5);
    uVar3 = (uint)uVar7;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3 + 1;
      thunk_FUN_2c669588(uVar2,(int)((ulonglong)uVar7 >> 0x20),uVar3);
      if (uVar5 < 0x1fffffff) {
        iVar1 = uVar5 * 4;
      }
      else {
        iVar1 = -1;
      }
      uVar2 = thunk_FUN_2c64ca5c(iVar1);
      uVar3 = FUN_2c665aa8(param_2,uVar2,iVar4,uVar5);
    }
    FUN_2c651890(param_1,uVar2,uVar3);
    iVar1 = FUN_2c66ea0c(iVar4);
    iVar4 = iVar4 + iVar1 * 4;
    if (iVar6 == iVar4) break;
    iVar4 = iVar4 + 4;
    FUN_2c6519a2(param_1,0);
  }
  thunk_FUN_2c669588(uVar2);
  FUN_2c6515c0(&iStack_24);
  return param_1;
}

