/* FUN_140259c4 @ 0x140259c4 */

/* WARNING: Removing unreachable block (ram,0x14029096) */
/* WARNING: Removing unreachable block (ram,0x1402909a) */
/* WARNING: Removing unreachable block (ram,0x1402909c) */

void FUN_140259c4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = DAT_14025a04;
  if (*DAT_14025a00 != '\0') {
    return;
  }
  *DAT_14025a00 = '\x01';
  iVar2 = iVar3 + 0x118;
  do {
    *(undefined1 *)(iVar3 + -0x14) = 0;
    *(int *)(iVar3 + -0x10) = iVar3;
    iVar1 = DAT_14025a0c;
    iVar5 = DAT_14025a08;
    iVar3 = iVar3 + 0x14;
  } while (iVar3 != iVar2);
  *(undefined4 *)(DAT_14025a08 + 0x11c) = 0;
  *(int *)(iVar5 + 300) = iVar5;
  *(undefined4 *)(iVar5 + 0x130) = 0;
  *(undefined4 *)(iVar5 + 0x134) = 0;
  uVar4 = 1;
  iVar2 = *DAT_14029134;
  *(int *)(DAT_14029138 + 4) = iVar1;
  *(undefined4 *)(iVar2 + 0x2c) = 1;
  iVar3 = DAT_14029144;
  if ((iVar1 != 0) && (*(int *)(DAT_1402913c + 4) != 0)) {
    uVar4 = (uint)*(char *)(DAT_14029140 + 1);
    *(int *)(*(int *)(DAT_14029144 + 8) + (uVar4 + 0x10) * 4) = *(int *)(DAT_1402913c + 4);
    DataSynchronizationBarrier(0xf);
    if ((int)uVar4 < 0) {
      *(undefined1 *)((uVar4 & 0xf) + iVar3 + 0x14) = 0xa0;
      *(undefined4 *)(iVar2 + 0x28) = 0x23;
      return;
    }
    iVar3 = (uVar4 >> 5) * 4;
    iVar5 = 1 << (uVar4 & 0x1f);
    *(undefined1 *)(uVar4 + 0xe000e400) = 0xa0;
    *(int *)(&DAT_e000e280 + iVar3) = iVar5;
    *(int *)(&DAT_e000e100 + iVar3) = iVar5;
    uVar4 = 0x21;
  }
  *(uint *)(iVar2 + 0x28) = uVar4 | 2;
  return;
}

