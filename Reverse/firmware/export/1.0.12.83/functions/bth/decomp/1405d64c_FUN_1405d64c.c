/* FUN_1405d64c @ 0x1405d64c */

void FUN_1405d64c(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = DAT_1405d6b4;
  if (param_1 == 3) {
    iVar6 = *(int *)(DAT_1405d6b4 + 0xa0);
    while (iVar6 != 0) {
      bVar2 = (byte)iVar6;
      bVar3 = (byte)((uint)iVar6 >> 8);
      bVar4 = (byte)((uint)iVar6 >> 0x10);
      bVar1 = (byte)((uint)iVar6 >> 0x18);
      puVar5 = *(undefined4 **)
                (iVar7 + (LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                   bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                                 bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                               bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                                  (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                   bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                                 bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                               bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                                  (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                   bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                                 bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                                  (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                   bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                 bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                               bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) + 0x1a) * 4);
      (**(code **)*puVar5)(puVar5,1);
      iVar6 = *(int *)(iVar7 + 0xa0);
    }
  }
  else if (param_1 == 2) {
    FUN_140e5658(DAT_1405d6b8,0,0x2c);
    iVar7 = DAT_1405d6b4;
  }
  *(undefined2 *)(iVar7 + 0xb2) = 0;
  *(undefined1 *)(iVar7 + 0xb4) = 0;
  *(undefined1 *)(iVar7 + 0x62) = 0;
  *(undefined1 *)(iVar7 + 0xa5) = 0;
  *(undefined1 *)(iVar7 + 0xad) = 0xff;
  *(undefined2 *)(iVar7 + 0xae) = 0xffff;
  *(undefined4 *)(iVar7 + 0x9c) = 0;
  return;
}

