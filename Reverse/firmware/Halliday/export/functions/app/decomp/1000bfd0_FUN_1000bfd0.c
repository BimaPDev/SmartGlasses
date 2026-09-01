/* FUN_1000bfd0 @ 0x1000bfd0 */

void FUN_1000bfd0(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_20 [2];
  undefined1 local_1e;
  byte local_1d;
  undefined1 local_1c;
  undefined4 local_18;
  code *local_14;
  int local_c;
  
  local_c = *DAT_1000c294;
  FUN_1011ea48(auStack_20,0,0x14,0);
  uVar2 = FUN_10116640();
  iVar3 = FUN_1012d0fc(auStack_20,uVar2);
  if (iVar3 == 0) goto LAB_1000c0aa;
  switch(local_1e) {
  case 1:
    FUN_100a5b78((DAT_1000c298 - DAT_1000c29c) * 0x20 & 0xff00U | 0xe40031,DAT_1000c2a4,DAT_1000c2c0
                 ,local_18);
    FUN_100a1690(local_18,local_1c,1);
    break;
  default:
    FUN_100a5b78(DAT_1000c2cc | (DAT_1000c298 - DAT_1000c29c) * 0x20 & 0xff00U,DAT_1000c2a4,
                 DAT_1000c2d0);
    break;
  case 4:
    FUN_1009e3b4(local_18,1);
    break;
  case 7:
    FUN_1000c5c8(local_18);
    break;
  case 8:
    FUN_1000c750(auStack_20);
    break;
  case 10:
    if (local_1d == 1) {
      FUN_100a299c();
    }
    break;
  case 0xb:
    FUN_1000c8d8(auStack_20);
    break;
  case 0xc:
    break;
  case 0xd:
    FUN_10138b7e(0x25,0,3);
    FUN_1011dbc8(500);
    uVar4 = (DAT_1000c298 - DAT_1000c29c) * 0x20 & 0xff00U | 0xa30000;
    uVar2 = DAT_1000c2b4;
    goto LAB_1000c08a;
  case 0x10:
    FUN_100a1b34(2);
    break;
  case 0x11:
    FUN_1012d8f6(local_1d);
    break;
  case 0x15:
    uVar4 = (uint)local_1d;
    if (uVar4 - 1 < 2) {
      uVar2 = FUN_1009e224();
      goto LAB_1000c06c;
    }
    if (uVar4 != 0xb) {
      uVar2 = DAT_1000c2a8;
      if (uVar4 - 7 < 2) goto LAB_1000c06c;
      break;
    }
    uVar4 = (DAT_1000c298 - DAT_1000c29c) * 0x20 & 0xff00U | 0x670000;
    uVar2 = DAT_1000c2a0;
    goto LAB_1000c08a;
  case 0x16:
    FUN_1000c57c(local_18);
    break;
  case 0x1d:
    FUN_1001b21c();
    iVar3 = FUN_100a5114();
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar2 = 2;
    }
    FUN_1000c3e0(uVar2);
    FUN_1001227c();
    FUN_1004f6f8();
    FUN_1001c9e8();
    FUN_1001ca0c();
    if (*DAT_1000c2b8 != '\0') {
      FUN_100a5b78((DAT_1000c298 - DAT_1000c29c) * 0x20 & 0xff00U | 0xcc0031,DAT_1000c2a4,
                   DAT_1000c2bc);
      uVar2 = FUN_10115464();
      FUN_10115194(uVar2,0);
    }
    pbVar1 = DAT_1000c2b0;
    if (*DAT_1000c2b0 != 0) {
      local_1e = 0x22;
      local_1d = *DAT_1000c2b0;
      uVar2 = FUN_1009e224();
      FUN_1009ece8(uVar2,auStack_20);
      *pbVar1 = 0;
    }
    FUN_1000fe34();
    break;
  case 0x22:
    if (local_1d != 7) {
      if (local_1d == 5) {
        uVar2 = FUN_1009e224();
        iVar3 = FUN_1009ece8(uVar2,auStack_20);
        if (iVar3 != 0) {
          uVar2 = 1;
          goto LAB_1000c0a0;
        }
        *DAT_1000c2b0 = 5;
      }
      else {
        FUN_1000ca14(auStack_20);
        FUN_100a1ba4(local_1d);
      }
      break;
    }
    uVar4 = (DAT_1000c298 - DAT_1000c29c) * 0x20 & 0xff00U | 0x710000;
    uVar2 = DAT_1000c2ac;
LAB_1000c08a:
    FUN_100a5b78(uVar4 | 0x31,DAT_1000c2a4,uVar2);
    FUN_1012d8b0();
    break;
  case 0x24:
    thunk_FUN_1000ad9c(local_1d,local_18);
    break;
  case 0x25:
    FUN_1000c3e0(0);
    if (*DAT_1000c2c4 != '\0') {
      *DAT_1000c2c4 = '\0';
      uVar2 = FUN_10115464();
      FUN_10115194(uVar2,0);
    }
    break;
  case 0x26:
    FUN_10010f00();
    break;
  case 0x29:
    FUN_100a5b78((DAT_1000c298 - DAT_1000c29c) * 0x20 & 0xff00U | 0x1060032,DAT_1000c2a4,
                 DAT_1000c2c8,local_1d,local_18);
    break;
  case 0x2a:
    FUN_100bae78();
  }
  while( true ) {
    uVar2 = 0;
LAB_1000c0a0:
    if (local_14 != (code *)0x0) {
      (*local_14)(auStack_20,uVar2,0);
    }
LAB_1000c0aa:
    FUN_10116668();
    if (*DAT_1000c294 == local_c) break;
    FUN_1013cdc0();
    uVar2 = DAT_1000c2a8;
LAB_1000c06c:
    FUN_1009ece8(uVar2,auStack_20);
  }
  return;
}

