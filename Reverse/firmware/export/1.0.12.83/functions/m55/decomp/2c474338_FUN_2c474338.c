/* FUN_2c474338 @ 0x2c474338 */

byte * FUN_2c474338(uint param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (param_2 == 0) {
    if (param_1 < 0x80) {
      pbVar4 = (byte *)0x1;
    }
    else {
      *param_3 = (byte)param_1 | 0x80;
      if (param_1 < 0x4000) {
        pbVar4 = (byte *)0x2;
        param_3 = param_3 + 1;
        param_1 = param_1 >> 7;
      }
      else {
        param_3[1] = (byte)(param_1 >> 7) | 0x80;
        if (param_1 < 0x200000) {
          param_3 = param_3 + 2;
          pbVar4 = (byte *)0x3;
          param_1 = param_1 >> 0xe;
        }
        else {
          param_3[2] = (byte)(param_1 >> 0xe) | 0x80;
          if (param_1 < 0x10000000) {
            pbVar4 = &Reset;
            param_3 = param_3 + 3;
            param_1 = param_1 >> 0x15;
          }
          else {
            pbVar4 = (byte *)0x5;
            param_3[3] = (byte)(param_1 >> 0x15) | 0x80;
            param_3 = param_3 + 4;
            param_1 = param_1 >> 0x1c;
          }
        }
      }
    }
    *param_3 = (byte)param_1;
    return pbVar4;
  }
  param_3[2] = (byte)(param_1 >> 0xe) | 0x80;
  param_3[1] = (byte)(param_1 >> 7) | 0x80;
  param_3[3] = (byte)(param_1 >> 0x15) | 0x80;
  *param_3 = (byte)param_1 | 0x80;
  bVar1 = (byte)(param_1 >> 0x18);
  if (7 < param_2) {
    uVar3 = param_2 >> 3;
    param_3[4] = (byte)(param_2 << 4) & 0x70 | bVar1 >> 4 | 0x80;
    if (param_2 < 0x400) {
      pbVar2 = &DAT_00000006;
      pbVar4 = (byte *)0x5;
    }
    else {
      pbVar2 = param_3 + 4;
      do {
        bVar1 = (byte)uVar3;
        uVar3 = uVar3 >> 7;
        pbVar4 = pbVar2 + (2 - (int)param_3);
        pbVar2 = pbVar2 + 1;
        *pbVar2 = bVar1 | 0x80;
      } while (0x7f < uVar3);
      pbVar2 = pbVar4 + 1;
    }
    param_3[(int)pbVar4] = (byte)uVar3;
    return pbVar2;
  }
  param_3[4] = bVar1 >> 4 | (byte)(param_2 << 4);
  return (byte *)0x5;
}

