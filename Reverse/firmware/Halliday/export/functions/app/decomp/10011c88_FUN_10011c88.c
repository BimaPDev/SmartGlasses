/* FUN_10011c88 @ 0x10011c88 */

void FUN_10011c88(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = DAT_10011e10;
  iVar5 = *DAT_10011df8;
  uVar6 = (DAT_10011dfc - DAT_10011e00) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_10011e04 | uVar6,DAT_10011e0c,DAT_10011e08,DAT_10011e00,param_1);
  FUN_10084080(0x3c,DAT_10011e14);
  if (*(char *)(iVar1 + 0x8e) != '\n') {
    FUN_100112e0(0x400);
  }
  iVar4 = thunk_FUN_1009f30c(0x4b8,DAT_10011e18);
  piVar2 = DAT_10011e1c;
  *DAT_10011e1c = iVar4;
  if (iVar4 != 0) goto LAB_10011d1c;
  FUN_100a5b78(DAT_10011e20 | uVar6,DAT_10011e0c,DAT_10011e24);
  while( true ) {
    if (*piVar2 != 0) {
      FUN_1001154c();
      FUN_1012d1f4(*piVar2);
      *piVar2 = 0;
    }
    if (*(char *)(iVar1 + 0x8e) != '\n') {
      FUN_100113e4();
    }
    *(byte *)(iVar1 + 0x8c) = *(byte *)(iVar1 + 0x8c) | 2;
    if (*DAT_10011df8 == iVar5) break;
    FUN_1013cdc0();
LAB_10011d1c:
    pcVar3 = DAT_10011e48;
    if (*DAT_10011e48 == '\x01') {
      FUN_1011ea48(DAT_10011e28,0,0x744);
      iVar4 = FUN_100a9d10(5,5,0);
      FUN_1011ea40(DAT_10011e2c,iVar4 + 0x41c,0x200);
      FUN_1011ea40(DAT_10011e30,iVar4 + 0x61c,0x128);
      FUN_100a9cc0(5,5,DAT_10011e28,0x744);
      FUN_100a9cc0(2,2,DAT_10011e28,0x744);
      *pcVar3 = '\0';
    }
    iVar4 = DAT_10011e10;
    *(undefined4 *)(iVar1 + 0x1c) = DAT_10011e34;
    FUN_1000bf74(iVar4);
    FUN_1013ceac(*piVar2 + 0x418,DAT_10011e38,0);
    iVar4 = DAT_10011e10;
    do {
      FUN_1000bf34(iVar4);
      if ((*(char *)(*piVar2 + 0x470) != '\0') && (*(char *)(*piVar2 + 0x471) == '\0')) {
        FUN_10011734();
      }
      if (1000 < *(ushort *)(*piVar2 + 0x474)) {
        FUN_100a5b78(uVar6 | 0x2680011,DAT_10011e0c,DAT_10011e3c);
        FUN_1001154c(*piVar2);
      }
      FUN_10116668();
    } while (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c) << 0x1f));
  }
  FUN_100a5b78(DAT_10011e40 | uVar6,DAT_10011e0c,DAT_10011e44);
  return;
}

