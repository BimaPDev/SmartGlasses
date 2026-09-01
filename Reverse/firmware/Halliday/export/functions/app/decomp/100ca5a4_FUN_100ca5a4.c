/* FUN_100ca5a4 @ 0x100ca5a4 */

int FUN_100ca5a4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = param_4;
  uVar3 = FUN_1013c70e();
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 != 0) {
    uVar2 = extraout_r2;
    uVar4 = extraout_r3;
    FUN_10119dc2(DAT_100ca614,DAT_100ca610,DAT_100ca60c,0xac4,uVar3,extraout_r2,extraout_r3,uVar5);
    FUN_1011a1f0(DAT_100ca60c,0xac4,uVar2,uVar4);
    uVar2 = extraout_r1;
  }
  iVar1 = DAT_100ca618;
  if (param_1 != 0) {
    iVar1 = param_1;
  }
  iVar1 = FUN_1013270a(iVar1,uVar2,param_3,param_4);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100ca624 | (DAT_100ca620 - DAT_100ca61c) * 0x20 & 0xff00U,DAT_100ca62c,
                 DAT_100ca628);
  }
  else {
    FUN_100c1bc4(iVar1 + 8,param_2 + 4);
  }
  return iVar1;
}

