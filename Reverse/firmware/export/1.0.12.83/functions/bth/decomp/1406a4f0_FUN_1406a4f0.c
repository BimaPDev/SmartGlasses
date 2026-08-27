/* FUN_1406a4f0 @ 0x1406a4f0 */

byte FUN_1406a4f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_1406d054(param_1,param_3,param_2,param_3,param_4);
  if (iVar2 != 0) {
    switch(*(undefined1 *)(iVar2 + 0x11)) {
    case 200:
    case 0xd0:
    case 0xd8:
    case 0xe0:
    case 0xe8:
      bVar1 = *(byte *)(iVar2 + 0x12);
      *(byte *)(iVar2 + 0x2c) = *(byte *)(iVar2 + 0x2c) | 0x80;
      if ((bVar1 & 0xf) != 0) {
        return 0;
      }
      FUN_1406d210(param_1,iVar2,4,0x44);
      return bVar1 & 0xf;
    }
  }
  return 0x43;
}

