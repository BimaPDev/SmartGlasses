/* FUN_1402e7d8 @ 0x1402e7d8 */

void FUN_1402e7d8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort local_16;
  int local_14;
  
  uVar1 = UnsignedSaturate(param_1 + *DAT_1402e878,8);
  UnsignedDoesSaturate(param_1 + *DAT_1402e878,8);
  local_14 = *DAT_1402e880;
  uVar2 = UnsignedSaturate(param_2 + *DAT_1402e87c,8);
  UnsignedDoesSaturate(param_2 + *DAT_1402e87c,8);
  FUN_1402e1fc(0x47,&local_16);
  local_16 = (ushort)uVar1 | (ushort)(uVar2 << 8);
  FUN_1402e37c(0x47);
  if (*DAT_1402e884 - 1 < 2) {
    FUN_1402e1fc(0x75,&local_16);
    local_16 = local_16 & 0xff00 | (ushort)uVar1;
    FUN_1402e37c(0x75);
  }
  if ((uVar2 & 0xffff) < (uVar1 & 0xffff)) {
    uVar3 = *DAT_1402e888 | 8;
  }
  else {
    uVar3 = *DAT_1402e888 & 0xfff7;
  }
  *DAT_1402e888 = uVar3;
  if (*DAT_1402e880 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

