/* FUN_2c64e994 @ 0x2c64e994 */

undefined4 FUN_2c64e994(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  bool in_ZR;
  bool in_CY;
  
  bVar1 = (byte)param_2;
  if (in_CY && !in_ZR) {
    if (param_2 < 0x800) {
      pcVar3 = (char *)*param_1;
      if ((uint)(param_1[1] - (int)pcVar3) < 2) {
        return 0;
      }
      *pcVar3 = (char)(param_2 >> 6) + -0x40;
      *param_1 = pcVar3 + 2;
      pcVar3[1] = (bVar1 & 0x3f) + 0x80;
    }
    else if (param_2 < 0x10000) {
      pcVar3 = (char *)*param_1;
      if ((uint)(param_1[1] - (int)pcVar3) < 3) {
        return 0;
      }
      *pcVar3 = (char)(param_2 >> 0xc) + -0x20;
      pcVar3[1] = (byte)((param_2 << 0x14) >> 0x1a) + 0x80;
      *param_1 = pcVar3 + 3;
      pcVar3[2] = (bVar1 & 0x3f) + 0x80;
    }
    else {
      if (0x10ffff < param_2) {
        return 0;
      }
      pcVar3 = (char *)*param_1;
      if ((uint)(param_1[1] - (int)pcVar3) < 4) {
        return 0;
      }
      *pcVar3 = (char)(param_2 >> 0x12) + -0x10;
      pcVar3[1] = (byte)((param_2 << 0xe) >> 0x1a) + 0x80;
      pcVar3[2] = (byte)((param_2 << 0x14) >> 0x1a) + 0x80;
      *param_1 = pcVar3 + 4;
      pcVar3[3] = (bVar1 & 0x3f) + 0x80;
    }
  }
  else {
    pbVar2 = (byte *)*param_1;
    if ((byte *)param_1[1] == pbVar2) {
      return 0;
    }
    *param_1 = pbVar2 + 1;
    *pbVar2 = bVar1;
  }
  return 1;
}

