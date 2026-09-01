/* FUN_1005d72c @ 0x1005d72c */

int FUN_1005d72c(code *param_1)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  byte local_d4;
  ushort local_d2;
  undefined2 local_d0;
  undefined1 auStack_cc [168];
  
  psVar1 = DAT_1005d8c8;
  if (*DAT_1005d8c8 == -0x45bb) {
    FUN_10083220(*(undefined4 *)(DAT_1005d8c8 + 2),&local_d8);
    psVar12 = DAT_1005d8c8;
    iVar13 = 0;
    iVar2 = FUN_10118a1c(auStack_cc,0x7f,DAT_1005d8d0,local_d2 + 0x76c,local_d4 + 1,local_d5,
                         local_d6,local_d7,local_d8,local_d0,*(undefined1 *)((int)psVar1 + 3));
    (*param_1)(auStack_cc,iVar2);
    if (0x20 < *(byte *)((int)psVar1 + 3)) {
      *(undefined1 *)((int)psVar1 + 3) = 0x20;
    }
    for (; iVar13 < (int)(uint)*(byte *)((int)psVar1 + 3); iVar13 = iVar13 + 1) {
      uVar3 = (uint)*(byte *)((int)psVar1 + iVar13 * 0x6c + 0x13);
      uVar9 = *(uint *)(psVar1 + iVar13 * 0x36 + 8) & 0xffffff;
      iVar6 = (int)(uVar3 * uVar9) / 100;
      uVar7 = (uint)*(byte *)((int)psVar12 + 0xb);
      uVar10 = (uint)*(byte *)((int)psVar12 + 9);
      uVar8 = *(undefined4 *)(psVar12 + 6);
      psVar15 = psVar12 + 10;
      uVar11 = DAT_1005d8d8;
      if ((*(byte *)(psVar1 + iVar13 * 0x36 + 5) & 1) == 0) {
        uVar11 = DAT_1005d8d4;
      }
      iVar14 = iVar13;
      iVar4 = FUN_10118a1c(auStack_cc,0x9f,DAT_1005d8dc,uVar11,iVar13,psVar15,uVar10,uVar9,iVar6,
                           uVar3,uVar8,uVar7);
      (*param_1)(auStack_cc,iVar4);
      if ((char)psVar12[4] == 'h') {
        FUN_10118a1c(auStack_cc,0x9f,DAT_1005d8e4,0x68,iVar14,psVar15,uVar10,uVar9,iVar6,uVar3,uVar8
                     ,uVar7);
        (*param_1)(auStack_cc,0x6c);
        iVar6 = 0;
        if (0x21 < *(byte *)(psVar1 + iVar13 * 0x36 + 5)) {
          *(byte *)(psVar1 + iVar13 * 0x36 + 5) = *(byte *)(psVar1 + iVar13 * 0x36 + 5) & 1 | 0x20;
        }
        psVar15 = psVar12 + 0x1a;
        for (iVar14 = 0; iVar14 < (int)(uint)(*(byte *)(psVar1 + iVar13 * 0x36 + 5) >> 1);
            iVar14 = iVar14 + 1) {
          iVar5 = FUN_10118a1c(auStack_cc + iVar6,0x9f - iVar6,DAT_1005d8e8,*(undefined4 *)psVar15);
          iVar6 = iVar6 + iVar5;
          if (0x9e < iVar6) break;
          psVar15 = psVar15 + 2;
        }
        auStack_cc[iVar6] = 0xd;
        auStack_cc[iVar6 + 1] = 10;
        auStack_cc[iVar6 + 2] = 0;
        (*param_1)(auStack_cc,iVar6 + 2);
        iVar2 = iVar2 + iVar4 + 0x6c + iVar6 + 2;
      }
      else {
        FUN_1011e9f0(auStack_cc,DAT_1005d8e0);
        (*param_1)(auStack_cc,0x16);
        iVar2 = iVar2 + iVar4 + 0x16;
      }
      psVar12 = psVar12 + 0x36;
    }
  }
  else {
    iVar2 = FUN_1013d306(auStack_cc,0,0xa4,DAT_1005d8cc,*DAT_1005d8c8);
    (*param_1)(auStack_cc,iVar2);
  }
  return iVar2;
}

