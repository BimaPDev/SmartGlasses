/* FUN_2c47ee9c @ 0x2c47ee9c */

void FUN_2c47ee9c(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  int local_3c;
  
  pbVar13 = param_1 + 4;
  iVar20 = 0xe0;
  pbVar18 = pbVar13;
  do {
    pbVar24 = (byte *)(param_2 + iVar20);
    pbVar15 = pbVar18 + -4;
    do {
      pbVar14 = pbVar15 + 1;
      *pbVar15 = *pbVar15 ^ *pbVar24;
      pbVar24 = pbVar24 + 1;
      pbVar15 = pbVar14;
    } while (pbVar18 != pbVar14);
    iVar20 = iVar20 + 4;
    pbVar18 = pbVar18 + 4;
  } while (iVar20 != 0xf0);
  local_3c = 0x34;
  while( true ) {
    bVar1 = param_1[0xd];
    bVar2 = param_1[9];
    bVar3 = param_1[2];
    param_1[9] = param_1[5];
    param_1[2] = param_1[10];
    param_1[0xd] = bVar2;
    param_1[5] = param_1[1];
    bVar2 = param_1[0xe];
    bVar4 = param_1[7];
    param_1[1] = bVar1;
    param_1[10] = bVar3;
    bVar1 = param_1[3];
    param_1[0xe] = param_1[6];
    param_1[7] = param_1[0xb];
    param_1[6] = bVar2;
    param_1[3] = bVar4;
    param_1[0xb] = param_1[0xf];
    param_1[0xf] = bVar1;
    pbVar18 = param_1;
    do {
      iVar20 = 0;
      do {
        pbVar18[iVar20 * 4] = *(byte *)(DAT_2c47f114 + (uint)pbVar18[iVar20 * 4]);
        iVar20 = iVar20 + 1;
      } while (iVar20 != 4);
      pbVar18 = pbVar18 + 1;
    } while (pbVar13 != pbVar18);
    iVar20 = local_3c << 2;
    pbVar18 = pbVar13;
    do {
      pbVar24 = (byte *)(param_2 + iVar20);
      pbVar15 = pbVar18 + -4;
      do {
        pbVar14 = pbVar15 + 1;
        *pbVar15 = *pbVar15 ^ *pbVar24;
        pbVar24 = pbVar24 + 1;
        pbVar15 = pbVar14;
      } while (pbVar18 != pbVar14);
      pbVar18 = pbVar18 + 4;
      iVar20 = iVar20 + 4;
    } while (param_1 + 0x14 != pbVar18);
    pbVar18 = param_1;
    if (local_3c == 0) break;
    do {
      bVar1 = *pbVar18;
      pbVar24 = pbVar18 + 4;
      bVar2 = pbVar18[2];
      bVar3 = pbVar18[1];
      bVar4 = pbVar18[3];
      uVar16 = (uint)(bVar1 >> 7) * 0x1b ^ (uint)bVar1 << 1;
      uVar25 = (uint)(bVar2 >> 7) * 0x1b ^ (uint)bVar2 << 1;
      uVar26 = (uint)(bVar3 >> 7) * 0x1b ^ (uint)bVar3 << 1;
      uVar23 = (uint)(bVar4 >> 7) * 0x1b ^ (uint)bVar4 << 1;
      uVar22 = ((int)(uVar16 << 0x18) >> 0x1f) * -0x1b ^ (uVar16 & 0xff) << 1;
      uVar19 = ((int)(uVar25 << 0x18) >> 0x1f) * -0x1b ^ (uVar25 & 0xff) << 1;
      bVar12 = (byte)uVar22;
      uVar21 = ((int)(uVar26 << 0x18) >> 0x1f) * -0x1b ^ (uVar26 & 0xff) << 1;
      uVar17 = ((int)(uVar23 << 0x18) >> 0x1f) * -0x1b ^ (uVar23 & 0xff) << 1;
      bVar10 = (byte)uVar19;
      bVar8 = ((char)bVar12 >> 7) * -0x1b ^ (byte)((uVar22 & 0xff) << 1);
      bVar11 = (byte)uVar21;
      bVar6 = ((char)bVar10 >> 7) * -0x1b ^ (byte)((uVar19 & 0xff) << 1);
      bVar9 = (byte)uVar17;
      bVar7 = ((char)bVar11 >> 7) * -0x1b ^ (byte)((uVar21 & 0xff) << 1);
      bVar5 = ((char)bVar9 >> 7) * -0x1b ^ (byte)((uVar17 & 0xff) << 1);
      *pbVar18 = bVar7 ^ bVar8 ^ bVar10 ^ bVar12 ^ (byte)uVar26 ^
                                                   (byte)uVar16 ^ bVar4 ^ bVar3 ^ bVar2 ^ bVar6 ^
                 bVar5;
      pbVar18[1] = bVar5 ^ bVar8 ^ bVar9 ^ bVar11 ^ (byte)uVar25 ^
                                                    (byte)uVar26 ^ bVar4 ^ bVar1 ^ bVar2 ^ bVar7 ^
                           bVar6;
      pbVar18[2] = (byte)uVar25 ^ bVar4 ^ bVar1 ^ bVar3 ^ (byte)uVar23 ^ bVar12 ^ bVar10 ^ bVar8 ^
                   bVar7 ^ bVar6 ^ bVar5;
      pbVar18[3] = bVar5 ^ bVar6 ^ bVar7 ^ bVar8 ^ bVar9 ^ bVar2 ^ bVar1 ^ bVar3 ^ (byte)uVar16 ^
                                                           (byte)uVar23 ^ bVar11;
      pbVar18 = pbVar24;
    } while (param_1 + 0x10 != pbVar24);
    local_3c = local_3c + -4;
  }
  return;
}

