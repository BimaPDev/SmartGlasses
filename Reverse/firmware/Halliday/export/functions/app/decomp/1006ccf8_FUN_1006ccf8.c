/* FUN_1006ccf8 @ 0x1006ccf8 */

void FUN_1006ccf8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  puVar2 = (uint *)**(int **)(param_1 + 4);
  uVar3 = *(byte *)((int)puVar4 + 6) & 3;
  if (*(char *)((int)puVar4 + 5) == '\x03') {
    uVar3 = uVar3 | 4;
  }
  switch((char)puVar4[1]) {
  case '\x01':
    uVar3 = uVar3 | 0x40;
    break;
  case '\x02':
    uVar3 = uVar3 | 0x60;
    break;
  case '\x03':
    uVar3 = uVar3 | 0x50;
    break;
  case '\x04':
    uVar3 = uVar3 | 0x70;
  }
  uVar1 = *puVar4;
  *puVar2 = uVar3 | *puVar2 & 0xffffff88;
  *puVar2 = *puVar2 & 0xffff7fff;
  uVar3 = ((DAT_1006cd80 - uVar1 * (DAT_1006cd80 / uVar1)) + (uVar1 >> 1)) / uVar1 +
          DAT_1006cd80 / uVar1;
  puVar2[4] = uVar3 | uVar3 * 0x10000;
  *puVar2 = *puVar2 | 0x8000;
  puVar2[3] = DAT_1006cd84;
  do {
  } while (-1 < (int)(puVar2[3] << 0x1a));
  return;
}

