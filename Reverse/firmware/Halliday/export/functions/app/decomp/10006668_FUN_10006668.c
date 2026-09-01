/* FUN_10006668 @ 0x10006668 */

uint FUN_10006668(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_r3;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong in_d0;
  undefined8 uVar6;
  
  uVar2 = (uint)((ulonglong)in_d0 >> 0x20);
  uVar5 = (uint)in_d0;
  uVar3 = (uVar2 & 0x7fffffff) >> 0x14;
  uVar4 = uVar3 - 0x3ff;
  if ((int)uVar4 < 0x14) {
    if ((int)uVar4 < 0) {
      uVar6 = FUN_1000379c();
      iVar1 = FUN_10004028((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,0);
      if (iVar1 != 0) {
        if (in_d0 < 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
        }
      }
    }
    else {
      if ((uVar2 & DAT_10006768 >> (uVar4 & 0xff)) == 0 && uVar5 == 0) {
        return uVar5;
      }
      uVar6 = FUN_1000379c();
      iVar1 = FUN_10004028((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,0,in_r3);
      if (iVar1 != 0) {
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  if ((int)uVar4 < 0x34) {
    uVar2 = 0xffffffff >> (uVar3 - 0x413 & 0xff);
    if ((uVar2 & uVar5) != 0) {
      uVar6 = FUN_1000379c();
      iVar1 = FUN_10004028((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,0);
      if (iVar1 == 0) {
        return uVar5;
      }
      if ((in_d0 < 0) && (uVar4 != 0x14)) {
        uVar5 = (1 << (0x34 - uVar4 & 0xff)) + uVar5;
      }
      return uVar5 & ~uVar2;
    }
  }
  else if (uVar4 == 0x400) {
    uVar2 = FUN_1000379c();
    return uVar2;
  }
  return uVar5;
}

