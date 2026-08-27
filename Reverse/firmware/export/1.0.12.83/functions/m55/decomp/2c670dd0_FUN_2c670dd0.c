/* FUN_2c670dd0 @ 0x2c670dd0 */

uint FUN_2c670dd0(void)

{
  int iVar1;
  uint uVar2;
  undefined8 in_d0;
  undefined4 uStack_4;
  
  uStack_4 = (uint)((ulonglong)in_d0 >> 0x20);
  iVar1 = (DAT_2c670e20 & uStack_4) + 0xfcc00000;
  if (iVar1 < 1) {
    iVar1 = -iVar1;
    uVar2 = 0;
    if (0x13fffff < iVar1) {
      uVar2 = (iVar1 >> 0x14) - 0x14;
      if ((int)uVar2 < 0x1f) {
        uVar2 = 0x80000000 >> (uVar2 & 0xff);
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

