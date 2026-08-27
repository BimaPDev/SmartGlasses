/* FUN_14012264 @ 0x14012264 */

undefined4
FUN_14012264(undefined4 *param_1,int param_2,short *param_3,undefined4 param_4,ushort *param_5,
            ushort param_6)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
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
  uint uVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  int iVar49;
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
  int iVar150;
  int iVar151;
  uint uVar152;
  uint uVar153;
  int iVar154;
  undefined1 uVar155;
  char cVar156;
  ushort uVar157;
  undefined4 uVar158;
  uint uVar159;
  uint uVar160;
  int iVar161;
  uint uVar162;
  int iVar163;
  uint uVar164;
  undefined2 *puVar165;
  int iVar166;
  uint *puVar167;
  undefined4 *puVar168;
  int iVar169;
  undefined4 *puVar170;
  int iVar171;
  int iVar172;
  int iVar173;
  undefined4 *puVar174;
  int iVar175;
  int iVar176;
  int iVar177;
  uint uVar178;
  int iVar179;
  undefined4 *puVar180;
  int iVar181;
  int iVar182;
  int iVar183;
  int iVar184;
  int iVar185;
  int iVar186;
  uint uVar187;
  uint uVar188;
  uint *puVar189;
  int iVar190;
  int iVar191;
  int *piVar192;
  uint local_2f0;
  int *local_2e8;
  uint local_2c0;
  int *local_2bc;
  int local_2b4;
  uint local_2b0;
  uint local_4c;
  
  local_4c = (uint)*(ushort *)(param_2 + 2);
  if ((int)((uint)*(byte *)((int)param_1 + 7) << 0x1f) < 0) {
    uVar158 = 0x1a;
  }
  else {
    if (-1 < (int)((uint)*(byte *)((int)param_1 + 7) << 0x1e)) goto LAB_1401229e;
    uVar158 = 0x312;
  }
  *param_1 = uVar158;
  *(undefined2 *)(param_1 + 1) = 0x80f;
  *(undefined1 *)((int)param_1 + 6) = 1;
LAB_1401229e:
  local_2b4 = *(int *)(param_2 + 4);
  uVar3 = FUN_1400d480(param_1);
  if (param_6 < uVar3) {
    return 1;
  }
  if (*(char *)((int)param_1 + 2) == '\0') {
    uVar155 = 1;
    sVar7 = 1;
  }
  else {
    sVar7 = 2;
    uVar155 = 2;
  }
  *(undefined1 *)((int)param_1 + 6) = uVar155;
  uVar157 = (ushort)*(byte *)((int)param_1 + 5) * (ushort)*(byte *)(param_1 + 1) * sVar7 * 2;
  *param_5 = 0;
  uVar159 = (uint)uVar157;
  *param_3 = 0;
  if (local_4c < uVar159) {
    return 0x18;
  }
  do {
    local_2f0 = (uint)*(byte *)((int)param_1 + 5);
    uVar160 = (uint)*(byte *)(param_1 + 1);
    if (local_2f0 == 4) {
      if (uVar160 != 0) {
        local_2bc = (int *)0x0;
        local_2e8 = (int *)0x0;
        iVar93 = (int)*(uint *)(DAT_14014010 + 0x20) >> 0xf;
        uVar8 = *(uint *)(DAT_14014010 + 0x20) & 0x7fff;
        iVar6 = (int)*(uint *)(DAT_14014010 + 0x40) >> 0xf;
        uVar10 = *(uint *)(DAT_14014010 + 0x40) & 0x7fff;
        iVar9 = (int)*(uint *)(DAT_14014010 + 4) >> 0xf;
        uVar14 = *(uint *)(DAT_14014010 + 4) & 0x7fff;
        iVar11 = (int)*(uint *)(DAT_14014010 + 0x24) >> 0xf;
        uVar16 = *(uint *)(DAT_14014010 + 0x24) & 0x7fff;
        iVar15 = (int)*(uint *)(DAT_14014010 + 0x44) >> 0xf;
        uVar18 = *(uint *)(DAT_14014010 + 0x44) & 0x7fff;
        iVar17 = (int)*(uint *)(DAT_14014010 + 100) >> 0xf;
        uVar20 = *(uint *)(DAT_14014010 + 100) & 0x7fff;
        iVar173 = (int)*(uint *)(DAT_14014010 + 0x84) >> 0xf;
        uVar22 = *(uint *)(DAT_14014010 + 0x84) & 0x7fff;
        iVar183 = (int)*(uint *)(DAT_14014010 + 8) >> 0xf;
        uVar23 = *(uint *)(DAT_14014010 + 8) & 0x7fff;
        iVar169 = (int)*(uint *)(DAT_14014010 + 0x28) >> 0xf;
        uVar24 = *(uint *)(DAT_14014010 + 0x28) & 0x7fff;
        iVar19 = (int)*(uint *)(DAT_14014010 + 0x48) >> 0xf;
        uVar25 = *(uint *)(DAT_14014010 + 0x48) & 0x7fff;
        iVar154 = (int)*(uint *)(DAT_14014010 + 0x68) >> 0xf;
        uVar26 = *(uint *)(DAT_14014010 + 0x68) & 0x7fff;
        iVar175 = (int)*(uint *)(DAT_14014010 + 0x88) >> 0xf;
        uVar27 = *(uint *)(DAT_14014010 + 0x88) & 0x7fff;
        iVar21 = (int)*(uint *)(DAT_14014010 + 0xc) >> 0xf;
        uVar28 = *(uint *)(DAT_14014010 + 0xc) & 0x7fff;
        iVar29 = (int)*(uint *)(DAT_14014010 + 0x2c) >> 0xf;
        uVar30 = *(uint *)(DAT_14014010 + 0x2c) & 0x7fff;
        iVar31 = (int)*(uint *)(DAT_14014010 + 0x4c) >> 0xf;
        uVar32 = *(uint *)(DAT_14014010 + 0x4c) & 0x7fff;
        iVar33 = (int)*(uint *)(DAT_14014010 + 0x6c) >> 0xf;
        uVar34 = *(uint *)(DAT_14014010 + 0x6c) & 0x7fff;
        iVar35 = (int)*(uint *)(DAT_14014010 + 0x8c) >> 0xf;
        uVar36 = *(uint *)(DAT_14014010 + 0x8c) & 0x7fff;
        iVar37 = (int)*(uint *)(DAT_14014010 + 0x10) >> 0xf;
        uVar38 = *(uint *)(DAT_14014010 + 0x10) & 0x7fff;
        iVar39 = (int)*(uint *)(DAT_14014010 + 0x30) >> 0xf;
        uVar40 = *(uint *)(DAT_14014010 + 0x30) & 0x7fff;
        iVar41 = (int)*(uint *)(DAT_14014010 + 0x50) >> 0xf;
        uVar42 = *(uint *)(DAT_14014010 + 0x50) & 0x7fff;
        iVar43 = (int)*(uint *)(DAT_14014010 + 0x14) >> 0xf;
        uVar44 = *(uint *)(DAT_14014010 + 0x14) & 0x7fff;
        iVar45 = (int)*(uint *)(DAT_14014010 + 0x34) >> 0xf;
        uVar46 = *(uint *)(DAT_14014010 + 0x34) & 0x7fff;
        iVar47 = (int)*(uint *)(DAT_14014010 + 0x54) >> 0xf;
        uVar48 = *(uint *)(DAT_14014010 + 0x54) & 0x7fff;
        iVar49 = (int)*(uint *)(DAT_14014010 + 0x74) >> 0xf;
        uVar50 = *(uint *)(DAT_14014010 + 0x74) & 0x7fff;
        iVar51 = (int)*(uint *)(DAT_14014010 + 0x94) >> 0xf;
        uVar52 = *(uint *)(DAT_14014010 + 0x94) & 0x7fff;
        iVar53 = (int)*(uint *)(DAT_14014010 + 0x18) >> 0xf;
        uVar54 = *(uint *)(DAT_14014010 + 0x18) & 0x7fff;
        iVar55 = (int)*(uint *)(DAT_14014010 + 0x38) >> 0xf;
        uVar56 = *(uint *)(DAT_14014010 + 0x38) & 0x7fff;
        iVar57 = (int)*(uint *)(DAT_14014010 + 0x58) >> 0xf;
        uVar58 = *(uint *)(DAT_14014010 + 0x58) & 0x7fff;
        iVar59 = (int)*(uint *)(DAT_14014010 + 0x98) >> 0xf;
        uVar60 = *(uint *)(DAT_14014010 + 0x98) & 0x7fff;
        iVar61 = (int)*(uint *)(DAT_14014010 + 0x1c) >> 0xf;
        uVar62 = *(uint *)(DAT_14014010 + 0x1c) & 0x7fff;
        iVar63 = (int)*(uint *)(DAT_14014010 + 0x3c) >> 0xf;
        uVar64 = *(uint *)(DAT_14014010 + 0x3c) & 0x7fff;
        iVar65 = (int)*(uint *)(DAT_14014010 + 0x5c) >> 0xf;
        uVar66 = *(uint *)(DAT_14014010 + 0x5c) & 0x7fff;
        iVar67 = (int)*(uint *)(DAT_14014010 + 0x7c) >> 0xf;
        uVar68 = *(uint *)(DAT_14014010 + 0x7c) & 0x7fff;
        iVar69 = (int)*(uint *)(DAT_14014010 + 0x9c) >> 0xf;
        uVar70 = *(uint *)(DAT_14014010 + 0x9c) & 0x7fff;
        iVar71 = (int)*DAT_14014014 >> 0xf;
        uVar72 = *DAT_14014014 & 0x7fff;
        iVar73 = (int)DAT_14014014[4] >> 0xf;
        uVar74 = DAT_14014014[4] & 0x7fff;
        iVar75 = (int)DAT_14014014[0x14] >> 0xf;
        uVar76 = DAT_14014014[0x14] & 0x7fff;
        iVar77 = (int)DAT_14014014[1] >> 0xf;
        uVar78 = DAT_14014014[1] & 0x7fff;
        iVar79 = (int)DAT_14014014[5] >> 0xf;
        uVar80 = DAT_14014014[5] & 0x7fff;
        iVar81 = (int)DAT_14014014[0x15] >> 0xf;
        uVar82 = DAT_14014014[0x15] & 0x7fff;
        iVar83 = (int)DAT_14014014[2] >> 0xf;
        uVar84 = DAT_14014014[2] & 0x7fff;
        iVar85 = (int)DAT_14014014[6] >> 0xf;
        uVar86 = DAT_14014014[6] & 0x7fff;
        iVar87 = (int)DAT_14014014[0x16] >> 0xf;
        uVar88 = DAT_14014014[0x16] & 0x7fff;
        iVar89 = (int)DAT_14014014[3] >> 0xf;
        uVar90 = DAT_14014014[3] & 0x7fff;
        iVar91 = (int)DAT_14014014[7] >> 0xf;
        uVar92 = DAT_14014014[7] & 0x7fff;
        iVar95 = (int)DAT_14014014[0x17] >> 0xf;
        uVar94 = DAT_14014014[0x17] & 0x7fff;
        puVar4 = param_1;
        do {
          uVar160 = (uint)*(ushort *)(param_1 + 0x1ee);
          puVar165 = (undefined2 *)(local_2b4 + (int)local_2e8);
          if (uVar160 == 0) {
            puVar13 = param_1 + 0x14f;
            do {
              puVar168 = puVar13 + 1;
              puVar13[0x3d] = *puVar168;
              puVar13 = puVar168;
            } while (puVar168 != param_1 + 0x161);
            iVar97 = 0x628;
            sVar7 = 0x74;
            uVar160 = 0x78;
          }
          else {
            sVar7 = *(ushort *)(param_1 + 0x1ee) - 4;
            iVar97 = (uVar160 + 0x29c) * 2;
          }
          *(short *)(param_1 + 0x1ee) = sVar7;
          cVar156 = *(char *)((int)param_1 + 6);
          *(undefined2 *)((int)param_1 + iVar97 + 6) = *puVar165;
          if (cVar156 == '\x01') {
            *(undefined2 *)((int)param_1 + iVar97 + 4) = puVar165[1];
            *(undefined2 *)((int)param_1 + iVar97 + 2) = puVar165[2];
            *(undefined2 *)((int)param_1 + (uVar160 + 0x29c) * 2) = puVar165[3];
          }
          else {
            *(undefined2 *)((int)param_1 + iVar97 + 4) = puVar165[2];
            *(undefined2 *)((int)param_1 + iVar97 + 2) = puVar165[4];
            *(undefined2 *)((int)param_1 + (uVar160 + 0x29c) * 2) = puVar165[6];
          }
          iVar101 = (int)*(short *)((int)param_1 + iVar97 + 0x10) -
                    (int)*(short *)((int)param_1 + iVar97 + 0x40);
          iVar99 = (int)*(short *)((int)param_1 + iVar97 + 0x20) -
                   (int)*(short *)((int)param_1 + iVar97 + 0x30);
          iVar105 = iVar93 * iVar101 + ((int)(uVar8 * iVar101) >> 0xf) +
                    iVar6 * iVar99 + ((int)(uVar10 * iVar99) >> 0xf);
          param_1[0x1ef] = iVar105;
          iVar103 = (int)*(short *)((int)param_1 + iVar97 + 2);
          iVar107 = (int)*(short *)((int)param_1 + iVar97 + 0x12);
          iVar99 = (int)*(short *)((int)param_1 + iVar97 + 0x22);
          iVar101 = (int)*(short *)((int)param_1 + iVar97 + 0x32);
          iVar109 = (int)*(short *)((int)param_1 + iVar97 + 0x42);
          iVar99 = iVar17 * iVar101 + ((int)(uVar20 * iVar101) >> 0xf) +
                   iVar9 * iVar103 + ((int)(uVar14 * iVar103) >> 0xf) +
                   iVar11 * iVar107 + ((int)(uVar16 * iVar107) >> 0xf) +
                   iVar15 * iVar99 + ((int)(uVar18 * iVar99) >> 0xf) +
                   iVar173 * iVar109 + ((int)(uVar22 * iVar109) >> 0xf);
          param_1[0x1f0] = iVar99;
          iVar107 = (int)*(short *)((int)param_1 + iVar97 + 4);
          iVar109 = (int)*(short *)((int)param_1 + iVar97 + 0x14);
          iVar103 = (int)*(short *)((int)param_1 + iVar97 + 0x24);
          iVar101 = (int)*(short *)((int)param_1 + iVar97 + 0x34);
          iVar111 = (int)*(short *)((int)param_1 + iVar97 + 0x44);
          iVar101 = iVar183 * iVar107 + ((int)(uVar23 * iVar107) >> 0xf) +
                    iVar169 * iVar109 + ((int)(uVar24 * iVar109) >> 0xf) +
                    iVar19 * iVar103 + ((int)(uVar25 * iVar103) >> 0xf) +
                    iVar154 * iVar101 + ((int)(uVar26 * iVar101) >> 0xf) +
                    iVar175 * iVar111 + ((int)(uVar27 * iVar111) >> 0xf);
          param_1[0x1f1] = iVar101;
          iVar109 = (int)*(short *)((int)param_1 + iVar97 + 6);
          iVar111 = (int)*(short *)((int)param_1 + iVar97 + 0x16);
          iVar107 = (int)*(short *)((int)param_1 + iVar97 + 0x26);
          iVar103 = (int)*(short *)((int)param_1 + iVar97 + 0x36);
          iVar113 = (int)*(short *)((int)param_1 + iVar97 + 0x46);
          iVar103 = iVar35 * iVar113 + ((int)(uVar36 * iVar113) >> 0xf) +
                    iVar21 * iVar109 + ((int)(uVar28 * iVar109) >> 0xf) +
                    iVar29 * iVar111 + ((int)(uVar30 * iVar111) >> 0xf) +
                    iVar31 * iVar107 + ((int)(uVar32 * iVar107) >> 0xf) +
                    iVar33 * iVar103 + ((int)(uVar34 * iVar103) >> 0xf);
          param_1[0x1f2] = iVar103;
          uVar160 = iVar99 + iVar103;
          iVar103 = (int)*(short *)((int)param_1 + iVar97 + 8) +
                    (int)*(short *)((int)param_1 + iVar97 + 0x48);
          iVar99 = (int)*(short *)((int)param_1 + iVar97 + 0x38) +
                   (int)*(short *)((int)param_1 + iVar97 + 0x18);
          iVar107 = (int)*(short *)((int)param_1 + iVar97 + 0x28);
          iVar103 = iVar41 * iVar107 + ((int)(uVar42 * iVar107) >> 0xf) +
                    iVar37 * iVar103 + ((int)(uVar38 * iVar103) >> 0xf) +
                    iVar39 * iVar99 + ((int)(uVar40 * iVar99) >> 0xf);
          param_1[499] = iVar103;
          iVar99 = (int)*(short *)((int)param_1 + iVar97 + 10);
          uVar98 = iVar105 + iVar103;
          iVar107 = (int)*(short *)((int)param_1 + iVar97 + 0x1a);
          iVar105 = (int)*(short *)((int)param_1 + iVar97 + 0x2a);
          iVar103 = (int)*(short *)((int)param_1 + iVar97 + 0x3a);
          iVar109 = (int)*(short *)((int)param_1 + iVar97 + 0x4a);
          iVar99 = iVar49 * iVar103 + ((int)(uVar50 * iVar103) >> 0xf) +
                   iVar43 * iVar99 + ((int)(uVar44 * iVar99) >> 0xf) +
                   iVar45 * iVar107 + ((int)(uVar46 * iVar107) >> 0xf) +
                   iVar47 * iVar105 + ((int)(uVar48 * iVar105) >> 0xf) +
                   iVar51 * iVar109 + ((int)(uVar52 * iVar109) >> 0xf);
          param_1[500] = iVar99;
          iVar109 = (int)*(short *)((int)param_1 + iVar97 + 0xc);
          iVar105 = (int)*(short *)((int)param_1 + iVar97 + 0x1c) -
                    (int)*(short *)((int)param_1 + iVar97 + 0x3c);
          iVar103 = (int)*(short *)((int)param_1 + iVar97 + 0x2c);
          iVar107 = (int)*(short *)((int)param_1 + iVar97 + 0x4c);
          param_1[0x1f5] =
               iVar59 * iVar107 + ((int)(uVar60 * iVar107) >> 0xf) +
               iVar53 * iVar109 + ((int)(uVar54 * iVar109) >> 0xf) +
               iVar55 * iVar105 + ((int)(uVar56 * iVar105) >> 0xf) +
               iVar57 * iVar103 + ((int)(uVar58 * iVar103) >> 0xf);
          iVar111 = (int)*(short *)((int)param_1 + iVar97 + 0xe);
          iVar109 = (int)*(short *)((int)param_1 + iVar97 + 0x1e);
          iVar107 = (int)*(short *)((int)param_1 + iVar97 + 0x2e);
          iVar103 = (int)*(short *)((int)param_1 + iVar97 + 0x3e);
          iVar97 = (int)*(short *)((int)param_1 + iVar97 + 0x4e);
          iVar105 = (int)uVar98 >> 0xf;
          iVar97 = iVar69 * iVar97 + ((int)(uVar70 * iVar97) >> 0xf) +
                   iVar61 * iVar111 + ((int)(uVar62 * iVar111) >> 0xf) +
                   iVar63 * iVar109 + ((int)(uVar64 * iVar109) >> 0xf) +
                   iVar65 * iVar107 + ((int)(uVar66 * iVar107) >> 0xf) +
                   iVar67 * iVar103 + ((int)(uVar68 * iVar103) >> 0xf);
          uVar96 = iVar99 - iVar97;
          param_1[0x1f6] = iVar97;
          iVar97 = (int)uVar160 >> 0xf;
          uVar98 = uVar98 & 0x7fff;
          uVar160 = uVar160 & 0x7fff;
          iVar99 = (int)uVar96 >> 0xf;
          uVar96 = uVar96 & 0x7fff;
          puVar4[0x29] = iVar75 * iVar99 + ((int)(uVar76 * iVar99) >> 0xf) +
                         ((int)(uVar96 * iVar75) >> 0xf) +
                         iVar71 * iVar105 + ((int)(uVar72 * iVar105) >> 0xf) +
                         ((int)(uVar98 * iVar71) >> 0xf) +
                         iVar73 * iVar97 + ((int)(uVar74 * iVar97) >> 0xf) +
                         ((int)(uVar160 * iVar73) >> 0xf) + iVar101;
          puVar4[0x2a] = iVar81 * iVar99 + ((int)(uVar82 * iVar99) >> 0xf) +
                         ((int)(uVar96 * iVar81) >> 0xf) +
                         iVar77 * iVar105 + ((int)(uVar78 * iVar105) >> 0xf) +
                         ((int)(iVar77 * uVar98) >> 0xf) +
                         iVar79 * iVar97 + ((int)(uVar80 * iVar97) >> 0xf) +
                         ((int)(iVar79 * uVar160) >> 0xf) + iVar101;
          puVar4[0x2b] = iVar87 * iVar99 + ((int)(uVar88 * iVar99) >> 0xf) +
                         ((int)(uVar96 * iVar87) >> 0xf) +
                         iVar83 * iVar105 + ((int)(uVar84 * iVar105) >> 0xf) +
                         ((int)(iVar83 * uVar98) >> 0xf) +
                         iVar85 * iVar97 + ((int)(uVar86 * iVar97) >> 0xf) +
                         ((int)(iVar85 * uVar160) >> 0xf) + iVar101;
          puVar4[0x2c] = iVar95 * iVar99 + ((int)(uVar94 * iVar99) >> 0xf) +
                         ((int)(iVar95 * uVar96) >> 0xf) +
                         iVar89 * iVar105 + ((int)(uVar90 * iVar105) >> 0xf) +
                         ((int)(iVar89 * uVar98) >> 0xf) +
                         iVar91 * iVar97 + ((int)(uVar92 * iVar97) >> 0xf) +
                         ((int)(iVar91 * uVar160) >> 0xf) + iVar101;
          if (*(byte *)((int)param_1 + 6) < 2) {
            uVar160 = (int)local_2e8 + 8;
          }
          else {
            uVar96 = (uint)*(ushort *)((int)param_1 + 0x7ba);
            puVar165 = (undefined2 *)((int)local_2e8 + 2U + local_2b4);
            if (uVar96 == 0) {
              puVar13 = param_1 + 0x19f;
              do {
                puVar168 = puVar13 + 1;
                puVar13[0x3d] = *puVar168;
                puVar13 = puVar168;
              } while (param_1 + 0x1b1 != puVar168);
              sVar7 = 0x74;
              uVar96 = 0x78;
              iVar97 = 0x768;
            }
            else {
              sVar7 = *(ushort *)((int)param_1 + 0x7ba) - 4;
              iVar97 = (uVar96 + 0x33c) * 2;
            }
            *(short *)((int)param_1 + 0x7ba) = sVar7;
            uVar160 = (int)local_2e8 + 0x10;
            *(undefined2 *)((int)param_1 + iVar97 + 6) = *puVar165;
            *(undefined2 *)((int)param_1 + iVar97 + 4) = puVar165[2];
            *(undefined2 *)((int)param_1 + iVar97 + 2) = puVar165[4];
            *(undefined2 *)((int)param_1 + (uVar96 + 0x33c) * 2) = puVar165[6];
            iVar101 = (int)*(short *)((int)param_1 + iVar97 + 0x10) -
                      (int)*(short *)((int)param_1 + iVar97 + 0x40);
            iVar99 = (int)*(short *)((int)param_1 + iVar97 + 0x20) -
                     (int)*(short *)((int)param_1 + iVar97 + 0x30);
            iVar103 = iVar93 * iVar101 + ((int)(iVar101 * uVar8) >> 0xf) +
                      iVar6 * iVar99 + ((int)(iVar99 * uVar10) >> 0xf);
            param_1[0x1ef] = iVar103;
            iVar105 = (int)*(short *)((int)param_1 + iVar97 + 2);
            iVar107 = (int)*(short *)((int)param_1 + iVar97 + 0x12);
            iVar99 = (int)*(short *)((int)param_1 + iVar97 + 0x22);
            iVar101 = (int)*(short *)((int)param_1 + iVar97 + 0x32);
            iVar109 = (int)*(short *)((int)param_1 + iVar97 + 0x42);
            iVar99 = iVar17 * iVar101 + ((int)(iVar101 * uVar20) >> 0xf) +
                     iVar9 * iVar105 + ((int)(iVar105 * uVar14) >> 0xf) +
                     iVar11 * iVar107 + ((int)(iVar107 * uVar16) >> 0xf) +
                     iVar15 * iVar99 + ((int)(iVar99 * uVar18) >> 0xf) +
                     iVar173 * iVar109 + ((int)(iVar109 * uVar22) >> 0xf);
            param_1[0x1f0] = iVar99;
            iVar107 = (int)*(short *)((int)param_1 + iVar97 + 4);
            iVar109 = (int)*(short *)((int)param_1 + iVar97 + 0x14);
            iVar105 = (int)*(short *)((int)param_1 + iVar97 + 0x24);
            iVar101 = (int)*(short *)((int)param_1 + iVar97 + 0x34);
            iVar111 = (int)*(short *)((int)param_1 + iVar97 + 0x44);
            iVar105 = iVar183 * iVar107 + ((int)(iVar107 * uVar23) >> 0xf) +
                      iVar169 * iVar109 + ((int)(iVar109 * uVar24) >> 0xf) +
                      iVar19 * iVar105 + ((int)(iVar105 * uVar25) >> 0xf) +
                      iVar154 * iVar101 + ((int)(iVar101 * uVar26) >> 0xf) +
                      iVar175 * iVar111 + ((int)(iVar111 * uVar27) >> 0xf);
            param_1[0x1f1] = iVar105;
            iVar109 = (int)*(short *)((int)param_1 + iVar97 + 6);
            iVar111 = (int)*(short *)((int)param_1 + iVar97 + 0x16);
            iVar107 = (int)*(short *)((int)param_1 + iVar97 + 0x26);
            iVar101 = (int)*(short *)((int)param_1 + iVar97 + 0x36);
            iVar113 = (int)*(short *)((int)param_1 + iVar97 + 0x46);
            iVar107 = iVar21 * iVar109 + ((int)(iVar109 * uVar28) >> 0xf) +
                      iVar29 * iVar111 + ((int)(iVar111 * uVar30) >> 0xf) +
                      iVar31 * iVar107 + ((int)(iVar107 * uVar32) >> 0xf) +
                      iVar33 * iVar101 + ((int)(iVar101 * uVar34) >> 0xf) +
                      iVar35 * iVar113 + ((int)(iVar113 * uVar36) >> 0xf);
            param_1[0x1f2] = iVar107;
            iVar101 = (int)*(short *)((int)param_1 + iVar97 + 8) +
                      (int)*(short *)((int)param_1 + iVar97 + 0x48);
            uVar96 = iVar99 + iVar107;
            iVar99 = (int)*(short *)((int)param_1 + iVar97 + 0x38) +
                     (int)*(short *)((int)param_1 + iVar97 + 0x18);
            iVar107 = (int)*(short *)((int)param_1 + iVar97 + 0x28);
            iVar99 = iVar37 * iVar101 + ((int)(iVar101 * uVar38) >> 0xf) +
                     iVar39 * iVar99 + ((int)(iVar99 * uVar40) >> 0xf) +
                     iVar41 * iVar107 + ((int)(iVar107 * uVar42) >> 0xf);
            param_1[499] = iVar99;
            iVar107 = (int)*(short *)((int)param_1 + iVar97 + 10);
            iVar109 = (int)*(short *)((int)param_1 + iVar97 + 0x1a);
            uVar100 = iVar103 + iVar99;
            iVar101 = (int)*(short *)((int)param_1 + iVar97 + 0x2a);
            iVar99 = (int)*(short *)((int)param_1 + iVar97 + 0x3a);
            iVar103 = (int)*(short *)((int)param_1 + iVar97 + 0x4a);
            iVar99 = iVar49 * iVar99 + ((int)(iVar99 * uVar50) >> 0xf) +
                     iVar43 * iVar107 + ((int)(iVar107 * uVar44) >> 0xf) +
                     iVar45 * iVar109 + ((int)(iVar109 * uVar46) >> 0xf) +
                     iVar47 * iVar101 + ((int)(iVar101 * uVar48) >> 0xf) +
                     iVar51 * iVar103 + ((int)(iVar103 * uVar52) >> 0xf);
            param_1[500] = iVar99;
            iVar109 = (int)*(short *)((int)param_1 + iVar97 + 0xc);
            iVar103 = (int)*(short *)((int)param_1 + iVar97 + 0x1c) -
                      (int)*(short *)((int)param_1 + iVar97 + 0x3c);
            iVar101 = (int)*(short *)((int)param_1 + iVar97 + 0x2c);
            iVar107 = (int)*(short *)((int)param_1 + iVar97 + 0x4c);
            param_1[0x1f5] =
                 iVar59 * iVar107 + ((int)(iVar107 * uVar60) >> 0xf) +
                 iVar109 * iVar53 + ((int)(iVar109 * uVar54) >> 0xf) +
                 iVar55 * iVar103 + ((int)(iVar103 * uVar56) >> 0xf) +
                 iVar57 * iVar101 + ((int)(iVar101 * uVar58) >> 0xf);
            iVar109 = (int)*(short *)((int)param_1 + iVar97 + 0xe);
            iVar107 = (int)*(short *)((int)param_1 + iVar97 + 0x1e);
            iVar103 = (int)*(short *)((int)param_1 + iVar97 + 0x2e);
            iVar101 = (int)*(short *)((int)param_1 + iVar97 + 0x3e);
            iVar97 = (int)*(short *)((int)param_1 + iVar97 + 0x4e);
            iVar97 = iVar69 * iVar97 + ((int)(iVar97 * uVar70) >> 0xf) +
                     iVar109 * iVar61 + ((int)(iVar109 * uVar62) >> 0xf) +
                     iVar63 * iVar107 + ((int)(iVar107 * uVar64) >> 0xf) +
                     iVar65 * iVar103 + ((int)(iVar103 * uVar66) >> 0xf) +
                     iVar67 * iVar101 + ((int)(iVar101 * uVar68) >> 0xf);
            iVar101 = (int)uVar100 >> 0xf;
            uVar98 = iVar99 - iVar97;
            param_1[0x1f6] = iVar97;
            iVar97 = (int)uVar96 >> 0xf;
            uVar100 = uVar100 & 0x7fff;
            uVar96 = uVar96 & 0x7fff;
            iVar99 = (int)uVar98 >> 0xf;
            uVar98 = uVar98 & 0x7fff;
            puVar4[0x31] = iVar75 * iVar99 + ((int)(uVar76 * iVar99) >> 0xf) +
                           ((int)(iVar75 * uVar98) >> 0xf) +
                           iVar71 * iVar101 + ((int)(uVar72 * iVar101) >> 0xf) +
                           ((int)(iVar71 * uVar100) >> 0xf) +
                           iVar73 * iVar97 + ((int)(uVar74 * iVar97) >> 0xf) +
                           ((int)(iVar73 * uVar96) >> 0xf) + iVar105;
            puVar4[0x32] = iVar81 * iVar99 + ((int)(uVar82 * iVar99) >> 0xf) +
                           ((int)(iVar81 * uVar98) >> 0xf) +
                           iVar79 * iVar97 + ((int)(uVar80 * iVar97) >> 0xf) +
                           ((int)(iVar79 * uVar96) >> 0xf) +
                           iVar77 * iVar101 + ((int)(uVar78 * iVar101) >> 0xf) +
                           ((int)(iVar77 * uVar100) >> 0xf) + iVar105;
            puVar4[0x33] = iVar87 * iVar99 + ((int)(uVar88 * iVar99) >> 0xf) +
                           ((int)(iVar87 * uVar98) >> 0xf) +
                           iVar85 * iVar97 + ((int)(uVar86 * iVar97) >> 0xf) +
                           ((int)(iVar85 * uVar96) >> 0xf) +
                           iVar83 * iVar101 + ((int)(uVar84 * iVar101) >> 0xf) +
                           ((int)(iVar83 * uVar100) >> 0xf) + iVar105;
            puVar4[0x34] = iVar95 * iVar99 + ((int)(uVar94 * iVar99) >> 0xf) +
                           ((int)(iVar95 * uVar98) >> 0xf) +
                           iVar89 * iVar101 + ((int)(uVar90 * iVar101) >> 0xf) +
                           ((int)(iVar89 * uVar100) >> 0xf) +
                           iVar91 * iVar97 + ((int)(uVar92 * iVar97) >> 0xf) +
                           ((int)(iVar91 * uVar96) >> 0xf) + iVar105;
          }
          local_2e8 = (int *)(uVar160 & 0xffff);
          uVar160 = (uint)*(byte *)(param_1 + 1);
          local_2bc = (int *)((int)local_2bc + 1);
          puVar4 = puVar4 + 0x10;
        } while (local_2bc < uVar160);
        goto LAB_140130c0;
      }
LAB_140130cc:
      uVar8 = 0;
      local_2e8 = (int *)(uint)*(byte *)((int)param_1 + 2);
      puVar180 = param_1 + 5;
      puVar13 = param_1 + uVar160 * 0x10;
      puVar168 = param_1 + uVar160 * 2;
      puVar4 = param_1;
      do {
        if (uVar160 == 0) {
          *(undefined1 *)puVar180 = 0;
          puVar4[9] = 2;
          if (1 < *(byte *)((int)param_1 + 6)) {
            iVar169 = 2;
            *(undefined1 *)(puVar180 + 2) = 0;
            uVar10 = 0;
            iVar183 = 0;
            uVar14 = 0;
            iVar173 = 0;
            goto LAB_1401329a;
          }
        }
        else {
          bVar2 = *(byte *)((int)param_1 + 6);
          if (bVar2 < 2) {
            iVar169 = 0;
            puVar5 = puVar4;
            do {
              while( true ) {
                iVar173 = puVar5[0x29];
                puVar5 = puVar5 + 0x10;
                if (iVar173 < 0) break;
                if (iVar169 < iVar173 >> 0xf) {
                  iVar169 = iVar173 >> 0xf;
                }
                if (puVar5 == puVar13) {
                  *(undefined1 *)puVar180 = 0;
                  goto joined_r0x1401326a;
                }
              }
              if (iVar169 < -iVar173 >> 0xf) {
                iVar169 = -iVar173 >> 0xf;
              }
            } while (puVar13 != puVar5);
            *(undefined1 *)puVar180 = 0;
joined_r0x1401326a:
            if (iVar169 < 2) {
              puVar4[9] = 2;
              goto LAB_14013176;
            }
            iVar154 = 0;
            iVar183 = iVar154;
            iVar173 = iVar154;
LAB_14013156:
            uVar10 = 1;
            do {
              uVar14 = uVar10;
              iVar169 = iVar169 >> 1;
              uVar10 = uVar14 + 1 & 0xff;
            } while (iVar169 != 1);
            *(char *)puVar180 = (char)uVar14;
            puVar4[9] = 1 << (uVar14 + 1 & 0xff);
            if (bVar2 < 2) goto LAB_14013176;
          }
          else {
            if (local_2e8 == (int *)0x3) {
              if ((int)(local_2f0 - 1) <= (int)uVar8) {
                iVar154 = 0;
                iVar169 = 0;
                puVar5 = puVar4;
                do {
                  while( true ) {
                    iVar173 = puVar5[0x29];
                    iVar183 = puVar5[0x31];
                    if (iVar173 < 0) {
                      iVar173 = -iVar173;
                    }
                    if (iVar169 < iVar173 >> 0xf) {
                      iVar169 = iVar173 >> 0xf;
                    }
                    puVar5 = puVar5 + 0x10;
                    if (iVar183 < 0) break;
                    if (iVar154 < iVar183 >> 0xf) {
                      iVar154 = iVar183 >> 0xf;
                    }
                    if (puVar13 == puVar5) goto LAB_14013146;
                  }
                  if (iVar154 < -iVar183 >> 0xf) {
                    iVar154 = -iVar183 >> 0xf;
                  }
                } while (puVar13 != puVar5);
                goto LAB_14013146;
              }
              iVar183 = 0;
              iVar173 = 0;
              iVar154 = 0;
              iVar169 = 0;
              puVar5 = param_1;
              puVar174 = puVar4;
              do {
                while( true ) {
                  iVar175 = puVar174[0x29];
                  iVar6 = iVar175;
                  if (iVar175 < 0) {
                    iVar6 = -iVar175;
                  }
                  if (iVar169 < iVar6 >> 0xf) {
                    iVar169 = iVar6 >> 0xf;
                  }
                  iVar6 = puVar174[0x31];
                  iVar9 = iVar6;
                  if (iVar6 < 0) {
                    iVar9 = -iVar6;
                  }
                  iVar6 = iVar6 >> 1;
                  if (iVar154 < iVar9 >> 0xf) {
                    iVar154 = iVar9 >> 0xf;
                  }
                  iVar175 = iVar175 >> 1;
                  iVar9 = iVar6 + iVar175;
                  puVar5[0x12e] = iVar9;
                  if (iVar9 < 0) {
                    iVar9 = -iVar9;
                  }
                  iVar11 = iVar175 - iVar6;
                  if (iVar173 < iVar9 >> 0xf) {
                    iVar173 = iVar9 >> 0xf;
                  }
                  puVar5[0x12f] = iVar11;
                  if (iVar11 < 0) break;
                  puVar5 = puVar5 + 2;
                  if (iVar183 < iVar11 >> 0xf) {
                    iVar183 = iVar11 >> 0xf;
                  }
                  puVar174 = puVar174 + 0x10;
                  if (puVar168 == puVar5) goto LAB_1401314a;
                }
                iVar175 = iVar6 - iVar175 >> 0xf;
                puVar5 = puVar5 + 2;
                if (iVar183 < iVar175) {
                  iVar183 = iVar175;
                }
                puVar174 = puVar174 + 0x10;
              } while (puVar168 != puVar5);
            }
            else {
              iVar154 = 0;
              iVar169 = 0;
              puVar5 = puVar4;
              do {
                while( true ) {
                  iVar173 = puVar5[0x29];
                  iVar183 = puVar5[0x31];
                  if (iVar173 < 0) {
                    iVar173 = -iVar173;
                  }
                  if (iVar169 < iVar173 >> 0xf) {
                    iVar169 = iVar173 >> 0xf;
                  }
                  puVar5 = puVar5 + 0x10;
                  if (iVar183 < 0) break;
                  if (iVar154 < iVar183 >> 0xf) {
                    iVar154 = iVar183 >> 0xf;
                  }
                  if (puVar13 == puVar5) goto LAB_14013146;
                }
                if (iVar154 < -iVar183 >> 0xf) {
                  iVar154 = -iVar183 >> 0xf;
                }
              } while (puVar13 != puVar5);
LAB_14013146:
              iVar183 = 0;
              iVar173 = 0;
            }
LAB_1401314a:
            *(undefined1 *)puVar180 = 0;
            if (1 < iVar169) goto LAB_14013156;
            uVar14 = 0;
            puVar4[9] = 2;
          }
          *(undefined1 *)(puVar180 + 2) = 0;
          if (iVar154 < 2) {
            iVar169 = 2;
            uVar10 = 0;
          }
          else {
            uVar16 = 1;
            do {
              uVar10 = uVar16;
              iVar154 = iVar154 >> 1;
              uVar16 = uVar10 + 1 & 0xff;
            } while (iVar154 != 1);
            *(char *)(puVar180 + 2) = (char)uVar10;
            iVar169 = 1 << (uVar10 + 1 & 0xff);
          }
LAB_1401329a:
          param_1[uVar8 + 0x11] = iVar169;
          *(undefined1 *)((int)param_1 + uVar8 + 0xc) = 0;
          if ((local_2e8 == (int *)0x3) && ((int)uVar8 < (int)(local_2f0 - 1))) {
            *(undefined1 *)((int)param_1 + uVar8 + 0x4a8) = 0;
            if (1 < iVar173) {
              cVar156 = '\0';
              do {
                iVar173 = iVar173 >> 1;
                cVar156 = cVar156 + '\x01';
              } while (iVar173 != 1);
              *(char *)((int)param_1 + uVar8 + 0x4a8) = cVar156;
            }
            *(undefined1 *)((int)param_1 + uVar8 + 0x4b0) = 0;
            if (iVar183 < 2) {
              uVar16 = 0;
            }
            else {
              uVar18 = 1;
              do {
                uVar16 = uVar18;
                iVar183 = iVar183 >> 1;
                uVar18 = uVar16 + 1 & 0xff;
              } while (iVar183 != 1);
              *(char *)((int)param_1 + uVar8 + 0x4b0) = (char)uVar16;
            }
            bVar2 = *(byte *)((int)param_1 + uVar8 + 0x4a8);
            if (bVar2 + uVar16 < uVar10 + uVar14) {
              *(undefined1 *)((int)param_1 + uVar8 + 0xc) = 1;
              puVar5 = param_1;
              puVar174 = puVar4;
              if (uVar160 != 0) {
                do {
                  puVar170 = puVar5 + 2;
                  puVar174[0x29] = puVar5[0x12e];
                  puVar174[0x31] = puVar5[0x12f];
                  puVar5 = puVar170;
                  puVar174 = puVar174 + 0x10;
                } while (puVar170 != puVar168);
              }
              *(char *)((int)param_1 + uVar8 + 0x1c) = (char)uVar16;
              *(byte *)((int)param_1 + uVar8 + 0x14) = bVar2;
              param_1[uVar8 + 9] = 1 << (bVar2 + 1 & 0xff);
              param_1[uVar8 + 0x11] = 1 << (uVar16 + 1 & 0xff);
            }
          }
        }
LAB_14013176:
        uVar8 = uVar8 + 1;
        puVar180 = (undefined4 *)((int)puVar180 + 1);
        puVar4 = puVar4 + 1;
        puVar13 = puVar13 + 1;
      } while ((uVar8 & 0xff) < local_2f0);
    }
    else {
      if (uVar160 != 0) {
        local_2b0 = 0;
        local_2c0 = 0;
        iVar161 = (int)*(uint *)(DAT_140125bc + 0x40) >> 0xf;
        uVar8 = *(uint *)(DAT_140125bc + 0x40) & 0x7fff;
        iVar9 = (int)*(uint *)(DAT_140125bc + 0x80) >> 0xf;
        uVar10 = *(uint *)(DAT_140125bc + 0x80) & 0x7fff;
        iVar11 = (int)*(uint *)(DAT_140125bc + 4) >> 0xf;
        uVar14 = *(uint *)(DAT_140125bc + 4) & 0x7fff;
        iVar15 = (int)*(uint *)(DAT_140125bc + 0x44) >> 0xf;
        uVar16 = *(uint *)(DAT_140125bc + 0x44) & 0x7fff;
        iVar17 = (int)*(uint *)(DAT_140125bc + 0x84) >> 0xf;
        uVar18 = *(uint *)(DAT_140125bc + 0x84) & 0x7fff;
        iVar19 = (int)*(uint *)(DAT_140125bc + 0xc4) >> 0xf;
        uVar20 = *(uint *)(DAT_140125bc + 0xc4) & 0x7fff;
        iVar21 = (int)*(uint *)(DAT_140125bc + 0x104) >> 0xf;
        uVar22 = *(uint *)(DAT_140125bc + 0x104) & 0x7fff;
        iVar173 = (int)*(uint *)(DAT_140125bc + 8) >> 0xf;
        uVar23 = *(uint *)(DAT_140125bc + 8) & 0x7fff;
        iVar183 = (int)*(uint *)(DAT_140125bc + 0x48) >> 0xf;
        uVar24 = *(uint *)(DAT_140125bc + 0x48) & 0x7fff;
        iVar169 = (int)*(uint *)(DAT_140125bc + 0x88) >> 0xf;
        uVar25 = *(uint *)(DAT_140125bc + 0x88) & 0x7fff;
        iVar154 = (int)*(uint *)(DAT_140125bc + 200) >> 0xf;
        uVar26 = *(uint *)(DAT_140125bc + 200) & 0x7fff;
        iVar175 = (int)*(uint *)(DAT_140125bc + 0x108) >> 0xf;
        uVar27 = *(uint *)(DAT_140125bc + 0x108) & 0x7fff;
        iVar6 = (int)*(uint *)(DAT_140125bc + 0xc) >> 0xf;
        uVar28 = *(uint *)(DAT_140125bc + 0xc) & 0x7fff;
        iVar29 = (int)*(uint *)(DAT_140125bc + 0x4c) >> 0xf;
        uVar30 = *(uint *)(DAT_140125bc + 0x4c) & 0x7fff;
        iVar31 = (int)*(uint *)(DAT_140125bc + 0x8c) >> 0xf;
        uVar32 = *(uint *)(DAT_140125bc + 0x8c) & 0x7fff;
        iVar33 = (int)*(uint *)(DAT_140125bc + 0xcc) >> 0xf;
        uVar34 = *(uint *)(DAT_140125bc + 0xcc) & 0x7fff;
        iVar35 = (int)*(uint *)(DAT_140125bc + 0x10c) >> 0xf;
        uVar36 = *(uint *)(DAT_140125bc + 0x10c) & 0x7fff;
        iVar37 = (int)*(uint *)(DAT_140125bc + 0x10) >> 0xf;
        uVar38 = *(uint *)(DAT_140125bc + 0x10) & 0x7fff;
        iVar39 = (int)*(uint *)(DAT_140125bc + 0x50) >> 0xf;
        uVar40 = *(uint *)(DAT_140125bc + 0x50) & 0x7fff;
        iVar41 = (int)*(uint *)(DAT_140125bc + 0x90) >> 0xf;
        uVar42 = *(uint *)(DAT_140125bc + 0x90) & 0x7fff;
        iVar43 = (int)*(uint *)(DAT_140125bc + 0xd0) >> 0xf;
        uVar44 = *(uint *)(DAT_140125bc + 0xd0) & 0x7fff;
        iVar45 = (int)*(uint *)(DAT_140125bc + 0x110) >> 0xf;
        uVar46 = *(uint *)(DAT_140125bc + 0x110) & 0x7fff;
        iVar47 = (int)*(uint *)(DAT_140125bc + 0x14) >> 0xf;
        uVar48 = *(uint *)(DAT_140125bc + 0x14) & 0x7fff;
        iVar49 = (int)*(uint *)(DAT_140125bc + 0x54) >> 0xf;
        uVar50 = *(uint *)(DAT_140125bc + 0x54) & 0x7fff;
        iVar51 = (int)*(uint *)(DAT_140125bc + 0x94) >> 0xf;
        uVar52 = *(uint *)(DAT_140125bc + 0x94) & 0x7fff;
        iVar53 = (int)*(uint *)(DAT_140125bc + 0xd4) >> 0xf;
        uVar54 = *(uint *)(DAT_140125bc + 0xd4) & 0x7fff;
        iVar55 = (int)*(uint *)(DAT_140125bc + 0x114) >> 0xf;
        uVar56 = *(uint *)(DAT_140125bc + 0x114) & 0x7fff;
        iVar57 = (int)*(uint *)(DAT_140125bc + 0x18) >> 0xf;
        uVar58 = *(uint *)(DAT_140125bc + 0x18) & 0x7fff;
        iVar59 = (int)*(uint *)(DAT_140125bc + 0x58) >> 0xf;
        uVar60 = *(uint *)(DAT_140125bc + 0x58) & 0x7fff;
        iVar61 = (int)*(uint *)(DAT_140125bc + 0x98) >> 0xf;
        uVar62 = *(uint *)(DAT_140125bc + 0x98) & 0x7fff;
        iVar63 = (int)*(uint *)(DAT_140125bc + 0xd8) >> 0xf;
        uVar64 = *(uint *)(DAT_140125bc + 0xd8) & 0x7fff;
        iVar65 = (int)*(uint *)(DAT_140125bc + 0x118) >> 0xf;
        uVar66 = *(uint *)(DAT_140125bc + 0x118) & 0x7fff;
        iVar67 = (int)*(uint *)(DAT_140125bc + 0x1c) >> 0xf;
        uVar68 = *(uint *)(DAT_140125bc + 0x1c) & 0x7fff;
        iVar69 = (int)*(uint *)(DAT_140125bc + 0x5c) >> 0xf;
        uVar70 = *(uint *)(DAT_140125bc + 0x5c) & 0x7fff;
        iVar71 = (int)*(uint *)(DAT_140125bc + 0x9c) >> 0xf;
        uVar72 = *(uint *)(DAT_140125bc + 0x9c) & 0x7fff;
        iVar73 = (int)*(uint *)(DAT_140125bc + 0xdc) >> 0xf;
        uVar74 = *(uint *)(DAT_140125bc + 0xdc) & 0x7fff;
        iVar75 = (int)*(uint *)(DAT_140125bc + 0x11c) >> 0xf;
        uVar76 = *(uint *)(DAT_140125bc + 0x11c) & 0x7fff;
        iVar77 = (int)*(uint *)(DAT_140125bc + 0x20) >> 0xf;
        uVar78 = *(uint *)(DAT_140125bc + 0x20) & 0x7fff;
        iVar79 = (int)*(uint *)(DAT_140125bc + 0x60) >> 0xf;
        uVar80 = *(uint *)(DAT_140125bc + 0x60) & 0x7fff;
        iVar81 = (int)*(uint *)(DAT_140125bc + 0xa0) >> 0xf;
        uVar82 = *(uint *)(DAT_140125bc + 0xa0) & 0x7fff;
        iVar83 = (int)*(uint *)(DAT_140125bc + 0x24) >> 0xf;
        uVar84 = *(uint *)(DAT_140125bc + 0x24) & 0x7fff;
        iVar85 = (int)*(uint *)(DAT_140125bc + 100) >> 0xf;
        uVar86 = *(uint *)(DAT_140125bc + 100) & 0x7fff;
        iVar87 = (int)*(uint *)(DAT_140125bc + 0xa4) >> 0xf;
        uVar88 = *(uint *)(DAT_140125bc + 0xa4) & 0x7fff;
        iVar89 = (int)*(uint *)(DAT_140125bc + 0xe4) >> 0xf;
        uVar90 = *(uint *)(DAT_140125bc + 0xe4) & 0x7fff;
        iVar91 = (int)*(uint *)(DAT_140125bc + 0x124) >> 0xf;
        uVar92 = *(uint *)(DAT_140125bc + 0x124) & 0x7fff;
        iVar93 = (int)*(uint *)(DAT_140125bc + 0x28) >> 0xf;
        uVar94 = *(uint *)(DAT_140125bc + 0x28) & 0x7fff;
        iVar95 = (int)*(uint *)(DAT_140125bc + 0x68) >> 0xf;
        uVar96 = *(uint *)(DAT_140125bc + 0x68) & 0x7fff;
        iVar97 = (int)*(uint *)(DAT_140125bc + 0xa8) >> 0xf;
        uVar98 = *(uint *)(DAT_140125bc + 0xa8) & 0x7fff;
        iVar99 = (int)*(uint *)(DAT_140125bc + 0xe8) >> 0xf;
        uVar100 = *(uint *)(DAT_140125bc + 0xe8) & 0x7fff;
        iVar101 = (int)*(uint *)(DAT_140125bc + 0x128) >> 0xf;
        uVar102 = *(uint *)(DAT_140125bc + 0x128) & 0x7fff;
        iVar103 = (int)*(uint *)(DAT_140125bc + 0x2c) >> 0xf;
        uVar104 = *(uint *)(DAT_140125bc + 0x2c) & 0x7fff;
        iVar105 = (int)*(uint *)(DAT_140125bc + 0x6c) >> 0xf;
        uVar106 = *(uint *)(DAT_140125bc + 0x6c) & 0x7fff;
        iVar107 = (int)*(uint *)(DAT_140125bc + 0xac) >> 0xf;
        uVar108 = *(uint *)(DAT_140125bc + 0xac) & 0x7fff;
        iVar109 = (int)*(uint *)(DAT_140125bc + 0xec) >> 0xf;
        uVar110 = *(uint *)(DAT_140125bc + 0xec) & 0x7fff;
        iVar111 = (int)*(uint *)(DAT_140125bc + 300) >> 0xf;
        uVar112 = *(uint *)(DAT_140125bc + 300) & 0x7fff;
        iVar113 = (int)*(uint *)(DAT_140125bc + 0x30) >> 0xf;
        uVar114 = *(uint *)(DAT_140125bc + 0x30) & 0x7fff;
        iVar115 = (int)*(uint *)(DAT_140125bc + 0x70) >> 0xf;
        uVar116 = *(uint *)(DAT_140125bc + 0x70) & 0x7fff;
        iVar117 = (int)*(uint *)(DAT_140125bc + 0xb0) >> 0xf;
        uVar118 = *(uint *)(DAT_140125bc + 0xb0) & 0x7fff;
        iVar119 = (int)*(uint *)(DAT_140125bc + 0xf0) >> 0xf;
        uVar120 = *(uint *)(DAT_140125bc + 0xf0) & 0x7fff;
        iVar121 = (int)*(uint *)(DAT_140125bc + 0x130) >> 0xf;
        uVar122 = *(uint *)(DAT_140125bc + 0x130) & 0x7fff;
        iVar123 = (int)*(uint *)(DAT_140125bc + 0x34) >> 0xf;
        uVar124 = *(uint *)(DAT_140125bc + 0x34) & 0x7fff;
        iVar125 = (int)*(uint *)(DAT_140125bc + 0x74) >> 0xf;
        uVar126 = *(uint *)(DAT_140125bc + 0x74) & 0x7fff;
        iVar127 = (int)*(uint *)(DAT_140125bc + 0xb4) >> 0xf;
        uVar128 = *(uint *)(DAT_140125bc + 0xb4) & 0x7fff;
        iVar129 = (int)*(uint *)(DAT_140125bc + 0xf4) >> 0xf;
        uVar130 = *(uint *)(DAT_140125bc + 0xf4) & 0x7fff;
        iVar131 = (int)*(uint *)(DAT_140125bc + 0x134) >> 0xf;
        uVar132 = *(uint *)(DAT_140125bc + 0x134) & 0x7fff;
        iVar133 = (int)*(uint *)(DAT_140125bc + 0x38) >> 0xf;
        uVar134 = *(uint *)(DAT_140125bc + 0x38) & 0x7fff;
        iVar135 = (int)*(uint *)(DAT_140125bc + 0x78) >> 0xf;
        uVar136 = *(uint *)(DAT_140125bc + 0x78) & 0x7fff;
        iVar137 = (int)*(uint *)(DAT_140125bc + 0xb8) >> 0xf;
        uVar138 = *(uint *)(DAT_140125bc + 0xb8) & 0x7fff;
        iVar139 = (int)*(uint *)(DAT_140125bc + 0xf8) >> 0xf;
        uVar140 = *(uint *)(DAT_140125bc + 0xf8) & 0x7fff;
        iVar141 = (int)*(uint *)(DAT_140125bc + 0x138) >> 0xf;
        uVar142 = *(uint *)(DAT_140125bc + 0x138) & 0x7fff;
        iVar143 = (int)*(uint *)(DAT_140125bc + 0x3c) >> 0xf;
        uVar144 = *(uint *)(DAT_140125bc + 0x3c) & 0x7fff;
        iVar145 = (int)*(uint *)(DAT_140125bc + 0x7c) >> 0xf;
        uVar146 = *(uint *)(DAT_140125bc + 0x7c) & 0x7fff;
        iVar147 = (int)*(uint *)(DAT_140125bc + 0xbc) >> 0xf;
        uVar148 = *(uint *)(DAT_140125bc + 0xbc) & 0x7fff;
        iVar149 = (int)*(uint *)(DAT_140125bc + 0xfc) >> 0xf;
        uVar162 = *(uint *)(DAT_140125bc + 0xfc) & 0x7fff;
        iVar163 = (int)*(uint *)(DAT_140125bc + 0x13c) >> 0xf;
        uVar164 = *(uint *)(DAT_140125bc + 0x13c) & 0x7fff;
        local_2bc = param_1 + 0x28;
        do {
          uVar160 = (uint)*(ushort *)(param_1 + 0x1ee);
          puVar165 = (undefined2 *)(local_2b4 + local_2c0);
          if (uVar160 == 0) {
            puVar4 = param_1 + 0x151;
            do {
              puVar13 = puVar4 + 1;
              puVar4[0x29] = *puVar13;
              puVar4 = puVar13;
            } while (param_1 + 0x175 != puVar13);
            iVar171 = 0x5d8;
            sVar7 = 0x48;
            uVar160 = 0x50;
          }
          else {
            sVar7 = *(ushort *)(param_1 + 0x1ee) - 8;
            iVar171 = (uVar160 + 0x29c) * 2;
          }
          *(short *)(param_1 + 0x1ee) = sVar7;
          cVar156 = *(char *)((int)param_1 + 6);
          *(undefined2 *)((int)param_1 + iVar171 + 0xe) = *puVar165;
          if (cVar156 == '\x01') {
            *(undefined2 *)((int)param_1 + iVar171 + 0xc) = puVar165[1];
            *(undefined2 *)((int)param_1 + iVar171 + 10) = puVar165[2];
            *(undefined2 *)((int)param_1 + iVar171 + 8) = puVar165[3];
            *(undefined2 *)((int)param_1 + iVar171 + 6) = puVar165[4];
            *(undefined2 *)((int)param_1 + iVar171 + 4) = puVar165[5];
            *(undefined2 *)((int)param_1 + iVar171 + 2) = puVar165[6];
            *(undefined2 *)((int)param_1 + (uVar160 + 0x29c) * 2) = puVar165[7];
          }
          else {
            *(undefined2 *)((int)param_1 + iVar171 + 0xc) = puVar165[2];
            *(undefined2 *)((int)param_1 + iVar171 + 10) = puVar165[4];
            *(undefined2 *)((int)param_1 + iVar171 + 8) = puVar165[6];
            *(undefined2 *)((int)param_1 + iVar171 + 6) = puVar165[8];
            *(undefined2 *)((int)param_1 + iVar171 + 4) = puVar165[10];
            *(undefined2 *)((int)param_1 + iVar171 + 2) = puVar165[0xc];
            *(undefined2 *)((int)param_1 + (uVar160 + 0x29c) * 2) = puVar165[0xe];
          }
          iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x40) -
                    (int)*(short *)((int)param_1 + iVar171 + 0x60);
          iVar166 = (int)*(short *)((int)param_1 + iVar171 + 0x20) -
                    (int)*(short *)((int)param_1 + iVar171 + 0x80);
          iVar186 = iVar161 * iVar166 + ((int)(uVar8 * iVar166) >> 0xf) +
                    iVar9 * iVar150 + ((int)(uVar10 * iVar150) >> 0xf);
          param_1[0x1ef] = iVar186;
          iVar150 = (int)*(short *)((int)param_1 + iVar171 + 2);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x22);
          iVar166 = (int)*(short *)((int)param_1 + iVar171 + 0x42);
          iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x62);
          iVar177 = (int)*(short *)((int)param_1 + iVar171 + 0x82);
          iVar166 = iVar11 * iVar150 + ((int)(uVar14 * iVar150) >> 0xf) +
                    iVar15 * iVar176 + ((int)(uVar16 * iVar176) >> 0xf) +
                    iVar17 * iVar166 + ((int)(uVar18 * iVar166) >> 0xf) +
                    iVar19 * iVar151 + ((int)(uVar20 * iVar151) >> 0xf) +
                    iVar21 * iVar177 + ((int)(uVar22 * iVar177) >> 0xf);
          param_1[0x1f0] = iVar166;
          puVar189 = DAT_14013360;
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 4);
          iVar177 = (int)*(short *)((int)param_1 + iVar171 + 0x24);
          iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x44);
          iVar151 = (int)*(short *)((int)param_1 + iVar171 + 100);
          iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x84);
          iVar150 = iVar173 * iVar176 + ((int)(uVar23 * iVar176) >> 0xf) +
                    iVar183 * iVar177 + ((int)(uVar24 * iVar177) >> 0xf) +
                    iVar169 * iVar150 + ((int)(uVar25 * iVar150) >> 0xf) +
                    iVar154 * iVar151 + ((int)(uVar26 * iVar151) >> 0xf) +
                    iVar175 * iVar181 + ((int)(uVar27 * iVar181) >> 0xf);
          param_1[0x1f1] = iVar150;
          iVar177 = (int)*(short *)((int)param_1 + iVar171 + 6);
          iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x26);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x46);
          iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x66);
          iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x86);
          iVar181 = iVar6 * iVar177 + ((int)(uVar28 * iVar177) >> 0xf) +
                    iVar29 * iVar181 + ((int)(uVar30 * iVar181) >> 0xf) +
                    iVar31 * iVar176 + ((int)(uVar32 * iVar176) >> 0xf) +
                    iVar33 * iVar151 + ((int)(uVar34 * iVar151) >> 0xf) +
                    iVar35 * iVar184 + ((int)(uVar36 * iVar184) >> 0xf);
          param_1[0x1f2] = iVar181;
          iVar177 = (int)*(short *)((int)param_1 + iVar171 + 8);
          iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x28);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x48);
          iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x68);
          iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x88);
          iVar177 = iVar37 * iVar177 + ((int)(uVar38 * iVar177) >> 0xf) +
                    iVar39 * iVar184 + ((int)(uVar40 * iVar184) >> 0xf) +
                    iVar41 * iVar176 + ((int)(uVar42 * iVar176) >> 0xf) +
                    iVar43 * iVar151 + ((int)(uVar44 * iVar151) >> 0xf) +
                    iVar45 * iVar190 + ((int)(uVar46 * iVar190) >> 0xf);
          param_1[499] = iVar177;
          iVar151 = (int)*(short *)((int)param_1 + iVar171 + 10);
          iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x2a);
          iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x4a);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x6a);
          iVar191 = (int)*(short *)((int)param_1 + iVar171 + 0x8a);
          iVar151 = iVar47 * iVar151 + ((int)(uVar48 * iVar151) >> 0xf) +
                    iVar49 * iVar190 + ((int)(uVar50 * iVar190) >> 0xf) +
                    iVar51 * iVar184 + ((int)(uVar52 * iVar184) >> 0xf) +
                    iVar53 * iVar176 + ((int)(uVar54 * iVar176) >> 0xf) +
                    iVar55 * iVar191 + ((int)(uVar56 * iVar191) >> 0xf);
          param_1[500] = iVar151;
          iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0xc);
          uVar152 = iVar181 + iVar151;
          iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x2c);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x4c);
          iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x6c);
          iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x8c);
          iVar151 = iVar65 * iVar190 + ((int)(uVar66 * iVar190) >> 0xf) +
                    iVar57 * iVar184 + ((int)(uVar58 * iVar184) >> 0xf) +
                    iVar59 * iVar181 + ((int)(uVar60 * iVar181) >> 0xf) +
                    iVar61 * iVar176 + ((int)(uVar62 * iVar176) >> 0xf) +
                    iVar63 * iVar151 + ((int)(uVar64 * iVar151) >> 0xf);
          param_1[0x1f5] = iVar151;
          uVar178 = iVar150 + iVar151;
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0xe);
          iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x2e);
          iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x4e);
          iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x6e);
          iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x8e);
          iVar150 = iVar75 * iVar184 + ((int)(uVar76 * iVar184) >> 0xf) +
                    iVar67 * iVar176 + ((int)(uVar68 * iVar176) >> 0xf) +
                    iVar69 * iVar181 + ((int)(uVar70 * iVar181) >> 0xf) +
                    iVar71 * iVar150 + ((int)(uVar72 * iVar150) >> 0xf) +
                    iVar73 * iVar151 + ((int)(uVar74 * iVar151) >> 0xf);
          param_1[0x1f6] = iVar150;
          uVar188 = iVar166 + iVar150;
          iVar166 = (int)*(short *)((int)param_1 + iVar171 + 0x10) +
                    (int)*(short *)((int)param_1 + iVar171 + 0x90);
          iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x70) +
                    (int)*(short *)((int)param_1 + iVar171 + 0x30);
          iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x50);
          iVar150 = iVar81 * iVar150 + ((int)(uVar82 * iVar150) >> 0xf) +
                    iVar77 * iVar166 + ((int)(uVar78 * iVar166) >> 0xf) +
                    iVar79 * iVar151 + ((int)(uVar80 * iVar151) >> 0xf);
          param_1[0x1f7] = iVar150;
          iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x12);
          uVar187 = iVar186 + iVar150;
          iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x32);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x52);
          iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x72);
          iVar166 = (int)*(short *)((int)param_1 + iVar171 + 0x92);
          iVar166 = iVar83 * iVar151 + ((int)(uVar84 * iVar151) >> 0xf) +
                    iVar85 * iVar150 + ((int)(uVar86 * iVar150) >> 0xf) +
                    iVar87 * iVar176 + ((int)(uVar88 * iVar176) >> 0xf) +
                    iVar89 * iVar181 + ((int)(uVar90 * iVar181) >> 0xf) +
                    iVar91 * iVar166 + ((int)(uVar92 * iVar166) >> 0xf);
          param_1[0x1f8] = iVar166;
          iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x14);
          iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x34);
          iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x54);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x74);
          iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x94);
          iVar151 = iVar101 * iVar184 + ((int)(uVar102 * iVar184) >> 0xf) +
                    iVar93 * iVar150 + ((int)(uVar94 * iVar150) >> 0xf) +
                    iVar95 * iVar181 + ((int)(uVar96 * iVar181) >> 0xf) +
                    iVar97 * iVar151 + ((int)(uVar98 * iVar151) >> 0xf) +
                    iVar99 * iVar176 + ((int)(uVar100 * iVar176) >> 0xf);
          param_1[0x1f9] = iVar151;
          iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x16);
          iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x36);
          iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x56);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x76);
          iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x96);
          iVar150 = iVar111 * iVar190 + ((int)(uVar112 * iVar190) >> 0xf) +
                    iVar103 * iVar181 + ((int)(uVar104 * iVar181) >> 0xf) +
                    iVar105 * iVar184 + ((int)(uVar106 * iVar184) >> 0xf) +
                    iVar107 * iVar150 + ((int)(uVar108 * iVar150) >> 0xf) +
                    iVar109 * iVar176 + ((int)(uVar110 * iVar176) >> 0xf);
          param_1[0x1fa] = iVar150;
          iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x18);
          iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x38);
          iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x58);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x78);
          iVar186 = (int)*(short *)((int)param_1 + iVar171 + 0x98);
          param_1[0x1fb] =
               iVar121 * iVar186 + ((int)(uVar122 * iVar186) >> 0xf) +
               iVar113 * iVar184 + ((int)(uVar114 * iVar184) >> 0xf) +
               iVar115 * iVar190 + ((int)(uVar116 * iVar190) >> 0xf) +
               iVar117 * iVar181 + ((int)(uVar118 * iVar181) >> 0xf) +
               iVar119 * iVar176 + ((int)(uVar120 * iVar176) >> 0xf);
          iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x1a);
          iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x3a);
          iVar186 = (int)*(short *)((int)param_1 + iVar171 + 0x5a);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x7a);
          iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x9a);
          iVar181 = iVar131 * iVar190 + ((int)(uVar132 * iVar190) >> 0xf) +
                    iVar123 * iVar181 + ((int)(uVar124 * iVar181) >> 0xf) +
                    iVar125 * iVar184 + ((int)(uVar126 * iVar184) >> 0xf) +
                    iVar127 * iVar186 + ((int)(uVar128 * iVar186) >> 0xf) +
                    iVar129 * iVar176 + ((int)(uVar130 * iVar176) >> 0xf);
          param_1[0x1fc] = iVar181;
          iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x1c);
          iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x3c);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x7c);
          uVar160 = iVar150 - iVar181;
          local_2e8 = local_2bc;
          iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x5c);
          iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x9c);
          iVar150 = iVar133 * iVar184 + ((int)(uVar134 * iVar184) >> 0xf) +
                    iVar135 * iVar190 + ((int)(uVar136 * iVar190) >> 0xf) +
                    iVar137 * iVar150 + ((int)(uVar138 * iVar150) >> 0xf) +
                    iVar139 * iVar176 + ((int)(uVar140 * iVar176) >> 0xf) +
                    iVar141 * iVar181 + ((int)(uVar142 * iVar181) >> 0xf);
          param_1[0x1fd] = iVar150;
          iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x1e);
          uVar153 = iVar151 - iVar150;
          iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x3e);
          iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x5e);
          iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x7e);
          iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x9e);
          iVar171 = (int)uVar187 >> 0xf;
          iVar150 = (int)uVar188 >> 0xf;
          iVar151 = iVar163 * iVar151 + ((int)(uVar164 * iVar151) >> 0xf) +
                    iVar143 * iVar190 + ((int)(uVar144 * iVar190) >> 0xf) +
                    iVar145 * iVar184 + ((int)(uVar146 * iVar184) >> 0xf) +
                    iVar147 * iVar181 + ((int)(uVar148 * iVar181) >> 0xf) +
                    iVar149 * iVar176 + ((int)(uVar162 * iVar176) >> 0xf);
          param_1[0x1fe] = iVar151;
          uVar12 = iVar166 - iVar151;
          iVar184 = (int)uVar178 >> 0xf;
          iVar181 = (int)uVar152 >> 0xf;
          iVar166 = (int)uVar153 >> 0xf;
          iVar151 = (int)uVar12 >> 0xf;
          iVar176 = (int)uVar160 >> 0xf;
          puVar167 = puVar189;
          do {
            puVar1 = puVar167 + 1;
            iVar191 = (int)*puVar1 >> 0xf;
            iVar185 = (int)puVar167[9] >> 0xf;
            iVar182 = (int)puVar167[0x11] >> 0xf;
            iVar190 = (int)puVar167[0x19] >> 0xf;
            iVar172 = (int)puVar167[0x49] >> 0xf;
            iVar179 = (int)puVar167[0x51] >> 0xf;
            iVar186 = (int)puVar167[0x59] >> 0xf;
            local_2e8 = local_2e8 + 1;
            *local_2e8 = iVar190 * iVar181 + ((int)(iVar181 * (puVar167[0x19] & 0x7fff)) >> 0xf) +
                         ((int)((uVar152 & 0x7fff) * iVar190) >> 0xf) +
                         iVar191 * iVar171 + ((int)(iVar171 * (*puVar1 & 0x7fff)) >> 0xf) +
                         ((int)((uVar187 & 0x7fff) * iVar191) >> 0xf) +
                         iVar185 * iVar150 + ((int)(iVar150 * (puVar167[9] & 0x7fff)) >> 0xf) +
                         ((int)((uVar188 & 0x7fff) * iVar185) >> 0xf) +
                         iVar182 * iVar184 + ((int)(iVar184 * (puVar167[0x11] & 0x7fff)) >> 0xf) +
                         ((int)((uVar178 & 0x7fff) * iVar182) >> 0xf) + iVar177 +
                         iVar172 * iVar151 + ((int)(iVar151 * (puVar167[0x49] & 0x7fff)) >> 0xf) +
                         ((int)((uVar12 & 0x7fff) * iVar172) >> 0xf) +
                         iVar179 * iVar166 + ((int)(iVar166 * (puVar167[0x51] & 0x7fff)) >> 0xf) +
                         ((int)((uVar153 & 0x7fff) * iVar179) >> 0xf) +
                         iVar186 * iVar176 + ((int)(iVar176 * (puVar167[0x59] & 0x7fff)) >> 0xf) +
                         ((int)((uVar160 & 0x7fff) * iVar186) >> 0xf);
            puVar167 = puVar1;
          } while (DAT_1401335c != puVar1);
          if (*(byte *)((int)param_1 + 6) < 2) {
            local_2c0 = local_2c0 + 0x10;
          }
          else {
            uVar160 = (uint)*(ushort *)((int)param_1 + 0x7ba);
            puVar165 = (undefined2 *)(local_2c0 + 2 + local_2b4);
            if (uVar160 == 0) {
              puVar4 = param_1 + 0x1a1;
              do {
                puVar13 = puVar4 + 1;
                puVar4[0x29] = *puVar13;
                puVar4 = puVar13;
              } while (param_1 + 0x1c5 != puVar13);
              sVar7 = 0x48;
              uVar160 = 0x50;
              iVar171 = 0x718;
            }
            else {
              iVar171 = (uVar160 + 0x33c) * 2;
              sVar7 = *(ushort *)((int)param_1 + 0x7ba) - 8;
            }
            *(short *)((int)param_1 + 0x7ba) = sVar7;
            *(undefined2 *)((int)param_1 + iVar171 + 0xe) = *puVar165;
            *(undefined2 *)((int)param_1 + iVar171 + 0xc) = puVar165[2];
            *(undefined2 *)((int)param_1 + iVar171 + 10) = puVar165[4];
            *(undefined2 *)((int)param_1 + iVar171 + 8) = puVar165[6];
            *(undefined2 *)((int)param_1 + iVar171 + 6) = puVar165[8];
            *(undefined2 *)((int)param_1 + iVar171 + 4) = puVar165[10];
            *(undefined2 *)((int)param_1 + iVar171 + 2) = puVar165[0xc];
            *(undefined2 *)((int)param_1 + (uVar160 + 0x33c) * 2) = puVar165[0xe];
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x20) -
                      (int)*(short *)((int)param_1 + iVar171 + 0x80);
            iVar166 = (int)*(short *)((int)param_1 + iVar171 + 0x40) -
                      (int)*(short *)((int)param_1 + iVar171 + 0x60);
            iVar176 = iVar150 * iVar161 + ((int)(iVar150 * uVar8) >> 0xf) +
                      iVar9 * iVar166 + ((int)(iVar166 * uVar10) >> 0xf);
            param_1[0x1ef] = iVar176;
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 2);
            iVar177 = (int)*(short *)((int)param_1 + iVar171 + 0x22);
            iVar166 = (int)*(short *)((int)param_1 + iVar171 + 0x42);
            iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x62);
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x82);
            iVar186 = iVar21 * iVar181 + ((int)(iVar181 * uVar22) >> 0xf) +
                      iVar11 * iVar150 + ((int)(iVar150 * uVar14) >> 0xf) +
                      iVar15 * iVar177 + ((int)(iVar177 * uVar16) >> 0xf) +
                      iVar17 * iVar166 + ((int)(iVar166 * uVar18) >> 0xf) +
                      iVar19 * iVar151 + ((int)(iVar151 * uVar20) >> 0xf);
            param_1[0x1f0] = iVar186;
            iVar151 = (int)*(short *)((int)param_1 + iVar171 + 4);
            iVar177 = (int)*(short *)((int)param_1 + iVar171 + 0x24);
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x44);
            iVar166 = (int)*(short *)((int)param_1 + iVar171 + 100);
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x84);
            iVar166 = iVar175 * iVar181 + ((int)(iVar181 * uVar27) >> 0xf) +
                      iVar173 * iVar151 + ((int)(iVar151 * uVar23) >> 0xf) +
                      iVar183 * iVar177 + ((int)(iVar177 * uVar24) >> 0xf) +
                      iVar169 * iVar150 + ((int)(iVar150 * uVar25) >> 0xf) +
                      iVar154 * iVar166 + ((int)(iVar166 * uVar26) >> 0xf);
            param_1[0x1f1] = iVar166;
            iVar177 = (int)*(short *)((int)param_1 + iVar171 + 6);
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x26);
            iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x46);
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x66);
            iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x86);
            iVar151 = iVar6 * iVar177 + ((int)(iVar177 * uVar28) >> 0xf) +
                      iVar29 * iVar181 + ((int)(iVar181 * uVar30) >> 0xf) +
                      iVar31 * iVar151 + ((int)(iVar151 * uVar32) >> 0xf) +
                      iVar33 * iVar150 + ((int)(iVar150 * uVar34) >> 0xf) +
                      iVar35 * iVar184 + ((int)(iVar184 * uVar36) >> 0xf);
            param_1[0x1f2] = iVar151;
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 8);
            iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x28);
            iVar177 = (int)*(short *)((int)param_1 + iVar171 + 0x48);
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x68);
            iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x88);
            iVar177 = iVar37 * iVar181 + ((int)(iVar181 * uVar38) >> 0xf) +
                      iVar184 * iVar39 + ((int)(iVar184 * uVar40) >> 0xf) +
                      iVar41 * iVar177 + ((int)(iVar177 * uVar42) >> 0xf) +
                      iVar43 * iVar150 + ((int)(iVar150 * uVar44) >> 0xf) +
                      iVar190 * iVar45 + ((int)(iVar190 * uVar46) >> 0xf);
            param_1[499] = iVar177;
            iVar184 = (int)*(short *)((int)param_1 + iVar171 + 10);
            iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x2a);
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x4a);
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x6a);
            iVar191 = (int)*(short *)((int)param_1 + iVar171 + 0x8a);
            iVar150 = iVar47 * iVar184 + ((int)(iVar184 * uVar48) >> 0xf) +
                      iVar190 * iVar49 + ((int)(iVar190 * uVar50) >> 0xf) +
                      iVar51 * iVar181 + ((int)(iVar181 * uVar52) >> 0xf) +
                      iVar53 * iVar150 + ((int)(iVar150 * uVar54) >> 0xf) +
                      iVar191 * iVar55 + ((int)(iVar191 * uVar56) >> 0xf);
            param_1[500] = iVar150;
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0xc);
            uVar160 = iVar151 + iVar150;
            iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x2c);
            iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x4c);
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x6c);
            iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x8c);
            iVar150 = iVar65 * iVar190 + ((int)(iVar190 * uVar66) >> 0xf) +
                      iVar57 * iVar181 + ((int)(iVar181 * uVar58) >> 0xf) +
                      iVar59 * iVar184 + ((int)(iVar184 * uVar60) >> 0xf) +
                      iVar61 * iVar151 + ((int)(iVar151 * uVar62) >> 0xf) +
                      iVar63 * iVar150 + ((int)(iVar150 * uVar64) >> 0xf);
            param_1[0x1f5] = iVar150;
            uVar188 = iVar166 + iVar150;
            iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0xe);
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x2e);
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x4e);
            iVar166 = (int)*(short *)((int)param_1 + iVar171 + 0x6e);
            iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x8e);
            iVar150 = iVar75 * iVar184 + ((int)(iVar184 * uVar76) >> 0xf) +
                      iVar67 * iVar151 + ((int)(iVar151 * uVar68) >> 0xf) +
                      iVar69 * iVar181 + ((int)(iVar181 * uVar70) >> 0xf) +
                      iVar71 * iVar150 + ((int)(iVar150 * uVar72) >> 0xf) +
                      iVar73 * iVar166 + ((int)(iVar166 * uVar74) >> 0xf);
            param_1[0x1f6] = iVar150;
            uVar187 = iVar186 + iVar150;
            iVar166 = (int)*(short *)((int)param_1 + iVar171 + 0x10) +
                      (int)*(short *)((int)param_1 + iVar171 + 0x90);
            iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x70) +
                      (int)*(short *)((int)param_1 + iVar171 + 0x30);
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x50);
            iVar150 = iVar81 * iVar150 + ((int)(iVar150 * uVar82) >> 0xf) +
                      iVar77 * iVar166 + ((int)(iVar166 * uVar78) >> 0xf) +
                      iVar79 * iVar151 + ((int)(iVar151 * uVar80) >> 0xf);
            param_1[0x1f7] = iVar150;
            uVar153 = iVar176 + iVar150;
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x12);
            iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x32);
            iVar166 = (int)*(short *)((int)param_1 + iVar171 + 0x52);
            iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x72);
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x92);
            iVar166 = iVar83 * iVar150 + ((int)(iVar150 * uVar84) >> 0xf) +
                      iVar85 * iVar176 + ((int)(iVar176 * uVar86) >> 0xf) +
                      iVar87 * iVar166 + ((int)(iVar166 * uVar88) >> 0xf) +
                      iVar89 * iVar151 + ((int)(iVar151 * uVar90) >> 0xf) +
                      iVar91 * iVar181 + ((int)(iVar181 * uVar92) >> 0xf);
            param_1[0x1f8] = iVar166;
            iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x14);
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x34);
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x54);
            iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x74);
            iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x94);
            iVar151 = iVar101 * iVar184 + ((int)(iVar184 * uVar102) >> 0xf) +
                      iVar93 * iVar176 + ((int)(iVar176 * uVar94) >> 0xf) +
                      iVar95 * iVar181 + ((int)(iVar181 * uVar96) >> 0xf) +
                      iVar97 * iVar150 + ((int)(iVar150 * uVar98) >> 0xf) +
                      iVar99 * iVar151 + ((int)(iVar151 * uVar100) >> 0xf);
            param_1[0x1f9] = iVar151;
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x16);
            iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x36);
            iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x56);
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x76);
            iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x96);
            iVar150 = iVar111 * iVar190 + ((int)(iVar190 * uVar112) >> 0xf) +
                      iVar103 * iVar181 + ((int)(iVar181 * uVar104) >> 0xf) +
                      iVar105 * iVar184 + ((int)(iVar184 * uVar106) >> 0xf) +
                      iVar107 * iVar176 + ((int)(iVar176 * uVar108) >> 0xf) +
                      iVar109 * iVar150 + ((int)(iVar150 * uVar110) >> 0xf);
            param_1[0x1fa] = iVar150;
            iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x18);
            iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x38);
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x58);
            iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x78);
            iVar186 = (int)*(short *)((int)param_1 + iVar171 + 0x98);
            param_1[0x1fb] =
                 iVar113 * iVar184 + ((int)(iVar184 * uVar114) >> 0xf) +
                 iVar190 * iVar115 + ((int)(iVar190 * uVar116) >> 0xf) +
                 iVar117 * iVar181 + ((int)(iVar181 * uVar118) >> 0xf) +
                 iVar119 * iVar176 + ((int)(iVar176 * uVar120) >> 0xf) +
                 iVar186 * iVar121 + ((int)(iVar186 * uVar122) >> 0xf);
            iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x1a);
            iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x3a);
            iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x5a);
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x7a);
            iVar186 = (int)*(short *)((int)param_1 + iVar171 + 0x9a);
            iVar176 = iVar176 * iVar123 + ((int)(iVar176 * uVar124) >> 0xf) +
                      iVar190 * iVar125 + ((int)(iVar190 * uVar126) >> 0xf) +
                      iVar127 * iVar184 + ((int)(iVar184 * uVar128) >> 0xf) +
                      iVar129 * iVar181 + ((int)(iVar181 * uVar130) >> 0xf) +
                      iVar186 * iVar131 + ((int)(iVar186 * uVar132) >> 0xf);
            param_1[0x1fc] = iVar176;
            uVar152 = iVar150 - iVar176;
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x1c);
            iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x3c);
            iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x5c);
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x7c);
            iVar190 = (int)*(short *)((int)param_1 + iVar171 + 0x9c);
            iVar150 = iVar133 * iVar181 + ((int)(iVar181 * uVar134) >> 0xf) +
                      iVar184 * iVar135 + ((int)(iVar184 * uVar136) >> 0xf) +
                      iVar137 * iVar176 + ((int)(iVar176 * uVar138) >> 0xf) +
                      iVar139 * iVar150 + ((int)(iVar150 * uVar140) >> 0xf) +
                      iVar190 * iVar141 + ((int)(iVar190 * uVar142) >> 0xf);
            param_1[0x1fd] = iVar150;
            iVar184 = (int)*(short *)((int)param_1 + iVar171 + 0x1e);
            iVar181 = (int)*(short *)((int)param_1 + iVar171 + 0x5e);
            iVar176 = (int)*(short *)((int)param_1 + iVar171 + 0x7e);
            uVar178 = iVar151 - iVar150;
            iVar151 = (int)*(short *)((int)param_1 + iVar171 + 0x3e);
            iVar150 = (int)*(short *)((int)param_1 + iVar171 + 0x9e);
            iVar171 = (int)uVar152 >> 0xf;
            iVar150 = iVar163 * iVar150 + ((int)(iVar150 * uVar164) >> 0xf) +
                      iVar184 * iVar143 + ((int)(iVar184 * uVar144) >> 0xf) +
                      iVar145 * iVar151 + ((int)(iVar151 * uVar146) >> 0xf) +
                      iVar147 * iVar181 + ((int)(iVar181 * uVar148) >> 0xf) +
                      iVar149 * iVar176 + ((int)(iVar176 * uVar162) >> 0xf);
            uVar12 = iVar166 - iVar150;
            param_1[0x1fe] = iVar150;
            iVar181 = (int)uVar153 >> 0xf;
            iVar150 = (int)uVar187 >> 0xf;
            iVar166 = (int)uVar188 >> 0xf;
            iVar184 = (int)uVar160 >> 0xf;
            iVar151 = (int)uVar178 >> 0xf;
            iVar176 = (int)uVar12 >> 0xf;
            piVar192 = local_2bc + 8;
            do {
              puVar167 = puVar189 + 1;
              iVar191 = (int)*puVar167 >> 0xf;
              iVar182 = (int)puVar189[9] >> 0xf;
              iVar172 = (int)puVar189[0x11] >> 0xf;
              iVar185 = (int)puVar189[0x19] >> 0xf;
              iVar190 = (int)puVar189[0x49] >> 0xf;
              iVar179 = (int)puVar189[0x51] >> 0xf;
              iVar186 = (int)puVar189[0x59] >> 0xf;
              piVar192 = piVar192 + 1;
              *piVar192 = iVar191 * iVar181 + ((int)(iVar181 * (*puVar167 & 0x7fff)) >> 0xf) +
                          ((int)((uVar153 & 0x7fff) * iVar191) >> 0xf) +
                          iVar182 * iVar150 + ((int)(iVar150 * (puVar189[9] & 0x7fff)) >> 0xf) +
                          ((int)((uVar187 & 0x7fff) * iVar182) >> 0xf) +
                          iVar172 * iVar166 + ((int)(iVar166 * (puVar189[0x11] & 0x7fff)) >> 0xf) +
                          ((int)((uVar188 & 0x7fff) * iVar172) >> 0xf) +
                          iVar185 * iVar184 + ((int)(iVar184 * (puVar189[0x19] & 0x7fff)) >> 0xf) +
                          ((int)((uVar160 & 0x7fff) * iVar185) >> 0xf) + iVar177 +
                          iVar190 * iVar176 + ((int)(iVar176 * (puVar189[0x49] & 0x7fff)) >> 0xf) +
                          ((int)((uVar12 & 0x7fff) * iVar190) >> 0xf) +
                          iVar179 * iVar151 + ((int)(iVar151 * (puVar189[0x51] & 0x7fff)) >> 0xf) +
                          ((int)((uVar178 & 0x7fff) * iVar179) >> 0xf) +
                          iVar186 * iVar171 + ((int)(iVar171 * (puVar189[0x59] & 0x7fff)) >> 0xf) +
                          ((int)((uVar152 & 0x7fff) * iVar186) >> 0xf);
              puVar189 = puVar167;
            } while (puVar167 != DAT_14013d74);
            local_2c0 = local_2c0 + 0x20;
          }
          local_2c0 = local_2c0 & 0xffff;
          uVar160 = (uint)*(byte *)(param_1 + 1);
          local_2b0 = local_2b0 + 1;
          local_2bc = local_2bc + 0x10;
        } while (local_2b0 < uVar160);
LAB_140130c0:
        local_2f0 = (uint)*(byte *)((int)param_1 + 5);
      }
      if (local_2f0 != 0) goto LAB_140130cc;
      local_2e8 = (int *)(uint)*(byte *)((int)param_1 + 2);
    }
    if (local_2e8 < 2) {
      if (*(char *)((int)param_1 + 6) != '\0') {
        uVar160 = 0;
        puVar4 = param_1;
        do {
          puVar4 = (undefined4 *)FUN_1400d52c(puVar4,uVar160 & 0xff);
          uVar160 = uVar160 + 1;
        } while (uVar160 < *(byte *)((int)puVar4 + 6));
      }
    }
    else if ((int)local_2e8 - 2U < 2) {
      FUN_1400d7c4(param_1);
    }
    FUN_14015a28(param_1,param_4,param_5);
    FUN_140113e0();
    local_4c = local_4c - uVar159 & 0xffff;
    *param_3 = *param_3 + uVar157;
    if (local_4c != 0) {
      if ((int)(uint)param_6 < (int)(*param_5 + uVar3)) {
        return 0xc;
      }
      local_2b4 = local_2b4 + uVar159;
    }
    if (local_4c < uVar159) {
      return 0;
    }
  } while( true );
}

