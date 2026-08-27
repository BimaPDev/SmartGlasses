/* FUN_140383cc @ 0x140383cc */

void FUN_140383cc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_140384e0;
  iVar2 = DAT_140384dc;
  iVar1 = DAT_140384d8;
  *(uint *)(DAT_140384d8 + 0xc04) = *(uint *)(DAT_140384d8 + 0xc04) & 0xffdfffff;
  *(uint *)(iVar1 + 0xc04) = *(uint *)(iVar1 + 0xc04) & 0xffbfffff;
  *(uint *)(iVar1 + 0xc18) = *(uint *)(iVar1 + 0xc18) & 0xefffffff | 0x10000000;
  *(uint *)(iVar1 + 0xc2c) = *(uint *)(iVar1 + 0xc2c) & 0xfdffffff | 0x2000000;
  *(uint *)(iVar1 + 0xc2c) = *(uint *)(iVar1 + 0xc2c) & 0x3ffffff | 0x50000000;
  *(uint *)(iVar2 + 0xa0) = *(uint *)(iVar2 + 0xa0) & 0xfffffff7 | 8;
  *(uint *)(iVar1 + 0x87c) = *(uint *)(iVar1 + 0x87c) & 0xffff3fff;
  *(uint *)(iVar1 + 0x87c) = *(uint *)(iVar1 + 0x87c) & 0xffffcfff;
  *(uint *)(iVar3 + 0xb0) = *(uint *)(iVar3 + 0xb0) & 0xfffffffe | 1;
  *(uint *)(iVar2 + 0x58) = *(uint *)(iVar2 + 0x58) & 0xffffffcf;
  return;
}

