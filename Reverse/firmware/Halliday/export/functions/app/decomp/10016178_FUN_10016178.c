/* FUN_10016178 @ 0x10016178 */

void FUN_10016178(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  int local_14;
  
  local_14 = *DAT_10016284;
  iVar1 = FUN_10015d78();
  if (iVar1 == 0) goto LAB_100161ec;
  bVar4 = *(byte *)(iVar1 + 0x49) & 4;
  if ((*(byte *)(iVar1 + 0x49) & 4) != 0) {
    FUN_1011ea48(auStack_28,0,0x14);
    bVar4 = (*(byte *)(iVar1 + 0x49) >> 4) + 1;
    *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) & 0xf | bVar4 * '\x10';
    if (9 < (bVar4 & 0xf)) {
      FUN_100a5b78((DAT_100162b0 - DAT_100162ac) * 0x20 & 0xff00U | 0x11c0011,DAT_100162b8,
                   DAT_100162b4);
      FUN_10015b10();
      goto LAB_100161ec;
    }
    iVar2 = FUN_1012da4a(DAT_10016288);
    uVar3 = DAT_1001628c;
    if (iVar2 == 0) goto LAB_100161fa;
    do {
      FUN_1011e9f8(iVar1 + 0x4b,uVar3,0x10);
      local_26 = 0xdcca;
      FUN_1009ece8(DAT_10016290,auStack_28);
      *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) & 0xb;
LAB_100161ec:
      while( true ) {
        if (*DAT_10016284 == local_14) {
          return;
        }
        FUN_1013cdc0();
LAB_100161fa:
        iVar2 = FUN_1012da4a(DAT_10016294);
        uVar3 = DAT_10016298;
        if (((iVar2 != 0) || (iVar2 = FUN_1012da4a(DAT_1001629c), uVar3 = DAT_100162a0, iVar2 != 0))
           || (iVar2 = FUN_1012da4a(DAT_100162a4), uVar3 = DAT_100162a8, iVar2 != 0)) break;
        FUN_10116500(iVar1 + 0x1c,1000,0);
      }
    } while( true );
  }
  FUN_100169f4(iVar1,bVar4);
  *DAT_100162bc = bVar4;
  FUN_10015b10();
  FUN_100a5b78(DAT_100162c0 | (DAT_100162b0 - DAT_100162ac) * 0x20 & 0xff00U,DAT_100162c8,
               DAT_100162c4);
  goto LAB_100161ec;
}

