/* FUN_100a58d4 @ 0x100a58d4 */

bool FUN_100a58d4(uint param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  
  pbVar2 = DAT_100a5974;
  if ((*DAT_100a5974 & 1) == 0) {
LAB_100a5970:
    bVar5 = false;
  }
  else {
    if ((param_2 <= (*DAT_100a5974 & 0x3f) >> 3) && (param_1 < DAT_100a5974[1])) {
      bVar1 = *(byte *)(*(int *)(DAT_100a5974 + 0x104c) + (param_1 >> 1));
      bVar5 = (int)(param_1 << 0x1f) < 0;
      if (bVar5) {
        bVar1 = bVar1 >> 4;
      }
      uVar4 = (uint)bVar1;
      if (!bVar5) {
        uVar4 = uVar4 & 0xf;
      }
      if ((int)param_2 <= (int)uVar4) {
        if ((DAT_100a5974[0x1051] != 0) && (DAT_100a5974[0x1050] == param_1)) {
          if (*(short *)(DAT_100a5974 + 0x1054) == 0) {
            uVar3 = FUN_1012daa4();
            *(undefined2 *)(pbVar2 + 0x1054) = uVar3;
          }
          uVar4 = FUN_1012daa4();
          bVar1 = pbVar2[0x1053];
          pbVar2[0x1053] = bVar1 + 1;
          if ((*(ushort *)(pbVar2 + 0x1054) <= uVar4) &&
             (uVar4 - *(ushort *)(pbVar2 + 0x1054) < (uint)*(ushort *)(pbVar2 + 0x1056))) {
            return pbVar2[0x1052] < (byte)(bVar1 + 1);
          }
          *(short *)(pbVar2 + 0x1054) = (short)uVar4;
          pbVar2[0x1053] = 0;
          return false;
        }
        goto LAB_100a5970;
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

