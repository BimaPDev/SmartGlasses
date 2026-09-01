/* FUN_10113584 @ 0x10113584 */

undefined4 FUN_10113584(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 < 0x11) {
    switch(bVar1) {
    case 0:
      return DAT_101135f0;
    case 1:
      return DAT_101135d4;
    case 2:
      return DAT_101135e0;
    default:
      return DAT_101135dc;
    case 4:
      return DAT_101135e4;
    case 8:
      return DAT_101135e8;
    case 0x10:
      return DAT_101135ec;
    }
  }
  if (bVar1 != 0x20) {
    uVar2 = DAT_101135dc;
    if (bVar1 == 0x80) {
      uVar2 = DAT_101135d8;
    }
    return uVar2;
  }
  return DAT_101135f4;
}

