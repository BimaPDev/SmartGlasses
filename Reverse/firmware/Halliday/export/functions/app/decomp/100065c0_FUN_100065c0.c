/* FUN_100065c0 @ 0x100065c0 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x10006626 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_100065c0(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 in_d0;
  uint uVar3;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  uVar3 = (uint)((ulonglong)in_d0 >> 0x20);
  if ((int)(uVar3 & 0x7fffffff) <= DAT_10006660) {
    uVar1 = FUN_100071e0();
    return uVar1;
  }
  if ((int)(uVar3 & 0x7fffffff) <= DAT_10006664) {
    uVar2 = FUN_10006d70(local_18);
    uVar2 = uVar2 & 3;
    if (uVar2 == 1) {
      uVar1 = FUN_10007ca8(local_18[0],uVar3,local_10);
    }
    else {
      if (uVar2 != 2) {
        if (uVar2 != 0) {
          uVar1 = FUN_10007ca8(local_18[0],uVar3,local_10,1);
          return uVar1;
        }
        uVar1 = FUN_100071e0(local_18[0],uVar3,local_10);
        return uVar1;
      }
      uVar1 = FUN_100071e0(local_18[0],uVar3,local_10);
    }
    return uVar1;
  }
  uVar1 = FUN_10003798();
  return uVar1;
}

