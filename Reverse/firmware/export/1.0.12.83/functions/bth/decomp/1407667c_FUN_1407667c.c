/* FUN_1407667c @ 0x1407667c */

byte * FUN_1407667c(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = DAT_140766d4;
  if (param_2 == 0xffff) {
    return (byte *)0x0;
  }
  FUN_140e5148(*(undefined4 *)(DAT_140766d4 + 4),0xffffffff,param_3,0xffff,param_4);
  pbVar2 = (byte *)(iVar1 + 0x20);
  do {
    if ((((int)((uint)*pbVar2 << 0x1f) < 0) && (*(ushort *)(pbVar2 + 8) == param_2)) &&
       ((param_1 == 0 || ((*pbVar2 & 0xf) >> 1 == param_1)))) goto LAB_140766c0;
    pbVar2 = pbVar2 + 0x14;
  } while (pbVar2 != (byte *)(iVar1 + 0x214));
  pbVar2 = (byte *)0x0;
LAB_140766c0:
  FUN_140e52d8(*(undefined4 *)(iVar1 + 4));
  return pbVar2;
}

