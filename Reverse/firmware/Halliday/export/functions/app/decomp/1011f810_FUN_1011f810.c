/* FUN_1011f810 @ 0x1011f810 */

uint FUN_1011f810(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  
  if (param_2 <= param_3) {
    return param_2;
  }
  puVar8 = (uint *)(param_1 + (param_3 >> 5) * 4);
  uVar5 = param_3 & 0xffffffe0;
  param_2 = param_2 - uVar5;
  if ((param_3 & 0x1f) == 0) {
LAB_1011f848:
    iVar6 = uVar5 + param_2;
    for (; uVar5 = iVar6 - param_2, (param_2 & 0xffffffe0) != 0; param_2 = param_2 - 0x20) {
      uVar7 = *puVar8;
      if (uVar7 != 0) goto LAB_1011f874;
      puVar8 = puVar8 + 1;
    }
    if (param_2 == 0) {
      return uVar5;
    }
    uVar7 = *puVar8;
  }
  else {
    uVar7 = -1 << (param_3 & 0x1f) & *(uint *)(param_1 + (param_3 >> 5) * 4);
    if (0x1f < param_2) {
      if (uVar7 != 0) goto LAB_1011f874;
      puVar8 = puVar8 + 1;
      param_2 = param_2 - 0x20;
      uVar5 = uVar5 + 0x20;
      goto LAB_1011f848;
    }
  }
  uVar7 = uVar7 & 0xffffffffU >> (0x20 - param_2 & 0xff);
  if (uVar7 == 0) {
    return uVar5 + param_2;
  }
LAB_1011f874:
  bVar2 = (byte)uVar7;
  bVar3 = (byte)(uVar7 >> 8);
  bVar4 = (byte)(uVar7 >> 0x10);
  bVar1 = (byte)(uVar7 >> 0x18);
  iVar6 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1
                                  | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) <<
                                1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                  (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1
                                  | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) <<
                                1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                  (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1
                                  | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) <<
                                1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                  (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1
                                  | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) <<
                                1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
  if (uVar7 == 0) {
    iVar6 = -1;
  }
  return uVar5 + iVar6;
}

