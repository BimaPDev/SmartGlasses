/* FUN_2c4ca96e @ 0x2c4ca96e */

void FUN_2c4ca96e(undefined1 *param_1,int param_2,ushort *param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  
  param_1[0xb] = 0xf;
  iVar11 = DAT_2c4cabf0;
  if ((param_4 & 3) == 0) {
    uVar2 = *param_3;
    *param_3 = uVar2 + 1;
    *(undefined1 *)(param_2 + (uint)uVar2) = 0x9c;
    *(undefined1 *)(param_2 + (uint)*param_3) = param_1[1] << 6;
    cVar1 = param_1[4];
    if (cVar1 == '\f') {
      *(byte *)(param_2 + (uint)*param_3) = *(byte *)(param_2 + (uint)*param_3) | 0x20;
    }
    else if (cVar1 == '\x10') {
      *(byte *)(param_2 + (uint)*param_3) = *(byte *)(param_2 + (uint)*param_3) | 0x30;
    }
    else if (cVar1 == '\b') {
      *(byte *)(param_2 + (uint)*param_3) = *(byte *)(param_2 + (uint)*param_3) | 0x10;
    }
    *(byte *)(param_2 + (uint)*param_3) = *(byte *)(param_2 + (uint)*param_3) | param_1[2] << 2;
    *(byte *)(param_2 + (uint)*param_3) = *(byte *)(param_2 + (uint)*param_3) | param_1[3] << 1;
    if (param_1[5] == '\b') {
      *(byte *)(param_2 + (uint)*param_3) = *(byte *)(param_2 + (uint)*param_3) | 1;
    }
    iVar11 = DAT_2c4cabf0;
    uVar2 = *param_3;
    bVar5 = param_1[0xb];
    *param_3 = uVar2 + 1;
    param_1[0xb] = *(undefined1 *)(iVar11 + (uint)(bVar5 ^ *(byte *)(param_2 + (uint)uVar2)));
    *(undefined1 *)(param_2 + (uint)*param_3) = *param_1;
  }
  else if ((param_4 & 1) == 0) {
    uVar2 = *param_3;
    *param_3 = uVar2 + 1;
    *(undefined1 *)(param_2 + (uint)uVar2) = 0x8e;
    *(undefined1 *)(param_2 + (uint)*param_3) = 0;
    uVar2 = *param_3;
    bVar5 = param_1[0xb];
    *param_3 = uVar2 + 1;
    param_1[0xb] = *(undefined1 *)(iVar11 + (uint)(bVar5 ^ *(byte *)(param_2 + (uint)uVar2)));
    *(undefined1 *)(param_2 + (uint)*param_3) = 0;
  }
  else {
    uVar2 = *param_3;
    *param_3 = uVar2 + 1;
    *(undefined1 *)(param_2 + (uint)uVar2) = 0xad;
    *(undefined1 *)(param_2 + (uint)*param_3) = 0;
    uVar2 = *param_3;
    bVar5 = param_1[0xb];
    *param_3 = uVar2 + 1;
    param_1[0xb] = *(undefined1 *)(iVar11 + (uint)(bVar5 ^ *(byte *)(param_2 + (uint)uVar2)));
    *(undefined1 *)(param_2 + (uint)*param_3) = 0;
  }
  uVar2 = *param_3;
  bVar5 = param_1[0xb];
  *param_3 = uVar2 + 1;
  param_1[0xb] = *(undefined1 *)(iVar11 + (uint)(bVar5 ^ *(byte *)(param_2 + (uint)uVar2)));
  uVar2 = *param_3;
  uVar7 = uVar2 + 1;
  *param_3 = (ushort)uVar7;
  *(short *)(param_1 + 8) = (short)((uVar7 & 0xffff) << 3);
  if (param_1[2] == '\x03') {
    *(undefined1 *)(param_2 + (uint)*param_3) = 0;
    puVar13 = (undefined1 *)(uint)(byte)param_1[5];
    if (puVar13 != (undefined1 *)0x0) {
      puVar8 = param_1 + 0xb;
      do {
        while( true ) {
          puVar9 = puVar8 + 1;
          puVar15 = puVar8 + (-10 - (int)param_1);
          if (puVar8[1] == '\0') break;
          *(byte *)(param_2 + (uint)*param_3) =
               (byte)(1 << ((uint)(param_1 + (0x13 - (int)puVar9)) & 0xff)) |
               *(byte *)(param_2 + (uint)*param_3);
          puVar13 = (undefined1 *)(uint)(byte)param_1[5];
          puVar8 = puVar9;
          if (puVar13 <= puVar15) goto joined_r0x2c4cab88;
        }
        puVar8 = puVar9;
      } while (puVar15 < puVar13);
joined_r0x2c4cab88:
      if (puVar13 == (undefined1 *)0x8) {
        uVar3 = *param_3;
        bVar4 = false;
        bVar5 = param_1[0xb];
        *param_3 = uVar3 + 1;
        param_1[0xb] = *(undefined1 *)(iVar11 + (uint)(bVar5 ^ *(byte *)(param_2 + (uint)uVar3)));
        *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 8;
        goto LAB_2c4caa0c;
      }
    }
    bVar4 = true;
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 4;
  }
  else {
    bVar4 = false;
  }
LAB_2c4caa0c:
  if (param_1[6] != '\0') {
    pbVar12 = param_1 + 0x14;
    uVar7 = 0;
    if (param_1[5] != '\0') {
      do {
        uVar14 = 0;
        pbVar16 = pbVar12;
        do {
          if (bVar4) {
            bVar4 = false;
            *(byte *)(param_2 + (uint)*param_3) = *(byte *)(param_2 + (uint)*param_3) | *pbVar16;
            uVar3 = *param_3;
            bVar5 = param_1[0xb];
            *param_3 = uVar3 + 1;
            uVar10 = (uint)(byte)param_1[5];
            param_1[0xb] = *(undefined1 *)
                            (iVar11 + (uint)(bVar5 ^ *(byte *)(param_2 + (uint)uVar3)));
          }
          else {
            *(byte *)(param_2 + (uint)*param_3) = *pbVar16 << 4;
            uVar10 = (uint)(byte)param_1[5];
            if (((byte)param_1[6] - 1 == uVar7) && (uVar10 - 1 == uVar14)) {
              uVar10 = (uint)*(byte *)(param_2 + (uint)*param_3);
              bVar5 = param_1[0xb] << 1;
              if ((byte)param_1[0xb] >> 7 != *(byte *)(param_2 + (uint)*param_3) >> 7) {
                bVar5 = bVar5 ^ 0x1d;
              }
              bVar6 = bVar5 << 1;
              if ((uVar10 & 0x7f) >> 6 != (uint)(bVar5 >> 7)) {
                bVar6 = bVar6 ^ 0x1d;
              }
              bVar4 = true;
              bVar5 = bVar6 << 1;
              if ((uVar10 & 0x3f) >> 5 != (uint)(bVar6 >> 7)) {
                bVar5 = bVar5 ^ 0x1d;
              }
              bVar6 = bVar5 << 1;
              if ((uVar10 & 0x1f) >> 4 != (uint)(bVar5 >> 7)) {
                bVar6 = bVar6 ^ 0x1d;
              }
              param_1[0xb] = bVar6;
              *(byte *)(param_2 + (uint)*param_3) = *(byte *)(param_2 + (uint)*param_3) & 0xf0;
              uVar10 = (uint)(byte)param_1[5];
            }
            else {
              bVar4 = true;
            }
          }
          uVar14 = uVar14 + 1;
          pbVar16 = pbVar16 + 1;
          *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 4;
        } while (uVar14 < uVar10);
        uVar7 = uVar7 + 1;
      } while ((uVar7 < (byte)param_1[6]) && (pbVar12 = pbVar12 + 8, uVar10 != 0));
    }
  }
  *(undefined1 *)(param_2 + (uint)uVar2) = param_1[0xb];
  return;
}

