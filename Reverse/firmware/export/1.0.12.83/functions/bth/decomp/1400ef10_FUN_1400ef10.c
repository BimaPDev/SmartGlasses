/* FUN_1400ef10 @ 0x1400ef10 */

void FUN_1400ef10(int param_1,int param_2,float *param_3,uint param_4,char param_5)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  uint uVar57;
  bool bVar58;
  uint in_fpscr;
  float fVar59;
  float fVar60;
  float fVar61;
  int iVar62;
  float fVar63;
  int iVar64;
  int local_f8;
  
  uVar12 = (uint)*(ushort *)(param_2 + 2);
  iVar6 = *(int *)(param_2 + 4);
  puVar4 = (undefined2 *)(iVar6 + uVar12);
  if (param_5 == '\x03') {
    if (1 < *(byte *)(param_1 + 6)) {
      uVar3 = (uint)*(byte *)(param_1 + 4);
      goto LAB_1400f586;
    }
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') {
      bVar11 = *(byte *)(param_1 + 6);
      uVar3 = 0;
    }
    else {
      iVar43 = *(int *)(DAT_1400f1d0 + 0x10);
      uVar5 = 0;
      iVar44 = *DAT_1400f1d4;
      uVar57 = param_4 & 0xff;
      iVar45 = DAT_1400f1d4[1];
      iVar46 = DAT_1400f1d4[4];
      iVar47 = DAT_1400f1d4[5];
      iVar48 = DAT_1400f1d4[0xc];
      iVar49 = DAT_1400f1d4[0xd];
      iVar50 = DAT_1400f1d4[0x10];
      iVar51 = DAT_1400f1d4[0x11];
      iVar52 = DAT_1400f1d4[0x14];
      iVar53 = DAT_1400f1d4[0x15];
      iVar54 = DAT_1400f1d4[0x1c];
      iVar13 = DAT_1400f1d4[0x1d];
      iVar14 = *(int *)(DAT_1400f1d0 + 0x20);
      iVar15 = *(int *)(DAT_1400f1d0 + 0x30);
      iVar16 = *(int *)(DAT_1400f1d0 + 0x40);
      iVar17 = *(int *)(DAT_1400f1d0 + 0x50);
      iVar18 = *(int *)(DAT_1400f1d0 + 4);
      iVar19 = *(int *)(DAT_1400f1d0 + 0x14);
      iVar20 = *(int *)(DAT_1400f1d0 + 0x24);
      iVar21 = *(int *)(DAT_1400f1d0 + 0x34);
      iVar22 = *(int *)(DAT_1400f1d0 + 0x44);
      iVar23 = *(int *)(DAT_1400f1d0 + 0x54);
      iVar24 = *(int *)(DAT_1400f1d0 + 100);
      iVar25 = *(int *)(DAT_1400f1d0 + 0x74);
      iVar26 = *(int *)(DAT_1400f1d0 + 0x84);
      iVar27 = *(int *)(DAT_1400f1d0 + 0x94);
      iVar28 = *(int *)(DAT_1400f1d0 + 8);
      iVar29 = *(int *)(DAT_1400f1d0 + 0x18);
      iVar30 = *(int *)(DAT_1400f1d0 + 0x28);
      iVar31 = *(int *)(DAT_1400f1d0 + 0x38);
      iVar32 = *(int *)(DAT_1400f1d0 + 0x48);
      iVar33 = *(int *)(DAT_1400f1d0 + 0xc);
      iVar34 = *(int *)(DAT_1400f1d0 + 0x1c);
      iVar35 = *(int *)(DAT_1400f1d0 + 0x2c);
      iVar36 = *(int *)(DAT_1400f1d0 + 0x3c);
      iVar37 = *(int *)(DAT_1400f1d0 + 0x4c);
      iVar38 = *(int *)(DAT_1400f1d0 + 0x5c);
      iVar39 = *(int *)(DAT_1400f1d0 + 0x6c);
      iVar40 = *(int *)(DAT_1400f1d0 + 0x7c);
      iVar41 = *(int *)(DAT_1400f1d0 + 0x8c);
      iVar2 = *(int *)(DAT_1400f1d0 + 0x9c);
      uVar12 = 0;
      iVar6 = param_1;
      do {
        if (uVar57 < 2) {
          iVar55 = *(int *)(param_1 + 0x5bc);
          *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)(param_1 + 0x5c4);
          iVar64 = *(int *)(param_1 + 0x58c);
          *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_1 + 0x5c0);
          *(int *)(param_1 + 0x5dc) = iVar55;
          *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_1 + 0x5b8);
          *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)(param_1 + 0x5b4);
          *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5b0);
          uVar8 = *(undefined4 *)(param_1 + 0x5ac);
          *(int *)(param_1 + 0x5ac) = iVar64;
          *(undefined4 *)(param_1 + 0x5cc) = uVar8;
          *(undefined4 *)(param_1 + 0x5e8) = *(undefined4 *)(param_1 + 0x5c8);
          *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_1 + 0x5a4);
          *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_1 + 0x5a0);
          *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_1 + 0x59c);
          *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_1 + 0x598);
          *(undefined4 *)(param_1 + 0x5b4) = *(undefined4 *)(param_1 + 0x594);
          *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_1 + 0x590);
          *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_1 + 0x5a8);
          *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(param_1 + 0x584);
          *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(param_1 + 0x564);
          *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_1 + 0x580);
          *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_1 + 0x560);
          *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0x578);
          iVar42 = *(int *)(param_1 + 0x57c);
          *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_1 + 0x574);
          *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(param_1 + 0x55c);
          *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_1 + 0x570);
          *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0x558);
          *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_1 + 0x56c);
          *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x554);
          *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_1 + 0x588);
          *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x550);
          iVar9 = *(int *)(param_1 + 0x54c);
          *(int *)(param_1 + 0x59c) = iVar42;
          *(int *)(param_1 + 0x56c) = iVar9;
          *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_1 + 0x568);
          iVar56 = *(int *)(param_1 + 0x53c);
          *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_1 + 0x544);
          *(int *)(param_1 + 0x55c) = iVar56;
          *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_1 + 0x540);
          *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x538);
          *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x534);
          *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_1 + 0x530);
          *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_1 + 0x52c);
          *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x548);
          iVar7 = *(int *)(param_1 + 0x50c);
          *(int *)(param_1 + 0x52c) = iVar7;
          *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_1 + 0x524);
          *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x520);
          *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x51c);
          *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_1 + 0x518);
          *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_1 + 0x514);
          *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_1 + 0x510);
          *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x528);
          *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_1 + 0x504);
          iVar10 = *(int *)(param_1 + 0x4fc);
          *(int *)(param_1 + 0x51c) = iVar10;
          *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_1 + 0x500);
          *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x4f8);
          *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 0x4f4);
          *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x4f0);
          *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 0x4ec);
          *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_1 + 0x508);
          *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4cc);
          *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_1 + 0x4e4);
          *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x4e0);
          *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_1 + 0x4dc);
          *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x4d8);
          *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 0x4d4);
          *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x4d0);
          *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_1 + 0x4e8);
          *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x4c4);
          *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4bc);
          iVar10 = iVar17 * (iVar56 >> 0xd) +
                   iVar16 * (iVar7 - iVar9 >> 0xd) +
                   iVar15 * (iVar42 + iVar10 >> 0xd) +
                   iVar43 * (iVar55 + *(int *)(param_1 + 0x4bc) >> 0xd) +
                   iVar14 * (*(int *)(param_1 + 0x4cc) - iVar64 >> 0xd) >> 0xe;
          *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x4c0);
          *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x4b8);
          *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x4b4);
          *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x4b0);
          *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4ac);
          *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x4c8);
          fVar59 = (float)VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xa8),
                                              (byte)(in_fpscr >> 0x16) & 3);
          fVar60 = (float)VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xac),
                                              (byte)(in_fpscr >> 0x16) & 3);
          fVar61 = (float)VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xa4),
                                              (byte)(in_fpscr >> 0x16) & 3);
          fVar63 = (float)VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xb0),
                                              (byte)(in_fpscr >> 0x16) & 3);
          iVar55 = (int)(fVar59 * param_3[1]);
          iVar56 = (int)(fVar60 * param_3[2]);
          iVar62 = (int)(fVar63 * param_3[3]);
          iVar64 = (int)(fVar61 * *param_3);
          iVar42 = iVar55 + iVar56 >> 0xd;
          *(undefined4 *)(param_1 + 0x4b4) = 0;
          iVar9 = iVar55 - iVar56 >> 0xd;
          iVar7 = iVar64 + iVar62 >> 0xd;
          *(int *)(param_1 + 0x4ac) = iVar44 * iVar7 + iVar45 * iVar42;
          *(int *)(param_1 + 0x4bc) = iVar50 * iVar7 + iVar51 * iVar42;
          iVar7 = iVar64 - iVar62 >> 0xd;
          *(int *)(param_1 + 0x4b0) = iVar46 * iVar7 + iVar47 * iVar9;
          *(int *)(param_1 + 0x4b8) = iVar48 * iVar7 + iVar49 * iVar9;
          *(int *)(param_1 + 0x4c8) = iVar54 * iVar7 + iVar13 * iVar9;
          *(int *)(param_1 + 0x4c4) = ((-iVar55 - iVar64) - iVar56) - iVar62;
          *(int *)(param_1 + 0x4c0) = iVar52 * iVar7 + iVar53 * iVar9;
          uVar8 = SignedSaturate(iVar10,0xf);
          SignedDoesSaturate(iVar10,0xf);
          uVar5 = (undefined2)uVar8;
          *puVar4 = uVar5;
        }
        else {
          *puVar4 = 0;
        }
        if (*(char *)(param_1 + 6) == '\x01') {
          puVar4 = puVar4 + 1;
        }
        else {
          puVar4 = puVar4 + 2;
        }
        if (uVar57 < 2) {
          iVar7 = iVar27 * (*(int *)(param_1 + 0x5e0) >> 0xd) +
                  iVar26 * (*(int *)(param_1 + 0x5b0) >> 0xd) +
                  iVar25 * (*(int *)(param_1 + 0x5a0) >> 0xd) +
                  iVar24 * (*(int *)(param_1 + 0x570) >> 0xd) +
                  iVar23 * (*(int *)(param_1 + 0x560) >> 0xd) +
                  iVar22 * (*(int *)(param_1 + 0x530) >> 0xd) +
                  iVar21 * (*(int *)(param_1 + 0x520) >> 0xd) +
                  iVar20 * (*(int *)(param_1 + 0x4f0) >> 0xd) +
                  iVar18 * (*(int *)(param_1 + 0x4b0) >> 0xd) +
                  iVar19 * (*(int *)(param_1 + 0x4e0) >> 0xd) >> 0xe;
          uVar8 = SignedSaturate(iVar7,0xf);
          SignedDoesSaturate(iVar7,0xf);
          uVar1 = (undefined2)uVar8;
          uVar5 = uVar1;
        }
        else {
          uVar1 = 0;
        }
        *puVar4 = uVar1;
        if (*(char *)(param_1 + 6) == '\x01') {
          puVar4 = puVar4 + 1;
        }
        else {
          puVar4 = puVar4 + 2;
        }
        if (uVar57 < 2) {
          iVar7 = iVar32 * (*(int *)(param_1 + 0x534) + *(int *)(param_1 + 0x564) >> 0xd) +
                  iVar31 * (*(int *)(param_1 + 0x524) + *(int *)(param_1 + 0x574) >> 0xd) +
                  iVar30 * (*(int *)(param_1 + 0x4f4) + *(int *)(param_1 + 0x5a4) >> 0xd) +
                  iVar28 * (*(int *)(param_1 + 0x4b4) + *(int *)(param_1 + 0x5e4) >> 0xd) +
                  iVar29 * (*(int *)(param_1 + 0x4e4) + *(int *)(param_1 + 0x5b4) >> 0xd) >> 0xe;
          uVar8 = SignedSaturate(iVar7,0xf);
          SignedDoesSaturate(iVar7,0xf);
          uVar1 = (undefined2)uVar8;
          uVar5 = uVar1;
        }
        else {
          uVar1 = 0;
        }
        *puVar4 = uVar1;
        if (*(char *)(param_1 + 6) == '\x01') {
          puVar4 = puVar4 + 1;
        }
        else {
          puVar4 = puVar4 + 2;
        }
        if (uVar57 < 2) {
          iVar7 = iVar2 * (*(int *)(param_1 + 0x5e8) >> 0xd) +
                  iVar41 * (*(int *)(param_1 + 0x5b8) >> 0xd) +
                  iVar40 * (*(int *)(param_1 + 0x5a8) >> 0xd) +
                  iVar39 * (*(int *)(param_1 + 0x578) >> 0xd) +
                  iVar38 * (*(int *)(param_1 + 0x568) >> 0xd) +
                  iVar37 * (*(int *)(param_1 + 0x538) >> 0xd) +
                  iVar36 * (*(int *)(param_1 + 0x528) >> 0xd) +
                  iVar35 * (*(int *)(param_1 + 0x4f8) >> 0xd) +
                  iVar33 * (*(int *)(param_1 + 0x4b8) >> 0xd) +
                  iVar34 * (*(int *)(param_1 + 0x4e8) >> 0xd) >> 0xe;
          uVar8 = SignedSaturate(iVar7,0xf);
          SignedDoesSaturate(iVar7,0xf);
          uVar5 = (undefined2)uVar8;
        }
        *puVar4 = uVar5;
        bVar11 = *(byte *)(param_1 + 6);
        uVar3 = (uint)*(byte *)(param_1 + 4);
        uVar12 = uVar12 + 1;
        if (bVar11 == 1) {
          puVar4 = puVar4 + 1;
        }
        else {
          puVar4 = puVar4 + 2;
        }
        iVar6 = iVar6 + 0x40;
      } while (uVar12 < uVar3);
      iVar6 = *(int *)(param_2 + 4);
    }
    if ((1 < bVar11) && (param_5 != '\x02')) {
      uVar12 = (uint)*(ushort *)(param_2 + 2);
LAB_1400f586:
      puVar4 = (undefined2 *)(iVar6 + uVar12 + 2);
      if (uVar3 != 0) {
        param_4 = param_4 & 0xfffffffd;
        iVar6 = *(int *)(DAT_1400f85c + 0x10);
        iVar2 = *DAT_1400f858;
        iVar13 = DAT_1400f858[1];
        iVar14 = DAT_1400f858[4];
        iVar15 = DAT_1400f858[5];
        iVar16 = DAT_1400f858[0xc];
        iVar17 = DAT_1400f858[0xd];
        iVar18 = DAT_1400f858[0x10];
        iVar19 = DAT_1400f858[0x11];
        iVar20 = DAT_1400f858[0x14];
        iVar21 = DAT_1400f858[0x15];
        iVar22 = DAT_1400f858[0x1c];
        iVar23 = DAT_1400f858[0x1d];
        iVar24 = *(int *)(DAT_1400f85c + 0x20);
        iVar25 = *(int *)(DAT_1400f85c + 0x30);
        iVar26 = *(int *)(DAT_1400f85c + 0x40);
        iVar27 = *(int *)(DAT_1400f85c + 0x50);
        iVar28 = *(int *)(DAT_1400f85c + 4);
        iVar29 = *(int *)(DAT_1400f85c + 0x14);
        iVar30 = *(int *)(DAT_1400f85c + 0x24);
        iVar31 = *(int *)(DAT_1400f85c + 0x34);
        iVar32 = *(int *)(DAT_1400f85c + 0x44);
        iVar33 = *(int *)(DAT_1400f85c + 0x54);
        iVar34 = *(int *)(DAT_1400f85c + 100);
        iVar35 = *(int *)(DAT_1400f85c + 0x74);
        iVar36 = *(int *)(DAT_1400f85c + 0x84);
        iVar37 = *(int *)(DAT_1400f85c + 0x94);
        iVar38 = *(int *)(DAT_1400f85c + 8);
        iVar39 = *(int *)(DAT_1400f85c + 0x18);
        iVar40 = *(int *)(DAT_1400f85c + 0x28);
        iVar41 = *(int *)(DAT_1400f85c + 0x38);
        iVar43 = *(int *)(DAT_1400f85c + 0x48);
        iVar44 = *(int *)(DAT_1400f85c + 0xc);
        iVar45 = *(int *)(DAT_1400f85c + 0x1c);
        iVar46 = *(int *)(DAT_1400f85c + 0x2c);
        iVar47 = *(int *)(DAT_1400f85c + 0x3c);
        iVar48 = *(int *)(DAT_1400f85c + 0x4c);
        iVar49 = *(int *)(DAT_1400f85c + 0x5c);
        iVar50 = *(int *)(DAT_1400f85c + 0x6c);
        iVar51 = *(int *)(DAT_1400f85c + 0x7c);
        iVar52 = *(int *)(DAT_1400f85c + 0x8c);
        iVar53 = *(int *)(DAT_1400f85c + 0x9c);
        uVar12 = 0;
        local_f8 = param_1;
        do {
          if (param_4 == 0) {
            iVar42 = *(int *)(param_1 + 0x83c);
            *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x844);
            iVar56 = *(int *)(param_1 + 0x80c);
            *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x840);
            *(int *)(param_1 + 0x85c) = iVar42;
            *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x838);
            *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(param_1 + 0x834);
            *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_1 + 0x830);
            uVar8 = *(undefined4 *)(param_1 + 0x82c);
            *(int *)(param_1 + 0x82c) = iVar56;
            *(undefined4 *)(param_1 + 0x84c) = uVar8;
            *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_1 + 0x848);
            *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(param_1 + 0x824);
            *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x820);
            *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_1 + 0x81c);
            *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_1 + 0x818);
            *(undefined4 *)(param_1 + 0x834) = *(undefined4 *)(param_1 + 0x814);
            *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(param_1 + 0x810);
            *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_1 + 0x828);
            *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0x804);
            *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_1 + 0x7e4);
            *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x800);
            *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_1 + 0x7e0);
            *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(param_1 + 0x7f8);
            iVar54 = *(int *)(param_1 + 0x7fc);
            *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_1 + 0x7f4);
            *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_1 + 0x7dc);
            *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_1 + 0x7f0);
            *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_1 + 0x7d8);
            *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_1 + 0x7ec);
            *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_1 + 0x7d4);
            *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_1 + 0x808);
            *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_1 + 2000);
            iVar9 = *(int *)(param_1 + 0x7cc);
            *(int *)(param_1 + 0x81c) = iVar54;
            *(int *)(param_1 + 0x7ec) = iVar9;
            *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_1 + 0x7e8);
            iVar55 = *(int *)(param_1 + 0x7bc);
            *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_1 + 0x7c4);
            *(int *)(param_1 + 0x7dc) = iVar55;
            *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(param_1 + 0x7c0);
            *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(param_1 + 0x7b8);
            *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(param_1 + 0x7b4);
            *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(param_1 + 0x7b0);
            *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(param_1 + 0x7ac);
            *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 0x7c8);
            iVar7 = *(int *)(param_1 + 0x78c);
            *(int *)(param_1 + 0x7ac) = iVar7;
            *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(param_1 + 0x7a4);
            *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_1 + 0x7a0);
            *(undefined4 *)(param_1 + 0x7bc) = *(undefined4 *)(param_1 + 0x79c);
            *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(param_1 + 0x798);
            *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(param_1 + 0x794);
            *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_1 + 0x790);
            *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_1 + 0x7a8);
            *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(param_1 + 0x784);
            iVar10 = *(int *)(param_1 + 0x77c);
            *(int *)(param_1 + 0x79c) = iVar10;
            *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_1 + 0x780);
            *(undefined4 *)(param_1 + 0x798) = *(undefined4 *)(param_1 + 0x778);
            *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x774);
            *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x770);
            *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(param_1 + 0x76c);
            *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_1 + 0x788);
            *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x74c);
            *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_1 + 0x764);
            *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_1 + 0x760);
            *(undefined4 *)(param_1 + 0x77c) = *(undefined4 *)(param_1 + 0x75c);
            *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_1 + 0x758);
            *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_1 + 0x754);
            *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_1 + 0x750);
            *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_1 + 0x768);
            *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x744);
            *(int *)(param_1 + 0x75c) = *(int *)(param_1 + 0x73c);
            iVar10 = iVar27 * (iVar55 >> 0xd) +
                     iVar26 * (iVar7 - iVar9 >> 0xd) +
                     iVar25 * (iVar54 + iVar10 >> 0xd) +
                     iVar6 * (iVar42 + *(int *)(param_1 + 0x73c) >> 0xd) +
                     iVar24 * (*(int *)(param_1 + 0x74c) - iVar56 >> 0xd) >> 0xe;
            *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_1 + 0x740);
            *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x738);
            *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_1 + 0x734);
            *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_1 + 0x730);
            *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(param_1 + 0x72c);
            *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_1 + 0x748);
            fVar59 = (float)VectorSignedToFloat(*(undefined4 *)(local_f8 + 200),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar60 = (float)VectorSignedToFloat(*(undefined4 *)(local_f8 + 0xcc),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar61 = (float)VectorSignedToFloat(*(undefined4 *)(local_f8 + 0xc4),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar63 = (float)VectorSignedToFloat(*(undefined4 *)(local_f8 + 0xd0),
                                                (byte)(in_fpscr >> 0x16) & 3);
            iVar42 = (int)(fVar59 * param_3[1]);
            iVar55 = (int)(fVar60 * param_3[2]);
            iVar64 = (int)(fVar63 * param_3[3]);
            iVar56 = (int)(fVar61 * *param_3);
            iVar7 = iVar42 + iVar55 >> 0xd;
            *(undefined4 *)(param_1 + 0x734) = 0;
            iVar9 = iVar42 - iVar55 >> 0xd;
            iVar54 = iVar64 + iVar56 >> 0xd;
            *(int *)(param_1 + 0x72c) = iVar2 * iVar54 + iVar13 * iVar7;
            *(int *)(param_1 + 0x73c) = iVar18 * iVar54 + iVar19 * iVar7;
            iVar54 = iVar56 - iVar64 >> 0xd;
            *(int *)(param_1 + 0x730) = iVar14 * iVar54 + iVar15 * iVar9;
            *(int *)(param_1 + 0x738) = iVar16 * iVar54 + iVar17 * iVar9;
            *(int *)(param_1 + 0x744) = ((-iVar42 - iVar56) - iVar55) - iVar64;
            *(int *)(param_1 + 0x740) = iVar20 * iVar54 + iVar21 * iVar9;
            *(int *)(param_1 + 0x748) = iVar22 * iVar54 + iVar23 * iVar9;
            uVar8 = SignedSaturate(iVar10,0xf);
            SignedDoesSaturate(iVar10,0xf);
            *puVar4 = (short)uVar8;
          }
          else {
            *puVar4 = 0;
          }
          if (*(char *)(param_1 + 6) == '\x01') {
            puVar4 = puVar4 + 1;
          }
          else {
            puVar4 = puVar4 + 2;
          }
          if (param_4 == 0) {
            iVar54 = iVar37 * (*(int *)(param_1 + 0x860) >> 0xd) +
                     iVar36 * (*(int *)(param_1 + 0x830) >> 0xd) +
                     iVar35 * (*(int *)(param_1 + 0x820) >> 0xd) +
                     iVar34 * (*(int *)(param_1 + 0x7f0) >> 0xd) +
                     iVar33 * (*(int *)(param_1 + 0x7e0) >> 0xd) +
                     iVar32 * (*(int *)(param_1 + 0x7b0) >> 0xd) +
                     iVar31 * (*(int *)(param_1 + 0x7a0) >> 0xd) +
                     iVar30 * (*(int *)(param_1 + 0x770) >> 0xd) +
                     iVar28 * (*(int *)(param_1 + 0x730) >> 0xd) +
                     iVar29 * (*(int *)(param_1 + 0x760) >> 0xd) >> 0xe;
            uVar8 = SignedSaturate(iVar54,0xf);
            SignedDoesSaturate(iVar54,0xf);
            uVar5 = (undefined2)uVar8;
          }
          else {
            uVar5 = 0;
          }
          *puVar4 = uVar5;
          if (*(char *)(param_1 + 6) == '\x01') {
            puVar4 = puVar4 + 1;
          }
          else {
            puVar4 = puVar4 + 2;
          }
          if (param_4 == 0) {
            iVar54 = iVar43 * (*(int *)(param_1 + 0x7b4) + *(int *)(param_1 + 0x7e4) >> 0xd) +
                     iVar41 * (*(int *)(param_1 + 0x7a4) + *(int *)(param_1 + 0x7f4) >> 0xd) +
                     iVar40 * (*(int *)(param_1 + 0x774) + *(int *)(param_1 + 0x824) >> 0xd) +
                     iVar38 * (*(int *)(param_1 + 0x734) + *(int *)(param_1 + 0x864) >> 0xd) +
                     iVar39 * (*(int *)(param_1 + 0x764) + *(int *)(param_1 + 0x834) >> 0xd) >> 0xe;
            uVar8 = SignedSaturate(iVar54,0xf);
            SignedDoesSaturate(iVar54,0xf);
            uVar5 = (undefined2)uVar8;
          }
          else {
            uVar5 = 0;
          }
          *puVar4 = uVar5;
          if (*(char *)(param_1 + 6) == '\x01') {
            puVar4 = puVar4 + 1;
          }
          else {
            puVar4 = puVar4 + 2;
          }
          if (param_4 == 0) {
            iVar54 = iVar53 * (*(int *)(param_1 + 0x868) >> 0xd) +
                     iVar52 * (*(int *)(param_1 + 0x838) >> 0xd) +
                     iVar51 * (*(int *)(param_1 + 0x828) >> 0xd) +
                     iVar50 * (*(int *)(param_1 + 0x7f8) >> 0xd) +
                     iVar49 * (*(int *)(param_1 + 0x7e8) >> 0xd) +
                     iVar48 * (*(int *)(param_1 + 0x7b8) >> 0xd) +
                     iVar47 * (*(int *)(param_1 + 0x7a8) >> 0xd) +
                     iVar46 * (*(int *)(param_1 + 0x778) >> 0xd) +
                     iVar44 * (*(int *)(param_1 + 0x738) >> 0xd) +
                     iVar45 * (*(int *)(param_1 + 0x768) >> 0xd) >> 0xe;
            uVar8 = SignedSaturate(iVar54,0xf);
            SignedDoesSaturate(iVar54,0xf);
            uVar5 = (undefined2)uVar8;
          }
          else {
            uVar5 = 0;
          }
          *puVar4 = uVar5;
          uVar12 = uVar12 + 1;
          bVar58 = *(char *)(param_1 + 6) == '\x01';
          if (bVar58) {
            puVar4 = puVar4 + 1;
          }
          local_f8 = local_f8 + 0x40;
          if (!bVar58) {
            puVar4 = puVar4 + 2;
          }
        } while (uVar12 < *(byte *)(param_1 + 4));
        iVar6 = *(int *)(param_2 + 4);
      }
      *(short *)(param_2 + 2) = ((short)puVar4 - (short)iVar6) + -2;
      return;
    }
  }
  *(short *)(param_2 + 2) = (short)puVar4 - (short)iVar6;
  return;
}

