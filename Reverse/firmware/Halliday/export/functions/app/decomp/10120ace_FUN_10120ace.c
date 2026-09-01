/* FUN_10120ace @ 0x10120ace */

uint FUN_10120ace(int param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar2 = *(byte **)(*(int *)(param_1 + 0xc) + 0x74);
  bVar3 = 0;
  do {
    uVar1 = (uint)bVar3;
    if (*(uint *)((uint)*pbVar2 * 0x1c + *(int *)(param_1 + 0xc) + 0x3c) <= uVar1) {
      return 0xff;
    }
    bVar3 = bVar3 + 1;
  } while (*(ushort *)(*(int *)(pbVar2 + 0xc) + uVar1 * 8) != param_2);
  return uVar1;
}

