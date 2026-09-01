/* FUN_1005d4c8 @ 0x1005d4c8 */

void FUN_1005d4c8(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = DAT_1005d4fc;
  uVar3 = (uint)*(byte *)(DAT_1005d4fc + 3);
  if (uVar3 < 0x20) {
    iVar4 = uVar3 * 0x6c + DAT_1005d4fc;
    bVar1 = *(byte *)(iVar4 + 10);
    if (bVar1 < 0x20) {
      *(byte *)(iVar4 + 10) = bVar1 & 1 | (byte)(((bVar1 >> 1) + 1 & 0x7f) << 1);
      *(undefined4 *)(iVar2 + (uVar3 * 0x1b + (uint)(bVar1 >> 1)) * 4 + 0x34) = param_1;
    }
  }
  return;
}

