/* FUN_1400fbe4 @ 0x1400fbe4 */

void FUN_1400fbe4(int param_1,int param_2,float *param_3,uint param_4,char param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  undefined2 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
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
  uint in_fpscr;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined2 *local_80;
  int local_7c;
  uint local_78;
  uint local_70;
  
  iVar3 = DAT_14010578;
  piVar2 = DAT_14010574;
  uVar14 = (uint)*(ushort *)(param_2 + 2);
  iVar7 = *(int *)(param_2 + 4);
  local_80 = (undefined2 *)(iVar7 + uVar14);
  if (param_5 == '\x03') {
    if (1 < *(byte *)(param_1 + 6)) {
      uVar16 = (uint)*(byte *)(param_1 + 4);
      goto LAB_14010542;
    }
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') {
      bVar12 = *(byte *)(param_1 + 6);
      uVar16 = 0;
    }
    else {
      uVar14 = param_4 & 0xff;
      local_78 = 0;
      local_7c = param_1;
      do {
        if (uVar14 < 2) {
          *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_1 + 0x6e8);
          *(undefined4 *)(param_1 + 0x724) = *(undefined4 *)(param_1 + 0x6e4);
          *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(param_1 + 0x6e0);
          *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_1 + 0x6dc);
          *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(param_1 + 0x6d8);
          *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(param_1 + 0x6d4);
          *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_1 + 0x6d0);
          *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_1 + 0x6cc);
          *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_1 + 0x6c8);
          *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_1 + 0x6c4);
          *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_1 + 0x6c0);
          *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_1 + 0x6bc);
          *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_1 + 0x6b8);
          *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_1 + 0x6b4);
          *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_1 + 0x6b0);
          *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(param_1 + 0x6ac);
          *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_1 + 0x6a8);
          *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(param_1 + 0x6a4);
          *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_1 + 0x6a0);
          *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_1 + 0x69c);
          *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_1 + 0x698);
          *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_1 + 0x694);
          *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_1 + 0x690);
          *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_1 + 0x68c);
          *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_1 + 0x688);
          *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_1 + 0x684);
          *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_1 + 0x680);
          *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_1 + 0x67c);
          *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_1 + 0x678);
          *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_1 + 0x674);
          *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_1 + 0x670);
          *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(param_1 + 0x66c);
          *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_1 + 0x668);
          *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_1 + 0x664);
          *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_1 + 0x660);
          *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_1 + 0x65c);
          *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_1 + 0x658);
          *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(param_1 + 0x654);
          *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(param_1 + 0x650);
          *(undefined4 *)(param_1 + 0x68c) = *(undefined4 *)(param_1 + 0x64c);
          *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(param_1 + 0x648);
          *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_1 + 0x644);
          *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_1 + 0x640);
          *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(param_1 + 0x63c);
          *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_1 + 0x638);
          *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(param_1 + 0x634);
          *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(param_1 + 0x630);
          *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_1 + 0x62c);
          *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(param_1 + 0x628);
          *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_1 + 0x624);
          *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_1 + 0x620);
          *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_1 + 0x61c);
          *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_1 + 0x618);
          *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(param_1 + 0x614);
          *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(param_1 + 0x610);
          *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(param_1 + 0x60c);
          *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(param_1 + 0x608);
          *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_1 + 0x604);
          *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x600);
          *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x5fc);
          *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x5f8);
          *(undefined4 *)(param_1 + 0x634) = *(undefined4 *)(param_1 + 0x5f4);
          *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(param_1 + 0x5f0);
          *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(param_1 + 0x5ec);
          *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(param_1 + 0x5e8);
          *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_1 + 0x5e4);
          *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_1 + 0x5e0);
          *(undefined4 *)(param_1 + 0x61c) = *(undefined4 *)(param_1 + 0x5dc);
          *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_1 + 0x5d8);
          *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_1 + 0x5d4);
          *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_1 + 0x5d0);
          *(undefined4 *)(param_1 + 0x60c) = *(undefined4 *)(param_1 + 0x5cc);
          *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_1 + 0x5c8);
          *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(param_1 + 0x5c4);
          *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(param_1 + 0x5c0);
          *(undefined4 *)(param_1 + 0x5fc) = *(undefined4 *)(param_1 + 0x5bc);
          *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(param_1 + 0x5b8);
          *(undefined4 *)(param_1 + 0x5f4) = *(undefined4 *)(param_1 + 0x5b4);
          *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(param_1 + 0x5b0);
          *(undefined4 *)(param_1 + 0x5ec) = *(undefined4 *)(param_1 + 0x5ac);
          *(undefined4 *)(param_1 + 0x5e8) = *(undefined4 *)(param_1 + 0x5a8);
          *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)(param_1 + 0x5a4);
          *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_1 + 0x5a0);
          *(undefined4 *)(param_1 + 0x5dc) = *(undefined4 *)(param_1 + 0x59c);
          *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_1 + 0x598);
          *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)(param_1 + 0x594);
          *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x590);
          *(undefined4 *)(param_1 + 0x5cc) = *(undefined4 *)(param_1 + 0x58c);
          *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_1 + 0x588);
          *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_1 + 0x584);
          *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_1 + 0x580);
          *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_1 + 0x57c);
          *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_1 + 0x578);
          *(undefined4 *)(param_1 + 0x5b4) = *(undefined4 *)(param_1 + 0x574);
          *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_1 + 0x570);
          *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_1 + 0x56c);
          *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_1 + 0x568);
          *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(param_1 + 0x564);
          *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_1 + 0x560);
          *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_1 + 0x55c);
          *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0x558);
          *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_1 + 0x554);
          *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_1 + 0x550);
          *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_1 + 0x54c);
          *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_1 + 0x548);
          *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(param_1 + 0x544);
          *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_1 + 0x540);
          *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(param_1 + 0x53c);
          *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0x538);
          *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x534);
          *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x530);
          *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_1 + 0x52c);
          *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x528);
          *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_1 + 0x524);
          *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_1 + 0x520);
          *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_1 + 0x51c);
          *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x518);
          *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x514);
          *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_1 + 0x510);
          *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_1 + 0x50c);
          *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x508);
          *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_1 + 0x504);
          *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x500);
          *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x4fc);
          *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_1 + 0x4f8);
          *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_1 + 0x4f4);
          *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_1 + 0x4f0);
          *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x4ec);
          *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_1 + 0x4e8);
          *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_1 + 0x4e4);
          *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_1 + 0x4e0);
          *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_1 + 0x4dc);
          *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x4d8);
          *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 0x4d4);
          *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x4d0);
          *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 0x4cc);
          *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_1 + 0x4c8);
          *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_1 + 0x4c4);
          *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x4c0);
          *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_1 + 0x4bc);
          *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x4b8);
          *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 0x4b4);
          *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x4b0);
          *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x4ac);
          *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x4a8);
          *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x4a4);
          *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x4a0);
          *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_1 + 0x49c);
          *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x498);
          *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x494);
          *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x490);
          *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x48c);
          iVar8 = piVar2[1];
          iVar21 = *(int *)(local_7c + 0xa8);
          iVar17 = *(int *)(local_7c + 0xa4);
          iVar33 = *(int *)(local_7c + 0xb8);
          iVar34 = *(int *)(local_7c + 0xbc);
          iVar27 = *(int *)(local_7c + 0xac);
          iVar28 = piVar2[0x31];
          iVar29 = *(int *)(local_7c + 0xc0);
          iVar22 = piVar2[0x10];
          iVar23 = piVar2[0x30];
          iVar31 = *(int *)(local_7c + 0xb0);
          iVar24 = piVar2[2];
          iVar18 = *piVar2;
          iVar25 = piVar2[0x12];
          iVar7 = iVar21 - iVar34 >> 0xd;
          iVar32 = *(int *)(local_7c + 0xb4);
          iVar15 = piVar2[0x11];
          iVar26 = iVar21 + iVar34 >> 0xd;
          iVar10 = iVar29 + iVar17 >> 0xd;
          iVar6 = iVar17 - iVar29 >> 0xd;
          iVar30 = piVar2[0x32];
          iVar4 = iVar27 + iVar33 >> 0xd;
          iVar19 = piVar2[0x13];
          iVar5 = iVar27 - iVar33 >> 0xd;
          iVar20 = piVar2[0x33];
          iVar9 = piVar2[3];
          *(int *)(param_1 + 0x4cc) =
               piVar2[0x43] * (iVar29 + iVar31 >> 0xd) +
               piVar2[0x42] * (iVar34 + iVar27 >> 0xd) +
               piVar2[0x40] * (iVar17 + iVar32 >> 0xd) + piVar2[0x41] * (iVar33 + iVar21 >> 0xd);
          iVar11 = iVar31 + iVar32 >> 0xd;
          *(int *)(param_1 + 0x4ac) =
               iVar9 * iVar11 + iVar24 * iVar4 + iVar18 * iVar10 + iVar26 * iVar8;
          *(int *)(param_1 + 0x4b4) =
               iVar19 * iVar11 + iVar25 * iVar4 + iVar22 * iVar10 + iVar26 * iVar15;
          *(int *)(param_1 + 0x4c4) =
               iVar20 * iVar11 + iVar30 * iVar4 + iVar23 * iVar10 + iVar28 * iVar26;
          iVar18 = piVar2[0x50];
          iVar19 = piVar2[0x51];
          iVar9 = piVar2[0x52];
          iVar15 = piVar2[0x53];
          *(int *)(param_1 + 0x4dc) =
               -(iVar21 + iVar34 + iVar29 + iVar17 + iVar27 + iVar33 + iVar31 + iVar32);
          iVar8 = iVar31 - iVar32 >> 0xd;
          iVar28 = piVar2[9];
          *(undefined4 *)(param_1 + 0x4bc) = 0;
          iVar17 = piVar2[0x71];
          *(int *)(param_1 + 0x4d4) =
               iVar15 * iVar11 + iVar9 * iVar4 + iVar18 * iVar10 + iVar26 * iVar19;
          iVar18 = piVar2[0x19];
          iVar9 = piVar2[0x39];
          iVar19 = piVar2[0x29];
          iVar15 = piVar2[0x49];
          iVar29 = piVar2[8];
          iVar20 = piVar2[0x18];
          iVar23 = piVar2[0x28];
          iVar24 = piVar2[0x38];
          iVar25 = piVar2[0x48];
          iVar21 = piVar2[10];
          iVar22 = piVar2[0x1a];
          iVar30 = piVar2[0x2a];
          iVar31 = piVar2[0x3a];
          iVar32 = piVar2[0x4a];
          iVar27 = piVar2[0xb];
          *(int *)(param_1 + 0x4e4) =
               piVar2[0x73] * iVar11 +
               piVar2[0x72] * iVar4 + piVar2[0x70] * iVar10 + iVar17 * iVar26;
          *(int *)(param_1 + 0x4b0) =
               iVar27 * iVar8 + iVar21 * iVar5 + iVar29 * iVar6 + iVar7 * iVar28;
          *(int *)(param_1 + 0x4b8) =
               piVar2[0x1b] * iVar8 + iVar22 * iVar5 + iVar20 * iVar6 + iVar18 * iVar7;
          *(int *)(param_1 + 0x4c0) =
               piVar2[0x2b] * iVar8 + iVar30 * iVar5 + iVar23 * iVar6 + iVar7 * iVar19;
          *(int *)(param_1 + 0x4c8) =
               piVar2[0x3b] * iVar8 + iVar31 * iVar5 + iVar24 * iVar6 + iVar7 * iVar9;
          iVar10 = *(int *)(iVar3 + 0x40);
          *(int *)(param_1 + 0x4d0) =
               piVar2[0x4b] * iVar8 + iVar32 * iVar5 + iVar25 * iVar6 + iVar7 * iVar15;
          iVar9 = piVar2[0x59];
          iVar11 = piVar2[0x79];
          iVar4 = *(int *)(iVar3 + 0x20);
          iVar15 = piVar2[0x58];
          iVar18 = piVar2[0x78];
          iVar17 = *(int *)(iVar3 + 0x60);
          iVar19 = piVar2[0x5a];
          iVar20 = piVar2[0x7a];
          iVar21 = *(int *)(iVar3 + 0x80);
          *(int *)(param_1 + 0x4e0) =
               piVar2[0x6b] * iVar8 +
               piVar2[0x6a] * iVar5 + piVar2[0x68] * iVar6 + iVar7 * piVar2[0x69];
          iVar22 = piVar2[0x7b];
          *(int *)(param_1 + 0x4d8) =
               piVar2[0x5b] * iVar8 + iVar19 * iVar5 + iVar15 * iVar6 + iVar7 * iVar9;
          iVar9 = *(int *)(iVar3 + 0xa0);
          *(int *)(param_1 + 0x4e8) =
               iVar22 * iVar8 + iVar20 * iVar5 + iVar18 * iVar6 + iVar11 * iVar7;
          iVar7 = iVar9 * (*(int *)(param_1 + 0x60c) >> 0xd) +
                  iVar21 * (*(int *)(param_1 + 0x5ac) - *(int *)(param_1 + 0x62c) >> 0xd) +
                  iVar17 * (*(int *)(param_1 + 0x58c) + *(int *)(param_1 + 0x68c) >> 0xd) +
                  iVar4 * (*(int *)(param_1 + 0x50c) + *(int *)(param_1 + 0x70c) >> 0xd) +
                  iVar10 * (*(int *)(param_1 + 0x52c) - *(int *)(param_1 + 0x6ac) >> 0xd) >> 0xe;
          uVar1 = SignedSaturate(iVar7,0xf);
          SignedDoesSaturate(iVar7,0xf);
          *local_80 = (short)uVar1;
        }
        else {
          *local_80 = 0;
        }
        if (*(char *)(param_1 + 6) == '\x01') {
          local_80 = local_80 + 1;
        }
        else {
          local_80 = local_80 + 2;
        }
        if (uVar14 < 2) {
          iVar7 = *(int *)(iVar3 + 0x124) * (*(int *)(param_1 + 0x710) >> 0xd) +
                  *(int *)(iVar3 + 0x104) * (*(int *)(param_1 + 0x6b0) >> 0xd) +
                  *(int *)(iVar3 + 0xe4) * (*(int *)(param_1 + 0x690) >> 0xd) +
                  *(int *)(iVar3 + 0xc4) * (*(int *)(param_1 + 0x630) >> 0xd) +
                  *(int *)(iVar3 + 0xa4) * (*(int *)(param_1 + 0x610) >> 0xd) +
                  *(int *)(iVar3 + 0x84) * (*(int *)(param_1 + 0x5b0) >> 0xd) +
                  *(int *)(iVar3 + 100) * (*(int *)(param_1 + 0x590) >> 0xd) +
                  *(int *)(iVar3 + 0x44) * (*(int *)(param_1 + 0x530) >> 0xd) +
                  *(int *)(iVar3 + 4) * (*(int *)(param_1 + 0x4b0) >> 0xd) +
                  *(int *)(iVar3 + 0x24) * (*(int *)(param_1 + 0x510) >> 0xd) >> 0xe;
          uVar1 = SignedSaturate(iVar7,0xf);
          SignedDoesSaturate(iVar7,0xf);
          uVar13 = (undefined2)uVar1;
        }
        else {
          uVar13 = 0;
        }
        *local_80 = uVar13;
        if (*(char *)(param_1 + 6) == '\x01') {
          local_80 = local_80 + 1;
        }
        else {
          local_80 = local_80 + 2;
        }
        if (uVar14 < 2) {
          iVar7 = *(int *)(iVar3 + 0x128) * (*(int *)(param_1 + 0x714) >> 0xd) +
                  *(int *)(iVar3 + 0x108) * (*(int *)(param_1 + 0x6b4) >> 0xd) +
                  *(int *)(iVar3 + 0xe8) * (*(int *)(param_1 + 0x694) >> 0xd) +
                  *(int *)(iVar3 + 200) * (*(int *)(param_1 + 0x634) >> 0xd) +
                  *(int *)(iVar3 + 0xa8) * (*(int *)(param_1 + 0x614) >> 0xd) +
                  *(int *)(iVar3 + 0x88) * (*(int *)(param_1 + 0x5b4) >> 0xd) +
                  *(int *)(iVar3 + 0x68) * (*(int *)(param_1 + 0x594) >> 0xd) +
                  *(int *)(iVar3 + 0x48) * (*(int *)(param_1 + 0x534) >> 0xd) +
                  *(int *)(iVar3 + 8) * (*(int *)(param_1 + 0x4b4) >> 0xd) +
                  *(int *)(iVar3 + 0x28) * (*(int *)(param_1 + 0x514) >> 0xd) >> 0xe;
          uVar1 = SignedSaturate(iVar7,0xf);
          SignedDoesSaturate(iVar7,0xf);
          uVar13 = (undefined2)uVar1;
        }
        else {
          uVar13 = 0;
        }
        *local_80 = uVar13;
        if (*(char *)(param_1 + 6) == '\x01') {
          local_80 = local_80 + 1;
        }
        else {
          local_80 = local_80 + 2;
        }
        if (uVar14 < 2) {
          iVar7 = *(int *)(iVar3 + 300) * (*(int *)(param_1 + 0x718) >> 0xd) +
                  *(int *)(iVar3 + 0x10c) * (*(int *)(param_1 + 0x6b8) >> 0xd) +
                  *(int *)(iVar3 + 0xec) * (*(int *)(param_1 + 0x698) >> 0xd) +
                  *(int *)(iVar3 + 0xcc) * (*(int *)(param_1 + 0x638) >> 0xd) +
                  *(int *)(iVar3 + 0xac) * (*(int *)(param_1 + 0x618) >> 0xd) +
                  *(int *)(iVar3 + 0x8c) * (*(int *)(param_1 + 0x5b8) >> 0xd) +
                  *(int *)(iVar3 + 0x6c) * (*(int *)(param_1 + 0x598) >> 0xd) +
                  *(int *)(iVar3 + 0x4c) * (*(int *)(param_1 + 0x538) >> 0xd) +
                  *(int *)(iVar3 + 0xc) * (*(int *)(param_1 + 0x4b8) >> 0xd) +
                  *(int *)(iVar3 + 0x2c) * (*(int *)(param_1 + 0x518) >> 0xd) >> 0xe;
          uVar1 = SignedSaturate(iVar7,0xf);
          SignedDoesSaturate(iVar7,0xf);
          uVar13 = (undefined2)uVar1;
        }
        else {
          uVar13 = 0;
        }
        *local_80 = uVar13;
        if (*(char *)(param_1 + 6) == '\x01') {
          local_80 = local_80 + 1;
        }
        else {
          local_80 = local_80 + 2;
        }
        if (uVar14 < 2) {
          iVar7 = *(int *)(iVar3 + 0x90) *
                  (*(int *)(param_1 + 0x5bc) + *(int *)(param_1 + 0x61c) >> 0xd) +
                  *(int *)(iVar3 + 0x70) *
                  (*(int *)(param_1 + 0x59c) + *(int *)(param_1 + 0x63c) >> 0xd) +
                  *(int *)(iVar3 + 0x50) *
                  (*(int *)(param_1 + 0x53c) + *(int *)(param_1 + 0x69c) >> 0xd) +
                  *(int *)(iVar3 + 0x10) *
                  (*(int *)(param_1 + 0x4bc) + *(int *)(param_1 + 0x71c) >> 0xd) +
                  *(int *)(iVar3 + 0x30) *
                  (*(int *)(param_1 + 0x51c) + *(int *)(param_1 + 0x6bc) >> 0xd) >> 0xe;
          uVar1 = SignedSaturate(iVar7,0xf);
          SignedDoesSaturate(iVar7,0xf);
          uVar13 = (undefined2)uVar1;
        }
        else {
          uVar13 = 0;
        }
        *local_80 = uVar13;
        if (*(char *)(param_1 + 6) == '\x01') {
          local_80 = local_80 + 1;
        }
        else {
          local_80 = local_80 + 2;
        }
        if (uVar14 < 2) {
          iVar7 = *(int *)(iVar3 + 0x134) * (*(int *)(param_1 + 0x720) >> 0xd) +
                  *(int *)(iVar3 + 0x114) * (*(int *)(param_1 + 0x6c0) >> 0xd) +
                  *(int *)(iVar3 + 0xf4) * (*(int *)(param_1 + 0x6a0) >> 0xd) +
                  *(int *)(iVar3 + 0xd4) * (*(int *)(param_1 + 0x640) >> 0xd) +
                  *(int *)(iVar3 + 0xb4) * (*(int *)(param_1 + 0x620) >> 0xd) +
                  *(int *)(iVar3 + 0x94) * (*(int *)(param_1 + 0x5c0) >> 0xd) +
                  *(int *)(iVar3 + 0x74) * (*(int *)(param_1 + 0x5a0) >> 0xd) +
                  *(int *)(iVar3 + 0x54) * (*(int *)(param_1 + 0x540) >> 0xd) +
                  *(int *)(iVar3 + 0x14) * (*(int *)(param_1 + 0x4c0) >> 0xd) +
                  *(int *)(iVar3 + 0x34) * (*(int *)(param_1 + 0x520) >> 0xd) >> 0xe;
          uVar1 = SignedSaturate(iVar7,0xf);
          SignedDoesSaturate(iVar7,0xf);
          uVar13 = (undefined2)uVar1;
        }
        else {
          uVar13 = 0;
        }
        *local_80 = uVar13;
        if (*(char *)(param_1 + 6) == '\x01') {
          local_80 = local_80 + 1;
        }
        else {
          local_80 = local_80 + 2;
        }
        if (uVar14 < 2) {
          iVar7 = *(int *)(iVar3 + 0x138) * (*(int *)(param_1 + 0x724) >> 0xd) +
                  *(int *)(iVar3 + 0x118) * (*(int *)(param_1 + 0x6c4) >> 0xd) +
                  *(int *)(iVar3 + 0xf8) * (*(int *)(param_1 + 0x6a4) >> 0xd) +
                  *(int *)(iVar3 + 0xd8) * (*(int *)(param_1 + 0x644) >> 0xd) +
                  *(int *)(iVar3 + 0xb8) * (*(int *)(param_1 + 0x624) >> 0xd) +
                  *(int *)(iVar3 + 0x98) * (*(int *)(param_1 + 0x5c4) >> 0xd) +
                  *(int *)(iVar3 + 0x78) * (*(int *)(param_1 + 0x5a4) >> 0xd) +
                  *(int *)(iVar3 + 0x58) * (*(int *)(param_1 + 0x544) >> 0xd) +
                  *(int *)(iVar3 + 0x18) * (*(int *)(param_1 + 0x4c4) >> 0xd) +
                  *(int *)(iVar3 + 0x38) * (*(int *)(param_1 + 0x524) >> 0xd) >> 0xe;
          uVar1 = SignedSaturate(iVar7,0xf);
          SignedDoesSaturate(iVar7,0xf);
          uVar13 = (undefined2)uVar1;
        }
        else {
          uVar13 = 0;
        }
        *local_80 = uVar13;
        if (*(char *)(param_1 + 6) == '\x01') {
          local_80 = local_80 + 1;
        }
        else {
          local_80 = local_80 + 2;
        }
        if (uVar14 < 2) {
          iVar7 = *(int *)(iVar3 + 0x13c) * (*(int *)(param_1 + 0x728) >> 0xd) +
                  *(int *)(iVar3 + 0x11c) * (*(int *)(param_1 + 0x6c8) >> 0xd) +
                  *(int *)(iVar3 + 0xfc) * (*(int *)(param_1 + 0x6a8) >> 0xd) +
                  *(int *)(iVar3 + 0xdc) * (*(int *)(param_1 + 0x648) >> 0xd) +
                  *(int *)(iVar3 + 0xbc) * (*(int *)(param_1 + 0x628) >> 0xd) +
                  *(int *)(iVar3 + 0x9c) * (*(int *)(param_1 + 0x5c8) >> 0xd) +
                  *(int *)(iVar3 + 0x7c) * (*(int *)(param_1 + 0x5a8) >> 0xd) +
                  *(int *)(iVar3 + 0x5c) * (*(int *)(param_1 + 0x548) >> 0xd) +
                  *(int *)(iVar3 + 0x1c) * (*(int *)(param_1 + 0x4c8) >> 0xd) +
                  *(int *)(iVar3 + 0x3c) * (*(int *)(param_1 + 0x528) >> 0xd) >> 0xe;
          uVar1 = SignedSaturate(iVar7,0xf);
          SignedDoesSaturate(iVar7,0xf);
          uVar13 = (undefined2)uVar1;
        }
        else {
          uVar13 = 0;
        }
        *local_80 = uVar13;
        bVar12 = *(byte *)(param_1 + 6);
        if (bVar12 == 1) {
          local_80 = local_80 + 1;
        }
        else {
          local_80 = local_80 + 2;
        }
        local_78 = local_78 + 1;
        local_7c = local_7c + 0x40;
        uVar16 = (uint)*(byte *)(param_1 + 4);
      } while (local_78 < uVar16);
      iVar7 = *(int *)(param_2 + 4);
    }
    if ((1 < bVar12) && (param_5 != '\x02')) {
      uVar14 = (uint)*(ushort *)(param_2 + 2);
LAB_14010542:
      iVar3 = DAT_14010578;
      piVar2 = DAT_14010574;
      local_80 = (undefined2 *)(iVar7 + uVar14 + 2);
      if (uVar16 != 0) {
        param_4 = param_4 & 0xfffffffd;
        local_70 = 0;
        local_7c = param_1;
        do {
          if (param_4 == 0) {
            *(undefined4 *)(param_1 + 0x9a8) = *(undefined4 *)(param_1 + 0x968);
            *(undefined4 *)(param_1 + 0x9a4) = *(undefined4 *)(param_1 + 0x964);
            *(undefined4 *)(param_1 + 0x9a0) = *(undefined4 *)(param_1 + 0x960);
            *(undefined4 *)(param_1 + 0x99c) = *(undefined4 *)(param_1 + 0x95c);
            *(undefined4 *)(param_1 + 0x998) = *(undefined4 *)(param_1 + 0x958);
            *(undefined4 *)(param_1 + 0x994) = *(undefined4 *)(param_1 + 0x954);
            *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(param_1 + 0x950);
            *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(param_1 + 0x94c);
            *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(param_1 + 0x948);
            *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(param_1 + 0x944);
            *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(param_1 + 0x940);
            *(undefined4 *)(param_1 + 0x97c) = *(undefined4 *)(param_1 + 0x93c);
            *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(param_1 + 0x938);
            *(undefined4 *)(param_1 + 0x974) = *(undefined4 *)(param_1 + 0x934);
            *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_1 + 0x930);
            *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x92c);
            *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x928);
            *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x924);
            *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x920);
            *(undefined4 *)(param_1 + 0x95c) = *(undefined4 *)(param_1 + 0x91c);
            *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(param_1 + 0x918);
            *(undefined4 *)(param_1 + 0x954) = *(undefined4 *)(param_1 + 0x914);
            *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(param_1 + 0x910);
            *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(param_1 + 0x90c);
            *(undefined4 *)(param_1 + 0x948) = *(undefined4 *)(param_1 + 0x908);
            *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(param_1 + 0x904);
            *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_1 + 0x900);
            *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_1 + 0x8fc);
            *(undefined4 *)(param_1 + 0x938) = *(undefined4 *)(param_1 + 0x8f8);
            *(undefined4 *)(param_1 + 0x934) = *(undefined4 *)(param_1 + 0x8f4);
            *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(param_1 + 0x8f0);
            *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(param_1 + 0x8ec);
            *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(param_1 + 0x8e8);
            *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(param_1 + 0x8e4);
            *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_1 + 0x8e0);
            *(undefined4 *)(param_1 + 0x91c) = *(undefined4 *)(param_1 + 0x8dc);
            *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_1 + 0x8d8);
            *(undefined4 *)(param_1 + 0x914) = *(undefined4 *)(param_1 + 0x8d4);
            *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_1 + 0x8d0);
            *(undefined4 *)(param_1 + 0x90c) = *(undefined4 *)(param_1 + 0x8cc);
            *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x8c8);
            *(undefined4 *)(param_1 + 0x904) = *(undefined4 *)(param_1 + 0x8c4);
            *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_1 + 0x8c0);
            *(undefined4 *)(param_1 + 0x8fc) = *(undefined4 *)(param_1 + 0x8bc);
            *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_1 + 0x8b8);
            *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(param_1 + 0x8b4);
            *(undefined4 *)(param_1 + 0x8f0) = *(undefined4 *)(param_1 + 0x8b0);
            *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(param_1 + 0x8ac);
            *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(param_1 + 0x8a8);
            *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(param_1 + 0x8a4);
            *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(param_1 + 0x8a0);
            *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(param_1 + 0x89c);
            *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_1 + 0x898);
            *(undefined4 *)(param_1 + 0x8d4) = *(undefined4 *)(param_1 + 0x894);
            *(undefined4 *)(param_1 + 0x8d0) = *(undefined4 *)(param_1 + 0x890);
            *(undefined4 *)(param_1 + 0x8cc) = *(undefined4 *)(param_1 + 0x88c);
            *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(param_1 + 0x888);
            *(undefined4 *)(param_1 + 0x8c4) = *(undefined4 *)(param_1 + 0x884);
            *(undefined4 *)(param_1 + 0x8c0) = *(undefined4 *)(param_1 + 0x880);
            *(undefined4 *)(param_1 + 0x8bc) = *(undefined4 *)(param_1 + 0x87c);
            *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_1 + 0x878);
            *(undefined4 *)(param_1 + 0x8b4) = *(undefined4 *)(param_1 + 0x874);
            *(undefined4 *)(param_1 + 0x8b0) = *(undefined4 *)(param_1 + 0x870);
            *(undefined4 *)(param_1 + 0x8ac) = *(undefined4 *)(param_1 + 0x86c);
            *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_1 + 0x868);
            *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_1 + 0x864);
            *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_1 + 0x860);
            *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_1 + 0x85c);
            *(undefined4 *)(param_1 + 0x898) = *(undefined4 *)(param_1 + 0x858);
            *(undefined4 *)(param_1 + 0x894) = *(undefined4 *)(param_1 + 0x854);
            *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(param_1 + 0x850);
            *(undefined4 *)(param_1 + 0x88c) = *(undefined4 *)(param_1 + 0x84c);
            *(undefined4 *)(param_1 + 0x888) = *(undefined4 *)(param_1 + 0x848);
            *(undefined4 *)(param_1 + 0x884) = *(undefined4 *)(param_1 + 0x844);
            *(undefined4 *)(param_1 + 0x880) = *(undefined4 *)(param_1 + 0x840);
            *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(param_1 + 0x83c);
            *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_1 + 0x838);
            *(undefined4 *)(param_1 + 0x874) = *(undefined4 *)(param_1 + 0x834);
            *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(param_1 + 0x830);
            *(undefined4 *)(param_1 + 0x86c) = *(undefined4 *)(param_1 + 0x82c);
            *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_1 + 0x828);
            *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x824);
            *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x820);
            *(undefined4 *)(param_1 + 0x85c) = *(undefined4 *)(param_1 + 0x81c);
            *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x818);
            *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(param_1 + 0x814);
            *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_1 + 0x810);
            *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(param_1 + 0x80c);
            *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_1 + 0x808);
            *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(param_1 + 0x804);
            *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x800);
            *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_1 + 0x7fc);
            *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_1 + 0x7f8);
            *(undefined4 *)(param_1 + 0x834) = *(undefined4 *)(param_1 + 0x7f4);
            *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(param_1 + 0x7f0);
            *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_1 + 0x7ec);
            *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_1 + 0x7e8);
            *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0x7e4);
            *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x7e0);
            *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_1 + 0x7dc);
            *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(param_1 + 0x7d8);
            *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_1 + 0x7d4);
            *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_1 + 2000);
            *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_1 + 0x7cc);
            *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_1 + 0x7c8);
            *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_1 + 0x7c4);
            *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_1 + 0x7c0);
            *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_1 + 0x7bc);
            *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_1 + 0x7b8);
            *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_1 + 0x7b4);
            *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_1 + 0x7b0);
            *(undefined4 *)(param_1 + 0x7ec) = *(undefined4 *)(param_1 + 0x7ac);
            *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 0x7a8);
            *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_1 + 0x7a4);
            *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(param_1 + 0x7a0);
            *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(param_1 + 0x79c);
            *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(param_1 + 0x798);
            *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(param_1 + 0x794);
            *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(param_1 + 0x790);
            *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(param_1 + 0x78c);
            *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_1 + 0x788);
            *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(param_1 + 0x784);
            *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_1 + 0x780);
            *(undefined4 *)(param_1 + 0x7bc) = *(undefined4 *)(param_1 + 0x77c);
            *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(param_1 + 0x778);
            *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(param_1 + 0x774);
            *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_1 + 0x770);
            *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_1 + 0x76c);
            *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_1 + 0x768);
            *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(param_1 + 0x764);
            *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_1 + 0x760);
            *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(param_1 + 0x75c);
            *(undefined4 *)(param_1 + 0x798) = *(undefined4 *)(param_1 + 0x758);
            *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x754);
            *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x750);
            *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(param_1 + 0x74c);
            *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_1 + 0x748);
            *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_1 + 0x744);
            *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_1 + 0x740);
            *(undefined4 *)(param_1 + 0x77c) = *(undefined4 *)(param_1 + 0x73c);
            *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_1 + 0x738);
            *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_1 + 0x734);
            *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_1 + 0x730);
            *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_1 + 0x72c);
            *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_1 + 0x728);
            *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x724);
            *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_1 + 0x720);
            *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(param_1 + 0x71c);
            *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x718);
            *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_1 + 0x714);
            *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_1 + 0x710);
            *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(param_1 + 0x70c);
            iVar18 = piVar2[0x10];
            fVar35 = (float)VectorSignedToFloat(*(undefined4 *)(local_7c + 200),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar36 = (float)VectorSignedToFloat(*(undefined4 *)(local_7c + 0xd8),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar37 = (float)VectorSignedToFloat(*(undefined4 *)(local_7c + 0xdc),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar38 = (float)VectorSignedToFloat(*(undefined4 *)(local_7c + 0xc4),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar39 = (float)VectorSignedToFloat(*(undefined4 *)(local_7c + 0xcc),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar40 = (float)VectorSignedToFloat(*(undefined4 *)(local_7c + 0xd0),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar41 = (float)VectorSignedToFloat(*(undefined4 *)(local_7c + 0xd4),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar42 = (float)VectorSignedToFloat(*(undefined4 *)(local_7c + 0xe0),
                                                (byte)(in_fpscr >> 0x16) & 3);
            iVar24 = (int)(fVar36 * param_3[5]);
            iVar23 = (int)(fVar35 * param_3[1]);
            iVar25 = (int)(fVar37 * param_3[6]);
            iVar27 = (int)(fVar39 * param_3[2]);
            iVar30 = (int)(fVar42 * param_3[7]);
            iVar26 = (int)(fVar38 * *param_3);
            iVar29 = (int)(fVar41 * param_3[4]);
            iVar4 = piVar2[0x11];
            iVar21 = piVar2[2];
            iVar19 = piVar2[0x12];
            iVar6 = piVar2[1];
            iVar8 = *piVar2;
            iVar20 = piVar2[3];
            iVar9 = iVar23 - iVar25 >> 0xd;
            iVar15 = iVar23 + iVar25 >> 0xd;
            iVar22 = piVar2[0x13];
            iVar28 = (int)(fVar40 * param_3[3]);
            iVar7 = iVar30 + iVar26 >> 0xd;
            iVar11 = iVar26 - iVar30 >> 0xd;
            *(int *)(param_1 + 0x74c) =
                 piVar2[0x43] * (iVar30 + iVar28 >> 0xd) +
                 piVar2[0x42] * (iVar25 + iVar27 >> 0xd) +
                 piVar2[0x40] * (iVar26 + iVar29 >> 0xd) + piVar2[0x41] * (iVar23 + iVar24 >> 0xd);
            iVar10 = iVar27 - iVar24 >> 0xd;
            iVar17 = iVar27 + iVar24 >> 0xd;
            iVar5 = iVar28 + iVar29 >> 0xd;
            *(int *)(param_1 + 0x72c) =
                 iVar20 * iVar5 + iVar21 * iVar17 + iVar8 * iVar7 + iVar6 * iVar15;
            *(int *)(param_1 + 0x734) =
                 iVar22 * iVar5 + iVar19 * iVar17 + iVar18 * iVar7 + iVar4 * iVar15;
            *(undefined4 *)(param_1 + 0x73c) = 0;
            iVar22 = piVar2[0x31];
            *(int *)(param_1 + 0x75c) =
                 -(iVar23 + iVar25 + iVar30 + iVar26 + iVar27 + iVar24 + iVar28 + iVar29);
            iVar6 = iVar28 - iVar29 >> 0xd;
            iVar23 = piVar2[0x51];
            iVar24 = piVar2[0x71];
            iVar31 = piVar2[9];
            iVar25 = piVar2[0x19];
            iVar26 = piVar2[0x29];
            iVar18 = piVar2[0x50];
            iVar27 = piVar2[0x70];
            iVar28 = piVar2[8];
            iVar29 = piVar2[0x18];
            iVar30 = piVar2[0x28];
            iVar8 = piVar2[0x52];
            iVar4 = piVar2[0x72];
            iVar19 = piVar2[10];
            iVar20 = piVar2[0x1a];
            iVar21 = piVar2[0x2a];
            *(int *)(param_1 + 0x744) =
                 piVar2[0x33] * iVar5 +
                 piVar2[0x32] * iVar17 + piVar2[0x30] * iVar7 + iVar15 * iVar22;
            iVar22 = piVar2[0x73];
            *(int *)(param_1 + 0x754) =
                 piVar2[0x53] * iVar5 + iVar8 * iVar17 + iVar18 * iVar7 + iVar23 * iVar15;
            *(int *)(param_1 + 0x764) =
                 iVar22 * iVar5 + iVar4 * iVar17 + iVar27 * iVar7 + iVar24 * iVar15;
            iVar7 = piVar2[0x1b];
            *(int *)(param_1 + 0x730) =
                 piVar2[0xb] * iVar6 + iVar19 * iVar10 + iVar28 * iVar11 + iVar9 * iVar31;
            *(int *)(param_1 + 0x738) =
                 iVar7 * iVar6 + iVar20 * iVar10 + iVar29 * iVar11 + iVar9 * iVar25;
            iVar5 = piVar2[0x38];
            iVar8 = piVar2[0x39];
            iVar4 = piVar2[0x49];
            iVar22 = piVar2[0x79];
            *(int *)(param_1 + 0x740) =
                 piVar2[0x2b] * iVar6 + iVar21 * iVar10 + iVar30 * iVar11 + iVar9 * iVar26;
            iVar15 = piVar2[0x69];
            iVar21 = piVar2[0x59];
            iVar23 = piVar2[0x48];
            iVar24 = piVar2[0x58];
            iVar25 = piVar2[0x68];
            iVar18 = piVar2[0x78];
            iVar7 = piVar2[0x7a];
            iVar17 = piVar2[0x4a];
            iVar19 = piVar2[0x5a];
            iVar20 = piVar2[0x6a];
            iVar26 = *(int *)(iVar3 + 0x40);
            *(int *)(param_1 + 0x748) =
                 piVar2[0x3b] * iVar6 + piVar2[0x3a] * iVar10 + iVar5 * iVar11 + iVar9 * iVar8;
            iVar5 = piVar2[0x6b];
            *(int *)(param_1 + 0x750) =
                 piVar2[0x4b] * iVar6 + iVar17 * iVar10 + iVar23 * iVar11 + iVar9 * iVar4;
            *(int *)(param_1 + 0x758) =
                 piVar2[0x5b] * iVar6 + iVar19 * iVar10 + iVar24 * iVar11 + iVar9 * iVar21;
            iVar8 = piVar2[0x7b];
            *(int *)(param_1 + 0x760) =
                 iVar5 * iVar6 + iVar20 * iVar10 + iVar25 * iVar11 + iVar9 * iVar15;
            *(int *)(param_1 + 0x768) =
                 iVar8 * iVar6 + iVar7 * iVar10 + iVar18 * iVar11 + iVar22 * iVar9;
            iVar7 = *(int *)(iVar3 + 0xa0) * (*(int *)(param_1 + 0x88c) >> 0xd) +
                    *(int *)(iVar3 + 0x80) *
                    (*(int *)(param_1 + 0x82c) - *(int *)(param_1 + 0x8ac) >> 0xd) +
                    *(int *)(iVar3 + 0x60) *
                    (*(int *)(param_1 + 0x80c) + *(int *)(param_1 + 0x90c) >> 0xd) +
                    *(int *)(iVar3 + 0x20) *
                    (*(int *)(param_1 + 0x78c) + *(int *)(param_1 + 0x98c) >> 0xd) +
                    iVar26 * (*(int *)(param_1 + 0x7ac) - *(int *)(param_1 + 0x92c) >> 0xd) >> 0xe;
            uVar1 = SignedSaturate(iVar7,0xf);
            SignedDoesSaturate(iVar7,0xf);
            *local_80 = (short)uVar1;
          }
          else {
            *local_80 = 0;
          }
          if (*(char *)(param_1 + 6) == '\x01') {
            local_80 = local_80 + 1;
          }
          else {
            local_80 = local_80 + 2;
          }
          if (param_4 == 0) {
            iVar7 = *(int *)(iVar3 + 0x124) * (*(int *)(param_1 + 0x990) >> 0xd) +
                    *(int *)(iVar3 + 0x104) * (*(int *)(param_1 + 0x930) >> 0xd) +
                    *(int *)(iVar3 + 0xe4) * (*(int *)(param_1 + 0x910) >> 0xd) +
                    *(int *)(iVar3 + 0xc4) * (*(int *)(param_1 + 0x8b0) >> 0xd) +
                    *(int *)(iVar3 + 0xa4) * (*(int *)(param_1 + 0x890) >> 0xd) +
                    *(int *)(iVar3 + 0x84) * (*(int *)(param_1 + 0x830) >> 0xd) +
                    *(int *)(iVar3 + 100) * (*(int *)(param_1 + 0x810) >> 0xd) +
                    *(int *)(iVar3 + 0x44) * (*(int *)(param_1 + 0x7b0) >> 0xd) +
                    *(int *)(iVar3 + 4) * (*(int *)(param_1 + 0x730) >> 0xd) +
                    *(int *)(iVar3 + 0x24) * (*(int *)(param_1 + 0x790) >> 0xd) >> 0xe;
            uVar1 = SignedSaturate(iVar7,0xf);
            SignedDoesSaturate(iVar7,0xf);
            uVar13 = (undefined2)uVar1;
          }
          else {
            uVar13 = 0;
          }
          *local_80 = uVar13;
          if (*(char *)(param_1 + 6) == '\x01') {
            local_80 = local_80 + 1;
          }
          else {
            local_80 = local_80 + 2;
          }
          if (param_4 == 0) {
            iVar7 = *(int *)(iVar3 + 0x128) * (*(int *)(param_1 + 0x994) >> 0xd) +
                    *(int *)(iVar3 + 0x108) * (*(int *)(param_1 + 0x934) >> 0xd) +
                    *(int *)(iVar3 + 0xe8) * (*(int *)(param_1 + 0x914) >> 0xd) +
                    *(int *)(iVar3 + 200) * (*(int *)(param_1 + 0x8b4) >> 0xd) +
                    *(int *)(iVar3 + 0xa8) * (*(int *)(param_1 + 0x894) >> 0xd) +
                    *(int *)(iVar3 + 0x88) * (*(int *)(param_1 + 0x834) >> 0xd) +
                    *(int *)(iVar3 + 0x68) * (*(int *)(param_1 + 0x814) >> 0xd) +
                    *(int *)(iVar3 + 0x48) * (*(int *)(param_1 + 0x7b4) >> 0xd) +
                    *(int *)(iVar3 + 8) * (*(int *)(param_1 + 0x734) >> 0xd) +
                    *(int *)(iVar3 + 0x28) * (*(int *)(param_1 + 0x794) >> 0xd) >> 0xe;
            uVar1 = SignedSaturate(iVar7,0xf);
            SignedDoesSaturate(iVar7,0xf);
            uVar13 = (undefined2)uVar1;
          }
          else {
            uVar13 = 0;
          }
          *local_80 = uVar13;
          if (*(char *)(param_1 + 6) == '\x01') {
            local_80 = local_80 + 1;
          }
          else {
            local_80 = local_80 + 2;
          }
          if (param_4 == 0) {
            iVar7 = *(int *)(iVar3 + 300) * (*(int *)(param_1 + 0x998) >> 0xd) +
                    *(int *)(iVar3 + 0x10c) * (*(int *)(param_1 + 0x938) >> 0xd) +
                    *(int *)(iVar3 + 0xec) * (*(int *)(param_1 + 0x918) >> 0xd) +
                    *(int *)(iVar3 + 0xcc) * (*(int *)(param_1 + 0x8b8) >> 0xd) +
                    *(int *)(iVar3 + 0xac) * (*(int *)(param_1 + 0x898) >> 0xd) +
                    *(int *)(iVar3 + 0x8c) * (*(int *)(param_1 + 0x838) >> 0xd) +
                    *(int *)(iVar3 + 0x6c) * (*(int *)(param_1 + 0x818) >> 0xd) +
                    *(int *)(iVar3 + 0x4c) * (*(int *)(param_1 + 0x7b8) >> 0xd) +
                    *(int *)(iVar3 + 0xc) * (*(int *)(param_1 + 0x738) >> 0xd) +
                    *(int *)(iVar3 + 0x2c) * (*(int *)(param_1 + 0x798) >> 0xd) >> 0xe;
            uVar1 = SignedSaturate(iVar7,0xf);
            SignedDoesSaturate(iVar7,0xf);
            uVar13 = (undefined2)uVar1;
          }
          else {
            uVar13 = 0;
          }
          *local_80 = uVar13;
          if (*(char *)(param_1 + 6) == '\x01') {
            local_80 = local_80 + 1;
          }
          else {
            local_80 = local_80 + 2;
          }
          if (param_4 == 0) {
            iVar7 = *(int *)(iVar3 + 0x90) *
                    (*(int *)(param_1 + 0x83c) + *(int *)(param_1 + 0x89c) >> 0xd) +
                    *(int *)(iVar3 + 0x70) *
                    (*(int *)(param_1 + 0x81c) + *(int *)(param_1 + 0x8bc) >> 0xd) +
                    *(int *)(iVar3 + 0x50) *
                    (*(int *)(param_1 + 0x7bc) + *(int *)(param_1 + 0x91c) >> 0xd) +
                    *(int *)(iVar3 + 0x10) *
                    (*(int *)(param_1 + 0x73c) + *(int *)(param_1 + 0x99c) >> 0xd) +
                    *(int *)(iVar3 + 0x30) *
                    (*(int *)(param_1 + 0x79c) + *(int *)(param_1 + 0x93c) >> 0xd) >> 0xe;
            uVar1 = SignedSaturate(iVar7,0xf);
            SignedDoesSaturate(iVar7,0xf);
            uVar13 = (undefined2)uVar1;
          }
          else {
            uVar13 = 0;
          }
          *local_80 = uVar13;
          if (*(char *)(param_1 + 6) == '\x01') {
            local_80 = local_80 + 1;
          }
          else {
            local_80 = local_80 + 2;
          }
          if (param_4 == 0) {
            iVar7 = *(int *)(iVar3 + 0x134) * (*(int *)(param_1 + 0x9a0) >> 0xd) +
                    *(int *)(iVar3 + 0x114) * (*(int *)(param_1 + 0x940) >> 0xd) +
                    *(int *)(iVar3 + 0xf4) * (*(int *)(param_1 + 0x920) >> 0xd) +
                    *(int *)(iVar3 + 0xd4) * (*(int *)(param_1 + 0x8c0) >> 0xd) +
                    *(int *)(iVar3 + 0xb4) * (*(int *)(param_1 + 0x8a0) >> 0xd) +
                    *(int *)(iVar3 + 0x94) * (*(int *)(param_1 + 0x840) >> 0xd) +
                    *(int *)(iVar3 + 0x74) * (*(int *)(param_1 + 0x820) >> 0xd) +
                    *(int *)(iVar3 + 0x54) * (*(int *)(param_1 + 0x7c0) >> 0xd) +
                    *(int *)(iVar3 + 0x14) * (*(int *)(param_1 + 0x740) >> 0xd) +
                    *(int *)(iVar3 + 0x34) * (*(int *)(param_1 + 0x7a0) >> 0xd) >> 0xe;
            uVar1 = SignedSaturate(iVar7,0xf);
            SignedDoesSaturate(iVar7,0xf);
            uVar13 = (undefined2)uVar1;
          }
          else {
            uVar13 = 0;
          }
          *local_80 = uVar13;
          if (*(char *)(param_1 + 6) == '\x01') {
            local_80 = local_80 + 1;
          }
          else {
            local_80 = local_80 + 2;
          }
          if (param_4 == 0) {
            iVar7 = *(int *)(iVar3 + 0x138) * (*(int *)(param_1 + 0x9a4) >> 0xd) +
                    *(int *)(iVar3 + 0x118) * (*(int *)(param_1 + 0x944) >> 0xd) +
                    *(int *)(iVar3 + 0xf8) * (*(int *)(param_1 + 0x924) >> 0xd) +
                    *(int *)(iVar3 + 0xd8) * (*(int *)(param_1 + 0x8c4) >> 0xd) +
                    *(int *)(iVar3 + 0xb8) * (*(int *)(param_1 + 0x8a4) >> 0xd) +
                    *(int *)(iVar3 + 0x98) * (*(int *)(param_1 + 0x844) >> 0xd) +
                    *(int *)(iVar3 + 0x78) * (*(int *)(param_1 + 0x824) >> 0xd) +
                    *(int *)(iVar3 + 0x58) * (*(int *)(param_1 + 0x7c4) >> 0xd) +
                    *(int *)(iVar3 + 0x18) * (*(int *)(param_1 + 0x744) >> 0xd) +
                    *(int *)(iVar3 + 0x38) * (*(int *)(param_1 + 0x7a4) >> 0xd) >> 0xe;
            uVar1 = SignedSaturate(iVar7,0xf);
            SignedDoesSaturate(iVar7,0xf);
            uVar13 = (undefined2)uVar1;
          }
          else {
            uVar13 = 0;
          }
          *local_80 = uVar13;
          if (*(char *)(param_1 + 6) == '\x01') {
            local_80 = local_80 + 1;
          }
          else {
            local_80 = local_80 + 2;
          }
          if (param_4 == 0) {
            iVar7 = *(int *)(iVar3 + 0x13c) * (*(int *)(param_1 + 0x9a8) >> 0xd) +
                    *(int *)(iVar3 + 0x11c) * (*(int *)(param_1 + 0x948) >> 0xd) +
                    *(int *)(iVar3 + 0xfc) * (*(int *)(param_1 + 0x928) >> 0xd) +
                    *(int *)(iVar3 + 0xdc) * (*(int *)(param_1 + 0x8c8) >> 0xd) +
                    *(int *)(iVar3 + 0xbc) * (*(int *)(param_1 + 0x8a8) >> 0xd) +
                    *(int *)(iVar3 + 0x9c) * (*(int *)(param_1 + 0x848) >> 0xd) +
                    *(int *)(iVar3 + 0x7c) * (*(int *)(param_1 + 0x828) >> 0xd) +
                    *(int *)(iVar3 + 0x5c) * (*(int *)(param_1 + 0x7c8) >> 0xd) +
                    *(int *)(iVar3 + 0x1c) * (*(int *)(param_1 + 0x748) >> 0xd) +
                    *(int *)(iVar3 + 0x3c) * (*(int *)(param_1 + 0x7a8) >> 0xd) >> 0xe;
            uVar1 = SignedSaturate(iVar7,0xf);
            SignedDoesSaturate(iVar7,0xf);
            uVar13 = (undefined2)uVar1;
          }
          else {
            uVar13 = 0;
          }
          *local_80 = uVar13;
          if (*(char *)(param_1 + 6) == '\x01') {
            local_80 = local_80 + 1;
          }
          else {
            local_80 = local_80 + 2;
          }
          local_70 = local_70 + 1;
          local_7c = local_7c + 0x40;
        } while (local_70 < *(byte *)(param_1 + 4));
        iVar7 = *(int *)(param_2 + 4);
      }
      *(short *)(param_2 + 2) = ((short)local_80 - (short)iVar7) + -2;
      return;
    }
  }
  *(short *)(param_2 + 2) = (short)local_80 - (short)iVar7;
  return;
}

