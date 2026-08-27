/* FUN_2c666cfe @ 0x2c666cfe */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x2c666d3e */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_2c666cfe(void)

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
    FUN_2c667be0(local_18[0],uVar2,local_10);
  }
  else if (uVar1 == 2) {
    FUN_2c6683a0(local_18[0],uVar2,local_10,1);
    in_d0 = (double)((ulonglong)-in_d0 & 0xffffffff);
  }
  else if (uVar1 == 0) {
    FUN_2c6683a0(local_18[0],uVar2,local_10,1);
  }
  else {
    FUN_2c667be0(local_18[0],uVar2,local_10);
    in_d0 = (double)((ulonglong)-in_d0 & 0xffffffff);
  }
  return SUB84(in_d0,0);
}

