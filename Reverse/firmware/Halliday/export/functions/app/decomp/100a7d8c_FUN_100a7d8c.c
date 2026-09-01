/* FUN_100a7d8c @ 0x100a7d8c */

uint FUN_100a7d8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_100a7df8;
  if (iVar1 != 0) {
    switch(param_1) {
    case 2:
      return (uint)*(byte *)(iVar1 + 0x2c);
    case 3:
      return (uint)*(byte *)(iVar1 + 0x34);
    case 4:
    case 0x18:
      return (uint)*(byte *)(iVar1 + 0x2b);
    case 5:
      return (uint)*(byte *)(iVar1 + 0x2d);
    case 6:
      return (uint)*(byte *)(iVar1 + 0x2e);
    default:
      return (uint)*(byte *)(iVar1 + 0x2a);
    case 0xb:
      return (uint)*(byte *)(iVar1 + 0x33);
    case 0xe:
      return (uint)*(byte *)(iVar1 + 0x30);
    case 0xf:
      return (uint)*(byte *)(iVar1 + 0x32);
    case 0x16:
      return (uint)*(byte *)(iVar1 + 0x2f);
    }
  }
  return 0xfffffffd;
}

