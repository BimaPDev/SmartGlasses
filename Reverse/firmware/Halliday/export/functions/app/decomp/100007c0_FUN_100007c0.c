/* FUN_100007c0 @ 0x100007c0 */

void FUN_100007c0(int param_1)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar2 = *DAT_10000848 & 7;
  uVar4 = (*DAT_10000848 & 0xff) >> 4;
  sVar1 = (short)uVar4;
  if (uVar4 < 0xe) {
    uVar3 = (sVar1 + 1) * 10;
  }
  else {
    uVar3 = sVar1 * 10 - 0x7d;
  }
  if (uVar2 == 0) {
    uVar2 = 0x28;
  }
  else if (uVar2 == 1) {
    uVar2 = 0x140;
  }
  else if (uVar2 == 2) {
    uVar2 = (*DAT_1000084c & 0x3f) * 0x50;
  }
  else if (uVar2 == 3) {
    uVar2 = 0x280;
  }
  else {
    if (uVar2 != 5) {
      uVar2 = 0;
      goto LAB_100007ee;
    }
    uVar2 = 0x780;
  }
  uVar2 = uVar2 / uVar3;
LAB_100007ee:
  for (uVar4 = 0; uVar4 < (uVar2 * param_1) / 10 + 1; uVar4 = uVar4 + 1) {
  }
  return;
}

