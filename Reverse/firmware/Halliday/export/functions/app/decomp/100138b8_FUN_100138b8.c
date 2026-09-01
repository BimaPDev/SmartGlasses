/* FUN_100138b8 @ 0x100138b8 */

void FUN_100138b8(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_28 [2];
  undefined1 local_26;
  undefined1 local_25;
  int local_14;
  
  local_14 = *DAT_10013958;
  FUN_1011ea48(auStack_28,0,0x14,0);
  local_26 = 200;
  iVar4 = FUN_10013660();
  iVar3 = DAT_10013960;
  iVar2 = DAT_1001395c;
  if (iVar4 == 0) goto LAB_10013932;
  if ((*(byte *)(iVar4 + 4) & 0xc) == 0) goto LAB_10013932;
  *(undefined4 *)(iVar4 + 0x214) = 0;
  *(undefined4 *)(iVar4 + 0x218) = 0;
  FUN_100a5b78(DAT_10013964 | (iVar3 - iVar2) * 0x20 & 0xff00U,DAT_1001396c,DAT_10013968,
               (*(byte *)(iVar4 + 4) & 0xf) >> 2);
  *(byte *)(iVar4 + 3) = *(byte *)(iVar4 + 3) & 0xe7 | 8;
  bVar1 = *(byte *)(iVar4 + 4);
  *(byte *)(iVar4 + 4) = bVar1 & 0xfd;
  if ((bVar1 & 0xc) != 4) goto LAB_10013940;
  FUN_100137ec(iVar4,0);
  while( true ) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0xf3;
LAB_10013932:
    if (*DAT_10013958 == local_14) break;
    FUN_1013cdc0();
LAB_10013940:
    local_25 = 2;
    uVar5 = FUN_1009e224();
    FUN_1009ece8(uVar5,auStack_28);
  }
  return;
}

