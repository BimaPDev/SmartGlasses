/* FUN_1007ad80 @ 0x1007ad80 */

uint FUN_1007ad80(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_1007adc4;
  uVar2 = (uint)*(ushort *)(DAT_1007adc4 + 0x15e);
  if (((*(char *)(DAT_1007adc4 + 0x141) != '\x02') && (*(char *)(DAT_1007adc4 + 0x141) != '\x04'))
     && (uVar2 <= param_1)) {
    param_1 = uVar2;
  }
  if (param_1 != uVar2) {
    FUN_100a5b78(DAT_1007add0 | (DAT_1007adcc - DAT_1007adc8) * 0x20 & 0xff00U,DAT_1007add8,
                 DAT_1007add4,uVar2,param_1,param_2);
    *(short *)(iVar1 + 0x15e) = (short)param_1;
  }
  return param_1;
}

