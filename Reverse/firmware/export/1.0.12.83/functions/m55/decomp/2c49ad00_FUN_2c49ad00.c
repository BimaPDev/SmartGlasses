/* FUN_2c49ad00 @ 0x2c49ad00 */

int FUN_2c49ad00(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar2 = (byte)param_1;
  bVar3 = (byte)((uint)param_1 >> 8);
  bVar4 = (byte)((uint)param_1 >> 0x10);
  bVar1 = (byte)((uint)param_1 >> 0x18);
  return LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                                 bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1
                              | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                 (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                                 bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1
                              | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                 (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                                 bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                              | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                 (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                                 bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                              | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
}

