/* FUN_2c01b404 @ 0x2c01b404 */

void FUN_2c01b404(int param_1,int param_2,float *param_3,uint param_4,char param_5)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
  undefined2 uVar36;
  byte bVar37;
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
  uint uVar54;
  uint uVar55;
  int iVar56;
  int iVar57;
  uint in_fpscr;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  
  iVar5 = *(int *)(param_2 + 4);
  puVar1 = (undefined2 *)(iVar5 + (uint)*(ushort *)(param_2 + 2));
  if (param_5 == '\x03') {
    bVar37 = *(byte *)(param_1 + 6);
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') {
      if ((*(byte *)(param_1 + 6) < 2) || (param_5 == '\x02')) goto LAB_2c01bcfc;
      puVar1 = (undefined2 *)(*(ushort *)(param_2 + 2) + 2 + iVar5);
      goto LAB_2c01bce2;
    }
    uVar54 = param_4 & 0xff;
    uVar3 = 0;
    iVar38 = *DAT_2c01b6bc;
    uVar55 = 0;
    iVar39 = DAT_2c01b6bc[1];
    iVar40 = DAT_2c01b6bc[4];
    iVar41 = DAT_2c01b6bc[5];
    iVar42 = DAT_2c01b6bc[0xc];
    iVar43 = DAT_2c01b6bc[0xd];
    iVar44 = DAT_2c01b6bc[0x10];
    iVar45 = DAT_2c01b6bc[0x11];
    iVar46 = DAT_2c01b6bc[0x14];
    iVar47 = DAT_2c01b6bc[0x15];
    iVar48 = DAT_2c01b6bc[0x1c];
    iVar6 = DAT_2c01b6bc[0x1d];
    iVar7 = *(int *)(DAT_2c01b6c0 + 0x10);
    iVar8 = *(int *)(DAT_2c01b6c0 + 0x20);
    iVar9 = *(int *)(DAT_2c01b6c0 + 0x30);
    iVar10 = *(int *)(DAT_2c01b6c0 + 0x40);
    iVar11 = *(int *)(DAT_2c01b6c0 + 0x50);
    iVar49 = *(int *)(DAT_2c01b6c0 + 4);
    iVar12 = *(int *)(DAT_2c01b6c0 + 0x14);
    iVar13 = *(int *)(DAT_2c01b6c0 + 0x24);
    iVar14 = *(int *)(DAT_2c01b6c0 + 0x34);
    iVar15 = *(int *)(DAT_2c01b6c0 + 0x44);
    iVar16 = *(int *)(DAT_2c01b6c0 + 0x54);
    iVar17 = *(int *)(DAT_2c01b6c0 + 100);
    iVar18 = *(int *)(DAT_2c01b6c0 + 0x74);
    iVar19 = *(int *)(DAT_2c01b6c0 + 0x84);
    iVar20 = *(int *)(DAT_2c01b6c0 + 0x94);
    iVar21 = *(int *)(DAT_2c01b6c0 + 8);
    iVar22 = *(int *)(DAT_2c01b6c0 + 0x18);
    iVar23 = *(int *)(DAT_2c01b6c0 + 0x28);
    iVar24 = *(int *)(DAT_2c01b6c0 + 0x38);
    iVar25 = *(int *)(DAT_2c01b6c0 + 0x48);
    iVar26 = *(int *)(DAT_2c01b6c0 + 0xc);
    iVar27 = *(int *)(DAT_2c01b6c0 + 0x1c);
    iVar28 = *(int *)(DAT_2c01b6c0 + 0x2c);
    iVar29 = *(int *)(DAT_2c01b6c0 + 0x3c);
    iVar30 = *(int *)(DAT_2c01b6c0 + 0x4c);
    iVar31 = *(int *)(DAT_2c01b6c0 + 0x5c);
    iVar32 = *(int *)(DAT_2c01b6c0 + 0x6c);
    iVar33 = *(int *)(DAT_2c01b6c0 + 0x7c);
    iVar34 = *(int *)(DAT_2c01b6c0 + 0x8c);
    iVar35 = *(int *)(DAT_2c01b6c0 + 0x9c);
    iVar5 = param_1;
    do {
      if (uVar54 < 2) {
        iVar56 = *(int *)(param_1 + 0x5bc);
        *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)(param_1 + 0x5c4);
        iVar57 = *(int *)(param_1 + 0x58c);
        *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_1 + 0x5c0);
        *(int *)(param_1 + 0x5dc) = iVar56;
        *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_1 + 0x5b8);
        *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)(param_1 + 0x5b4);
        *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5b0);
        uVar2 = *(undefined4 *)(param_1 + 0x5ac);
        *(int *)(param_1 + 0x5ac) = iVar57;
        *(undefined4 *)(param_1 + 0x5cc) = uVar2;
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
        iVar53 = *(int *)(param_1 + 0x57c);
        *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_1 + 0x574);
        *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(param_1 + 0x55c);
        *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_1 + 0x570);
        *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0x558);
        *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_1 + 0x56c);
        *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x554);
        *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_1 + 0x588);
        *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x550);
        iVar4 = *(int *)(param_1 + 0x54c);
        *(int *)(param_1 + 0x59c) = iVar53;
        *(int *)(param_1 + 0x56c) = iVar4;
        *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_1 + 0x568);
        *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_1 + 0x544);
        iVar51 = *(int *)(param_1 + 0x53c);
        *(int *)(param_1 + 0x55c) = iVar51;
        *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_1 + 0x540);
        *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x538);
        *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x534);
        *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_1 + 0x530);
        *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_1 + 0x52c);
        *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x548);
        iVar52 = *(int *)(param_1 + 0x50c);
        *(int *)(param_1 + 0x52c) = iVar52;
        *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_1 + 0x524);
        *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x520);
        *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x51c);
        *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_1 + 0x518);
        *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_1 + 0x514);
        *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_1 + 0x510);
        *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x528);
        *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_1 + 0x504);
        iVar50 = *(int *)(param_1 + 0x4fc);
        *(int *)(param_1 + 0x51c) = iVar50;
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
        *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4bc);
        *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x4c4);
        *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x4c0);
        *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x4b8);
        iVar4 = iVar11 * (iVar51 >> 0xd) +
                iVar10 * (iVar52 - iVar4 >> 0xd) +
                iVar9 * (iVar53 + iVar50 >> 0xd) +
                iVar7 * (iVar56 + *(int *)(param_1 + 0x4bc) >> 0xd) +
                iVar8 * (*(int *)(param_1 + 0x4cc) - iVar57 >> 0xd) >> 0xe;
        *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x4b4);
        *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x4b0);
        *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4ac);
        *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x4c8);
        fVar59 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xa4),
                                            (byte)(in_fpscr >> 0x16) & 3);
        fVar61 = param_3[2];
        fVar58 = param_3[3];
        fVar60 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xa8),
                                            (byte)(in_fpscr >> 0x16) & 3);
        iVar53 = (int)(fVar59 * *param_3);
        fVar59 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xac),
                                            (byte)(in_fpscr >> 0x16) & 3);
        iVar52 = (int)(fVar60 * param_3[1]);
        uVar2 = *(undefined4 *)(iVar5 + 0xb0);
        *(undefined4 *)(param_1 + 0x4b4) = 0;
        fVar60 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        iVar56 = (int)(fVar59 * fVar61);
        iVar57 = (int)(fVar60 * fVar58);
        *(int *)(param_1 + 0x4c4) = ((-iVar52 - iVar53) - iVar56) - iVar57;
        iVar50 = iVar52 + iVar56 >> 0xd;
        iVar51 = iVar53 + iVar57 >> 0xd;
        iVar52 = iVar52 - iVar56 >> 0xd;
        iVar53 = iVar53 - iVar57 >> 0xd;
        *(int *)(param_1 + 0x4ac) = iVar38 * iVar51 + iVar39 * iVar50;
        *(int *)(param_1 + 0x4bc) = iVar44 * iVar51 + iVar45 * iVar50;
        *(int *)(param_1 + 0x4b0) = iVar40 * iVar53 + iVar41 * iVar52;
        *(int *)(param_1 + 0x4b8) = iVar42 * iVar53 + iVar43 * iVar52;
        *(int *)(param_1 + 0x4c0) = iVar46 * iVar53 + iVar47 * iVar52;
        *(int *)(param_1 + 0x4c8) = iVar48 * iVar53 + iVar6 * iVar52;
        uVar2 = SignedSaturate(iVar4,0xf);
        SignedDoesSaturate(iVar4,0xf);
        uVar3 = (undefined2)uVar2;
        *puVar1 = uVar3;
      }
      else {
        *puVar1 = 0;
      }
      if (*(char *)(param_1 + 6) == '\x01') {
        puVar1 = puVar1 + 1;
      }
      else {
        puVar1 = puVar1 + 2;
      }
      if (uVar54 < 2) {
        iVar4 = iVar20 * (*(int *)(param_1 + 0x5e0) >> 0xd) +
                iVar19 * (*(int *)(param_1 + 0x5b0) >> 0xd) +
                iVar18 * (*(int *)(param_1 + 0x5a0) >> 0xd) +
                iVar17 * (*(int *)(param_1 + 0x570) >> 0xd) +
                iVar16 * (*(int *)(param_1 + 0x560) >> 0xd) +
                iVar15 * (*(int *)(param_1 + 0x530) >> 0xd) +
                iVar14 * (*(int *)(param_1 + 0x520) >> 0xd) +
                iVar13 * (*(int *)(param_1 + 0x4f0) >> 0xd) +
                iVar49 * (*(int *)(param_1 + 0x4b0) >> 0xd) +
                iVar12 * (*(int *)(param_1 + 0x4e0) >> 0xd) >> 0xe;
        uVar2 = SignedSaturate(iVar4,0xf);
        SignedDoesSaturate(iVar4,0xf);
        uVar36 = (undefined2)uVar2;
        uVar3 = uVar36;
      }
      else {
        uVar36 = 0;
      }
      *puVar1 = uVar36;
      if (*(char *)(param_1 + 6) == '\x01') {
        puVar1 = puVar1 + 1;
      }
      else {
        puVar1 = puVar1 + 2;
      }
      if (uVar54 < 2) {
        iVar4 = iVar25 * (*(int *)(param_1 + 0x534) + *(int *)(param_1 + 0x564) >> 0xd) +
                iVar24 * (*(int *)(param_1 + 0x524) + *(int *)(param_1 + 0x574) >> 0xd) +
                iVar23 * (*(int *)(param_1 + 0x4f4) + *(int *)(param_1 + 0x5a4) >> 0xd) +
                iVar21 * (*(int *)(param_1 + 0x4b4) + *(int *)(param_1 + 0x5e4) >> 0xd) +
                iVar22 * (*(int *)(param_1 + 0x4e4) + *(int *)(param_1 + 0x5b4) >> 0xd) >> 0xe;
        uVar2 = SignedSaturate(iVar4,0xf);
        SignedDoesSaturate(iVar4,0xf);
        uVar36 = (undefined2)uVar2;
        uVar3 = uVar36;
      }
      else {
        uVar36 = 0;
      }
      *puVar1 = uVar36;
      if (*(char *)(param_1 + 6) == '\x01') {
        puVar1 = puVar1 + 1;
      }
      else {
        puVar1 = puVar1 + 2;
      }
      if (uVar54 < 2) {
        iVar4 = iVar35 * (*(int *)(param_1 + 0x5e8) >> 0xd) +
                iVar34 * (*(int *)(param_1 + 0x5b8) >> 0xd) +
                iVar33 * (*(int *)(param_1 + 0x5a8) >> 0xd) +
                iVar32 * (*(int *)(param_1 + 0x578) >> 0xd) +
                iVar31 * (*(int *)(param_1 + 0x568) >> 0xd) +
                iVar30 * (*(int *)(param_1 + 0x538) >> 0xd) +
                iVar29 * (*(int *)(param_1 + 0x528) >> 0xd) +
                iVar28 * (*(int *)(param_1 + 0x4f8) >> 0xd) +
                iVar26 * (*(int *)(param_1 + 0x4b8) >> 0xd) +
                iVar27 * (*(int *)(param_1 + 0x4e8) >> 0xd) >> 0xe;
        uVar2 = SignedSaturate(iVar4,0xf);
        SignedDoesSaturate(iVar4,0xf);
        uVar3 = (undefined2)uVar2;
      }
      *puVar1 = uVar3;
      uVar55 = uVar55 + 1;
      bVar37 = *(byte *)(param_1 + 6);
      iVar5 = iVar5 + 0x40;
      if (bVar37 == 1) {
        puVar1 = puVar1 + 1;
      }
      else {
        puVar1 = puVar1 + 2;
      }
    } while (uVar55 < *(byte *)(param_1 + 4));
    iVar5 = *(int *)(param_2 + 4);
  }
  if ((param_5 == '\x02') || (bVar37 < 2)) {
LAB_2c01bcfc:
    *(short *)(param_2 + 2) = (short)puVar1 - (short)iVar5;
    return;
  }
  puVar1 = (undefined2 *)(*(ushort *)(param_2 + 2) + 2 + iVar5);
  if (*(char *)(param_1 + 4) != '\0') {
    uVar54 = 0;
    param_4 = param_4 & 0xfffffffd;
    iVar25 = *(int *)(DAT_2c01bd18 + 0x10);
    iVar26 = *(int *)(DAT_2c01bd18 + 0x20);
    iVar27 = *DAT_2c01bd14;
    iVar28 = DAT_2c01bd14[1];
    iVar29 = DAT_2c01bd14[4];
    iVar30 = DAT_2c01bd14[5];
    iVar31 = DAT_2c01bd14[0xc];
    iVar32 = DAT_2c01bd14[0xd];
    iVar33 = DAT_2c01bd14[0x10];
    iVar34 = DAT_2c01bd14[0x11];
    iVar35 = DAT_2c01bd14[0x14];
    iVar38 = DAT_2c01bd14[0x15];
    iVar39 = DAT_2c01bd14[0x1c];
    iVar7 = DAT_2c01bd14[0x1d];
    iVar8 = *(int *)(DAT_2c01bd18 + 0x30);
    iVar9 = *(int *)(DAT_2c01bd18 + 0x40);
    iVar10 = *(int *)(DAT_2c01bd18 + 0x50);
    iVar40 = *(int *)(DAT_2c01bd18 + 0xc);
    iVar11 = *(int *)(DAT_2c01bd18 + 0x14);
    iVar49 = *(int *)(DAT_2c01bd18 + 4);
    iVar12 = *(int *)(DAT_2c01bd18 + 0x24);
    iVar13 = *(int *)(DAT_2c01bd18 + 0x34);
    iVar14 = *(int *)(DAT_2c01bd18 + 0x44);
    iVar15 = *(int *)(DAT_2c01bd18 + 0x54);
    iVar16 = *(int *)(DAT_2c01bd18 + 100);
    iVar17 = *(int *)(DAT_2c01bd18 + 0x74);
    iVar18 = *(int *)(DAT_2c01bd18 + 0x84);
    iVar19 = *(int *)(DAT_2c01bd18 + 0x94);
    iVar20 = *(int *)(DAT_2c01bd18 + 8);
    iVar21 = *(int *)(DAT_2c01bd18 + 0x18);
    iVar22 = *(int *)(DAT_2c01bd18 + 0x28);
    iVar23 = *(int *)(DAT_2c01bd18 + 0x38);
    iVar24 = *(int *)(DAT_2c01bd18 + 0x48);
    iVar41 = *(int *)(DAT_2c01bd18 + 0x1c);
    iVar42 = *(int *)(DAT_2c01bd18 + 0x2c);
    iVar43 = *(int *)(DAT_2c01bd18 + 0x3c);
    iVar44 = *(int *)(DAT_2c01bd18 + 0x4c);
    iVar45 = *(int *)(DAT_2c01bd18 + 0x5c);
    iVar46 = *(int *)(DAT_2c01bd18 + 0x6c);
    iVar47 = *(int *)(DAT_2c01bd18 + 0x7c);
    iVar48 = *(int *)(DAT_2c01bd18 + 0x8c);
    iVar6 = *(int *)(DAT_2c01bd18 + 0x9c);
    iVar5 = param_1;
    do {
      if (param_4 == 0) {
        iVar52 = *(int *)(param_1 + 0x83c);
        *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x844);
        iVar53 = *(int *)(param_1 + 0x80c);
        *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x840);
        *(int *)(param_1 + 0x85c) = iVar52;
        *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x838);
        *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(param_1 + 0x834);
        *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_1 + 0x830);
        uVar2 = *(undefined4 *)(param_1 + 0x82c);
        *(int *)(param_1 + 0x82c) = iVar53;
        *(undefined4 *)(param_1 + 0x84c) = uVar2;
        *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_1 + 0x848);
        *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(param_1 + 0x824);
        *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x820);
        *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_1 + 0x81c);
        *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_1 + 0x818);
        *(undefined4 *)(param_1 + 0x834) = *(undefined4 *)(param_1 + 0x814);
        *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(param_1 + 0x810);
        *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_1 + 0x828);
        *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0x804);
        *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x800);
        iVar4 = *(int *)(param_1 + 0x7fc);
        *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(param_1 + 0x7f8);
        iVar56 = *(int *)(param_1 + 0x7cc);
        *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_1 + 0x7f4);
        *(int *)(param_1 + 0x81c) = iVar4;
        *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_1 + 0x7f0);
        uVar2 = *(undefined4 *)(param_1 + 0x7ec);
        *(int *)(param_1 + 0x7ec) = iVar56;
        *(undefined4 *)(param_1 + 0x80c) = uVar2;
        *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_1 + 0x808);
        *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_1 + 0x7e4);
        *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_1 + 0x7e0);
        *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_1 + 0x7dc);
        *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_1 + 0x7d8);
        *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_1 + 0x7d4);
        *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_1 + 2000);
        *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_1 + 0x7e8);
        *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_1 + 0x7c4);
        iVar50 = *(int *)(param_1 + 0x7bc);
        *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(param_1 + 0x7a4);
        *(int *)(param_1 + 0x7dc) = iVar50;
        *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(param_1 + 0x7c0);
        *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_1 + 0x7a0);
        *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(param_1 + 0x7b8);
        *(undefined4 *)(param_1 + 0x7bc) = *(undefined4 *)(param_1 + 0x79c);
        *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(param_1 + 0x7b4);
        *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(param_1 + 0x798);
        *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(param_1 + 0x7b0);
        *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(param_1 + 0x794);
        *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(param_1 + 0x7ac);
        *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_1 + 0x790);
        *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 0x7c8);
        iVar51 = *(int *)(param_1 + 0x78c);
        *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_1 + 0x7a8);
        *(int *)(param_1 + 0x7ac) = iVar51;
        iVar57 = *(int *)(param_1 + 0x77c);
        *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(param_1 + 0x784);
        *(int *)(param_1 + 0x79c) = iVar57;
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
        *(int *)(param_1 + 0x75c) = *(int *)(param_1 + 0x73c);
        *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x744);
        *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_1 + 0x740);
        *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x738);
        iVar4 = iVar10 * (iVar50 >> 0xd) +
                iVar9 * (iVar51 - iVar56 >> 0xd) +
                iVar8 * (iVar57 + iVar4 >> 0xd) +
                iVar25 * (iVar52 + *(int *)(param_1 + 0x73c) >> 0xd) +
                iVar26 * (*(int *)(param_1 + 0x74c) - iVar53 >> 0xd) >> 0xe;
        *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_1 + 0x734);
        *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_1 + 0x730);
        *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(param_1 + 0x72c);
        *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_1 + 0x748);
        fVar59 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xc4),
                                            (byte)(in_fpscr >> 0x16) & 3);
        fVar61 = param_3[2];
        fVar58 = param_3[3];
        fVar60 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 200),
                                            (byte)(in_fpscr >> 0x16) & 3);
        iVar52 = (int)(fVar59 * *param_3);
        fVar59 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xcc),
                                            (byte)(in_fpscr >> 0x16) & 3);
        iVar53 = (int)(fVar60 * param_3[1]);
        uVar2 = *(undefined4 *)(iVar5 + 0xd0);
        *(undefined4 *)(param_1 + 0x734) = 0;
        fVar60 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        iVar56 = (int)(fVar59 * fVar61);
        iVar57 = (int)(fVar60 * fVar58);
        *(int *)(param_1 + 0x744) = ((-iVar53 - iVar52) - iVar56) - iVar57;
        iVar50 = iVar53 + iVar56 >> 0xd;
        iVar51 = iVar52 + iVar57 >> 0xd;
        iVar53 = iVar53 - iVar56 >> 0xd;
        iVar52 = iVar52 - iVar57 >> 0xd;
        *(int *)(param_1 + 0x72c) = iVar27 * iVar51 + iVar28 * iVar50;
        *(int *)(param_1 + 0x73c) = iVar33 * iVar51 + iVar34 * iVar50;
        *(int *)(param_1 + 0x730) = iVar29 * iVar52 + iVar30 * iVar53;
        *(int *)(param_1 + 0x738) = iVar31 * iVar52 + iVar32 * iVar53;
        *(int *)(param_1 + 0x740) = iVar35 * iVar52 + iVar38 * iVar53;
        *(int *)(param_1 + 0x748) = iVar39 * iVar52 + iVar7 * iVar53;
        uVar2 = SignedSaturate(iVar4,0xf);
        SignedDoesSaturate(iVar4,0xf);
        *puVar1 = (short)uVar2;
      }
      else {
        *puVar1 = 0;
      }
      if (*(char *)(param_1 + 6) == '\x01') {
        puVar1 = puVar1 + 1;
      }
      else {
        puVar1 = puVar1 + 2;
      }
      if (param_4 == 0) {
        iVar4 = iVar19 * (*(int *)(param_1 + 0x860) >> 0xd) +
                iVar18 * (*(int *)(param_1 + 0x830) >> 0xd) +
                iVar17 * (*(int *)(param_1 + 0x820) >> 0xd) +
                iVar16 * (*(int *)(param_1 + 0x7f0) >> 0xd) +
                iVar15 * (*(int *)(param_1 + 0x7e0) >> 0xd) +
                iVar14 * (*(int *)(param_1 + 0x7b0) >> 0xd) +
                iVar13 * (*(int *)(param_1 + 0x7a0) >> 0xd) +
                iVar12 * (*(int *)(param_1 + 0x770) >> 0xd) +
                iVar49 * (*(int *)(param_1 + 0x730) >> 0xd) +
                iVar11 * (*(int *)(param_1 + 0x760) >> 0xd) >> 0xe;
        uVar2 = SignedSaturate(iVar4,0xf);
        SignedDoesSaturate(iVar4,0xf);
        uVar3 = (undefined2)uVar2;
      }
      else {
        uVar3 = 0;
      }
      *puVar1 = uVar3;
      if (*(char *)(param_1 + 6) == '\x01') {
        puVar1 = puVar1 + 1;
      }
      else {
        puVar1 = puVar1 + 2;
      }
      if (param_4 == 0) {
        iVar4 = iVar24 * (*(int *)(param_1 + 0x7b4) + *(int *)(param_1 + 0x7e4) >> 0xd) +
                iVar23 * (*(int *)(param_1 + 0x7a4) + *(int *)(param_1 + 0x7f4) >> 0xd) +
                iVar22 * (*(int *)(param_1 + 0x774) + *(int *)(param_1 + 0x824) >> 0xd) +
                iVar20 * (*(int *)(param_1 + 0x734) + *(int *)(param_1 + 0x864) >> 0xd) +
                iVar21 * (*(int *)(param_1 + 0x764) + *(int *)(param_1 + 0x834) >> 0xd) >> 0xe;
        uVar2 = SignedSaturate(iVar4,0xf);
        SignedDoesSaturate(iVar4,0xf);
        uVar3 = (undefined2)uVar2;
      }
      else {
        uVar3 = 0;
      }
      *puVar1 = uVar3;
      if (*(char *)(param_1 + 6) == '\x01') {
        puVar1 = puVar1 + 1;
      }
      else {
        puVar1 = puVar1 + 2;
      }
      if (param_4 == 0) {
        iVar4 = iVar6 * (*(int *)(param_1 + 0x868) >> 0xd) +
                iVar48 * (*(int *)(param_1 + 0x838) >> 0xd) +
                iVar47 * (*(int *)(param_1 + 0x828) >> 0xd) +
                iVar46 * (*(int *)(param_1 + 0x7f8) >> 0xd) +
                iVar45 * (*(int *)(param_1 + 0x7e8) >> 0xd) +
                iVar44 * (*(int *)(param_1 + 0x7b8) >> 0xd) +
                iVar43 * (*(int *)(param_1 + 0x7a8) >> 0xd) +
                iVar42 * (*(int *)(param_1 + 0x778) >> 0xd) +
                iVar40 * (*(int *)(param_1 + 0x738) >> 0xd) +
                iVar41 * (*(int *)(param_1 + 0x768) >> 0xd) >> 0xe;
        uVar2 = SignedSaturate(iVar4,0xf);
        SignedDoesSaturate(iVar4,0xf);
        uVar3 = (undefined2)uVar2;
      }
      else {
        uVar3 = 0;
      }
      *puVar1 = uVar3;
      uVar54 = uVar54 + 1;
      iVar5 = iVar5 + 0x40;
      if (*(char *)(param_1 + 6) == '\x01') {
        puVar1 = puVar1 + 1;
      }
      else {
        puVar1 = puVar1 + 2;
      }
    } while (uVar54 < *(byte *)(param_1 + 4));
    iVar5 = *(int *)(param_2 + 4);
  }
LAB_2c01bce2:
  *(short *)(param_2 + 2) = ((short)puVar1 - (short)iVar5) + -2;
  return;
}

