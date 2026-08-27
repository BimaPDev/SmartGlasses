/* FUN_2c666bd8 @ 0x2c666bd8 */

undefined4 FUN_2c666bd8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_cr0;
  undefined4 in_cr6;
  double in_d0;
  
  uVar1 = ((uint)((ulonglong)in_d0 >> 0x20) & 0x7fffffff) >> 0x14;
  if (uVar1 == 0) {
    if (((ulonglong)in_d0 & 0x7fffffff00000000) == 0 && SUB84(in_d0,0) == 0) goto LAB_2c666c40;
    in_d0 = in_d0 * DAT_2c666ca8;
    if (param_1 < DAT_2c666cd8) {
      return SUB84(in_d0 * DAT_2c666cb0,0);
    }
    uVar1 = (((uint)((ulonglong)in_d0 >> 0x20) & 0x7fffffff) >> 0x14) - 0x36;
  }
  else if (uVar1 == 0x7ff) {
    return SUB84(in_d0 + in_d0,0);
  }
  iVar2 = uVar1 + param_1;
  if (iVar2 < 0x7ff) {
    if (0 < iVar2) {
      return SUB84(in_d0,0);
    }
    if (-0x36 < iVar2) {
      return SUB84((double)CONCAT44((uint)((ulonglong)in_d0 >> 0x20) & DAT_2c666cdc |
                                    (iVar2 + 0x36) * 0x100000,SUB84(in_d0,0)) * DAT_2c666cd0,0);
    }
    if (param_1 < 0xc351) {
      coprocessor_function2(0xb,2,0,in_cr0,in_cr0,in_cr6);
      in_d0 = DAT_2c666cb0 * DAT_2c666cb0;
LAB_2c666c40:
      return SUB84(in_d0,0);
    }
  }
  coprocessor_function2(0xb,2,0,in_cr0,in_cr0,in_cr6);
  return SUB84(DAT_2c666cc0 * DAT_2c666cc0,0);
}

