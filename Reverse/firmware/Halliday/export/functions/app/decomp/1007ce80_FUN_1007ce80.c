/* FUN_1007ce80 @ 0x1007ce80 */

void FUN_1007ce80(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  iVar2 = DAT_1007cf90;
  if (*(char *)(DAT_1007cf90 + 0x13f) != '\x01') {
    FUN_1007cbc4();
    *(undefined2 *)(iVar2 + 0x15a) = 0;
    *(byte *)(iVar2 + 0x13d) = *(byte *)(iVar2 + 0x13d) | 1;
    *(undefined1 *)(iVar2 + 0x141) = 1;
LAB_1007ceac:
    FUN_1007cae0(3);
    return;
  }
  if (*(char *)(DAT_1007cf90 + 0x1e2) != '\0') {
    *(undefined1 *)(DAT_1007cf90 + 0x1e2) = 0;
    uVar4 = FUN_1011fee8();
    iVar3 = DAT_1007cf94;
    *(undefined4 *)(iVar2 + 0x1d8) = uVar4;
    FUN_100a5b78((DAT_1007cf98 - iVar3) * 0x20 & 0xff00U | 0x1320031,DAT_1007cfa0,DAT_1007cf9c,uVar4
                );
  }
  if (*(ushort *)(iVar2 + 0x158) < 0x5dc) {
    sVar1 = *(ushort *)(iVar2 + 0x158) + 1;
    *(short *)(iVar2 + 0x158) = sVar1;
    if (sVar1 == 0x5dc) {
      *(short *)(iVar2 + 0x15a) = *(short *)(iVar2 + 0x15a) + 300;
      goto LAB_1007ceac;
    }
  }
  else if (-1 < param_1) {
    if ((int)(uint)*(ushort *)(iVar2 + 0x1e) < param_1) {
      FUN_100a5b78(DAT_1007cfac | (DAT_1007cf98 - DAT_1007cf94) * 0x20 & 0xff00U,DAT_1007cfa0,
                   DAT_1007cfb0);
      *(undefined2 *)(iVar2 + 0x15a) = 0;
      *(byte *)(iVar2 + 0x13d) = *(byte *)(iVar2 + 0x13d) & 0xfc | 1;
      uVar5 = 3;
    }
    else {
      if (((int)((uint)*(byte *)(iVar2 + 0x13d) << 0x1f) < 0) &&
         (0x707 < *(ushort *)(iVar2 + 0x15a))) {
        *(undefined2 *)(iVar2 + 0x15a) = 0;
        *(byte *)(iVar2 + 0x13d) = *(byte *)(iVar2 + 0x13d) | 2;
        FUN_100a5b78(DAT_1007cfa4 | (DAT_1007cf98 - DAT_1007cf94) * 0x20 & 0xff00U,DAT_1007cfa0,
                     DAT_1007cfa8);
      }
      uVar5 = 1;
    }
    *(undefined1 *)(iVar2 + 0x141) = uVar5;
  }
  return;
}

