/* FUN_2c13bc94 @ 0x2c13bc94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c13bc94(uint param_1,uint *param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = _DAT_2c13bd20;
  FUN_2c13e9dc(_DAT_2c13bd20,0,0x20);
  *puVar1 = (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff;
  iVar4 = FUN_2c1380b8(1,0x28,puVar1,2,puVar1 + 1,4);
  piVar3 = _DAT_2c13bd28;
  uVar2 = _DAT_2c13bd24;
  if (iVar4 == 0) {
    uVar5 = *(uint *)(puVar1 + 1);
    *param_2 = uVar5 >> 0x18 | uVar5 << 0x18 | ((uVar5 & 0xffff) >> 8) << 0x10 |
               ((uVar5 & 0xffffff) >> 0x10) << 8;
    return 0;
  }
  *_DAT_2c13bd2c = 1;
  *piVar3 = *piVar3 + 1;
  FUN_2c135988(4,0x523,_DAT_2c13bd34,_DAT_2c13bd30,uVar2,param_1,iVar4);
  return iVar4;
}

