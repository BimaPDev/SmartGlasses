/* FUN_10095200 @ 0x10095200 */

uint FUN_10095200(uint param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  bVar2 = 0;
  while( true ) {
    uVar1 = (uint)bVar2;
    iVar4 = DAT_1009524c + uVar1 * 10;
    uVar3 = (uint)*(ushort *)(iVar4 + 2);
    if (uVar3 == 0) {
      return 0xffffffff;
    }
    if (param_1 == *(byte *)(DAT_1009524c + uVar1 * 10) + 0x622) {
      return uVar1;
    }
    if (uVar3 == param_1) {
      return uVar1;
    }
    if (param_1 == (int)*(char *)(iVar4 + 4) + uVar3) break;
    if (param_1 == (int)*(char *)(iVar4 + 5) + uVar3) {
      return uVar1;
    }
    bVar2 = bVar2 + 1;
    if (param_1 == uVar3 + (int)*(char *)(iVar4 + 6)) {
      return uVar1;
    }
  }
  return uVar1;
}

