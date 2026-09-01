/* FUN_10008240 @ 0x10008240 */

undefined4 FUN_10008240(int param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong in_d0;
  
  iVar4 = DAT_10008350;
  uVar3 = ((uint)(in_d0 >> 0x20) & 0x7fffffff) >> 0x14;
  if (uVar3 == 0) {
    if ((int)in_d0 == 0 && (in_d0 & 0x7fffffff00000000) == 0) goto LAB_100082b0;
    in_d0 = FUN_10003b08();
    uVar1 = in_d0;
    if (iVar4 <= param_1) {
      uVar3 = (((uint)(in_d0 >> 0x20) & 0x7fffffff) >> 0x14) - 0x36;
      goto LAB_1000827c;
    }
  }
  else {
    if (uVar3 == 0x7ff) {
      uVar2 = FUN_1000379c();
      return uVar2;
    }
LAB_1000827c:
    iVar4 = uVar3 + param_1;
    if (0x7fe < iVar4) {
LAB_100082ca:
      if ((longlong)in_d0 < 0) {
        uVar2 = FUN_10003b08(DAT_10008340,DAT_10008344,DAT_10008338,DAT_1000833c);
      }
      else {
        uVar2 = FUN_10003b08(DAT_10008338,DAT_1000833c,DAT_10008338,DAT_1000833c);
      }
      return uVar2;
    }
    if (0 < iVar4) {
      return (int)in_d0;
    }
    if (-0x36 < iVar4) {
      uVar2 = FUN_10003b08((int)in_d0,
                           DAT_10008358 & (uint)(in_d0 >> 0x20) | (iVar4 + 0x36) * 0x100000,0,
                           DAT_1000835c);
      return uVar2;
    }
    if (50000 < param_1) goto LAB_100082ca;
    uVar1 = CONCAT44(DAT_10008334,DAT_10008330);
    if ((longlong)in_d0 < 0) {
      uVar1 = CONCAT44(DAT_1000834c,DAT_10008348);
    }
  }
  uVar3 = FUN_10003b08((int)uVar1,(int)(uVar1 >> 0x20),DAT_10008330,DAT_10008334);
  in_d0 = (ulonglong)uVar3;
LAB_100082b0:
  return (int)in_d0;
}

