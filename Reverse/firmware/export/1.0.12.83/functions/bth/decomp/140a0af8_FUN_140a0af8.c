/* FUN_140a0af8 @ 0x140a0af8 */

void FUN_140a0af8(void)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  
  iVar10 = DAT_140a0dd4;
  FUN_140e5308(DAT_140a0dd4);
  iVar5 = FUN_140e5078();
  piVar4 = DAT_140a0e44;
  piVar13 = DAT_140a0ddc;
  piVar12 = DAT_140a0dd8;
  *DAT_140a0e44 = iVar5;
  *piVar12 = iVar10;
  *piVar13 = iVar5 + iVar10;
  uVar6 = FUN_140a047c();
  uVar7 = FUN_140e5308(iVar10);
  uVar8 = FUN_140e5508();
  iVar5 = FUN_140e5078(uVar7);
  uVar9 = FUN_140e51e8(uVar7);
  iVar10 = FUN_140e5978(1,uVar7,iVar10,DAT_140a0de0 - iVar10,uVar8,iVar5,uVar9,iVar5 << 1,
                        DAT_140a0de4);
  piVar3 = DAT_140a0df4;
  pcVar1 = DAT_140a0df0;
  piVar2 = DAT_140a0de8;
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a0e40,iVar10);
  }
  iVar10 = *DAT_140a0de8;
  bVar14 = iVar10 != DAT_140a0dec;
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  *piVar3 = (int)piVar2;
  if (((bVar14) || (piVar2[1] != DAT_140a0df8)) || (*piVar4 - 0x10U <= (uint)piVar2[2])) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a0e3c,DAT_140a0e38,iVar10,(short)piVar2[1],*(undefined2 *)((int)piVar2 + 6),
                 piVar2[2]);
  }
  iVar10 = FUN_140a034c(*piVar12);
  uVar7 = DAT_140a0e38;
  if (iVar10 == 0) {
    FUN_1402a6e8(4,0x300,DAT_140a0e04,DAT_140a0e00,DAT_140a0e1c,DAT_140a0e38);
    iVar10 = FUN_140a034c(*piVar13);
    uVar8 = uVar7;
    if (iVar10 == 0) {
      FUN_1402a6e8(4,0x30d,DAT_140a0e04,DAT_140a0e00,DAT_140a0e20,uVar7);
      FUN_1402a6e8(4,0x33e,DAT_140a0e04,DAT_140a0e00,DAT_140a0e24,uVar7);
      piVar13 = (int *)*piVar3;
      FUN_140e5658(piVar13,0,0xeb4);
      FUN_1409ff40(piVar13 + 4,1);
      piVar12 = (int *)FUN_1409ee1c();
      if (piVar12 != (int *)0x0) {
        piVar13[7] = *piVar12;
        *(short *)(piVar13 + 8) = (short)piVar12[1];
      }
      iVar10 = FUN_1409ee40();
      piVar13[6] = iVar10;
      FUN_140a1128(piVar13 + 0x5b);
      FUN_1409f3bc(piVar13 + 0x28c);
      piVar13[0x323] = 0;
      piVar13[0x324] = 0;
      piVar13[0x325] = 0;
      piVar13[0x322] = -1;
      piVar13[0x327] = 0;
      piVar13[0x328] = 0;
      piVar13[0x329] = 0;
      piVar13[0x326] = -1;
      piVar13[0x32a] = -1;
      piVar13[0x32b] = 0;
      piVar13[0x32c] = 0;
      iVar10 = FUN_140e5658(piVar13 + 0x32d,0,0x200);
      piVar13[0x32d] = 0x200;
      piVar13[0x32e] = 0x200;
      *(undefined4 *)(iVar10 + 8) = 0x3f800000;
      *(undefined4 *)(iVar10 + 0x10) = DAT_140a0e28;
      *(undefined4 *)(iVar10 + 0x14) = DAT_140a0e2c;
      *(undefined4 *)(iVar10 + 0x18) = DAT_140a0e30;
      iVar5 = DAT_140a0df8;
      iVar10 = DAT_140a0dec;
      piVar13[2] = 0xea4;
      *piVar13 = iVar10;
      piVar13[1] = iVar5;
      iVar10 = FUN_140a2edc(0,piVar13 + 4);
      iVar5 = *piVar3;
      piVar13[3] = iVar10;
      uVar9 = *(undefined4 *)(iVar5 + 0xc);
      FUN_1402a6e8(4,0x340,DAT_140a0e04,DAT_140a0e00,DAT_140a0e34,uVar7,uVar9);
      *pcVar1 = '\x01';
      FUN_140e54c8();
      goto LAB_140a0be0;
    }
    pcVar1[0] = '\x01';
    pcVar1[1] = '\0';
    FUN_1402a6e8(4,0x32a,DAT_140a0e04,DAT_140a0e00,DAT_140a0dfc,uVar7);
    iVar10 = *piVar13;
  }
  else {
    iVar10 = FUN_140a034c(*piVar13);
    uVar7 = DAT_140a0e38;
    if (iVar10 == 0) {
      FUN_1402a6e8(4,0x30d,DAT_140a0e04,DAT_140a0e00,DAT_140a0e20,DAT_140a0e38);
      pcVar1[0] = '\x01';
      pcVar1[1] = '\x06';
    }
    uVar8 = uVar7;
    FUN_1402a6e8(4,0x32a,DAT_140a0e04,DAT_140a0e00,DAT_140a0dfc,uVar7);
    iVar10 = *piVar12;
  }
  iVar5 = *piVar3;
  uVar11 = FUN_140e5278(iVar5 + 0x10,iVar10 + 0x10,0xea4);
  uVar11 = FUN_140a2edc(0,uVar11,*(undefined4 *)(iVar5 + 8));
  *(undefined4 *)(iVar5 + 0xc) = uVar11;
LAB_140a0be0:
  FUN_1402a6e8(4,0x345,DAT_140a0e04,DAT_140a0e00,DAT_140a0e08,uVar8,uVar9);
  iVar10 = *piVar3;
  if (iVar10 != 0) {
    iVar10 = iVar10 + 0x1c;
  }
  FUN_1402a9fc(DAT_140a0e0c,1,6,iVar10);
  *DAT_140a0e10 = 1;
  FUN_140a04dc(uVar6);
  if (*pcVar1 != '\0') {
    FUN_140a0534(0);
  }
  FUN_1402a6e8(4,0x350,DAT_140a0e04,DAT_140a0e00,DAT_140a0e14,uVar7);
  FUN_1402a6e8(4,0x352,DAT_140a0e04,DAT_140a0e00,DAT_140a0e18,0xeb4,0xeb4);
  return;
}

