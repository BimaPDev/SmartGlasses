/* FUN_10006770 @ 0x10006770 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x100067e6 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_10006770(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 in_d0;
  uint uVar3;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  uVar3 = (uint)((ulonglong)in_d0 >> 0x20);
  if ((int)(uVar3 & 0x7fffffff) <= DAT_10006818) {
    uVar1 = FUN_10007ca8(0);
    return uVar1;
  }
  if (DAT_1000681c < (int)(uVar3 & 0x7fffffff)) {
    uVar1 = FUN_10003798();
  }
  else {
    uVar2 = FUN_10006d70(local_18);
    uVar2 = uVar2 & 3;
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        uVar1 = FUN_10007ca8(local_18[0],uVar3,local_10,1);
      }
      else {
        if (uVar2 == 0) {
          uVar1 = FUN_10007ca8(local_18[0],uVar3,local_10,1);
          return uVar1;
        }
        uVar1 = FUN_100071e0(local_18[0],uVar3,local_10);
      }
      return uVar1;
    }
    uVar1 = FUN_100071e0(local_18[0],uVar3,local_10);
  }
  return uVar1;
}

