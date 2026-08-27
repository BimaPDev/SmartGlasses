/* FUN_1402e88c @ 0x1402e88c */

void FUN_1402e88c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort local_16;
  int local_14;
  
  uVar1 = UnsignedSaturate(param_1 + *DAT_1402e92c,8);
  UnsignedDoesSaturate(param_1 + *DAT_1402e92c,8);
  local_14 = *DAT_1402e934;
  uVar2 = UnsignedSaturate(param_2 + *DAT_1402e930,8);
  UnsignedDoesSaturate(param_2 + *DAT_1402e930,8);
  FUN_1402e1fc(0x46,&local_16);
  local_16 = (ushort)uVar1 | (ushort)(uVar2 << 8);
  FUN_1402e37c(0x46);
  if (*DAT_1402e938 - 1 < 2) {
    FUN_1402e1fc(0x74,&local_16);
    local_16 = local_16 & 0xff00 | (ushort)uVar1;
    FUN_1402e37c(0x74);
  }
  if ((uVar2 & 0xffff) < (uVar1 & 0xffff)) {
    uVar3 = *DAT_1402e93c | 0x10;
  }
  else {
    uVar3 = *DAT_1402e93c & 0xffef;
  }
  *DAT_1402e93c = uVar3;
  if (*DAT_1402e934 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

