/* FUN_2c611d2c @ 0x2c611d2c */

void FUN_2c611d2c(uint *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  
  uVar4 = param_1[2];
  bVar5 = (byte)*param_1 & 0x1f;
  if (bVar5 == 5) {
    uVar3 = FUN_2c614f2c(5);
    uVar3 = (uVar3 & 0x7ff) >> 3;
    *(char *)(uVar3 * param_2 +
              uVar3 * (int)(short)(ushort)((*param_1 << 0xb) >> 0x15) * (int)(short)param_3 +
              uVar4 + uVar3 + -1) = (char)param_4;
    return;
  }
  if (bVar5 != 0xb) {
    if (bVar5 == 0xc) {
      param_4 = param_4 >> 6;
      iVar2 = 3;
      uVar3 = (param_2 & 3) * -2 + 6;
      iVar1 = param_3 * ((int)(((*param_1 & 0x1fffff) >> 10) + 3) >> 2) + ((int)param_2 >> 2);
    }
    else {
      if (bVar5 != 0xd) {
        if (bVar5 == 0xe) {
          *(char *)(uVar4 + (int)(short)param_3 * (int)(short)(ushort)((*param_1 << 0xb) >> 0x15) +
                            param_2) = (char)param_4;
        }
        return;
      }
      param_4 = param_4 >> 4;
      iVar2 = 0xf;
      uVar3 = (param_2 & 1) * -4 + 4;
      iVar1 = param_3 * ((int)(((*param_1 & 0x1fffff) >> 10) + 1) >> 1) + ((int)param_2 >> 1);
    }
    *(byte *)(uVar4 + iVar1) =
         *(byte *)(uVar4 + iVar1) & ~(byte)(iVar2 << (uVar3 & 0xff)) |
         (byte)(param_4 << (uVar3 & 0xff));
    return;
  }
  uVar3 = 7 - (param_2 & 7);
  iVar1 = param_3 * ((int)(((*param_1 & 0x1fffff) >> 10) + 7) >> 3) + ((int)param_2 >> 3);
  *(byte *)(uVar4 + iVar1) =
       *(byte *)(uVar4 + iVar1) & ~(byte)(1 << (uVar3 & 0xff)) |
       (byte)((param_4 >> 7) << (uVar3 & 0xff));
  return;
}

