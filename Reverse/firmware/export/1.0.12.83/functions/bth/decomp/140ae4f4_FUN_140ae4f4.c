/* FUN_140ae4f4 @ 0x140ae4f4 */

int FUN_140ae4f4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_2 != 0) {
    if (param_2 < 0x80) {
      iVar5 = 0;
      uVar7 = (int)param_2 >> 2;
    }
    else {
      uVar7 = (1 << (0x1aU - LZCOUNT(param_2) & 0xff)) + -1 + param_2;
      iVar6 = LZCOUNT(uVar7);
      iVar5 = 0x19 - iVar6;
      if (iVar6 == 0xc) {
        return 0;
      }
      uVar7 = uVar7 >> (0x1aU - iVar6 & 0xff) ^ 0x20;
    }
    uVar7 = -1 << (uVar7 & 0xff) & *(uint *)(param_1 + iVar5 * 4 + 0x14);
    if (uVar7 == 0) {
      uVar7 = -1 << (iVar5 + 1U & 0xff) & *(uint *)(param_1 + 0x10);
      if (uVar7 == 0) {
        return 0;
      }
      bVar2 = (byte)uVar7;
      bVar3 = (byte)(uVar7 >> 8);
      bVar4 = (byte)(uVar7 >> 0x10);
      bVar1 = (byte)(uVar7 >> 0x18);
      iVar5 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                       << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                    bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                      0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                      (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                       << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                    bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1)
                                       << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                    bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
      iVar6 = param_1 + iVar5 * 4;
      uVar7 = *(uint *)(iVar6 + 0x14);
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140ae5ac,DAT_140ae5a8,0x255,iVar6,param_4);
      }
    }
    bVar2 = (byte)uVar7;
    bVar3 = (byte)(uVar7 >> 8);
    bVar4 = (byte)(uVar7 >> 0x10);
    bVar1 = (byte)(uVar7 >> 0x18);
    iVar6 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
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
      iVar6 = -1;
    }
    iVar5 = *(int *)(param_1 + (iVar6 + iVar5 * 0x20 + 0x12) * 4);
    if (iVar5 != 0) {
      if (param_2 <= (*(uint *)(iVar5 + 4) & 0xfffffffc)) {
        FUN_140ae3b4(param_1,iVar5);
        return iVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140ae5ac,DAT_140ae5b0,0x326,iVar6,param_4);
    }
  }
  return 0;
}

