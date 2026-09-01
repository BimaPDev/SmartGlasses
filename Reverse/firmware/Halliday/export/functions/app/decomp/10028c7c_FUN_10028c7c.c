/* FUN_10028c7c @ 0x10028c7c */

void FUN_10028c7c(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_r1;
  int extraout_r1_00;
  byte *pbVar4;
  int extraout_r1_01;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *unaff_r4;
  int iVar8;
  code *unaff_r5;
  code *pcVar9;
  int *unaff_r6;
  int *piVar10;
  int *piVar11;
  int unaff_r8;
  uint unaff_r9;
  bool bVar12;
  
  piVar10 = DAT_10028e40;
  piVar11 = *(int **)(param_1 + 0xc);
  iVar7 = *DAT_10028e3c;
  if (*piVar11 == 0) {
    pcVar9 = unaff_r5;
    piVar10 = unaff_r6;
    if (*DAT_10028e3c != iVar7) goto LAB_10028e04;
    return;
  }
  FUN_1012b322(piVar11[0x75]);
  pcVar9 = DAT_10028e48;
  iVar8 = *piVar10;
  unaff_r4 = (byte *)0x0;
  if (iVar8 == 0) goto LAB_10028dcc;
  (**(code **)(DAT_10028e44 + 0x2c))();
  *(undefined4 *)(iVar8 + 0x2dc) = *(undefined4 *)pcVar9;
  *(undefined4 *)(iVar8 + 0x2e0) = *(undefined4 *)(pcVar9 + 8);
  iVar5 = extraout_r1;
  if (pcVar9[0xc] == (code)0x0) goto LAB_10028d74;
  unaff_r9 = iVar8 + 0x1d8;
  pcVar9[0xc] = (code)0x0;
  FUN_1011ea48(unaff_r9,0,0x80);
  FUN_1011ea48(iVar8 + 600,0,0x80);
  uVar3 = FUN_1011ea10(pcVar9 + 0xd);
  FUN_1011ea40(unaff_r9,pcVar9 + 0xd,uVar3);
  uVar3 = FUN_1011ea10(pcVar9 + 0x8d);
  FUN_1011ea40(iVar8 + 600,pcVar9 + 0x8d,uVar3);
  unaff_r8 = *piVar10;
  iVar5 = extraout_r1_00;
  if (unaff_r8 == 0) goto LAB_10028d74;
  pcVar9 = (code *)(unaff_r8 + 0x1d8);
  if (pcVar9 == (code *)0x0) goto LAB_10028d74;
  unaff_r4 = (byte *)(unaff_r8 + 600);
  if (unaff_r4 == (byte *)0x0) goto LAB_10028d74;
  FUN_10097998(*(undefined4 *)(unaff_r8 + 8),pcVar9);
  unaff_r8 = *(int *)(unaff_r8 + 4);
  FUN_10089bf8(unaff_r8);
  unaff_r9 = FUN_1002e900(unaff_r8,unaff_r4);
  iVar8 = FUN_1011ea10(unaff_r4);
  pbVar4 = PTR_LAB_1015b3a4_1_10028e4c;
  if (iVar8 != 0) goto LAB_10028e08;
  do {
    FUN_10097998(unaff_r8,pbVar4);
    FUN_100a5b78(((int)PTR_DAT_10028e54 - (int)PTR_DAT_10028e50) * 0x20 & 0xff00U | 0x2d0032,
                 PTR_s_music_view_update_song_name_albu_10028e5c,
                 PTR_s_song_name__s_song_album__s_10028e58,pcVar9,unaff_r4);
    iVar5 = extraout_r1_01;
LAB_10028d74:
    unaff_r4 = (byte *)*piVar10;
    unaff_r5 = pcVar9;
    if (unaff_r4 != (byte *)0x0) {
      uVar6 = 1000;
      bVar12 = 999 < *(uint *)(unaff_r4 + 0x2e0);
      unaff_r5 = (code *)(*(uint *)(unaff_r4 + 0x2dc) / 1000);
      if (bVar12) {
        iVar5 = 100;
      }
      unaff_r9 = *(uint *)(unaff_r4 + 0x2e0) / 1000;
      if (!bVar12) {
        uVar6 = 0;
      }
      unaff_r8 = 0x3c;
      uVar2 = uVar6;
      if (bVar12) {
        uVar6 = (uint)((int)unaff_r5 * iVar5) / unaff_r9;
        uVar2 = 0;
      }
      FUN_1012bbea(*(undefined4 *)(unaff_r4 + 0x10),uVar6,uVar2);
      FUN_10097aec(*(undefined4 *)(unaff_r4 + 0x18),PTR_s__02d__02d_10152ab3_0xf_10028e60,
                   unaff_r9 / 0x3c,unaff_r9 % 0x3c);
      FUN_10097aec(*(undefined4 *)(unaff_r4 + 0x14),PTR_s__02d__02d_10152ab3_0xf_10028e60,
                   (uint)unaff_r5 / 0x3c,(uint)unaff_r5 % 0x3c);
    }
LAB_10028dcc:
    if (*piVar10 != 0) {
      bVar1 = *(byte *)(*piVar10 + 0x2d8);
      unaff_r5 = *(code **)(DAT_10028e44 + 8);
      uVar6 = (*unaff_r5)();
      unaff_r4 = DAT_10028e64;
      if ((bVar1 & 1) != uVar6) {
        bVar1 = *DAT_10028e64;
        *DAT_10028e64 = bVar1 + 1;
        if ((byte)(bVar1 + 1) < 6) goto LAB_10028dfa;
        (*unaff_r5)();
        FUN_10028bd0();
      }
      *unaff_r4 = 0;
    }
LAB_10028dfa:
    pcVar9 = unaff_r5;
    if (*DAT_10028e3c == iVar7) {
      FUN_1012b32c(piVar11[0x75]);
      return;
    }
LAB_10028e04:
    FUN_1013cdc0();
LAB_10028e08:
    uVar6 = unaff_r9;
    if (0xdc < (int)unaff_r9) {
      uVar6 = 0xdc;
    }
    FUN_10125640(unaff_r8,uVar6);
    pbVar4 = unaff_r4;
  } while( true );
}

