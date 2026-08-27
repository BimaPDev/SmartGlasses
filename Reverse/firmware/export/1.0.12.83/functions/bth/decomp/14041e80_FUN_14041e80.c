/* FUN_14041e80 @ 0x14041e80 */

undefined4 FUN_14041e80(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  
  iVar2 = DAT_14041edc;
  iVar1 = DAT_14041ed8;
  uVar4 = (uint)*(byte *)(DAT_14041ed8 + 0x407);
  if (uVar4 != 4) {
    pcVar3 = *(code **)(DAT_14041edc + uVar4 * 4);
    if (pcVar3 == (code *)0x0) {
      FUN_1402a6e8(4,0x51c,DAT_14041ee4,DAT_14041eec,DAT_14041ee8,0x51c,DAT_14041ee0,uVar4,1);
      pcVar3 = *(code **)(iVar2 + (uint)*(byte *)(iVar1 + 0x407) * 4);
    }
    (*pcVar3)();
    *(char *)(iVar1 + 0x407) = *(char *)(iVar1 + 0x407) + '\x01';
    return 1;
  }
  return 0;
}

