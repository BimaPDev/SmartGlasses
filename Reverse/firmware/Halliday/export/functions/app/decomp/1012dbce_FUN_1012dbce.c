/* FUN_1012dbce @ 0x1012dbce */

int FUN_1012dbce(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                uint param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_30;
  undefined1 auStack_2c [8];
  
  if ((param_5 == 0) || (param_6 == 0)) {
    return 0;
  }
  uVar4 = param_3 & 0xfffffffc;
  iVar1 = param_5;
  if ((int)param_3 >> 0x1f != param_4 || uVar4 != param_3) {
    local_30 = 4;
    iVar1 = FUN_100a69b0(param_1,uVar4,auStack_2c,&local_30);
    if (iVar1 != 0) {
      return 0;
    }
    uVar3 = param_6;
    if (((((int)param_3 >> 0x1f) - param_4) - (uint)(uVar4 < param_3)) +
        (uint)(0xfffffffb < uVar4 - param_3) == 0 && (uVar4 - param_3) + 4 < param_6) {
      uVar3 = (4 - param_3) + uVar4;
    }
    FUN_1011ea40(param_5,auStack_2c + (param_3 - uVar4),uVar3);
    param_3 = param_3 + uVar3;
    param_6 = param_6 - uVar3;
    iVar1 = param_5 + uVar3;
  }
  local_30 = param_6 & 0xfffffffc;
  if (local_30 != 0) {
    iVar2 = FUN_100a69b0(param_1,param_3,iVar1,&local_30);
    if (iVar2 != 0) goto LAB_1012dc68;
    param_3 = param_3 + local_30;
    iVar1 = iVar1 + local_30;
    param_6 = param_6 - local_30;
  }
  if (param_6 != 0) {
    local_30 = 4;
    iVar2 = FUN_100a69b0(param_1,param_3,auStack_2c,&local_30);
    if (iVar2 == 0) {
      FUN_1011ea40(iVar1,auStack_2c,param_6);
      iVar1 = iVar1 + param_6;
    }
  }
LAB_1012dc68:
  return iVar1 - param_5;
}

