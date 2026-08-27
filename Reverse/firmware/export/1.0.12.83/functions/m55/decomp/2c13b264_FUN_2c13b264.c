/* FUN_2c13b264 @ 0x2c13b264 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13b264(uint param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  
  puVar1 = _DAT_2c13b2bc;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(uint *)(puVar1 + 1) =
       param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
       param_2 >> 0x18;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff;
  iVar2 = func_0x2c1380a0(1,0x28,puVar1,6);
  if (iVar2 == 0) {
    return 1;
  }
  FUN_2c135988(4,0x119,_DAT_2c13b2c8,_DAT_2c13b2c4,_DAT_2c13b2c0,param_1,param_2);
  return 0;
}

