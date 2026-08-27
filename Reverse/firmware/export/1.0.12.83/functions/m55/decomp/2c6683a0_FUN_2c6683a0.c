/* FUN_2c6683a0 @ 0x2c6683a0 */

undefined4 FUN_2c6683a0(int param_1)

{
  double in_d0;
  double in_d1;
  double dVar1;
  double dVar2;
  int iVar4;
  double dVar3;
  
  if ((0x3e3fffff < ((uint)((ulonglong)in_d0 >> 0x20) & 0x7fffffff)) ||
     (iVar4 = VectorFloatToSigned(in_d0,3), iVar4 != 0)) {
    dVar3 = in_d0 * in_d0;
    dVar1 = in_d0 * dVar3;
    dVar2 = DAT_2c668438 +
            (DAT_2c668430 + (DAT_2c668428 + (DAT_2c668420 + dVar3 * DAT_2c668418) * dVar3) * dVar3)
            * dVar3;
    if (param_1 == 0) {
      return SUB84(in_d0 + (DAT_2c668440 + dVar3 * dVar2) * dVar1,0);
    }
    in_d0 = in_d0 - (-in_d1 + (-(dVar2 * dVar1) + in_d1 * 0.5) * dVar3 + dVar1 * DAT_2c668448);
  }
  return SUB84(in_d0,0);
}

