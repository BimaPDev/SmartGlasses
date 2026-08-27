/* FUN_1400dc8c @ 0x1400dc8c */

void FUN_1400dc8c(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  byte bVar12;
  byte bVar13;
  int *local_34;
  
  iVar1 = DAT_1400dda8;
  uVar5 = (uint)*(byte *)(param_1 + 6);
  if ((uVar5 != 0) && (uVar6 = (uint)*(byte *)(param_1 + 5), uVar6 != 0)) {
    uVar7 = 0;
    local_34 = (int *)(param_1 + 0x24);
    pbVar10 = (byte *)(param_1 + 0x14);
    do {
      uVar3 = 0;
      uVar4 = *(ushort *)(param_1 + 8);
      pbVar2 = param_2;
      pbVar9 = pbVar10;
      piVar11 = local_34;
      do {
        if ((uVar4 & 7) == 0) {
          if ((uVar5 - 1 == uVar7) && (uVar6 - 1 == uVar3)) {
            uVar8 = (uint)*pbVar2;
            bVar12 = *(byte *)(param_1 + 0xb) << 1;
            if (*(byte *)(param_1 + 0xb) >> 7 != *pbVar2 >> 7) {
              bVar12 = bVar12 ^ 0x1d;
            }
            bVar13 = bVar12 << 1;
            if ((uVar8 & 0x7f) >> 6 != (uint)(bVar12 >> 7)) {
              bVar13 = bVar13 ^ 0x1d;
            }
            bVar12 = bVar13 << 1;
            if ((uVar8 & 0x3f) >> 5 != (uint)(bVar13 >> 7)) {
              bVar12 = bVar12 ^ 0x1d;
            }
            bVar13 = bVar12 << 1;
            if ((uVar8 & 0x1f) >> 4 != (uint)(bVar12 >> 7)) {
              bVar13 = bVar13 ^ 0x1d;
            }
            *(byte *)(param_1 + 0xb) = bVar13;
          }
          bVar12 = *pbVar2 >> 4;
          *pbVar9 = bVar12;
          param_2 = pbVar2;
        }
        else {
          *(undefined1 *)(param_1 + 0xb) =
               *(undefined1 *)(iVar1 + (uint)(*(byte *)(param_1 + 0xb) ^ *pbVar2));
          param_2 = pbVar2 + 1;
          bVar12 = *pbVar2 & 0xf;
          *pbVar9 = bVar12;
        }
        uVar4 = uVar4 + 4;
        uVar3 = uVar3 + 1;
        *piVar11 = 1 << (uint)(byte)(bVar12 + 1);
        *(ushort *)(param_1 + 8) = uVar4;
        pbVar9 = pbVar9 + 1;
        pbVar2 = param_2;
        piVar11 = piVar11 + 1;
      } while (uVar3 != uVar6);
      local_34 = local_34 + 8;
      uVar7 = uVar7 + 1;
      pbVar10 = pbVar10 + 8;
    } while (uVar7 != uVar5);
  }
  return;
}

