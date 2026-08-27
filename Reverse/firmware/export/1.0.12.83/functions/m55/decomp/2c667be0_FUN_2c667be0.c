/* FUN_2c667be0 @ 0x2c667be0 */

undefined4 FUN_2c667be0(void)

{
  uint uVar1;
  double in_d0;
  double in_d1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  
  uVar1 = (uint)((ulonglong)in_d0 >> 0x20) & 0x7fffffff;
  if (uVar1 < 0x3e400000) {
    iVar6 = VectorFloatToSigned(in_d0,3);
    if (iVar6 == 0) {
      return 0;
    }
    dVar2 = in_d0 * in_d0;
    dVar2 = dVar2 * (DAT_2c667cf0 +
                    dVar2 * (DAT_2c667ce8 +
                            dVar2 * (DAT_2c667ce0 +
                                    dVar2 * (DAT_2c667cd8 +
                                            dVar2 * (DAT_2c667cd0 + dVar2 * DAT_2c667cc8)))));
  }
  else {
    dVar3 = in_d0 * in_d0;
    dVar2 = (DAT_2c667cf0 +
            (DAT_2c667ce8 +
            (DAT_2c667ce0 + (DAT_2c667cd8 + (DAT_2c667cd0 + dVar3 * DAT_2c667cc8) * dVar3) * dVar3)
            * dVar3) * dVar3) * dVar3;
    if (DAT_2c667cf8 < (int)uVar1) {
      if (DAT_2c667cfc < (int)uVar1) {
        dVar5 = 0.71875;
        dVar4 = 0.28125;
      }
      else {
        dVar4 = (double)((ulonglong)(uVar1 - 0x200000) << 0x20);
        dVar5 = 1.0 - dVar4;
      }
      return SUB84(dVar5 - ((-dVar4 + dVar3 * 0.5) - (-(in_d1 * in_d0) + dVar3 * dVar2)),0);
    }
  }
  return SUB84(1.0 - (-(-(in_d1 * in_d0) + in_d0 * in_d0 * dVar2) + in_d0 * in_d0 * 0.5),0);
}

