/* FUN_14076960 @ 0x14076960 */

int FUN_14076960(uint param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar2 = DAT_1407699c;
  iVar4 = 0;
  FUN_140e5148(*(undefined4 *)(DAT_1407699c + 4),0xffffffff);
  pbVar3 = (byte *)(iVar2 + 0x20);
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 0x14;
    if (((int)((uint)bVar1 << 0x1f) < 0) && ((bVar1 & 0xf) >> 1 == param_1)) {
      iVar4 = iVar4 + 1;
    }
  } while (pbVar3 != (byte *)(iVar2 + 0x214));
  FUN_140e52d8(*(undefined4 *)(iVar2 + 4));
  return iVar4;
}

