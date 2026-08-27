/* FUN_2c666ce0 @ 0x2c666ce0 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x2c666d3e */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_2c666ce0(void)

{
  uint uVar1;
  double in_d0;
  uint uVar2;
  undefined4 auStack_18 [2];
  undefined4 uStack_10;
  
  uVar2 = (uint)((ulonglong)in_d0 >> 0x20);
  if ((int)(uVar2 & 0x7fffffff) <= DAT_2c666d70) {
    FUN_2c6683a0(0);
    return SUB84(in_d0,0);
  }
  if (DAT_2c666d74 < (int)(uVar2 & 0x7fffffff)) {
    return SUB84(in_d0 - in_d0,0);
  }
  uVar1 = FUN_2c667938(auStack_18);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    FUN_2c667be0(auStack_18[0],uVar2,uStack_10);
  }
  else if (uVar1 == 2) {
    FUN_2c6683a0(auStack_18[0],uVar2,uStack_10,1);
    in_d0 = (double)((ulonglong)-in_d0 & 0xffffffff);
  }
  else if (uVar1 == 0) {
    FUN_2c6683a0(auStack_18[0],uVar2,uStack_10,1);
  }
  else {
    FUN_2c667be0(auStack_18[0],uVar2,uStack_10);
    in_d0 = (double)((ulonglong)-in_d0 & 0xffffffff);
  }
  return SUB84(in_d0,0);
}

