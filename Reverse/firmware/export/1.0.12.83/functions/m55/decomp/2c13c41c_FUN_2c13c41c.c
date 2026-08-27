/* FUN_2c13c41c @ 0x2c13c41c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c13c41c(uint param_1,uint param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = _DAT_2c13c47c;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
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
  *(uint *)(puVar1 + 1) =
       param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
       param_2 >> 0x18;
  *puVar1 = (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff;
  iVar4 = func_0x2c1380a0(1,0x28,puVar1,6);
  uVar3 = _DAT_2c13c488;
  uVar2 = _DAT_2c13c484;
  if (iVar4 == 0) {
    return 0;
  }
  *_DAT_2c13c480 = *_DAT_2c13c480 + 1;
  FUN_2c135988(4,0x539,_DAT_2c13c48c,uVar3,uVar2,param_1,param_2,iVar4);
  return iVar4;
}

