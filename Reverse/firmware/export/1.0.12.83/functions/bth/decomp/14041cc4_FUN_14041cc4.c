/* FUN_14041cc4 @ 0x14041cc4 */

void FUN_14041cc4(void)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(DAT_14041d28 + 0x11);
  uVar4 = (uint)bVar1;
  if (uVar4 != 0xff) {
    uVar3 = (uint)*(byte *)(DAT_14041d28 + uVar4 + 1);
    if (uVar3 == 0xf) {
      puVar2 = (undefined1 *)FUN_14074378(0xd62,4,0,2);
      puVar2[1] = bVar1;
      *puVar2 = 0x65;
      FUN_140743d0();
      return;
    }
    if (uVar3 - 0x10 < 2) {
      FUN_1402a6e8(4,0x3eb,DAT_14041d38,DAT_14041d34,DAT_14041d30,DAT_14041d2c,uVar3);
      return;
    }
  }
  FUN_14045194(6,uVar4);
  return;
}

