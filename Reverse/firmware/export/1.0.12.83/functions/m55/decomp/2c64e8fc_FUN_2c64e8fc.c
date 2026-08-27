/* FUN_2c64e8fc @ 0x2c64e8fc */

undefined4 FUN_2c64e8fc(undefined4 *param_1,uint param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  
  if (param_2 < 0x80) {
    puVar1 = (undefined1 *)*param_1;
    if ((undefined1 *)param_1[1] == puVar1) {
      return 0;
    }
    *param_1 = puVar1 + 1;
  }
  else {
    if (param_2 < 0x800) {
      pcVar2 = (char *)*param_1;
      if ((uint)(param_1[1] - (int)pcVar2) < 2) {
        return 0;
      }
      *param_1 = pcVar2 + 1;
      *pcVar2 = (char)(param_2 >> 6) + -0x40;
    }
    else {
      if (param_2 < 0x10000) {
        pcVar2 = (char *)*param_1;
        if ((uint)(param_1[1] - (int)pcVar2) < 3) {
          return 0;
        }
        *param_1 = pcVar2 + 1;
        *pcVar2 = (char)(param_2 >> 0xc) + -0x20;
      }
      else {
        if (0x10ffff < param_2) {
          return 0;
        }
        pcVar2 = (char *)*param_1;
        if ((uint)(param_1[1] - (int)pcVar2) < 4) {
          return 0;
        }
        *param_1 = pcVar2 + 1;
        *pcVar2 = (char)(param_2 >> 0x12) + -0x10;
        pcVar2 = (char *)*param_1;
        *param_1 = pcVar2 + 1;
        *pcVar2 = (byte)((param_2 << 0xe) >> 0x1a) + 0x80;
      }
      pcVar2 = (char *)*param_1;
      *param_1 = pcVar2 + 1;
      *pcVar2 = (byte)((param_2 << 0x14) >> 0x1a) + 0x80;
    }
    puVar1 = (undefined1 *)*param_1;
    param_2 = (param_2 & 0x3f) - 0x80;
    *param_1 = puVar1 + 1;
  }
  *puVar1 = (char)param_2;
  return 1;
}

