/* FUN_14042138 @ 0x14042138 */

void FUN_14042138(void)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(DAT_140421a4 + 0x10);
  uVar4 = (uint)bVar1;
  if (uVar4 != 0xff) {
    uVar3 = (uint)*(byte *)(DAT_140421a4 + uVar4 + 1);
    if (uVar3 == 10) {
      puVar2 = (undefined1 *)FUN_14074378(0xd62,4,0,2);
      puVar2[1] = bVar1;
      *puVar2 = 0x65;
      FUN_140743d0();
      FUN_14041f98(uVar4,0xb);
      return;
    }
    if (uVar3 - 0xb < 2) {
      FUN_1402a6e8(4,0x3a2,DAT_140421b4,DAT_140421b0,DAT_140421ac,DAT_140421a8,uVar3);
      return;
    }
  }
  FUN_14045194(4,uVar4);
  return;
}

