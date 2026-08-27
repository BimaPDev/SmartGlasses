/* FUN_2c666b46 @ 0x2c666b46 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x2c666b82 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_2c666b46(void)

{
  uint uVar1;
  double in_d0;
  undefined4 uVar2;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  uVar1 = FUN_2c667938(local_18);
  uVar1 = uVar1 & 3;
  uVar2 = (undefined4)((ulonglong)in_d0 >> 0x20);
  if (uVar1 == 1) {
    FUN_2c6683a0(local_18[0],uVar2,local_10);
    in_d0 = (double)((ulonglong)-in_d0 & 0xffffffff);
  }
  else if (uVar1 == 2) {
    FUN_2c667be0(local_18[0],uVar2,local_10);
    in_d0 = (double)((ulonglong)-in_d0 & 0xffffffff);
  }
  else if (uVar1 == 0) {
    FUN_2c667be0(local_18[0],uVar2,local_10);
  }
  else {
    FUN_2c6683a0(local_18[0],uVar2,local_10,1);
  }
  return SUB84(in_d0,0);
}

