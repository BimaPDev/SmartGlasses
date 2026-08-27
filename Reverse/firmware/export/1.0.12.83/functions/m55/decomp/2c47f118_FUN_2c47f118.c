/* FUN_2c47f118 @ 0x2c47f118 */

void FUN_2c47f118(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  int local_40;
  
  pbVar10 = param_1 + 4;
  iVar14 = 0;
  pbVar13 = pbVar10;
  do {
    pbVar9 = (byte *)(param_2 + iVar14);
    pbVar12 = param_1 + iVar14;
    do {
      pbVar11 = pbVar12 + 1;
      *pbVar12 = *pbVar12 ^ *pbVar9;
      iVar8 = DAT_2c47f2dc;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar11;
    } while (pbVar13 != pbVar11);
    iVar14 = iVar14 + 4;
    pbVar13 = pbVar13 + 4;
  } while (iVar14 != 0x10);
  local_40 = 4;
  pbVar13 = param_1;
  while( true ) {
    do {
      iVar14 = 0;
      do {
        pbVar13[iVar14 * 4] = *(byte *)(iVar8 + (uint)pbVar13[iVar14 * 4]);
        iVar14 = iVar14 + 1;
      } while (iVar14 != 4);
      pbVar13 = pbVar13 + 1;
    } while (pbVar10 != pbVar13);
    bVar1 = param_1[9];
    param_1[9] = param_1[0xd];
    bVar2 = param_1[5];
    param_1[5] = bVar1;
    bVar1 = param_1[0xe];
    param_1[0xe] = param_1[6];
    param_1[6] = bVar1;
    bVar1 = param_1[0xb];
    param_1[0xb] = param_1[7];
    bVar3 = param_1[1];
    bVar4 = param_1[10];
    bVar5 = param_1[0xf];
    param_1[10] = param_1[2];
    bVar6 = param_1[3];
    param_1[1] = bVar2;
    param_1[0xd] = bVar3;
    param_1[2] = bVar4;
    param_1[3] = bVar5;
    param_1[7] = bVar6;
    param_1[0xf] = bVar1;
    pbVar13 = param_1;
    if (local_40 == 0x38) break;
    while( true ) {
      bVar1 = *pbVar13;
      bVar3 = bVar4 ^ bVar5;
      bVar6 = bVar1 ^ bVar2;
      bVar7 = bVar6 ^ bVar3;
      pbVar13[3] = ((char)(bVar1 ^ bVar5) >> 7) * -0x1b ^ (bVar1 ^ bVar5) << 1 ^ bVar7 ^ bVar5;
      *pbVar13 = ((char)bVar6 >> 7) * -0x1b ^ bVar6 << 1 ^ bVar1 ^ bVar7;
      pbVar13[1] = bVar2 ^ bVar7 ^ ((char)(bVar2 ^ bVar4) >> 7) * -0x1b ^ (bVar2 ^ bVar4) << 1;
      pbVar13[2] = ((char)bVar3 >> 7) * -0x1b ^ bVar3 << 1 ^ bVar7 ^ bVar4;
      if (param_1 + 0x10 == pbVar13 + 4) break;
      bVar2 = pbVar13[5];
      bVar4 = pbVar13[6];
      bVar5 = pbVar13[7];
      pbVar13 = pbVar13 + 4;
    }
    iVar14 = local_40 << 2;
    pbVar13 = pbVar10;
    do {
      pbVar9 = (byte *)(param_2 + iVar14);
      pbVar12 = pbVar13 + -4;
      do {
        pbVar11 = pbVar12 + 1;
        *pbVar12 = *pbVar12 ^ *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar12 = pbVar11;
      } while (pbVar13 != pbVar11);
      pbVar13 = pbVar13 + 4;
      iVar14 = iVar14 + 4;
    } while (param_1 + 0x14 != pbVar13);
    local_40 = local_40 + 4;
    pbVar13 = param_1;
  }
  iVar14 = 0xe0;
  do {
    pbVar13 = (byte *)(param_2 + iVar14);
    pbVar9 = pbVar10 + -4;
    do {
      pbVar12 = pbVar9 + 1;
      *pbVar9 = *pbVar9 ^ *pbVar13;
      pbVar13 = pbVar13 + 1;
      pbVar9 = pbVar12;
    } while (pbVar10 != pbVar12);
    iVar14 = iVar14 + 4;
    pbVar10 = pbVar10 + 4;
  } while (iVar14 != 0xf0);
  return;
}

