/* FUN_1011d1fe @ 0x1011d1fe */

undefined4 FUN_1011d1fe(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = (int)*(short *)(param_4 + 2);
  iVar1 = iVar4 + 0x1f;
  if (iVar1 < 0) {
    iVar1 = iVar4 + 0x3e;
  }
  iVar2 = (iVar1 << 0x13) >> 0x18;
  param_4 = param_4 + 0x24;
  uVar5 = param_3;
  iVar1 = FUN_1011c726(param_2,param_1);
  if (iVar1 == 0) {
    if (iVar4 < iVar2 * 0x20) {
      iVar1 = FUN_1011c8c2(param_2,iVar4,param_4);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  FUN_1011c726(param_3,param_2,param_4,iVar2,param_4,iVar2,uVar5);
  return uVar3;
}

