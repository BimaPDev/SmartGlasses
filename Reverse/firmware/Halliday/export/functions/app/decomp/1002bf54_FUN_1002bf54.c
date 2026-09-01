/* FUN_1002bf54 @ 0x1002bf54 */

void FUN_1002bf54(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  
  iVar4 = *DAT_1002c008;
  iVar5 = *DAT_1002c00c;
  if (iVar5 == 0) {
    if (*DAT_1002c008 != iVar4) goto LAB_1002bfc6;
    return;
  }
  unaff_r5 = (uint)*(byte *)(iVar5 + 0xad);
  FUN_1002efe4();
  bVar1 = FUN_10126fd2(*(undefined4 *)(iVar5 + 0x10));
  unaff_r6 = (uint)bVar1;
  if (unaff_r6 <= unaff_r5) {
    unaff_r5 = 0;
  }
  unaff_r7 = 0;
  do {
    uVar2 = *(undefined4 *)(iVar5 + 0x10);
    if (unaff_r6 <= (unaff_r7 & 0xff)) {
      *(char *)(iVar5 + 0xad) = (char)unaff_r5;
      unaff_r6 = FUN_10126fb4(uVar2,unaff_r5);
      FUN_1012bb5c(*(undefined4 *)(iVar5 + 0x14),0,*(undefined1 *)(iVar5 + 0xac));
      FUN_1012bb2a(*(undefined4 *)(iVar5 + 0x14),(int)(short)((short)unaff_r5 + 1));
      FUN_10124c20(*(undefined4 *)(iVar5 + 0x14),1);
      FUN_10124c20(*(undefined4 *)(iVar5 + 8),1);
      if (*DAT_1002c008 == iVar4) {
        FUN_101245ce(unaff_r6);
        return;
      }
LAB_1002bfc6:
      uVar2 = FUN_1013cdc0();
    }
    uVar2 = FUN_10126fb4(uVar2,unaff_r7);
    uVar3 = FUN_10087308();
    FUN_1008740c(uVar3,uVar2);
    FUN_10124cea(uVar2,0x400);
    unaff_r7 = unaff_r7 + 1;
  } while( true );
}

