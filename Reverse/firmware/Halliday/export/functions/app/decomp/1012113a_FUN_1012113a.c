/* FUN_1012113a @ 0x1012113a */

uint FUN_1012113a(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(*(int *)(param_1 + 0xc) + 0x74);
  uVar1 = 0;
  while( true ) {
    if (*(uint *)((uint)*pbVar2 * 0x1c + *(int *)(param_1 + 0xc) + 0x38) == uVar1) {
      return 0xff;
    }
    if ((*(ushort *)(*(int *)(pbVar2 + 0x10) + uVar1 * 2) & 0xfff) == 0xfff) break;
    uVar1 = uVar1 + 1;
  }
  return uVar1 & 0xff;
}

