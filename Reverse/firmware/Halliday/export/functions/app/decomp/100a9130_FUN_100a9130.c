/* FUN_100a9130 @ 0x100a9130 */

int FUN_100a9130(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 auStack_2c [2];
  undefined1 local_2a;
  undefined1 local_29;
  int local_24;
  int iVar7;
  
  iVar3 = FUN_100a7d8c();
  iVar4 = FUN_100a9a88();
  if (iVar4 != 0) {
    uVar1 = UnsignedSaturate(param_2,8);
    UnsignedDoesSaturate(param_2,8);
    FUN_100a9600(iVar4,10,uVar1 | uVar1 << 8,0);
  }
  iVar4 = FUN_100a7b2c(param_1,param_2);
  if (param_3 == 0) {
LAB_100a9202:
    iVar7 = 0;
  }
  else {
    iVar7 = param_3;
    if (iVar4 == 2) {
      iVar4 = FUN_10061948();
      if ((uint)(iVar4 - *DAT_100a9218) <= DAT_100a921c) goto LAB_100a917a;
      uVar5 = 0x19;
    }
    else {
      if (iVar4 != 1) goto LAB_100a9202;
      iVar4 = FUN_10061948();
      if ((uint)(iVar4 - *DAT_100a9218) <= DAT_100a921c) goto LAB_100a917a;
      uVar5 = 0x18;
    }
    piVar2 = DAT_100a9218;
    FUN_100a1b34(uVar5);
    iVar4 = FUN_10061948();
    *piVar2 = iVar4;
  }
LAB_100a917a:
  uVar6 = (undefined1)iVar7;
  iVar4 = FUN_100a7d8c(param_1);
  if (iVar4 == iVar3) {
    uVar6 = 1;
  }
  else {
    if (param_1 == 5) {
      FUN_101314ec(param_2);
    }
    else if (param_1 == 2) {
      FUN_10131428(param_2);
    }
    FUN_100a5b78((DAT_100a9224 - DAT_100a9220) * 0x20 & 0xff00U | 0x690032,DAT_100a922c,DAT_100a9228
                 ,iVar3,param_2);
    iVar3 = param_2;
  }
  if (param_3 != 0) {
    FUN_1011ea48(auStack_2c,0,0x14);
    local_2a = 0xc;
    local_29 = uVar6;
    local_24 = iVar3;
    FUN_1009ece8(DAT_100a9230,auStack_2c);
  }
  return iVar3;
}

