/* FUN_1403cd80 @ 0x1403cd80 */

uint FUN_1403cd80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  switch(param_1) {
  case 1:
    uVar3 = FUN_14050c00(0xff);
    return uVar3;
  case 2:
    uVar3 = FUN_14051938();
    return uVar3;
  case 3:
    uVar3 = FUN_1405194c();
    return uVar3;
  case 4:
    return (uint)*(byte *)(DAT_14051688 + 0x122);
  case 5:
    uVar3 = FUN_1405165c();
    return uVar3;
  case 6:
    iVar1 = FUN_1404a1b4(0);
    return -(*(byte *)(iVar1 + 6) ^ 1) & 0xff;
  case 7:
    break;
  default:
    return 0xff;
  }
  iVar1 = FUN_1404a1b4(0);
  if ((*(char *)(iVar1 + 0xd8) != '\x01') &&
     (iVar2 = FUN_1404a1b4(0), iVar1 = DAT_14051a10, *(char *)(iVar2 + 0xd8) == '\0')) {
    if (*(byte *)(DAT_14051a10 + 0x122) != 0xff) {
      return (uint)*(byte *)(DAT_14051a10 + 0x122);
    }
    iVar2 = FUN_1404a1b4();
    if (*(char *)(iVar2 + 0xda) != '\x01') {
      uVar3 = FUN_14050c00(0xff);
      if (uVar3 != 0xff) {
        return uVar3;
      }
      uVar3 = (uint)*(byte *)(iVar1 + 0x123);
      if (uVar3 != 0xff) {
        return uVar3;
      }
      return (uint)*(byte *)(iVar1 + 0x121);
    }
  }
  return 0;
}

