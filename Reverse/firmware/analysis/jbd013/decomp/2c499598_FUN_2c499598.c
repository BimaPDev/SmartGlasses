/* FUN_2c499598 @ 0x2c499598 */

void FUN_2c499598(int param_1)

{
  uint uVar1;
  uint in_fpscr;
  double dVar2;
  double dVar3;
  
  if (param_1 - 2U < 8) {
    *DAT_2c4996d8 = param_1;
    goto LAB_2c4995a6;
  }
  if (param_1 - 0xbU < 9) {
    dVar2 = 3.0;
    uVar1 = (uint)((ulonglong)DAT_2c4996e8 * (ulonglong)(param_1 - 10) >> 0x22);
  }
  else {
    if (param_1 - 0x15U < 9) {
      dVar2 = 5.0;
      param_1 = param_1 + -0x14;
    }
    else if (param_1 - 0x1fU < 9) {
      param_1 = param_1 + -0x1e;
      dVar2 = 10.0;
    }
    else {
      if (8 < param_1 - 0x29U) {
        if (param_1 - 0x33U < 9) {
          dVar2 = 20.0;
          uVar1 = (uint)((ulonglong)DAT_2c4996e8 * (ulonglong)(uint)((param_1 + -0x32) * 8) >> 0x23)
          ;
        }
        else if (param_1 - 0x3dU < 9) {
          dVar2 = 28.0;
          uVar1 = (uint)((ulonglong)DAT_2c4996e8 * (ulonglong)(uint)((param_1 + -0x3c) * 9) >> 0x23)
          ;
        }
        else if (param_1 - 0x47U < 9) {
          uVar1 = param_1 - 0x46;
          dVar2 = DAT_2c4996c0;
        }
        else {
          if (8 < param_1 - 0x51U) {
            if (8 < param_1 - 0x5bU) {
              param_1 = *DAT_2c4996d8;
              goto LAB_2c4995a6;
            }
            param_1 = param_1 + -0x5a;
            dVar2 = DAT_2c4996d0;
            goto LAB_2c49960c;
          }
          uVar1 = (uint)((ulonglong)DAT_2c4996e8 * (ulonglong)(uint)((param_1 + -0x50) * 9) >> 0x23)
          ;
          dVar2 = DAT_2c4996c8;
        }
        goto LAB_2c4995de;
      }
      dVar2 = 15.0;
      param_1 = param_1 + -0x28;
    }
LAB_2c49960c:
    uVar1 = param_1 >> 1;
  }
LAB_2c4995de:
  dVar3 = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  param_1 = VectorFloatToSigned(dVar3 + dVar2,3);
  *DAT_2c4996d8 = param_1;
LAB_2c4995a6:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x56b,DAT_2c4996e4,DAT_2c4996e0,DAT_2c4996dc,param_1);
}

