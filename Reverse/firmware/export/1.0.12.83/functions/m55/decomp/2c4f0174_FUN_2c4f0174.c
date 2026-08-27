/* FUN_2c4f0174 @ 0x2c4f0174 */

undefined4 FUN_2c4f0174(byte *param_1,char *param_2,char *param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  
  if (param_1[0x7a] == 0) {
    pbVar8 = (byte *)(param_2 + -1);
    pbVar9 = param_1;
    do {
      pbVar9 = pbVar9 + 1;
      pbVar8 = pbVar8 + 1;
      if (*pbVar9 != *pbVar8) {
        bVar3 = false;
        bVar11 = 0;
        goto LAB_2c4f01aa;
      }
    } while (param_1 + 0x3b != pbVar9);
    bVar11 = 1;
    bVar3 = true;
  }
  else {
    bVar11 = 0;
    bVar3 = false;
  }
LAB_2c4f01aa:
  pcVar7 = param_2 + -1;
  pbVar9 = param_1 + 1;
  pbVar8 = param_1 + 0x3d;
  do {
    pbVar16 = pbVar8;
    pbVar10 = pbVar9;
    pbVar8 = pbVar16 + 0x10;
    uVar15 = *(undefined4 *)(pbVar16 + 4);
    uVar13 = *(undefined4 *)(pbVar16 + 8);
    uVar4 = *(undefined4 *)(pbVar16 + 0xc);
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar16;
    *(undefined4 *)(pbVar10 + 4) = uVar15;
    *(undefined4 *)(pbVar10 + 8) = uVar13;
    *(undefined4 *)(pbVar10 + 0xc) = uVar4;
    pbVar9 = pbVar10 + 0x10;
  } while (pbVar8 != param_1 + 0x6d);
  uVar13 = *(undefined4 *)(pbVar16 + 0x14);
  uVar4 = *(undefined4 *)(pbVar16 + 0x18);
  *(undefined4 *)(pbVar10 + 0x10) = *(undefined4 *)pbVar8;
  *(undefined4 *)(pbVar10 + 0x14) = uVar13;
  *(undefined4 *)(pbVar10 + 0x18) = uVar4;
  pcVar18 = param_2;
  pbVar9 = param_1 + 0x3d;
  do {
    pbVar8 = pbVar9;
    pcVar17 = pcVar18;
    pcVar18 = pcVar17 + 0x10;
    uVar15 = *(undefined4 *)(pcVar17 + 4);
    uVar13 = *(undefined4 *)(pcVar17 + 8);
    uVar4 = *(undefined4 *)(pcVar17 + 0xc);
    *(undefined4 *)pbVar8 = *(undefined4 *)pcVar17;
    *(undefined4 *)(pbVar8 + 4) = uVar15;
    *(undefined4 *)(pbVar8 + 8) = uVar13;
    *(undefined4 *)(pbVar8 + 0xc) = uVar4;
    pbVar9 = pbVar8 + 0x10;
  } while (pcVar18 != param_2 + 0x30);
  uVar4 = *(undefined4 *)(pcVar17 + 0x18);
  uVar13 = *(undefined4 *)pcVar18;
  *(undefined4 *)(pbVar8 + 0x14) = *(undefined4 *)(pcVar17 + 0x14);
  *(undefined4 *)(pbVar8 + 0x18) = uVar4;
  *(undefined4 *)(pbVar8 + 0x10) = uVar13;
  do {
    pcVar7 = pcVar7 + 1;
    if (*pcVar7 != 'U') {
      if (param_3 == (char *)0x0) goto LAB_2c4f028a;
      if (*param_2 == 'U') {
        if (param_3 == &SysTick) goto LAB_2c4f0398;
        param_3 = param_2 + (0x3b - (int)param_3);
        pcVar7 = param_2;
        goto LAB_2c4f03b4;
      }
      if (param_2[0x3b] != 'U') goto LAB_2c4f028a;
      if (0x3b < 0x3c - (int)param_3) goto LAB_2c4f0398;
      pbVar9 = (byte *)(param_2 + (0x3b - (int)param_3));
      goto LAB_2c4f0282;
    }
  } while (param_2 + 0x3a != pcVar7);
  uVar19 = 0xff;
  uVar4 = 1;
LAB_2c4f02ae:
  *param_1 = (byte)uVar19;
LAB_2c4f02b0:
  FUN_2c4f0128(param_1,uVar4,param_3,uVar19,param_4);
  return uVar4;
  while (pcVar7 = pcVar7 + 1, *pcVar7 == 'U') {
LAB_2c4f03b4:
    if (param_3 == pcVar7) goto LAB_2c4f0398;
  }
LAB_2c4f028a:
  bVar2 = param_1[0x79];
  param_1[0x79] = bVar11;
  param_1[0x7a] = bVar2;
  if (bVar3) {
    *param_1 = 0xff;
    FUN_2c4f0128(param_1,7,param_3,0xff,param_4);
    return 7;
  }
  if (*param_2 == '\x01') {
    bVar11 = param_2[1];
    param_3 = (char *)(bVar11 & 0xf);
    if ((param_3 == &NMI) && (param_3 = (char *)(uint)(byte)param_2[2], param_3 == &DAT_000000ad)) {
      uVar19 = (bVar11 & 0x3f) >> 4;
      uVar14 = (uint)(bVar11 >> 6);
      if ((((bVar11 & 0x30) == 0) || (uVar19 == 3)) && ((uVar14 == 0 || (uVar14 == 3)))) {
        param_3 = (char *)(uint)(byte)param_2[3];
        if ((param_3 == (char *)0x0) &&
           (uVar12 = (uint)*(byte *)(DAT_2c4f03d4 +
                                    (uint)(byte)(*(byte *)(DAT_2c4f03d4 + ((uint)param_3 ^ 0xf)) ^
                                                param_2[4])), param_2[4] == 0)) {
          uVar5 = 6;
          bVar11 = 0x18;
          param_3 = (char *)0x0;
          while ((bVar11 & 7) != 0) {
            pbVar9 = (byte *)(param_2 + uVar5);
            uVar5 = uVar5 + 1 & 0xff;
            uVar12 = (uint)*(byte *)(DAT_2c4f03d4 + (uVar12 ^ *pbVar9));
LAB_2c4f032c:
            bVar11 = bVar11 + 4;
            param_3 = param_3 + 1;
            if (bVar11 == 0x38) goto LAB_2c4f0366;
          }
          if (param_3 != (char *)0x7) goto LAB_2c4f032c;
          param_3 = (char *)0x7;
          do {
            uVar1 = (uint)param_3 & 0xff;
            param_3 = param_3 + -1;
            uVar6 = uVar12 << 1 ^ 0x1d;
            if (((int)(uint)(byte)param_2[uVar5] >> uVar1 & 1U) == uVar12 >> 7) {
              uVar6 = uVar12 << 1;
            }
            uVar12 = uVar6 & 0xff;
          } while (param_3 != (char *)0x3);
LAB_2c4f0366:
          if ((byte)param_2[5] != uVar12) goto LAB_2c4f03cc;
          uVar12 = (uint)*param_1;
          uVar14 = uVar19 & 1 | uVar14 & 2;
          uVar4 = 0;
          if (uVar12 == 0xff) {
            *param_1 = (byte)uVar14;
            uVar19 = 0xff;
            goto LAB_2c4f02b0;
          }
          if (uVar12 == 3) {
            uVar19 = 0;
          }
          else {
            uVar19 = uVar12 + 1 & 0xff;
          }
          if (uVar19 != uVar14) {
            uVar19 = 0xff;
            uVar4 = 6;
            *param_1 = 0xff;
            goto LAB_2c4f02b0;
          }
          goto LAB_2c4f02ae;
        }
LAB_2c4f03cc:
        uVar19 = 0xff;
        uVar4 = 3;
        *param_1 = 0xff;
        goto LAB_2c4f02b0;
      }
    }
  }
  uVar19 = 0xff;
  uVar4 = 2;
  *param_1 = 0xff;
  goto LAB_2c4f02b0;
LAB_2c4f0282:
  pbVar9 = pbVar9 + 1;
  param_3 = (char *)(uint)*pbVar9;
  if (param_3 != (char *)0x55) goto LAB_2c4f028a;
  param_3 = (char *)0x55;
  if (pbVar9 == (byte *)(param_2 + 0x3b)) {
LAB_2c4f0398:
    *param_1 = 0xff;
    FUN_2c4f0128(param_1,9,param_3,0xff,param_4);
    return 9;
  }
  goto LAB_2c4f0282;
}

