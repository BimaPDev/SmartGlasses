/* FUN_10063e14 @ 0x10063e14 */

int FUN_10063e14(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = DAT_10063eac;
  iVar5 = 500;
  uVar4 = (DAT_10063e94 - DAT_10063e98) * 0x20 & 0xff00;
  iVar7 = param_1;
  uVar8 = param_2;
  uVar9 = param_3;
  do {
    FUN_1011dbf4(DAT_10063e9c,0xffffffff);
    iVar1 = FUN_10063b7c(param_1,param_2,param_3,0,iVar7,uVar8,uVar9);
    FUN_10063b70();
    if (iVar1 == 0) {
      return 0;
    }
    FUN_100a5b78(uVar4 | 0x1080031,uVar3,DAT_10063ea0,iVar5);
    FUN_1011dbc8(2);
    bVar6 = iVar5 != 0;
    iVar5 = iVar5 + -1;
  } while ((bVar6) && (iVar2 = FUN_10115464(), param_1 != iVar2));
  uVar3 = FUN_10115464();
  FUN_100a5b78(DAT_10063ea4 | uVar4,DAT_10063eac,DAT_10063ea8,iVar5,param_1,uVar3);
  return iVar1;
}

