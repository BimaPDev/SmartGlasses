/* FUN_14037dd8 @ 0x14037dd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14037dd8(void)

{
  uint uVar1;
  
  uVar1 = FUN_140e5888();
  if (uVar1 < 2) {
    FUN_14037cb8(DAT_14037e54,0x2778);
    FUN_1402a6e8(4,0xe1,DAT_14037e4c,DAT_14037e48,DAT_14037e5c,*(undefined4 *)(DAT_14037e58 + 0x1dc)
                );
  }
  else {
    FUN_14037cb8(DAT_14037e40,0x4100);
    FUN_1402a6e8(4,0xe9,DAT_14037e4c,DAT_14037e48,DAT_14037e44,_DAT_c000ce70);
  }
  *(uint *)(DAT_14037e50 + 0xe00) = *(uint *)(DAT_14037e50 + 0xe00) | 0x80000000;
  return;
}

