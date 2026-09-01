/* FUN_1011f7ca @ 0x1011f7ca */

uint FUN_1011f7ca(uint *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  for (uVar6 = param_2; (uVar6 & 0xffffffe0) != 0; uVar6 = uVar6 - 0x20) {
    uVar7 = *param_1;
    if (uVar7 != 0) goto LAB_1011f7ea;
    param_1 = param_1 + 1;
  }
  uVar8 = param_2 - uVar6;
  if ((uVar6 != 0) &&
     (uVar7 = 0xffffffffU >> (0x20 - uVar6 & 0xff) & *param_1, uVar8 = param_2, uVar7 != 0)) {
LAB_1011f7ea:
    bVar2 = (byte)uVar7;
    bVar3 = (byte)(uVar7 >> 8);
    bVar4 = (byte)(uVar7 >> 0x10);
    bVar1 = (byte)(uVar7 >> 0x18);
    iVar5 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                     1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                  bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                    | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                       << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                    bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                      0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                    (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                     1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                  bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    if (uVar7 == 0) {
      iVar5 = -1;
    }
    uVar8 = (param_2 - uVar6) + iVar5;
  }
  return uVar8;
}

