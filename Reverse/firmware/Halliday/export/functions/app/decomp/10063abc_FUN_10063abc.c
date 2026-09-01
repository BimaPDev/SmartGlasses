/* FUN_10063abc @ 0x10063abc */

undefined4 FUN_10063abc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  uint uVar2;
  int *piVar3;
  
  FUN_10114a38();
  iVar1 = DAT_10063b58;
  piVar3 = DAT_10063b54;
  if (*DAT_10063b54 != param_1) {
    piVar3 = (int *)0x0;
  }
  if (DAT_10063b54[7] == param_1) {
    piVar3 = DAT_10063b54 + 7;
  }
  if (DAT_10063b54[0xe] == param_1) {
    piVar3 = DAT_10063b54 + 0xe;
  }
  FUN_101150e0();
  uVar2 = (iVar1 - DAT_10063b5c) * 0x20 & 0xff00;
  if (piVar3 == (int *)0x0) {
    FUN_100a5b78(uVar2 | 0x660011,DAT_10063b64,DAT_10063b60,param_1);
  }
  else {
    iVar1 = FUN_10115574(*piVar3,extraout_r1,5000,0,param_4);
    if (iVar1 == 0) {
      FUN_10114a38();
      *piVar3 = 0;
      FUN_101150e0();
      FUN_100a5b78(uVar2 | 0x750031,DAT_10063b64,DAT_10063b6c,param_1);
      return 0;
    }
    FUN_100a5b78(uVar2 | 0x6c0011,DAT_10063b64,DAT_10063b68);
  }
  return 0xfffffff0;
}

