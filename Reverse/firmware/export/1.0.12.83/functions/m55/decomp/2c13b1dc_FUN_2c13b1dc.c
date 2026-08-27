/* FUN_2c13b1dc @ 0x2c13b1dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13b1dc(uint param_1,uint *param_2)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = _DAT_2c13b254;
  FUN_2c13e9dc(_DAT_2c13b254,0,0x20);
  *puVar1 = (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff;
  iVar2 = FUN_2c1380b8(1,0x28,puVar1,2,puVar1 + 1,4);
  if (iVar2 == 0) {
    uVar3 = *(uint *)(puVar1 + 1);
    *param_2 = uVar3 >> 0x18 | uVar3 << 0x18 | ((uVar3 & 0xffff) >> 8) << 0x10 |
               ((uVar3 & 0xffffff) >> 0x10) << 8;
    return 1;
  }
  FUN_2c135988(4,0x104,_DAT_2c13b260,_DAT_2c13b25c,_DAT_2c13b258,param_1);
  return 0;
}

