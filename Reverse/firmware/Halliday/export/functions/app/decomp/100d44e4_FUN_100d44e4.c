/* FUN_100d44e4 @ 0x100d44e4 */

undefined4
FUN_100d44e4(undefined1 param_1,undefined1 param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [2];
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  int local_24;
  undefined4 local_20;
  
  FUN_1011ea48(auStack_2c,0,0x14);
  iVar1 = FUN_100b9d90(param_4 + 1);
  if (iVar1 == 0) {
    uVar3 = 0xfffffff4;
  }
  else {
    FUN_1011ea48(iVar1,0,param_4 + 1);
    if (param_3 != 0) {
      FUN_1011ea40(iVar1,param_3,param_4);
    }
    local_28 = param_5;
    local_20 = DAT_100d455c;
    local_2a = param_1;
    local_29 = param_2;
    local_24 = iVar1;
    iVar2 = FUN_1009ece8(DAT_100d4558,auStack_2c);
    if (iVar2 == 0) {
      FUN_100b9e04(iVar1);
      uVar3 = 0xfffffffb;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

