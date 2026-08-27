/* FUN_2c472ef8 @ 0x2c472ef8 */

int FUN_2c472ef8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 != 0) {
    if (param_2 < 0x80) {
      uVar6 = (int)param_2 >> 2;
      iVar5 = 0;
    }
    else {
      uVar6 = (1 << (0x1aU - LZCOUNT(param_2) & 0xff)) + -1 + param_2;
      iVar7 = LZCOUNT(uVar6);
      iVar5 = 0x19 - iVar7;
      if (iVar7 == 6) {
        return 0;
      }
      uVar6 = uVar6 >> (0x1aU - iVar7 & 0xff) ^ 0x20;
    }
    uVar6 = -1 << (uVar6 & 0xff) & *(uint *)(param_1 + iVar5 * 4 + 0x14);
    if (uVar6 == 0) {
      uVar6 = -1 << (iVar5 + 1U & 0xff) & *(uint *)(param_1 + 0x10);
      if (uVar6 == 0) {
        return 0;
      }
      bVar2 = (byte)uVar6;
      bVar3 = (byte)(uVar6 >> 8);
      bVar4 = (byte)(uVar6 >> 0x10);
      bVar1 = (byte)(uVar6 >> 0x18);
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
      uVar6 = *(uint *)(param_1 + iVar5 * 4 + 0x14);
      if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c472fac,DAT_2c472fa8,0x255,0,param_4);
      }
    }
    bVar2 = (byte)uVar6;
    bVar3 = (byte)(uVar6 >> 8);
    bVar4 = (byte)(uVar6 >> 0x10);
    bVar1 = (byte)(uVar6 >> 0x18);
    iVar7 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
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
    if (uVar6 == 0) {
      iVar7 = -1;
    }
    iVar5 = *(int *)(param_1 + (iVar7 + iVar5 * 0x20 + 0x18) * 4);
    if (iVar5 != 0) {
      if (param_2 <= (*(uint *)(iVar5 + 4) & 0xfffffffc)) {
        FUN_2c472dbc(param_1,iVar5);
        return iVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c472fac,DAT_2c472fb0,0x326,iVar7,param_4);
    }
  }
  return 0;
}

