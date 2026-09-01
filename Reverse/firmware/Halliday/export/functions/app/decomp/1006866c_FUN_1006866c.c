/* FUN_1006866c @ 0x1006866c */

undefined4 FUN_1006866c(void)

{
  undefined4 in_r3;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_1006872c;
  uVar3 = (DAT_10068724 - DAT_10068720) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_10068728 | uVar3,DAT_10068734,DAT_10068730,DAT_10068720,in_r3);
  if (*(int *)(iVar1 + 0x28) << 6 < 0) {
    FUN_100a5b78(DAT_10068738 | uVar3,DAT_10068734,DAT_1006873c);
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  if (iVar1 << 7 < 0) {
    FUN_100a5b78(DAT_10068740 | uVar3,DAT_10068734,DAT_10068744,iVar1,in_r3);
  }
  iVar1 = DAT_1006872c;
  iVar2 = *(int *)(DAT_1006872c + 0x28) << 0xb;
  if (iVar2 < 0) {
    FUN_100a5b78(DAT_10068748 | uVar3,DAT_10068734,DAT_1006874c,iVar2,in_r3);
  }
  if (*(int *)(iVar1 + 0x28) << 0xc < 0) {
    FUN_100a5b78(DAT_10068750 | uVar3,DAT_10068734,DAT_10068754,*(int *)(iVar1 + 0x28),in_r3);
  }
  iVar1 = DAT_1006872c;
  if (*(int *)(DAT_1006872c + 0x28) << 0xd < 0) {
    FUN_100a5b78(DAT_10068758 | uVar3,DAT_10068734,DAT_1006875c);
  }
  if (*(int *)(iVar1 + 0x28) << 0xe < 0) {
    FUN_100a5b78(DAT_10068760 | uVar3,DAT_10068734,DAT_10068764);
  }
  iVar1 = DAT_1006872c;
  if (*(int *)(DAT_1006872c + 0x28) << 0xf < 0) {
    FUN_100a5b78(uVar3 | 0x2280011,DAT_10068734,DAT_10068768);
  }
  *(uint *)(iVar1 + 0x28) = ~((uint)~(*(int *)(iVar1 + 0x28) << 0x10) >> 0x10);
  return 0;
}

