/* FUN_1001b2b8 @ 0x1001b2b8 */

undefined4 FUN_1001b2b8(void)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_30 [2];
  byte local_2e;
  char local_2d;
  code *local_24;
  int local_1c;
  
  local_1c = *DAT_1001b3e4;
  FUN_1011ea48(auStack_30,0,0x14,0);
  iVar3 = FUN_1012d9ac();
  uVar5 = (DAT_1001b3e8 - DAT_1001b3ec) * 0x20 & 0xff00;
  if (iVar3 != 0) goto LAB_1001b302;
  FUN_100a5b78(uVar5 | 0x5b0031,DAT_1001b3f4,DAT_1001b3f0);
LAB_1001b2f4:
  if (*DAT_1001b3e4 == local_1c) {
    return 0;
  }
  FUN_1013cdc0();
LAB_1001b302:
  FUN_100a5b78(uVar5 | 0x5e0031,DAT_1001b3f4,DAT_1001b3f8);
  iVar3 = FUN_1011a86a();
  if (iVar3 == 0) {
    FUN_100557f8();
  }
  pcVar1 = DAT_1001b3fc;
  FUN_1011aabe(1);
  FUN_1001b260();
  uVar2 = DAT_1001b410;
LAB_1001b32e:
  if (*pcVar1 != '\0') goto code_r0x1001b332;
  uVar4 = FUN_10116640();
  iVar3 = FUN_1012d0fc(auStack_30,uVar4);
  if (iVar3 == 0) goto LAB_1001b3c0;
  if (local_2e == 0x27) {
    FUN_100a5b78(uVar5 | uVar2,DAT_1001b40c,DAT_1001b408);
    FUN_100a3170(0);
    goto LAB_1001b3b4;
  }
  if (0x27 < local_2e) goto LAB_1001b39e;
  if (local_2e != 7) {
    if (local_2e == 0x15) {
      if (local_2d == '\x02') {
        FUN_100557f8();
      }
      if (local_2d == '\r') {
        FUN_100a5b78(uVar5 | 0x830031,DAT_1001b3f4,DAT_1001b404);
        *pcVar1 = '\x01';
      }
      goto LAB_1001b3b4;
    }
    goto LAB_1001b32e;
  }
  FUN_1011aab8(1);
  FUN_1011aabe(1);
  goto LAB_1001b3b4;
LAB_1001b39e:
  if (local_2e != 0x28) goto LAB_1001b32e;
  FUN_1001b260();
LAB_1001b3b4:
  if (local_24 != (code *)0x0) {
    (*local_24)(auStack_30,0);
  }
LAB_1001b3c0:
  FUN_10116668();
  goto LAB_1001b32e;
code_r0x1001b332:
  FUN_1001b5cc();
  FUN_1011aab8(1);
  FUN_100a5b78(uVar5 | 0x980031,DAT_1001b3f4,DAT_1001b400);
  FUN_1005576c(0);
  goto LAB_1001b2f4;
}

