/* FUN_1406dbd8 @ 0x1406dbd8 */

void FUN_1406dbd8(uint param_1)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = DAT_1406dc9c;
  iVar6 = param_1 + 6;
  iVar5 = *(int *)(DAT_1406dc9c + iVar6 * 4);
  if ((1 < param_1) || (iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406dc98,0x83,DAT_1406dc94);
  }
  psVar1 = (short *)(DAT_1406dc9c + 0x2e);
  bVar2 = *(byte *)(iVar5 + 0x3b);
  *(uint *)(DAT_1406dc9c + 0x24) = *(uint *)(DAT_1406dc9c + 0x24) & ~(1 << (param_1 & 0xff));
  *(ushort *)(iVar3 + 0x2e) = (ushort)bVar2 + *psVar1;
  FUN_1407166c(param_1);
  iVar4 = *(int *)(iVar5 + 0x24);
  while (iVar4 != 0) {
    while( true ) {
      iVar4 = FUN_14073a58(iVar5 + 0x24);
      if (*(short *)(iVar4 + 10) != 0) break;
      FUN_14078458();
      FUN_14074168(iVar4);
      if (*(int *)(iVar5 + 0x24) == 0) goto LAB_1406dc56;
    }
    FUN_14075b28(*(undefined4 *)(iVar4 + 4));
    FUN_14074168(iVar4 + -0xc);
    iVar4 = *(int *)(iVar5 + 0x24);
  }
LAB_1406dc56:
  iVar4 = *(int *)(iVar5 + 0x1c);
  while (iVar4 != 0) {
    FUN_14073a58(iVar5 + 0x1c);
    FUN_140735a8();
    iVar4 = *(int *)(iVar5 + 0x1c);
  }
  FUN_1406e5ec(param_1);
  FUN_14074168(*(undefined4 *)(iVar3 + iVar6 * 4));
  *(undefined4 *)(iVar3 + iVar6 * 4) = 0;
  return;
}

