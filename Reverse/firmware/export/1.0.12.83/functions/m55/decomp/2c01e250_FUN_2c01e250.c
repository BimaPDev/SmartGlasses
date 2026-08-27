/* FUN_2c01e250 @ 0x2c01e250 */

undefined4
FUN_2c01e250(undefined4 *param_1,int param_2,short *param_3,undefined4 param_4,ushort *param_5,
            ushort param_6)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined1 uVar22;
  char cVar23;
  ushort uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  undefined2 *puVar43;
  int iVar44;
  int iVar45;
  uint *puVar46;
  undefined4 *puVar47;
  int iVar48;
  undefined4 *puVar49;
  uint uVar50;
  int iVar51;
  uint uVar52;
  int iVar53;
  uint uVar54;
  int iVar55;
  uint uVar56;
  int iVar57;
  uint uVar58;
  int iVar59;
  uint uVar60;
  int iVar61;
  uint uVar62;
  int iVar63;
  uint uVar64;
  int iVar65;
  uint uVar66;
  int iVar67;
  uint uVar68;
  int iVar69;
  uint uVar70;
  int iVar71;
  uint uVar72;
  int iVar73;
  uint uVar74;
  int iVar75;
  uint uVar76;
  int iVar77;
  uint uVar78;
  int iVar79;
  uint uVar80;
  int iVar81;
  uint uVar82;
  int iVar83;
  uint uVar84;
  int iVar85;
  uint uVar86;
  int iVar87;
  uint uVar88;
  int iVar89;
  uint uVar90;
  int iVar91;
  uint uVar92;
  int iVar93;
  uint uVar94;
  int iVar95;
  uint uVar96;
  int iVar97;
  uint uVar98;
  int iVar99;
  uint uVar100;
  int iVar101;
  uint uVar102;
  int iVar103;
  uint uVar104;
  int iVar105;
  uint uVar106;
  int iVar107;
  uint uVar108;
  int iVar109;
  uint uVar110;
  int iVar111;
  uint uVar112;
  int iVar113;
  uint uVar114;
  int iVar115;
  uint uVar116;
  int iVar117;
  uint uVar118;
  int iVar119;
  uint uVar120;
  int iVar121;
  uint uVar122;
  int iVar123;
  uint uVar124;
  int iVar125;
  uint uVar126;
  int iVar127;
  uint uVar128;
  int iVar129;
  uint uVar130;
  int iVar131;
  uint uVar132;
  int iVar133;
  uint uVar134;
  int iVar135;
  uint uVar136;
  int iVar137;
  uint uVar138;
  int iVar139;
  uint uVar140;
  int iVar141;
  uint uVar142;
  int iVar143;
  uint uVar144;
  int iVar145;
  uint uVar146;
  int iVar147;
  uint uVar148;
  int iVar149;
  uint uVar150;
  int iVar151;
  uint uVar152;
  int iVar153;
  uint uVar154;
  int iVar155;
  uint uVar156;
  int iVar157;
  uint uVar158;
  int iVar159;
  uint uVar160;
  int iVar161;
  uint uVar162;
  int iVar163;
  uint uVar164;
  int iVar165;
  uint uVar166;
  int iVar167;
  undefined4 *puVar168;
  int iVar169;
  uint uVar170;
  undefined4 *puVar171;
  int iVar172;
  uint uVar173;
  int iVar174;
  int iVar175;
  int iVar176;
  int iVar177;
  uint uVar178;
  int iVar179;
  int iVar180;
  int iVar181;
  uint *puVar182;
  uint uVar183;
  uint uVar184;
  uint uVar185;
  uint uVar186;
  uint uVar187;
  uint uVar188;
  uint uVar189;
  uint uVar190;
  uint uVar191;
  int *piVar192;
  uint local_2ec;
  uint local_2e8;
  uint local_2e4;
  int local_2e0;
  uint local_2bc;
  int *local_2b8;
  int local_2b4;
  uint local_2b0;
  uint local_4c;
  
  local_4c = (uint)*(ushort *)(param_2 + 2);
  if ((int)((uint)*(byte *)((int)param_1 + 7) << 0x1f) < 0) {
    uVar25 = 0x1a;
  }
  else {
    if (-1 < (int)((uint)*(byte *)((int)param_1 + 7) << 0x1e)) goto LAB_2c01e28a;
    uVar25 = 0x312;
  }
  *param_1 = uVar25;
  *(undefined2 *)(param_1 + 1) = 0x80f;
  *(undefined1 *)((int)param_1 + 6) = 1;
LAB_2c01e28a:
  local_2b4 = *(int *)(param_2 + 4);
  uVar3 = FUN_2c019824(param_1);
  if (param_6 < uVar3) {
    return 1;
  }
  if (*(char *)((int)param_1 + 2) == '\0') {
    uVar22 = 1;
    sVar7 = 1;
  }
  else {
    sVar7 = 2;
    uVar22 = 2;
  }
  *(undefined1 *)((int)param_1 + 6) = uVar22;
  uVar24 = (ushort)*(byte *)((int)param_1 + 5) * (ushort)*(byte *)(param_1 + 1) * sVar7 * 2;
  *param_5 = 0;
  uVar26 = (uint)uVar24;
  *param_3 = 0;
  if (local_4c < uVar26) {
    return 0x18;
  }
  do {
    local_2ec = (uint)*(byte *)((int)param_1 + 5);
    uVar27 = (uint)*(byte *)(param_1 + 1);
    if (local_2ec == 4) {
      if (uVar27 != 0) {
        local_2bc = 0;
        iVar6 = (int)*(uint *)(DAT_2c020010 + 0x20) >> 0xf;
        uVar9 = *(uint *)(DAT_2c020010 + 0x20) & 0x7fff;
        iVar8 = (int)*(uint *)(DAT_2c020010 + 0x40) >> 0xf;
        uVar13 = *(uint *)(DAT_2c020010 + 0x40) & 0x7fff;
        iVar10 = (int)*(uint *)(DAT_2c020010 + 4) >> 0xf;
        uVar15 = *(uint *)(DAT_2c020010 + 4) & 0x7fff;
        iVar11 = (int)*(uint *)(DAT_2c020010 + 0x24) >> 0xf;
        uVar28 = *(uint *)(DAT_2c020010 + 0x24) & 0x7fff;
        iVar14 = (int)*(uint *)(DAT_2c020010 + 0x44) >> 0xf;
        uVar30 = *(uint *)(DAT_2c020010 + 0x44) & 0x7fff;
        iVar29 = (int)*(uint *)(DAT_2c020010 + 100) >> 0xf;
        uVar32 = *(uint *)(DAT_2c020010 + 100) & 0x7fff;
        iVar167 = (int)*(uint *)(DAT_2c020010 + 0x84) >> 0xf;
        uVar34 = *(uint *)(DAT_2c020010 + 0x84) & 0x7fff;
        iVar48 = (int)*(uint *)(DAT_2c020010 + 8) >> 0xf;
        uVar36 = *(uint *)(DAT_2c020010 + 8) & 0x7fff;
        iVar20 = (int)*(uint *)(DAT_2c020010 + 0x28) >> 0xf;
        uVar38 = *(uint *)(DAT_2c020010 + 0x28) & 0x7fff;
        iVar31 = (int)*(uint *)(DAT_2c020010 + 0x48) >> 0xf;
        uVar50 = *(uint *)(DAT_2c020010 + 0x48) & 0x7fff;
        iVar175 = (int)*(uint *)(DAT_2c020010 + 0x68) >> 0xf;
        uVar52 = *(uint *)(DAT_2c020010 + 0x68) & 0x7fff;
        iVar33 = (int)*(uint *)(DAT_2c020010 + 0x88) >> 0xf;
        uVar54 = *(uint *)(DAT_2c020010 + 0x88) & 0x7fff;
        iVar35 = (int)*(uint *)(DAT_2c020010 + 0xc) >> 0xf;
        uVar56 = *(uint *)(DAT_2c020010 + 0xc) & 0x7fff;
        iVar37 = (int)*(uint *)(DAT_2c020010 + 0x2c) >> 0xf;
        uVar58 = *(uint *)(DAT_2c020010 + 0x2c) & 0x7fff;
        iVar39 = (int)*(uint *)(DAT_2c020010 + 0x4c) >> 0xf;
        uVar60 = *(uint *)(DAT_2c020010 + 0x4c) & 0x7fff;
        iVar40 = (int)*(uint *)(DAT_2c020010 + 0x6c) >> 0xf;
        uVar62 = *(uint *)(DAT_2c020010 + 0x6c) & 0x7fff;
        iVar41 = (int)*(uint *)(DAT_2c020010 + 0x8c) >> 0xf;
        uVar64 = *(uint *)(DAT_2c020010 + 0x8c) & 0x7fff;
        iVar42 = (int)*(uint *)(DAT_2c020010 + 0x10) >> 0xf;
        uVar66 = *(uint *)(DAT_2c020010 + 0x10) & 0x7fff;
        iVar51 = (int)*(uint *)(DAT_2c020010 + 0x30) >> 0xf;
        uVar68 = *(uint *)(DAT_2c020010 + 0x30) & 0x7fff;
        iVar53 = (int)*(uint *)(DAT_2c020010 + 0x50) >> 0xf;
        uVar70 = *(uint *)(DAT_2c020010 + 0x50) & 0x7fff;
        iVar55 = (int)*(uint *)(DAT_2c020010 + 0x14) >> 0xf;
        uVar72 = *(uint *)(DAT_2c020010 + 0x14) & 0x7fff;
        iVar57 = (int)*(uint *)(DAT_2c020010 + 0x34) >> 0xf;
        uVar74 = *(uint *)(DAT_2c020010 + 0x34) & 0x7fff;
        iVar59 = (int)*(uint *)(DAT_2c020010 + 0x54) >> 0xf;
        uVar76 = *(uint *)(DAT_2c020010 + 0x54) & 0x7fff;
        iVar61 = (int)*(uint *)(DAT_2c020010 + 0x74) >> 0xf;
        uVar78 = *(uint *)(DAT_2c020010 + 0x74) & 0x7fff;
        iVar63 = (int)*(uint *)(DAT_2c020010 + 0x94) >> 0xf;
        uVar80 = *(uint *)(DAT_2c020010 + 0x94) & 0x7fff;
        iVar65 = (int)*(uint *)(DAT_2c020010 + 0x18) >> 0xf;
        uVar82 = *(uint *)(DAT_2c020010 + 0x18) & 0x7fff;
        iVar67 = (int)*(uint *)(DAT_2c020010 + 0x38) >> 0xf;
        uVar84 = *(uint *)(DAT_2c020010 + 0x38) & 0x7fff;
        iVar69 = (int)*(uint *)(DAT_2c020010 + 0x58) >> 0xf;
        uVar86 = *(uint *)(DAT_2c020010 + 0x58) & 0x7fff;
        iVar71 = (int)*(uint *)(DAT_2c020010 + 0x98) >> 0xf;
        uVar88 = *(uint *)(DAT_2c020010 + 0x98) & 0x7fff;
        iVar73 = (int)*(uint *)(DAT_2c020010 + 0x1c) >> 0xf;
        uVar90 = *(uint *)(DAT_2c020010 + 0x1c) & 0x7fff;
        iVar75 = (int)*(uint *)(DAT_2c020010 + 0x3c) >> 0xf;
        uVar92 = *(uint *)(DAT_2c020010 + 0x3c) & 0x7fff;
        iVar77 = (int)*(uint *)(DAT_2c020010 + 0x5c) >> 0xf;
        uVar94 = *(uint *)(DAT_2c020010 + 0x5c) & 0x7fff;
        iVar79 = (int)*(uint *)(DAT_2c020010 + 0x7c) >> 0xf;
        uVar96 = *(uint *)(DAT_2c020010 + 0x7c) & 0x7fff;
        iVar81 = (int)*(uint *)(DAT_2c020010 + 0x9c) >> 0xf;
        uVar98 = *(uint *)(DAT_2c020010 + 0x9c) & 0x7fff;
        iVar83 = (int)*DAT_2c020014 >> 0xf;
        uVar100 = *DAT_2c020014 & 0x7fff;
        iVar85 = (int)DAT_2c020014[4] >> 0xf;
        uVar102 = DAT_2c020014[4] & 0x7fff;
        iVar87 = (int)DAT_2c020014[0x14] >> 0xf;
        uVar104 = DAT_2c020014[0x14] & 0x7fff;
        iVar89 = (int)DAT_2c020014[1] >> 0xf;
        uVar106 = DAT_2c020014[1] & 0x7fff;
        iVar91 = (int)DAT_2c020014[5] >> 0xf;
        uVar108 = DAT_2c020014[5] & 0x7fff;
        iVar93 = (int)DAT_2c020014[0x15] >> 0xf;
        uVar110 = DAT_2c020014[0x15] & 0x7fff;
        iVar95 = (int)DAT_2c020014[2] >> 0xf;
        uVar112 = DAT_2c020014[2] & 0x7fff;
        local_2e8 = 0;
        iVar97 = (int)DAT_2c020014[6] >> 0xf;
        uVar114 = DAT_2c020014[6] & 0x7fff;
        iVar99 = (int)DAT_2c020014[0x16] >> 0xf;
        uVar116 = DAT_2c020014[0x16] & 0x7fff;
        iVar101 = (int)DAT_2c020014[3] >> 0xf;
        uVar118 = DAT_2c020014[3] & 0x7fff;
        iVar103 = (int)DAT_2c020014[7] >> 0xf;
        uVar120 = DAT_2c020014[7] & 0x7fff;
        iVar105 = (int)DAT_2c020014[0x17] >> 0xf;
        uVar122 = DAT_2c020014[0x17] & 0x7fff;
        puVar21 = param_1;
        do {
          uVar27 = (uint)*(ushort *)(param_1 + 0x1ee);
          puVar43 = (undefined2 *)(local_2b4 + local_2e8);
          if (uVar27 == 0) {
            puVar12 = param_1 + 0x14f;
            do {
              puVar47 = puVar12 + 1;
              puVar12[0x3d] = *puVar47;
              puVar12 = puVar47;
            } while (puVar47 != param_1 + 0x161);
            iVar107 = 0x628;
            sVar7 = 0x74;
            uVar27 = 0x78;
          }
          else {
            sVar7 = *(ushort *)(param_1 + 0x1ee) - 4;
            iVar107 = (uVar27 + 0x29c) * 2;
          }
          *(short *)(param_1 + 0x1ee) = sVar7;
          cVar23 = *(char *)((int)param_1 + 6);
          *(undefined2 *)((int)param_1 + iVar107 + 6) = *puVar43;
          if (cVar23 == '\x01') {
            *(undefined2 *)((int)param_1 + iVar107 + 4) = puVar43[1];
            *(undefined2 *)((int)param_1 + iVar107 + 2) = puVar43[2];
            *(undefined2 *)((int)param_1 + (uVar27 + 0x29c) * 2) = puVar43[3];
          }
          else {
            *(undefined2 *)((int)param_1 + iVar107 + 4) = puVar43[2];
            *(undefined2 *)((int)param_1 + iVar107 + 2) = puVar43[4];
            *(undefined2 *)((int)param_1 + (uVar27 + 0x29c) * 2) = puVar43[6];
          }
          iVar111 = (int)*(short *)((int)param_1 + iVar107 + 0x10) -
                    (int)*(short *)((int)param_1 + iVar107 + 0x40);
          iVar109 = (int)*(short *)((int)param_1 + iVar107 + 0x20) -
                    (int)*(short *)((int)param_1 + iVar107 + 0x30);
          iVar117 = iVar6 * iVar111 + ((int)(uVar9 * iVar111) >> 0xf) +
                    iVar8 * iVar109 + ((int)(uVar13 * iVar109) >> 0xf);
          param_1[0x1ef] = iVar117;
          iVar111 = (int)*(short *)((int)param_1 + iVar107 + 2);
          iVar113 = (int)*(short *)((int)param_1 + iVar107 + 0x12);
          iVar109 = (int)*(short *)((int)param_1 + iVar107 + 0x22);
          iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x32);
          iVar119 = (int)*(short *)((int)param_1 + iVar107 + 0x42);
          iVar109 = iVar29 * iVar115 + ((int)(uVar32 * iVar115) >> 0xf) +
                    iVar10 * iVar111 + ((int)(uVar15 * iVar111) >> 0xf) +
                    iVar11 * iVar113 + ((int)(uVar28 * iVar113) >> 0xf) +
                    iVar14 * iVar109 + ((int)(uVar30 * iVar109) >> 0xf) +
                    iVar167 * iVar119 + ((int)(uVar34 * iVar119) >> 0xf);
          param_1[0x1f0] = iVar109;
          iVar111 = (int)*(short *)((int)param_1 + iVar107 + 4);
          iVar113 = (int)*(short *)((int)param_1 + iVar107 + 0x14);
          iVar119 = (int)*(short *)((int)param_1 + iVar107 + 0x24);
          iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x34);
          iVar121 = (int)*(short *)((int)param_1 + iVar107 + 0x44);
          iVar111 = iVar48 * iVar111 + ((int)(uVar36 * iVar111) >> 0xf) +
                    iVar20 * iVar113 + ((int)(uVar38 * iVar113) >> 0xf) +
                    iVar31 * iVar119 + ((int)(uVar50 * iVar119) >> 0xf) +
                    iVar175 * iVar115 + ((int)(uVar52 * iVar115) >> 0xf) +
                    iVar33 * iVar121 + ((int)(uVar54 * iVar121) >> 0xf);
          param_1[0x1f1] = iVar111;
          iVar119 = (int)*(short *)((int)param_1 + iVar107 + 6);
          iVar113 = (int)*(short *)((int)param_1 + iVar107 + 0x16);
          iVar121 = (int)*(short *)((int)param_1 + iVar107 + 0x26);
          iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x36);
          iVar123 = (int)*(short *)((int)param_1 + iVar107 + 0x46);
          iVar113 = iVar41 * iVar123 + ((int)(uVar64 * iVar123) >> 0xf) +
                    iVar35 * iVar119 + ((int)(uVar56 * iVar119) >> 0xf) +
                    iVar37 * iVar113 + ((int)(uVar58 * iVar113) >> 0xf) +
                    iVar39 * iVar121 + ((int)(uVar60 * iVar121) >> 0xf) +
                    iVar40 * iVar115 + ((int)(uVar62 * iVar115) >> 0xf);
          param_1[0x1f2] = iVar113;
          uVar27 = iVar109 + iVar113;
          iVar113 = (int)*(short *)((int)param_1 + iVar107 + 8) +
                    (int)*(short *)((int)param_1 + iVar107 + 0x48);
          iVar109 = (int)*(short *)((int)param_1 + iVar107 + 0x38) +
                    (int)*(short *)((int)param_1 + iVar107 + 0x18);
          iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x28);
          iVar109 = iVar53 * iVar115 + ((int)(uVar70 * iVar115) >> 0xf) +
                    iVar42 * iVar113 + ((int)(uVar66 * iVar113) >> 0xf) +
                    iVar51 * iVar109 + ((int)(uVar68 * iVar109) >> 0xf);
          param_1[499] = iVar109;
          uVar128 = iVar117 + iVar109;
          iVar119 = (int)*(short *)((int)param_1 + iVar107 + 10);
          iVar109 = (int)*(short *)((int)param_1 + iVar107 + 0x1a);
          iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x2a);
          iVar113 = (int)*(short *)((int)param_1 + iVar107 + 0x3a);
          iVar117 = (int)*(short *)((int)param_1 + iVar107 + 0x4a);
          iVar113 = iVar61 * iVar113 + ((int)(uVar78 * iVar113) >> 0xf) +
                    iVar55 * iVar119 + ((int)(uVar72 * iVar119) >> 0xf) +
                    iVar57 * iVar109 + ((int)(uVar74 * iVar109) >> 0xf) +
                    iVar59 * iVar115 + ((int)(uVar76 * iVar115) >> 0xf) +
                    iVar63 * iVar117 + ((int)(uVar80 * iVar117) >> 0xf);
          param_1[500] = iVar113;
          iVar119 = (int)*(short *)((int)param_1 + iVar107 + 0xc);
          iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x1c) -
                    (int)*(short *)((int)param_1 + iVar107 + 0x3c);
          iVar109 = (int)*(short *)((int)param_1 + iVar107 + 0x2c);
          iVar117 = (int)*(short *)((int)param_1 + iVar107 + 0x4c);
          param_1[0x1f5] =
               iVar71 * iVar117 + ((int)(uVar88 * iVar117) >> 0xf) +
               iVar65 * iVar119 + ((int)(uVar82 * iVar119) >> 0xf) +
               iVar67 * iVar115 + ((int)(uVar84 * iVar115) >> 0xf) +
               iVar69 * iVar109 + ((int)(uVar86 * iVar109) >> 0xf);
          iVar121 = (int)*(short *)((int)param_1 + iVar107 + 0xe);
          iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x1e);
          iVar119 = (int)*(short *)((int)param_1 + iVar107 + 0x2e);
          iVar117 = (int)*(short *)((int)param_1 + iVar107 + 0x3e);
          iVar109 = (int)*(short *)((int)param_1 + iVar107 + 0x4e);
          uVar126 = uVar27 & 0x7fff;
          uVar124 = uVar128 & 0x7fff;
          iVar107 = (int)uVar128 >> 0xf;
          iVar115 = iVar73 * iVar121 + ((int)(uVar90 * iVar121) >> 0xf) +
                    iVar75 * iVar115 + ((int)(uVar92 * iVar115) >> 0xf) +
                    iVar77 * iVar119 + ((int)(uVar94 * iVar119) >> 0xf) +
                    iVar79 * iVar117 + ((int)(uVar96 * iVar117) >> 0xf) +
                    iVar81 * iVar109 + ((int)(uVar98 * iVar109) >> 0xf);
          iVar109 = (int)uVar27 >> 0xf;
          uVar27 = iVar113 - iVar115;
          param_1[0x1f6] = iVar115;
          iVar113 = (int)uVar27 >> 0xf;
          uVar27 = uVar27 & 0x7fff;
          puVar21[0x29] =
               iVar87 * iVar113 + ((int)(uVar104 * iVar113) >> 0xf) +
               ((int)(uVar27 * iVar87) >> 0xf) +
               iVar83 * iVar107 + ((int)(uVar100 * iVar107) >> 0xf) +
               ((int)(uVar124 * iVar83) >> 0xf) +
               iVar85 * iVar109 + ((int)(uVar102 * iVar109) >> 0xf) +
               ((int)(uVar126 * iVar85) >> 0xf) + iVar111;
          puVar21[0x2a] =
               iVar93 * iVar113 + ((int)(uVar110 * iVar113) >> 0xf) +
               ((int)(uVar27 * iVar93) >> 0xf) +
               iVar89 * iVar107 + ((int)(uVar106 * iVar107) >> 0xf) +
               ((int)(iVar89 * uVar124) >> 0xf) +
               iVar91 * iVar109 + ((int)(uVar108 * iVar109) >> 0xf) +
               ((int)(iVar91 * uVar126) >> 0xf) + iVar111;
          puVar21[0x2b] =
               iVar99 * iVar113 + ((int)(uVar116 * iVar113) >> 0xf) +
               ((int)(uVar27 * iVar99) >> 0xf) +
               iVar95 * iVar107 + ((int)(uVar112 * iVar107) >> 0xf) +
               ((int)(iVar95 * uVar124) >> 0xf) +
               iVar97 * iVar109 + ((int)(uVar114 * iVar109) >> 0xf) +
               ((int)(uVar126 * iVar97) >> 0xf) + iVar111;
          puVar21[0x2c] =
               iVar105 * iVar113 + ((int)(uVar122 * iVar113) >> 0xf) +
               ((int)(iVar105 * uVar27) >> 0xf) +
               iVar101 * iVar107 + ((int)(uVar118 * iVar107) >> 0xf) +
               ((int)(iVar101 * uVar124) >> 0xf) +
               iVar103 * iVar109 + ((int)(uVar120 * iVar109) >> 0xf) +
               ((int)(iVar103 * uVar126) >> 0xf) + iVar111;
          if (*(byte *)((int)param_1 + 6) < 2) {
            local_2e8 = local_2e8 + 8;
          }
          else {
            puVar43 = (undefined2 *)(local_2e8 + 2 + local_2b4);
            uVar27 = (uint)*(ushort *)((int)param_1 + 0x7ba);
            if (uVar27 == 0) {
              puVar12 = param_1 + 0x19f;
              do {
                puVar47 = puVar12 + 1;
                puVar12[0x3d] = *puVar47;
                puVar12 = puVar47;
              } while (param_1 + 0x1b1 != puVar47);
              sVar7 = 0x74;
              uVar27 = 0x78;
              iVar107 = 0x768;
            }
            else {
              iVar107 = (uVar27 + 0x33c) * 2;
              sVar7 = *(ushort *)((int)param_1 + 0x7ba) - 4;
            }
            *(short *)((int)param_1 + 0x7ba) = sVar7;
            local_2e8 = local_2e8 + 0x10;
            *(undefined2 *)((int)param_1 + iVar107 + 6) = *puVar43;
            *(undefined2 *)((int)param_1 + iVar107 + 4) = puVar43[2];
            *(undefined2 *)((int)param_1 + iVar107 + 2) = puVar43[4];
            *(undefined2 *)((int)param_1 + (uVar27 + 0x33c) * 2) = puVar43[6];
            iVar111 = (int)*(short *)((int)param_1 + iVar107 + 0x10) -
                      (int)*(short *)((int)param_1 + iVar107 + 0x40);
            iVar109 = (int)*(short *)((int)param_1 + iVar107 + 0x20) -
                      (int)*(short *)((int)param_1 + iVar107 + 0x30);
            iVar117 = iVar6 * iVar111 + ((int)(iVar111 * uVar9) >> 0xf) +
                      iVar8 * iVar109 + ((int)(iVar109 * uVar13) >> 0xf);
            param_1[0x1ef] = iVar117;
            iVar113 = (int)*(short *)((int)param_1 + iVar107 + 2);
            iVar109 = (int)*(short *)((int)param_1 + iVar107 + 0x12);
            iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x22);
            iVar111 = (int)*(short *)((int)param_1 + iVar107 + 0x32);
            iVar119 = (int)*(short *)((int)param_1 + iVar107 + 0x42);
            iVar109 = iVar29 * iVar111 + ((int)(iVar111 * uVar32) >> 0xf) +
                      iVar10 * iVar113 + ((int)(iVar113 * uVar15) >> 0xf) +
                      iVar11 * iVar109 + ((int)(iVar109 * uVar28) >> 0xf) +
                      iVar14 * iVar115 + ((int)(iVar115 * uVar30) >> 0xf) +
                      iVar167 * iVar119 + ((int)(iVar119 * uVar34) >> 0xf);
            param_1[0x1f0] = iVar109;
            iVar111 = (int)*(short *)((int)param_1 + iVar107 + 4);
            iVar113 = (int)*(short *)((int)param_1 + iVar107 + 0x14);
            iVar119 = (int)*(short *)((int)param_1 + iVar107 + 0x24);
            iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x34);
            iVar121 = (int)*(short *)((int)param_1 + iVar107 + 0x44);
            iVar111 = iVar48 * iVar111 + ((int)(iVar111 * uVar36) >> 0xf) +
                      iVar20 * iVar113 + ((int)(iVar113 * uVar38) >> 0xf) +
                      iVar31 * iVar119 + ((int)(iVar119 * uVar50) >> 0xf) +
                      iVar175 * iVar115 + ((int)(iVar115 * uVar52) >> 0xf) +
                      iVar33 * iVar121 + ((int)(iVar121 * uVar54) >> 0xf);
            param_1[0x1f1] = iVar111;
            iVar119 = (int)*(short *)((int)param_1 + iVar107 + 6);
            iVar113 = (int)*(short *)((int)param_1 + iVar107 + 0x16);
            iVar121 = (int)*(short *)((int)param_1 + iVar107 + 0x26);
            iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x36);
            iVar123 = (int)*(short *)((int)param_1 + iVar107 + 0x46);
            iVar113 = iVar35 * iVar119 + ((int)(iVar119 * uVar56) >> 0xf) +
                      iVar37 * iVar113 + ((int)(iVar113 * uVar58) >> 0xf) +
                      iVar39 * iVar121 + ((int)(iVar121 * uVar60) >> 0xf) +
                      iVar40 * iVar115 + ((int)(iVar115 * uVar62) >> 0xf) +
                      iVar41 * iVar123 + ((int)(iVar123 * uVar64) >> 0xf);
            param_1[0x1f2] = iVar113;
            uVar124 = iVar109 + iVar113;
            iVar113 = (int)*(short *)((int)param_1 + iVar107 + 8) +
                      (int)*(short *)((int)param_1 + iVar107 + 0x48);
            iVar109 = (int)*(short *)((int)param_1 + iVar107 + 0x38) +
                      (int)*(short *)((int)param_1 + iVar107 + 0x18);
            iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x28);
            iVar109 = iVar42 * iVar113 + ((int)(iVar113 * uVar66) >> 0xf) +
                      iVar51 * iVar109 + ((int)(iVar109 * uVar68) >> 0xf) +
                      iVar53 * iVar115 + ((int)(iVar115 * uVar70) >> 0xf);
            param_1[499] = iVar109;
            uVar126 = iVar117 + iVar109;
            iVar119 = (int)*(short *)((int)param_1 + iVar107 + 10);
            iVar109 = (int)*(short *)((int)param_1 + iVar107 + 0x1a);
            iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x2a);
            iVar113 = (int)*(short *)((int)param_1 + iVar107 + 0x3a);
            iVar117 = (int)*(short *)((int)param_1 + iVar107 + 0x4a);
            iVar109 = iVar57 * iVar109 + ((int)(iVar109 * uVar74) >> 0xf) +
                      iVar55 * iVar119 + ((int)(iVar119 * uVar72) >> 0xf) +
                      iVar59 * iVar115 + ((int)(iVar115 * uVar76) >> 0xf) +
                      iVar61 * iVar113 + ((int)(iVar113 * uVar78) >> 0xf) +
                      iVar63 * iVar117 + ((int)(iVar117 * uVar80) >> 0xf);
            param_1[500] = iVar109;
            iVar119 = (int)*(short *)((int)param_1 + iVar107 + 0xc);
            iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x1c) -
                      (int)*(short *)((int)param_1 + iVar107 + 0x3c);
            iVar113 = (int)*(short *)((int)param_1 + iVar107 + 0x2c);
            iVar117 = (int)*(short *)((int)param_1 + iVar107 + 0x4c);
            param_1[0x1f5] =
                 iVar71 * iVar117 + ((int)(iVar117 * uVar88) >> 0xf) +
                 iVar65 * iVar119 + ((int)(iVar119 * uVar82) >> 0xf) +
                 iVar67 * iVar115 + ((int)(iVar115 * uVar84) >> 0xf) +
                 iVar69 * iVar113 + ((int)(iVar113 * uVar86) >> 0xf);
            iVar121 = (int)*(short *)((int)param_1 + iVar107 + 0xe);
            iVar113 = (int)*(short *)((int)param_1 + iVar107 + 0x1e);
            iVar119 = (int)*(short *)((int)param_1 + iVar107 + 0x2e);
            iVar115 = (int)*(short *)((int)param_1 + iVar107 + 0x3e);
            iVar107 = (int)*(short *)((int)param_1 + iVar107 + 0x4e);
            uVar27 = uVar124 & 0x7fff;
            iVar117 = (int)uVar126 >> 0xf;
            uVar126 = uVar126 & 0x7fff;
            iVar113 = iVar73 * iVar121 + ((int)(iVar121 * uVar90) >> 0xf) +
                      iVar75 * iVar113 + ((int)(iVar113 * uVar92) >> 0xf) +
                      iVar77 * iVar119 + ((int)(iVar119 * uVar94) >> 0xf) +
                      iVar79 * iVar115 + ((int)(iVar115 * uVar96) >> 0xf) +
                      iVar81 * iVar107 + ((int)(iVar107 * uVar98) >> 0xf);
            iVar107 = (int)uVar124 >> 0xf;
            uVar124 = iVar109 - iVar113;
            param_1[0x1f6] = iVar113;
            uVar128 = uVar124 & 0x7fff;
            iVar109 = (int)uVar124 >> 0xf;
            puVar21[0x31] =
                 iVar87 * iVar109 + ((int)(uVar104 * iVar109) >> 0xf) +
                 ((int)(uVar128 * iVar87) >> 0xf) +
                 iVar83 * iVar117 + ((int)(uVar100 * iVar117) >> 0xf) +
                 ((int)(iVar83 * uVar126) >> 0xf) +
                 iVar85 * iVar107 + ((int)(uVar102 * iVar107) >> 0xf) +
                 ((int)(iVar85 * uVar27) >> 0xf) + iVar111;
            puVar21[0x32] =
                 iVar93 * iVar109 + ((int)(uVar110 * iVar109) >> 0xf) +
                 ((int)(uVar128 * iVar93) >> 0xf) +
                 iVar91 * iVar107 + ((int)(uVar108 * iVar107) >> 0xf) +
                 ((int)(iVar91 * uVar27) >> 0xf) +
                 iVar89 * iVar117 + ((int)(uVar106 * iVar117) >> 0xf) +
                 ((int)(iVar89 * uVar126) >> 0xf) + iVar111;
            puVar21[0x34] =
                 iVar105 * iVar109 + ((int)(uVar122 * iVar109) >> 0xf) +
                 ((int)(iVar105 * uVar128) >> 0xf) +
                 iVar101 * iVar117 + ((int)(uVar118 * iVar117) >> 0xf) +
                 ((int)(iVar101 * uVar126) >> 0xf) +
                 iVar103 * iVar107 + ((int)(uVar120 * iVar107) >> 0xf) +
                 ((int)(iVar103 * uVar27) >> 0xf) + iVar111;
            puVar21[0x33] =
                 iVar99 * iVar109 + ((int)(uVar116 * iVar109) >> 0xf) +
                 ((int)(uVar128 * iVar99) >> 0xf) +
                 iVar97 * iVar107 + ((int)(uVar114 * iVar107) >> 0xf) +
                 ((int)(iVar97 * uVar27) >> 0xf) +
                 iVar95 * iVar117 + ((int)(uVar112 * iVar117) >> 0xf) +
                 ((int)(iVar95 * uVar126) >> 0xf) + iVar111;
          }
          local_2e8 = local_2e8 & 0xffff;
          puVar21 = puVar21 + 0x10;
          uVar27 = (uint)*(byte *)(param_1 + 1);
          local_2bc = local_2bc + 1;
        } while (local_2bc < uVar27);
        goto LAB_2c01f0bc;
      }
LAB_2c01f0c8:
      local_2e4 = (uint)*(byte *)((int)param_1 + 2);
      puVar171 = param_1 + 5;
      puVar12 = param_1 + uVar27 * 0x10;
      puVar47 = param_1 + uVar27 * 2;
      uVar9 = 0;
      puVar21 = param_1;
      do {
        if (uVar27 == 0) {
          *(undefined1 *)puVar171 = 0;
          puVar21[9] = 2;
          if (1 < *(byte *)((int)param_1 + 6)) {
            iVar48 = 2;
            *(undefined1 *)(puVar171 + 2) = 0;
            uVar13 = 0;
            iVar167 = 0;
            uVar15 = 0;
            local_2e0 = 0;
            goto LAB_2c01f294;
          }
        }
        else {
          bVar2 = *(byte *)((int)param_1 + 6);
          if (bVar2 < 2) {
            iVar48 = 0;
            puVar5 = puVar21;
            do {
              while( true ) {
                iVar167 = puVar5[0x29];
                puVar5 = puVar5 + 0x10;
                if (iVar167 < 0) break;
                if (iVar48 < iVar167 >> 0xf) {
                  iVar48 = iVar167 >> 0xf;
                }
                if (puVar5 == puVar12) {
                  *(undefined1 *)puVar171 = 0;
                  goto joined_r0x2c01f264;
                }
              }
              if (iVar48 < -iVar167 >> 0xf) {
                iVar48 = -iVar167 >> 0xf;
              }
            } while (puVar12 != puVar5);
            *(undefined1 *)puVar171 = 0;
joined_r0x2c01f264:
            if (iVar48 < 2) {
              puVar21[9] = 2;
              goto LAB_2c01f170;
            }
            iVar20 = 0;
            local_2e0 = 0;
            iVar167 = iVar20;
LAB_2c01f152:
            uVar13 = 1;
            do {
              uVar15 = uVar13;
              iVar48 = iVar48 >> 1;
              uVar13 = uVar15 + 1 & 0xff;
            } while (iVar48 != 1);
            *(char *)puVar171 = (char)uVar15;
            puVar21[9] = 1 << (uVar15 + 1 & 0xff);
            if (bVar2 < 2) goto LAB_2c01f170;
          }
          else {
            if (local_2e4 == 3) {
              if ((int)uVar9 < (int)(local_2ec - 1)) {
                iVar167 = 0;
                iVar20 = 0;
                iVar48 = 0;
                local_2e0 = 0;
                puVar5 = param_1;
                puVar168 = puVar21;
LAB_2c01fcac:
                iVar175 = puVar168[0x29];
                if (iVar175 < 0) goto LAB_2c01fd3e;
                do {
                  if (iVar48 < iVar175 >> 0xf) {
                    iVar48 = iVar175 >> 0xf;
                  }
                  iVar6 = puVar168[0x31];
                  puVar49 = puVar168;
                  while( true ) {
                    iVar8 = iVar6;
                    if (iVar6 < 0) {
                      iVar8 = -iVar6;
                    }
                    iVar6 = iVar6 >> 1;
                    iVar175 = iVar175 >> 1;
                    if (iVar20 < iVar8 >> 0xf) {
                      iVar20 = iVar8 >> 0xf;
                    }
                    iVar8 = iVar6 + iVar175;
                    iVar10 = iVar175 - iVar6;
                    puVar5[0x12e] = iVar8;
                    puVar5[0x12f] = iVar10;
                    if (iVar8 < 0) {
                      iVar8 = -iVar8;
                    }
                    if (local_2e0 < iVar8 >> 0xf) {
                      local_2e0 = iVar8 >> 0xf;
                    }
                    if (-1 < iVar10) {
                      puVar5 = puVar5 + 2;
                      puVar168 = puVar49 + 0x10;
                      if (iVar167 < iVar10 >> 0xf) {
                        iVar167 = iVar10 >> 0xf;
                      }
                      if (puVar47 != puVar5) goto LAB_2c01fcac;
                      goto LAB_2c01f146;
                    }
                    puVar5 = puVar5 + 2;
                    puVar168 = puVar49 + 0x10;
                    iVar175 = iVar6 - iVar175 >> 0xf;
                    if (iVar167 < iVar175) {
                      iVar167 = iVar175;
                    }
                    if (puVar47 == puVar5) goto LAB_2c01f146;
                    iVar175 = puVar49[0x39];
                    if (-1 < iVar175) break;
LAB_2c01fd3e:
                    if (iVar48 < -iVar175 >> 0xf) {
                      iVar48 = -iVar175 >> 0xf;
                    }
                    iVar6 = puVar168[0x31];
                    puVar49 = puVar168;
                  }
                } while( true );
              }
              iVar20 = 0;
              iVar48 = 0;
              puVar5 = puVar21;
              do {
                while( true ) {
                  iVar167 = puVar5[0x29];
                  puVar168 = puVar5 + 0x10;
                  if (iVar167 < 0) {
                    iVar167 = -iVar167;
                  }
                  iVar175 = puVar5[0x31];
                  if (iVar48 < iVar167 >> 0xf) {
                    iVar48 = iVar167 >> 0xf;
                  }
                  puVar5 = puVar168;
                  if (iVar175 < 0) break;
                  if (iVar20 < iVar175 >> 0xf) {
                    iVar20 = iVar175 >> 0xf;
                  }
                  if (puVar12 == puVar168) goto LAB_2c01f142;
                }
                if (iVar20 < -iVar175 >> 0xf) {
                  iVar20 = -iVar175 >> 0xf;
                }
              } while (puVar12 != puVar168);
            }
            else {
              iVar20 = 0;
              iVar48 = 0;
              puVar5 = puVar21;
              do {
                while( true ) {
                  iVar167 = puVar5[0x29];
                  puVar168 = puVar5 + 0x10;
                  if (iVar167 < 0) {
                    iVar167 = -iVar167;
                  }
                  iVar175 = puVar5[0x31];
                  if (iVar48 < iVar167 >> 0xf) {
                    iVar48 = iVar167 >> 0xf;
                  }
                  puVar5 = puVar168;
                  if (iVar175 < 0) break;
                  if (iVar20 < iVar175 >> 0xf) {
                    iVar20 = iVar175 >> 0xf;
                  }
                  if (puVar12 == puVar168) goto LAB_2c01f142;
                }
                if (iVar20 < -iVar175 >> 0xf) {
                  iVar20 = -iVar175 >> 0xf;
                }
              } while (puVar12 != puVar168);
            }
LAB_2c01f142:
            iVar167 = 0;
            local_2e0 = 0;
LAB_2c01f146:
            *(undefined1 *)puVar171 = 0;
            if (1 < iVar48) goto LAB_2c01f152;
            uVar15 = 0;
            puVar21[9] = 2;
          }
          *(undefined1 *)(puVar171 + 2) = 0;
          if (iVar20 < 2) {
            iVar48 = 2;
            uVar13 = 0;
          }
          else {
            uVar28 = 1;
            do {
              uVar13 = uVar28;
              iVar20 = iVar20 >> 1;
              uVar28 = uVar13 + 1 & 0xff;
            } while (iVar20 != 1);
            iVar48 = 1 << (uVar13 + 1 & 0xff);
            *(char *)(puVar171 + 2) = (char)uVar13;
          }
LAB_2c01f294:
          param_1[uVar9 + 0x11] = iVar48;
          *(undefined1 *)((int)param_1 + uVar9 + 0xc) = 0;
          if ((local_2e4 == 3) && ((int)uVar9 < (int)(local_2ec - 1))) {
            *(undefined1 *)((int)param_1 + uVar9 + 0x4a8) = 0;
            if (1 < local_2e0) {
              cVar23 = '\0';
              do {
                local_2e0 = local_2e0 >> 1;
                cVar23 = cVar23 + '\x01';
              } while (local_2e0 != 1);
              *(char *)((int)param_1 + uVar9 + 0x4a8) = cVar23;
            }
            *(undefined1 *)((int)param_1 + uVar9 + 0x4b0) = 0;
            if (iVar167 < 2) {
              uVar28 = 0;
            }
            else {
              uVar30 = 1;
              do {
                uVar28 = uVar30;
                iVar167 = iVar167 >> 1;
                uVar30 = uVar28 + 1 & 0xff;
              } while (iVar167 != 1);
              *(char *)((int)param_1 + uVar9 + 0x4b0) = (char)uVar28;
            }
            bVar2 = *(byte *)((int)param_1 + uVar9 + 0x4a8);
            if (bVar2 + uVar28 < uVar13 + uVar15) {
              *(undefined1 *)((int)param_1 + uVar9 + 0xc) = 1;
              puVar5 = param_1;
              puVar168 = puVar21;
              if (uVar27 != 0) {
                do {
                  puVar49 = puVar5 + 2;
                  puVar168[0x29] = puVar5[0x12e];
                  puVar168[0x31] = puVar5[0x12f];
                  puVar5 = puVar49;
                  puVar168 = puVar168 + 0x10;
                } while (puVar49 != puVar47);
              }
              *(char *)((int)param_1 + uVar9 + 0x1c) = (char)uVar28;
              *(byte *)((int)param_1 + uVar9 + 0x14) = bVar2;
              param_1[uVar9 + 0x11] = 1 << (uVar28 + 1 & 0xff);
              param_1[uVar9 + 9] = 1 << (bVar2 + 1 & 0xff);
            }
          }
        }
LAB_2c01f170:
        uVar9 = uVar9 + 1;
        puVar171 = (undefined4 *)((int)puVar171 + 1);
        puVar21 = puVar21 + 1;
        puVar12 = puVar12 + 1;
      } while ((uVar9 & 0xff) < local_2ec);
    }
    else {
      if (uVar27 != 0) {
        local_2b8 = param_1 + 0x28;
        local_2b0 = 0;
        iVar8 = (int)*(uint *)(DAT_2c01e5bc + 0x40) >> 0xf;
        uVar9 = *(uint *)(DAT_2c01e5bc + 0x40) & 0x7fff;
        iVar10 = (int)*(uint *)(DAT_2c01e5bc + 0x80) >> 0xf;
        uVar28 = *(uint *)(DAT_2c01e5bc + 0x80) & 0x7fff;
        iVar29 = (int)*(uint *)(DAT_2c01e5bc + 4) >> 0xf;
        uVar30 = *(uint *)(DAT_2c01e5bc + 4) & 0x7fff;
        iVar31 = (int)*(uint *)(DAT_2c01e5bc + 0x44) >> 0xf;
        uVar32 = *(uint *)(DAT_2c01e5bc + 0x44) & 0x7fff;
        iVar33 = (int)*(uint *)(DAT_2c01e5bc + 0x84) >> 0xf;
        uVar34 = *(uint *)(DAT_2c01e5bc + 0x84) & 0x7fff;
        iVar35 = (int)*(uint *)(DAT_2c01e5bc + 0xc4) >> 0xf;
        uVar36 = *(uint *)(DAT_2c01e5bc + 0xc4) & 0x7fff;
        iVar37 = (int)*(uint *)(DAT_2c01e5bc + 0x104) >> 0xf;
        uVar38 = *(uint *)(DAT_2c01e5bc + 0x104) & 0x7fff;
        iVar167 = (int)*(uint *)(DAT_2c01e5bc + 8) >> 0xf;
        uVar184 = *(uint *)(DAT_2c01e5bc + 8) & 0x7fff;
        iVar48 = (int)*(uint *)(DAT_2c01e5bc + 0x48) >> 0xf;
        uVar185 = *(uint *)(DAT_2c01e5bc + 0x48) & 0x7fff;
        iVar39 = (int)*(uint *)(DAT_2c01e5bc + 0xc) >> 0xf;
        iVar20 = (int)*(uint *)(DAT_2c01e5bc + 0x88) >> 0xf;
        iVar40 = (int)*(uint *)(DAT_2c01e5bc + 0x4c) >> 0xf;
        uVar186 = *(uint *)(DAT_2c01e5bc + 0x88) & 0x7fff;
        iVar175 = (int)*(uint *)(DAT_2c01e5bc + 200) >> 0xf;
        uVar187 = *(uint *)(DAT_2c01e5bc + 200) & 0x7fff;
        iVar6 = (int)*(uint *)(DAT_2c01e5bc + 0x108) >> 0xf;
        uVar188 = *(uint *)(DAT_2c01e5bc + 0x108) & 0x7fff;
        uVar189 = *(uint *)(DAT_2c01e5bc + 0xc) & 0x7fff;
        uVar190 = *(uint *)(DAT_2c01e5bc + 0x4c) & 0x7fff;
        iVar41 = (int)*(uint *)(DAT_2c01e5bc + 0x8c) >> 0xf;
        uVar191 = *(uint *)(DAT_2c01e5bc + 0x8c) & 0x7fff;
        iVar42 = (int)*(uint *)(DAT_2c01e5bc + 0xcc) >> 0xf;
        uVar50 = *(uint *)(DAT_2c01e5bc + 0xcc) & 0x7fff;
        iVar51 = (int)*(uint *)(DAT_2c01e5bc + 0x10c) >> 0xf;
        uVar52 = *(uint *)(DAT_2c01e5bc + 0x10c) & 0x7fff;
        iVar53 = (int)*(uint *)(DAT_2c01e5bc + 0x10) >> 0xf;
        uVar54 = *(uint *)(DAT_2c01e5bc + 0x10) & 0x7fff;
        iVar55 = (int)*(uint *)(DAT_2c01e5bc + 0x50) >> 0xf;
        uVar56 = *(uint *)(DAT_2c01e5bc + 0x50) & 0x7fff;
        iVar57 = (int)*(uint *)(DAT_2c01e5bc + 0x90) >> 0xf;
        uVar58 = *(uint *)(DAT_2c01e5bc + 0x90) & 0x7fff;
        iVar59 = (int)*(uint *)(DAT_2c01e5bc + 0xd0) >> 0xf;
        uVar60 = *(uint *)(DAT_2c01e5bc + 0xd0) & 0x7fff;
        iVar61 = (int)*(uint *)(DAT_2c01e5bc + 0x110) >> 0xf;
        uVar62 = *(uint *)(DAT_2c01e5bc + 0x110) & 0x7fff;
        iVar63 = (int)*(uint *)(DAT_2c01e5bc + 0x14) >> 0xf;
        uVar64 = *(uint *)(DAT_2c01e5bc + 0x14) & 0x7fff;
        iVar65 = (int)*(uint *)(DAT_2c01e5bc + 0x54) >> 0xf;
        uVar66 = *(uint *)(DAT_2c01e5bc + 0x54) & 0x7fff;
        iVar67 = (int)*(uint *)(DAT_2c01e5bc + 0x94) >> 0xf;
        uVar68 = *(uint *)(DAT_2c01e5bc + 0x94) & 0x7fff;
        iVar69 = (int)*(uint *)(DAT_2c01e5bc + 0xd4) >> 0xf;
        uVar70 = *(uint *)(DAT_2c01e5bc + 0xd4) & 0x7fff;
        iVar71 = (int)*(uint *)(DAT_2c01e5bc + 0x114) >> 0xf;
        uVar72 = *(uint *)(DAT_2c01e5bc + 0x114) & 0x7fff;
        iVar73 = (int)*(uint *)(DAT_2c01e5bc + 0x18) >> 0xf;
        uVar74 = *(uint *)(DAT_2c01e5bc + 0x18) & 0x7fff;
        iVar75 = (int)*(uint *)(DAT_2c01e5bc + 0x58) >> 0xf;
        uVar76 = *(uint *)(DAT_2c01e5bc + 0x58) & 0x7fff;
        iVar77 = (int)*(uint *)(DAT_2c01e5bc + 0x98) >> 0xf;
        uVar78 = *(uint *)(DAT_2c01e5bc + 0x98) & 0x7fff;
        iVar79 = (int)*(uint *)(DAT_2c01e5bc + 0xd8) >> 0xf;
        uVar80 = *(uint *)(DAT_2c01e5bc + 0xd8) & 0x7fff;
        iVar81 = (int)*(uint *)(DAT_2c01e5bc + 0x118) >> 0xf;
        uVar82 = *(uint *)(DAT_2c01e5bc + 0x118) & 0x7fff;
        iVar83 = (int)*(uint *)(DAT_2c01e5bc + 0x1c) >> 0xf;
        uVar84 = *(uint *)(DAT_2c01e5bc + 0x1c) & 0x7fff;
        iVar85 = (int)*(uint *)(DAT_2c01e5bc + 0x5c) >> 0xf;
        uVar86 = *(uint *)(DAT_2c01e5bc + 0x5c) & 0x7fff;
        iVar87 = (int)*(uint *)(DAT_2c01e5bc + 0x9c) >> 0xf;
        uVar88 = *(uint *)(DAT_2c01e5bc + 0x9c) & 0x7fff;
        iVar89 = (int)*(uint *)(DAT_2c01e5bc + 0xdc) >> 0xf;
        uVar90 = *(uint *)(DAT_2c01e5bc + 0xdc) & 0x7fff;
        iVar91 = (int)*(uint *)(DAT_2c01e5bc + 0x11c) >> 0xf;
        uVar92 = *(uint *)(DAT_2c01e5bc + 0x11c) & 0x7fff;
        iVar93 = (int)*(uint *)(DAT_2c01e5bc + 0x20) >> 0xf;
        uVar94 = *(uint *)(DAT_2c01e5bc + 0x20) & 0x7fff;
        iVar95 = (int)*(uint *)(DAT_2c01e5bc + 0x60) >> 0xf;
        uVar96 = *(uint *)(DAT_2c01e5bc + 0x60) & 0x7fff;
        iVar97 = (int)*(uint *)(DAT_2c01e5bc + 0xa0) >> 0xf;
        uVar98 = *(uint *)(DAT_2c01e5bc + 0xa0) & 0x7fff;
        iVar99 = (int)*(uint *)(DAT_2c01e5bc + 0x24) >> 0xf;
        uVar100 = *(uint *)(DAT_2c01e5bc + 0x24) & 0x7fff;
        iVar101 = (int)*(uint *)(DAT_2c01e5bc + 100) >> 0xf;
        uVar102 = *(uint *)(DAT_2c01e5bc + 100) & 0x7fff;
        iVar103 = (int)*(uint *)(DAT_2c01e5bc + 0xa4) >> 0xf;
        uVar104 = *(uint *)(DAT_2c01e5bc + 0xa4) & 0x7fff;
        iVar105 = (int)*(uint *)(DAT_2c01e5bc + 0xe4) >> 0xf;
        uVar106 = *(uint *)(DAT_2c01e5bc + 0xe4) & 0x7fff;
        iVar107 = (int)*(uint *)(DAT_2c01e5bc + 0x124) >> 0xf;
        uVar108 = *(uint *)(DAT_2c01e5bc + 0x124) & 0x7fff;
        iVar109 = (int)*(uint *)(DAT_2c01e5bc + 0x28) >> 0xf;
        uVar110 = *(uint *)(DAT_2c01e5bc + 0x28) & 0x7fff;
        iVar111 = (int)*(uint *)(DAT_2c01e5bc + 0x68) >> 0xf;
        uVar112 = *(uint *)(DAT_2c01e5bc + 0x68) & 0x7fff;
        iVar113 = (int)*(uint *)(DAT_2c01e5bc + 0xa8) >> 0xf;
        uVar114 = *(uint *)(DAT_2c01e5bc + 0xa8) & 0x7fff;
        iVar115 = (int)*(uint *)(DAT_2c01e5bc + 0xe8) >> 0xf;
        uVar116 = *(uint *)(DAT_2c01e5bc + 0xe8) & 0x7fff;
        iVar117 = (int)*(uint *)(DAT_2c01e5bc + 0x128) >> 0xf;
        uVar118 = *(uint *)(DAT_2c01e5bc + 0x128) & 0x7fff;
        iVar119 = (int)*(uint *)(DAT_2c01e5bc + 0x2c) >> 0xf;
        uVar120 = *(uint *)(DAT_2c01e5bc + 0x2c) & 0x7fff;
        iVar121 = (int)*(uint *)(DAT_2c01e5bc + 0x6c) >> 0xf;
        uVar122 = *(uint *)(DAT_2c01e5bc + 0x6c) & 0x7fff;
        iVar123 = (int)*(uint *)(DAT_2c01e5bc + 0xac) >> 0xf;
        uVar124 = *(uint *)(DAT_2c01e5bc + 0xac) & 0x7fff;
        iVar125 = (int)*(uint *)(DAT_2c01e5bc + 0xec) >> 0xf;
        uVar126 = *(uint *)(DAT_2c01e5bc + 0xec) & 0x7fff;
        iVar127 = (int)*(uint *)(DAT_2c01e5bc + 300) >> 0xf;
        uVar128 = *(uint *)(DAT_2c01e5bc + 300) & 0x7fff;
        iVar129 = (int)*(uint *)(DAT_2c01e5bc + 0x30) >> 0xf;
        uVar130 = *(uint *)(DAT_2c01e5bc + 0x30) & 0x7fff;
        iVar131 = (int)*(uint *)(DAT_2c01e5bc + 0x70) >> 0xf;
        uVar132 = *(uint *)(DAT_2c01e5bc + 0x70) & 0x7fff;
        iVar133 = (int)*(uint *)(DAT_2c01e5bc + 0xb0) >> 0xf;
        uVar134 = *(uint *)(DAT_2c01e5bc + 0xb0) & 0x7fff;
        iVar135 = (int)*(uint *)(DAT_2c01e5bc + 0xf0) >> 0xf;
        uVar136 = *(uint *)(DAT_2c01e5bc + 0xf0) & 0x7fff;
        iVar137 = (int)*(uint *)(DAT_2c01e5bc + 0x130) >> 0xf;
        uVar138 = *(uint *)(DAT_2c01e5bc + 0x130) & 0x7fff;
        iVar139 = (int)*(uint *)(DAT_2c01e5bc + 0x34) >> 0xf;
        uVar140 = *(uint *)(DAT_2c01e5bc + 0x34) & 0x7fff;
        iVar141 = (int)*(uint *)(DAT_2c01e5bc + 0x74) >> 0xf;
        uVar142 = *(uint *)(DAT_2c01e5bc + 0x74) & 0x7fff;
        iVar143 = (int)*(uint *)(DAT_2c01e5bc + 0xb4) >> 0xf;
        uVar144 = *(uint *)(DAT_2c01e5bc + 0xb4) & 0x7fff;
        iVar145 = (int)*(uint *)(DAT_2c01e5bc + 0xf4) >> 0xf;
        uVar146 = *(uint *)(DAT_2c01e5bc + 0xf4) & 0x7fff;
        iVar147 = (int)*(uint *)(DAT_2c01e5bc + 0x134) >> 0xf;
        uVar148 = *(uint *)(DAT_2c01e5bc + 0x134) & 0x7fff;
        iVar149 = (int)*(uint *)(DAT_2c01e5bc + 0x38) >> 0xf;
        uVar150 = *(uint *)(DAT_2c01e5bc + 0x38) & 0x7fff;
        iVar151 = (int)*(uint *)(DAT_2c01e5bc + 0x78) >> 0xf;
        local_2bc = 0;
        uVar152 = *(uint *)(DAT_2c01e5bc + 0x78) & 0x7fff;
        iVar153 = (int)*(uint *)(DAT_2c01e5bc + 0xb8) >> 0xf;
        uVar154 = *(uint *)(DAT_2c01e5bc + 0xb8) & 0x7fff;
        iVar155 = (int)*(uint *)(DAT_2c01e5bc + 0xf8) >> 0xf;
        uVar156 = *(uint *)(DAT_2c01e5bc + 0xf8) & 0x7fff;
        iVar157 = (int)*(uint *)(DAT_2c01e5bc + 0x138) >> 0xf;
        uVar158 = *(uint *)(DAT_2c01e5bc + 0x138) & 0x7fff;
        iVar159 = (int)*(uint *)(DAT_2c01e5bc + 0x3c) >> 0xf;
        uVar160 = *(uint *)(DAT_2c01e5bc + 0x3c) & 0x7fff;
        iVar161 = (int)*(uint *)(DAT_2c01e5bc + 0x7c) >> 0xf;
        uVar162 = *(uint *)(DAT_2c01e5bc + 0x7c) & 0x7fff;
        iVar163 = (int)*(uint *)(DAT_2c01e5bc + 0xbc) >> 0xf;
        uVar164 = *(uint *)(DAT_2c01e5bc + 0xbc) & 0x7fff;
        iVar11 = (int)*(uint *)(DAT_2c01e5bc + 0xfc) >> 0xf;
        uVar13 = *(uint *)(DAT_2c01e5bc + 0xfc) & 0x7fff;
        iVar14 = (int)*(uint *)(DAT_2c01e5bc + 0x13c) >> 0xf;
        uVar15 = *(uint *)(DAT_2c01e5bc + 0x13c) & 0x7fff;
        do {
          uVar27 = (uint)*(ushort *)(param_1 + 0x1ee);
          puVar43 = (undefined2 *)(local_2b4 + local_2bc);
          if (uVar27 == 0) {
            puVar21 = param_1 + 0x151;
            do {
              puVar12 = puVar21 + 1;
              puVar21[0x29] = *puVar12;
              puVar21 = puVar12;
            } while (param_1 + 0x175 != puVar12);
            iVar4 = 0x5d8;
            sVar7 = 0x48;
            uVar27 = 0x50;
          }
          else {
            sVar7 = *(ushort *)(param_1 + 0x1ee) - 8;
            iVar4 = (uVar27 + 0x29c) * 2;
          }
          *(short *)(param_1 + 0x1ee) = sVar7;
          if (*(char *)((int)param_1 + 6) == '\x01') {
            *(undefined2 *)((int)param_1 + iVar4 + 0xe) = *puVar43;
            *(undefined2 *)((int)param_1 + iVar4 + 0xc) = puVar43[1];
            *(undefined2 *)((int)param_1 + iVar4 + 10) = puVar43[2];
            *(undefined2 *)((int)param_1 + iVar4 + 8) = puVar43[3];
            *(undefined2 *)((int)param_1 + iVar4 + 6) = puVar43[4];
            *(undefined2 *)((int)param_1 + iVar4 + 4) = puVar43[5];
            *(undefined2 *)((int)param_1 + iVar4 + 2) = puVar43[6];
            *(undefined2 *)((int)param_1 + (uVar27 + 0x29c) * 2) = puVar43[7];
          }
          else {
            *(undefined2 *)((int)param_1 + iVar4 + 0xe) = *puVar43;
            *(undefined2 *)((int)param_1 + iVar4 + 0xc) = puVar43[2];
            *(undefined2 *)((int)param_1 + iVar4 + 10) = puVar43[4];
            *(undefined2 *)((int)param_1 + iVar4 + 8) = puVar43[6];
            *(undefined2 *)((int)param_1 + iVar4 + 6) = puVar43[8];
            *(undefined2 *)((int)param_1 + iVar4 + 4) = puVar43[10];
            *(undefined2 *)((int)param_1 + iVar4 + 2) = puVar43[0xc];
            *(undefined2 *)((int)param_1 + (uVar27 + 0x29c) * 2) = puVar43[0xe];
          }
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x20) -
                   (int)*(short *)((int)param_1 + iVar4 + 0x80);
          iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x40) -
                   (int)*(short *)((int)param_1 + iVar4 + 0x60);
          iVar172 = iVar8 * iVar16 + ((int)(uVar9 * iVar16) >> 0xf) +
                    iVar10 * iVar44 + ((int)(uVar28 * iVar44) >> 0xf);
          param_1[0x1ef] = iVar172;
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 2);
          iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x22);
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x42);
          iVar18 = (int)*(short *)((int)param_1 + iVar4 + 0x62);
          iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x82);
          iVar169 = iVar35 * iVar18 + ((int)(uVar36 * iVar18) >> 0xf) +
                    iVar29 * iVar45 + ((int)(uVar30 * iVar45) >> 0xf) +
                    iVar31 * iVar17 + ((int)(uVar32 * iVar17) >> 0xf) +
                    iVar33 * iVar16 + ((int)(uVar34 * iVar16) >> 0xf) +
                    iVar37 * iVar44 + ((int)(uVar38 * iVar44) >> 0xf);
          param_1[0x1f0] = iVar169;
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 4);
          iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x24);
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x44);
          iVar18 = (int)*(short *)((int)param_1 + iVar4 + 100);
          iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x84);
          iVar165 = iVar175 * iVar18 + ((int)(uVar187 * iVar18) >> 0xf) +
                    iVar167 * iVar45 + ((int)(uVar184 * iVar45) >> 0xf) +
                    iVar48 * iVar17 + ((int)(uVar185 * iVar17) >> 0xf) +
                    iVar20 * iVar16 + ((int)(uVar186 * iVar16) >> 0xf) +
                    iVar6 * iVar44 + ((int)(uVar188 * iVar44) >> 0xf);
          param_1[0x1f1] = iVar165;
          iVar18 = (int)*(short *)((int)param_1 + iVar4 + 6);
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x26);
          iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x46);
          iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x66);
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x86);
          iVar17 = iVar51 * iVar45 + ((int)(uVar52 * iVar45) >> 0xf) +
                   iVar39 * iVar18 + ((int)(uVar189 * iVar18) >> 0xf) +
                   iVar40 * iVar16 + ((int)(uVar190 * iVar16) >> 0xf) +
                   iVar41 * iVar17 + ((int)(uVar191 * iVar17) >> 0xf) +
                   iVar42 * iVar44 + ((int)(uVar50 * iVar44) >> 0xf);
          param_1[0x1f2] = iVar17;
          iVar18 = (int)*(short *)((int)param_1 + iVar4 + 8);
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x28);
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x48);
          iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x68);
          iVar176 = (int)*(short *)((int)param_1 + iVar4 + 0x88);
          iVar18 = iVar53 * iVar18 + ((int)(uVar54 * iVar18) >> 0xf) +
                   iVar55 * iVar16 + ((int)(uVar56 * iVar16) >> 0xf) +
                   iVar57 * iVar45 + ((int)(uVar58 * iVar45) >> 0xf) +
                   iVar59 * iVar44 + ((int)(uVar60 * iVar44) >> 0xf) +
                   iVar61 * iVar176 + ((int)(uVar62 * iVar176) >> 0xf);
          param_1[499] = iVar18;
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 10);
          iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x2a);
          iVar176 = (int)*(short *)((int)param_1 + iVar4 + 0x4a);
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x6a);
          iVar177 = (int)*(short *)((int)param_1 + iVar4 + 0x8a);
          iVar16 = iVar71 * iVar177 + ((int)(uVar72 * iVar177) >> 0xf) +
                   iVar63 * iVar16 + ((int)(uVar64 * iVar16) >> 0xf) +
                   iVar65 * iVar44 + ((int)(uVar66 * iVar44) >> 0xf) +
                   iVar67 * iVar176 + ((int)(uVar68 * iVar176) >> 0xf) +
                   iVar69 * iVar45 + ((int)(uVar70 * iVar45) >> 0xf);
          param_1[500] = iVar16;
          uVar183 = iVar17 + iVar16;
          iVar176 = (int)*(short *)((int)param_1 + iVar4 + 0xc);
          iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x2c);
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x4c);
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x6c);
          iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x8c);
          iVar16 = iVar81 * iVar17 + ((int)(uVar82 * iVar17) >> 0xf) +
                   iVar73 * iVar176 + ((int)(uVar74 * iVar176) >> 0xf) +
                   iVar75 * iVar44 + ((int)(uVar76 * iVar44) >> 0xf) +
                   iVar77 * iVar16 + ((int)(uVar78 * iVar16) >> 0xf) +
                   iVar79 * iVar45 + ((int)(uVar80 * iVar45) >> 0xf);
          param_1[0x1f5] = iVar16;
          uVar166 = iVar165 + iVar16;
          iVar165 = (int)*(short *)((int)param_1 + iVar4 + 0xe);
          iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x2e);
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x4e);
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x6e);
          iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x8e);
          iVar16 = iVar91 * iVar17 + ((int)(uVar92 * iVar17) >> 0xf) +
                   iVar83 * iVar165 + ((int)(uVar84 * iVar165) >> 0xf) +
                   iVar85 * iVar44 + ((int)(uVar86 * iVar44) >> 0xf) +
                   iVar87 * iVar16 + ((int)(uVar88 * iVar16) >> 0xf) +
                   iVar89 * iVar45 + ((int)(uVar90 * iVar45) >> 0xf);
          param_1[0x1f6] = iVar16;
          uVar170 = iVar169 + iVar16;
          iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x10) +
                   (int)*(short *)((int)param_1 + iVar4 + 0x90);
          iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x70) +
                   (int)*(short *)((int)param_1 + iVar4 + 0x30);
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x50);
          iVar16 = iVar97 * iVar16 + ((int)(uVar98 * iVar16) >> 0xf) +
                   iVar93 * iVar44 + ((int)(uVar94 * iVar44) >> 0xf) +
                   iVar95 * iVar17 + ((int)(uVar96 * iVar17) >> 0xf);
          param_1[0x1f7] = iVar16;
          uVar173 = iVar172 + iVar16;
          iVar165 = (int)*(short *)((int)param_1 + iVar4 + 0x12);
          iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x32);
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x52);
          iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x72);
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x92);
          iVar44 = iVar105 * iVar44 + ((int)(uVar106 * iVar44) >> 0xf) +
                   iVar99 * iVar165 + ((int)(uVar100 * iVar165) >> 0xf) +
                   iVar101 * iVar17 + ((int)(uVar102 * iVar17) >> 0xf) +
                   iVar103 * iVar16 + ((int)(uVar104 * iVar16) >> 0xf) +
                   iVar107 * iVar45 + ((int)(uVar108 * iVar45) >> 0xf);
          param_1[0x1f8] = iVar44;
          iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x14);
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x34);
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x54);
          iVar165 = (int)*(short *)((int)param_1 + iVar4 + 0x74);
          iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x94);
          iVar16 = iVar115 * iVar165 + ((int)(uVar116 * iVar165) >> 0xf) +
                   iVar109 * iVar17 + ((int)(uVar110 * iVar17) >> 0xf) +
                   iVar111 * iVar45 + ((int)(uVar112 * iVar45) >> 0xf) +
                   iVar113 * iVar16 + ((int)(uVar114 * iVar16) >> 0xf) +
                   iVar117 * iVar169 + ((int)(uVar118 * iVar169) >> 0xf);
          param_1[0x1f9] = iVar16;
          iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x16);
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x36);
          iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x56);
          iVar165 = (int)*(short *)((int)param_1 + iVar4 + 0x76);
          iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x96);
          iVar17 = iVar119 * iVar17 + ((int)(uVar120 * iVar17) >> 0xf) +
                   iVar121 * iVar45 + ((int)(uVar122 * iVar45) >> 0xf) +
                   iVar123 * iVar169 + ((int)(uVar124 * iVar169) >> 0xf) +
                   iVar125 * iVar165 + ((int)(uVar126 * iVar165) >> 0xf) +
                   iVar127 * iVar172 + ((int)(uVar128 * iVar172) >> 0xf);
          param_1[0x1fa] = iVar17;
          iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x18);
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x38);
          iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x58);
          iVar165 = (int)*(short *)((int)param_1 + iVar4 + 0x78);
          iVar176 = (int)*(short *)((int)param_1 + iVar4 + 0x98);
          param_1[0x1fb] =
               iVar129 * iVar169 + ((int)(uVar130 * iVar169) >> 0xf) +
               iVar131 * iVar45 + ((int)(uVar132 * iVar45) >> 0xf) +
               iVar133 * iVar172 + ((int)(uVar134 * iVar172) >> 0xf) +
               iVar135 * iVar165 + ((int)(uVar136 * iVar165) >> 0xf) +
               iVar137 * iVar176 + ((int)(uVar138 * iVar176) >> 0xf);
          iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x1a);
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x3a);
          iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x5a);
          iVar165 = (int)*(short *)((int)param_1 + iVar4 + 0x7a);
          iVar176 = (int)*(short *)((int)param_1 + iVar4 + 0x9a);
          iVar45 = iVar139 * iVar169 + ((int)(uVar140 * iVar169) >> 0xf) +
                   iVar141 * iVar45 + ((int)(uVar142 * iVar45) >> 0xf) +
                   iVar143 * iVar172 + ((int)(uVar144 * iVar172) >> 0xf) +
                   iVar145 * iVar165 + ((int)(uVar146 * iVar165) >> 0xf) +
                   iVar147 * iVar176 + ((int)(uVar148 * iVar176) >> 0xf);
          param_1[0x1fc] = iVar45;
          uVar178 = iVar17 - iVar45;
          iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x1c);
          iVar165 = (int)*(short *)((int)param_1 + iVar4 + 0x3c);
          iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x5c);
          iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x7c);
          iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x9c);
          iVar17 = iVar149 * iVar45 + ((int)(uVar150 * iVar45) >> 0xf) +
                   iVar151 * iVar165 + ((int)(uVar152 * iVar165) >> 0xf) +
                   iVar153 * iVar172 + ((int)(uVar154 * iVar172) >> 0xf) +
                   iVar155 * iVar17 + ((int)(uVar156 * iVar17) >> 0xf) +
                   iVar157 * iVar169 + ((int)(uVar158 * iVar169) >> 0xf);
          param_1[0x1fd] = iVar17;
          puVar182 = DAT_2c01f354;
          uVar19 = iVar16 - iVar17;
          iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x1e);
          iVar176 = (int)*(short *)((int)param_1 + iVar4 + 0x3e);
          iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x5e);
          iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x7e);
          iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x9e);
          iVar4 = (int)uVar19 >> 0xf;
          iVar45 = (int)uVar173 >> 0xf;
          iVar165 = (int)uVar170 >> 0xf;
          iVar16 = iVar14 * iVar16 + ((int)(uVar15 * iVar16) >> 0xf) +
                   iVar159 * iVar169 + ((int)(uVar160 * iVar169) >> 0xf) +
                   iVar161 * iVar176 + ((int)(uVar162 * iVar176) >> 0xf) +
                   iVar163 * iVar172 + ((int)(uVar164 * iVar172) >> 0xf) +
                   iVar11 * iVar17 + ((int)(uVar13 * iVar17) >> 0xf);
          uVar27 = iVar44 - iVar16;
          param_1[0x1fe] = iVar16;
          iVar169 = (int)uVar166 >> 0xf;
          iVar16 = (int)uVar183 >> 0xf;
          iVar44 = (int)uVar27 >> 0xf;
          iVar17 = (int)uVar178 >> 0xf;
          puVar46 = puVar182;
          piVar192 = local_2b8;
          do {
            puVar1 = puVar46 + 1;
            iVar172 = (int)*puVar1 >> 0xf;
            iVar179 = (int)puVar46[9] >> 0xf;
            iVar177 = (int)puVar46[0x11] >> 0xf;
            iVar180 = (int)puVar46[0x19] >> 0xf;
            iVar174 = (int)puVar46[0x51] >> 0xf;
            iVar181 = (int)puVar46[0x49] >> 0xf;
            iVar176 = (int)puVar46[0x59] >> 0xf;
            piVar192 = piVar192 + 1;
            *piVar192 = iVar180 * iVar16 + ((int)(iVar16 * (puVar46[0x19] & 0x7fff)) >> 0xf) +
                        ((int)((uVar183 & 0x7fff) * iVar180) >> 0xf) +
                        iVar172 * iVar45 + ((int)(iVar45 * (*puVar1 & 0x7fff)) >> 0xf) +
                        ((int)((uVar173 & 0x7fff) * iVar172) >> 0xf) +
                        iVar179 * iVar165 + ((int)(iVar165 * (puVar46[9] & 0x7fff)) >> 0xf) +
                        ((int)((uVar170 & 0x7fff) * iVar179) >> 0xf) +
                        iVar177 * iVar169 + ((int)(iVar169 * (puVar46[0x11] & 0x7fff)) >> 0xf) +
                        ((int)((uVar166 & 0x7fff) * iVar177) >> 0xf) + iVar18 +
                        iVar181 * iVar44 + ((int)(iVar44 * (puVar46[0x49] & 0x7fff)) >> 0xf) +
                        ((int)((uVar27 & 0x7fff) * iVar181) >> 0xf) +
                        iVar174 * iVar4 + ((int)(iVar4 * (puVar46[0x51] & 0x7fff)) >> 0xf) +
                        ((int)((uVar19 & 0x7fff) * iVar174) >> 0xf) +
                        iVar176 * iVar17 + ((int)(iVar17 * (puVar46[0x59] & 0x7fff)) >> 0xf) +
                        ((int)((uVar178 & 0x7fff) * iVar176) >> 0xf);
            puVar46 = puVar1;
          } while (DAT_2c01f350 != puVar1);
          if (*(byte *)((int)param_1 + 6) < 2) {
            local_2bc = local_2bc + 0x10;
          }
          else {
            puVar43 = (undefined2 *)(local_2bc + 2 + local_2b4);
            uVar27 = (uint)*(ushort *)((int)param_1 + 0x7ba);
            if (uVar27 == 0) {
              puVar21 = param_1 + 0x1a1;
              do {
                puVar12 = puVar21 + 1;
                puVar21[0x29] = *puVar12;
                puVar21 = puVar12;
              } while (param_1 + 0x1c5 != puVar12);
              sVar7 = 0x48;
              uVar27 = 0x50;
              iVar4 = 0x718;
            }
            else {
              sVar7 = *(ushort *)((int)param_1 + 0x7ba) - 8;
              iVar4 = (uVar27 + 0x33c) * 2;
            }
            *(short *)((int)param_1 + 0x7ba) = sVar7;
            *(undefined2 *)((int)param_1 + iVar4 + 0xe) = *puVar43;
            *(undefined2 *)((int)param_1 + iVar4 + 0xc) = puVar43[2];
            *(undefined2 *)((int)param_1 + iVar4 + 10) = puVar43[4];
            *(undefined2 *)((int)param_1 + iVar4 + 8) = puVar43[6];
            *(undefined2 *)((int)param_1 + iVar4 + 6) = puVar43[8];
            *(undefined2 *)((int)param_1 + iVar4 + 4) = puVar43[10];
            *(undefined2 *)((int)param_1 + iVar4 + 2) = puVar43[0xc];
            *(undefined2 *)((int)param_1 + (uVar27 + 0x33c) * 2) = puVar43[0xe];
            iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x20) -
                     (int)*(short *)((int)param_1 + iVar4 + 0x80);
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x40) -
                     (int)*(short *)((int)param_1 + iVar4 + 0x60);
            iVar45 = iVar16 * iVar8 + ((int)(iVar16 * uVar9) >> 0xf) +
                     iVar10 * iVar44 + ((int)(iVar44 * uVar28) >> 0xf);
            param_1[0x1ef] = iVar45;
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 2);
            iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x22);
            iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x42);
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x62);
            iVar165 = (int)*(short *)((int)param_1 + iVar4 + 0x82);
            iVar177 = iVar37 * iVar165 + ((int)(iVar165 * uVar38) >> 0xf) +
                      iVar29 * iVar18 + ((int)(iVar18 * uVar30) >> 0xf) +
                      iVar31 * iVar16 + ((int)(iVar16 * uVar32) >> 0xf) +
                      iVar33 * iVar17 + ((int)(iVar17 * uVar34) >> 0xf) +
                      iVar35 * iVar44 + ((int)(iVar44 * uVar36) >> 0xf);
            param_1[0x1f0] = iVar177;
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 4);
            iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x24);
            iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x44);
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 100);
            iVar165 = (int)*(short *)((int)param_1 + iVar4 + 0x84);
            iVar16 = iVar6 * iVar165 + ((int)(iVar165 * uVar188) >> 0xf) +
                     iVar167 * iVar44 + ((int)(iVar44 * uVar184) >> 0xf) +
                     iVar48 * iVar17 + ((int)(iVar17 * uVar185) >> 0xf) +
                     iVar20 * iVar16 + ((int)(iVar16 * uVar186) >> 0xf) +
                     iVar175 * iVar18 + ((int)(iVar18 * uVar187) >> 0xf);
            param_1[0x1f1] = iVar16;
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 6);
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 0x26);
            iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x46);
            iVar165 = (int)*(short *)((int)param_1 + iVar4 + 0x66);
            iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x86);
            iVar18 = iVar51 * iVar169 + ((int)(iVar169 * uVar52) >> 0xf) +
                     iVar39 * iVar44 + ((int)(iVar44 * uVar189) >> 0xf) +
                     iVar40 * iVar18 + ((int)(iVar18 * uVar190) >> 0xf) +
                     iVar41 * iVar17 + ((int)(iVar17 * uVar191) >> 0xf) +
                     iVar42 * iVar165 + ((int)(iVar165 * uVar50) >> 0xf);
            param_1[0x1f2] = iVar18;
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 8);
            iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x28);
            iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x48);
            iVar165 = (int)*(short *)((int)param_1 + iVar4 + 0x68);
            iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x88);
            iVar165 = iVar53 * iVar44 + ((int)(iVar44 * uVar54) >> 0xf) +
                      iVar55 * iVar17 + ((int)(iVar17 * uVar56) >> 0xf) +
                      iVar57 * iVar169 + ((int)(iVar169 * uVar58) >> 0xf) +
                      iVar59 * iVar165 + ((int)(iVar165 * uVar60) >> 0xf) +
                      iVar61 * iVar172 + ((int)(iVar172 * uVar62) >> 0xf);
            param_1[499] = iVar165;
            iVar169 = (int)*(short *)((int)param_1 + iVar4 + 10);
            iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x4a);
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x2a);
            iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x6a);
            iVar176 = (int)*(short *)((int)param_1 + iVar4 + 0x8a);
            iVar44 = iVar71 * iVar176 + ((int)(iVar176 * uVar72) >> 0xf) +
                     iVar63 * iVar169 + ((int)(iVar169 * uVar64) >> 0xf) +
                     iVar65 * iVar44 + ((int)(iVar44 * uVar66) >> 0xf) +
                     iVar67 * iVar172 + ((int)(iVar172 * uVar68) >> 0xf) +
                     iVar69 * iVar17 + ((int)(iVar17 * uVar70) >> 0xf);
            param_1[500] = iVar44;
            uVar166 = iVar18 + iVar44;
            iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0xc);
            iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x2c);
            iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x4c);
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x6c);
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 0x8c);
            iVar44 = iVar81 * iVar18 + ((int)(iVar18 * uVar82) >> 0xf) +
                     iVar73 * iVar172 + ((int)(iVar172 * uVar74) >> 0xf) +
                     iVar75 * iVar17 + ((int)(iVar17 * uVar76) >> 0xf) +
                     iVar77 * iVar169 + ((int)(iVar169 * uVar78) >> 0xf) +
                     iVar79 * iVar44 + ((int)(iVar44 * uVar80) >> 0xf);
            param_1[0x1f5] = iVar44;
            uVar178 = iVar16 + iVar44;
            iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0xe);
            iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x2e);
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 0x4e);
            iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x6e);
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x8e);
            iVar16 = iVar91 * iVar44 + ((int)(iVar44 * uVar92) >> 0xf) +
                     iVar83 * iVar169 + ((int)(iVar169 * uVar84) >> 0xf) +
                     iVar85 * iVar16 + ((int)(iVar16 * uVar86) >> 0xf) +
                     iVar87 * iVar18 + ((int)(iVar18 * uVar88) >> 0xf) +
                     iVar89 * iVar17 + ((int)(iVar17 * uVar90) >> 0xf);
            param_1[0x1f6] = iVar16;
            uVar183 = iVar177 + iVar16;
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x10) +
                     (int)*(short *)((int)param_1 + iVar4 + 0x90);
            iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x70) +
                     (int)*(short *)((int)param_1 + iVar4 + 0x30);
            iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x50);
            iVar16 = iVar97 * iVar16 + ((int)(iVar16 * uVar98) >> 0xf) +
                     iVar93 * iVar44 + ((int)(iVar44 * uVar94) >> 0xf) +
                     iVar95 * iVar17 + ((int)(iVar17 * uVar96) >> 0xf);
            param_1[0x1f7] = iVar16;
            uVar173 = iVar45 + iVar16;
            iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x12);
            iVar17 = (int)*(short *)((int)param_1 + iVar4 + 0x32);
            iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x52);
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x72);
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 0x92);
            iVar17 = iVar105 * iVar44 + ((int)(iVar44 * uVar106) >> 0xf) +
                     iVar99 * iVar45 + ((int)(iVar45 * uVar100) >> 0xf) +
                     iVar101 * iVar17 + ((int)(iVar17 * uVar102) >> 0xf) +
                     iVar103 * iVar16 + ((int)(iVar16 * uVar104) >> 0xf) +
                     iVar107 * iVar18 + ((int)(iVar18 * uVar108) >> 0xf);
            param_1[0x1f8] = iVar17;
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 0x14);
            iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x34);
            iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x54);
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x74);
            iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x94);
            iVar44 = iVar109 * iVar18 + ((int)(iVar18 * uVar110) >> 0xf) +
                     iVar111 * iVar16 + ((int)(iVar16 * uVar112) >> 0xf) +
                     iVar113 * iVar45 + ((int)(iVar45 * uVar114) >> 0xf) +
                     iVar115 * iVar44 + ((int)(iVar44 * uVar116) >> 0xf) +
                     iVar117 * iVar169 + ((int)(iVar169 * uVar118) >> 0xf);
            param_1[0x1f9] = iVar44;
            iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x16);
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 0x36);
            iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x56);
            iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x76);
            iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x96);
            iVar16 = iVar119 * iVar16 + ((int)(iVar16 * uVar120) >> 0xf) +
                     iVar121 * iVar18 + ((int)(iVar18 * uVar122) >> 0xf) +
                     iVar123 * iVar169 + ((int)(iVar169 * uVar124) >> 0xf) +
                     iVar125 * iVar45 + ((int)(iVar45 * uVar126) >> 0xf) +
                     iVar127 * iVar172 + ((int)(iVar172 * uVar128) >> 0xf);
            param_1[0x1fa] = iVar16;
            iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x18);
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 0x38);
            iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x58);
            iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x78);
            iVar176 = (int)*(short *)((int)param_1 + iVar4 + 0x98);
            param_1[0x1fb] =
                 iVar137 * iVar176 + ((int)(iVar176 * uVar138) >> 0xf) +
                 iVar129 * iVar169 + ((int)(iVar169 * uVar130) >> 0xf) +
                 iVar131 * iVar18 + ((int)(iVar18 * uVar132) >> 0xf) +
                 iVar133 * iVar172 + ((int)(iVar172 * uVar134) >> 0xf) +
                 iVar135 * iVar45 + ((int)(iVar45 * uVar136) >> 0xf);
            iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x1a);
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 0x3a);
            iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x5a);
            iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x7a);
            iVar176 = (int)*(short *)((int)param_1 + iVar4 + 0x9a);
            iVar18 = iVar147 * iVar176 + ((int)(iVar176 * uVar148) >> 0xf) +
                     iVar139 * iVar169 + ((int)(iVar169 * uVar140) >> 0xf) +
                     iVar141 * iVar18 + ((int)(iVar18 * uVar142) >> 0xf) +
                     iVar143 * iVar172 + ((int)(iVar172 * uVar144) >> 0xf) +
                     iVar145 * iVar45 + ((int)(iVar45 * uVar146) >> 0xf);
            param_1[0x1fc] = iVar18;
            uVar19 = iVar16 - iVar18;
            iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x1c);
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 0x3c);
            iVar169 = (int)*(short *)((int)param_1 + iVar4 + 0x5c);
            iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x7c);
            iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x9c);
            iVar16 = iVar157 * iVar45 + ((int)(iVar45 * uVar158) >> 0xf) +
                     iVar172 * iVar149 + ((int)(iVar172 * uVar150) >> 0xf) +
                     iVar151 * iVar18 + ((int)(iVar18 * uVar152) >> 0xf) +
                     iVar153 * iVar169 + ((int)(iVar169 * uVar154) >> 0xf) +
                     iVar155 * iVar16 + ((int)(iVar16 * uVar156) >> 0xf);
            param_1[0x1fd] = iVar16;
            uVar170 = iVar44 - iVar16;
            iVar172 = (int)*(short *)((int)param_1 + iVar4 + 0x1e);
            iVar45 = (int)*(short *)((int)param_1 + iVar4 + 0x3e);
            iVar18 = (int)*(short *)((int)param_1 + iVar4 + 0x5e);
            iVar44 = (int)*(short *)((int)param_1 + iVar4 + 0x7e);
            iVar16 = (int)*(short *)((int)param_1 + iVar4 + 0x9e);
            iVar4 = (int)uVar19 >> 0xf;
            iVar169 = (int)uVar173 >> 0xf;
            iVar44 = iVar14 * iVar16 + ((int)(iVar16 * uVar15) >> 0xf) +
                     iVar172 * iVar159 + ((int)(iVar172 * uVar160) >> 0xf) +
                     iVar161 * iVar45 + ((int)(iVar45 * uVar162) >> 0xf) +
                     iVar163 * iVar18 + ((int)(iVar18 * uVar164) >> 0xf) +
                     iVar11 * iVar44 + ((int)(iVar44 * uVar13) >> 0xf);
            iVar16 = (int)uVar183 >> 0xf;
            uVar27 = iVar17 - iVar44;
            param_1[0x1fe] = iVar44;
            iVar44 = (int)uVar178 >> 0xf;
            iVar17 = (int)uVar166 >> 0xf;
            iVar18 = (int)uVar27 >> 0xf;
            iVar45 = (int)uVar170 >> 0xf;
            piVar192 = local_2b8 + 8;
            do {
              puVar46 = puVar182 + 1;
              iVar172 = (int)*puVar46 >> 0xf;
              iVar179 = (int)puVar182[9] >> 0xf;
              iVar177 = (int)puVar182[0x11] >> 0xf;
              iVar180 = (int)puVar182[0x19] >> 0xf;
              iVar174 = (int)puVar182[0x51] >> 0xf;
              iVar181 = (int)puVar182[0x49] >> 0xf;
              iVar176 = (int)puVar182[0x59] >> 0xf;
              piVar192 = piVar192 + 1;
              *piVar192 = iVar180 * iVar17 + ((int)(iVar17 * (puVar182[0x19] & 0x7fff)) >> 0xf) +
                          ((int)((uVar166 & 0x7fff) * iVar180) >> 0xf) +
                          iVar172 * iVar169 + ((int)(iVar169 * (*puVar46 & 0x7fff)) >> 0xf) +
                          ((int)((uVar173 & 0x7fff) * iVar172) >> 0xf) +
                          iVar179 * iVar16 + ((int)(iVar16 * (puVar182[9] & 0x7fff)) >> 0xf) +
                          ((int)((uVar183 & 0x7fff) * iVar179) >> 0xf) +
                          iVar177 * iVar44 + ((int)(iVar44 * (puVar182[0x11] & 0x7fff)) >> 0xf) +
                          ((int)((uVar178 & 0x7fff) * iVar177) >> 0xf) + iVar165 +
                          iVar181 * iVar18 + ((int)(iVar18 * (puVar182[0x49] & 0x7fff)) >> 0xf) +
                          ((int)((uVar27 & 0x7fff) * iVar181) >> 0xf) +
                          iVar174 * iVar45 + ((int)(iVar45 * (puVar182[0x51] & 0x7fff)) >> 0xf) +
                          ((int)((uVar170 & 0x7fff) * iVar174) >> 0xf) +
                          iVar176 * iVar4 + ((int)(iVar4 * (puVar182[0x59] & 0x7fff)) >> 0xf) +
                          ((int)((uVar19 & 0x7fff) * iVar176) >> 0xf);
              puVar182 = puVar46;
            } while (puVar46 != DAT_2c01fd78);
            local_2bc = local_2bc + 0x20;
          }
          local_2bc = local_2bc & 0xffff;
          local_2b0 = local_2b0 + 1;
          uVar27 = (uint)*(byte *)(param_1 + 1);
          local_2b8 = local_2b8 + 0x10;
        } while (local_2b0 < uVar27);
LAB_2c01f0bc:
        local_2ec = (uint)*(byte *)((int)param_1 + 5);
      }
      if (local_2ec != 0) goto LAB_2c01f0c8;
      local_2e4 = (uint)*(byte *)((int)param_1 + 2);
    }
    if (local_2e4 < 2) {
      if (*(char *)((int)param_1 + 6) != '\0') {
        uVar27 = 0;
        do {
          uVar9 = uVar27 & 0xff;
          uVar27 = uVar27 + 1;
          param_1 = (undefined4 *)FUN_2c0198c4(param_1,uVar9);
        } while (uVar27 < *(byte *)((int)param_1 + 6));
      }
    }
    else if (local_2e4 - 2 < 2) {
      FUN_2c019b58(param_1);
    }
    FUN_2c020b3c(param_1,param_4,param_5);
    FUN_2c01d3e0();
    local_4c = local_4c - uVar26 & 0xffff;
    *param_3 = *param_3 + uVar24;
    if (local_4c != 0) {
      if ((int)(uint)param_6 < (int)(*param_5 + uVar3)) {
        return 0xc;
      }
      local_2b4 = local_2b4 + uVar26;
    }
    if (local_4c < uVar26) {
      return 0;
    }
  } while( true );
}

