/* FUN_1000b3d0 @ 0x1000b3d0 */

void FUN_1000b3d0(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_r2;
  ushort uVar8;
  undefined1 *extraout_r3;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined4 unaff_r4;
  uint extraout_r12;
  undefined4 unaff_lr;
  undefined8 uVar13;
  
  uVar13 = CONCAT44(param_2,param_1);
  iVar10 = *DAT_1000b474;
  iVar7 = *DAT_1000b478;
  uVar1 = *(ushort *)(iVar7 + 0x16);
  uVar5 = 0;
LAB_1000b3e6:
  uVar11 = uVar5;
  if ((uVar11 & 0xffff) < (uint)uVar1) goto LAB_1000b3f0;
  cVar12 = '\0';
  goto LAB_1000b400;
LAB_1000b422:
  iVar7 = *DAT_1000b0cc;
  if ((int)uVar13 == 0) {
    FUN_10119dc2(DAT_1000b0d0,0,sVar2 + 3,sVar2 + 2,0,iVar7,unaff_r4,unaff_lr);
    uVar6 = DAT_1000b0d4;
    if (*DAT_1000b0cc == iVar7) goto LAB_1000b07a;
  }
  else {
    *(short *)(DAT_1000b0d8 + 8) = sVar2 + 2;
    *(undefined4 *)(iVar3 + 4) = uVar6;
    *(short *)(iVar3 + 0xe) = sVar2 + 3;
    *(undefined1 *)(iVar3 + 0x10) = 4;
    iVar10 = FUN_101324f8();
    if (iVar10 == 0) {
      FUN_10119dc2(DAT_1000b0e4);
      uVar6 = DAT_1000b0e8;
      if (*DAT_1000b0cc == iVar7) goto LAB_1000b07a;
    }
    else {
      FUN_10119dc2(DAT_1000b0d0);
      if (*DAT_1000b0cc == iVar7) {
        FUN_10119dc2(DAT_1000b0e0,iVar10);
        return;
      }
    }
  }
  FUN_1013cdc0();
  uVar6 = DAT_1000b0d4;
LAB_1000b07a:
  FUN_10119dc2(uVar6);
  return;
LAB_1000b3f0:
  cVar12 = *(char *)(uVar11 * 0x1c + *(int *)(iVar7 + 0x1c) + 0x16);
  uVar5 = uVar11 + 1;
  if (cVar12 == '\0') goto LAB_1000b3e6;
  *(short *)(iVar7 + 0x18) = (short)uVar11;
LAB_1000b400:
  uVar6 = DAT_1000b0dc;
  iVar3 = DAT_1000b0d8;
  if ((int)((ulonglong)uVar13 >> 0x20) == 0) {
    sVar2 = *(short *)(*(int *)(iVar7 + 0x1c) + uVar11 * 0x1c);
    if ((sVar2 != 0) && (cVar12 != '\0')) {
      if (*DAT_1000b474 == iVar10) goto LAB_1000b422;
      goto LAB_1000b41a;
    }
  }
  else {
    *(undefined1 *)(DAT_1000b47c + 4) = 0;
  }
  uVar8 = *(short *)(DAT_1000b47c + 2) + 1;
  *(ushort *)(DAT_1000b47c + 2) = uVar8;
  puVar9 = DAT_1000b120;
  if (*(int *)(DAT_1000b480 + (uint)uVar8 * 4) == 0) {
    if (*DAT_1000b474 == iVar10) {
      iVar7 = *DAT_1000b11c;
      *DAT_1000b120 = 0;
      if (*DAT_1000b11c != iVar7) {
        FUN_1013cdc0();
        puVar9 = extraout_r3;
      }
      FUN_1000ab14(6,puVar9[4]);
      return;
    }
LAB_1000b41a:
    uVar13 = FUN_1013cdc0();
    iVar7 = extraout_r2;
    uVar5 = extraout_r12;
    goto LAB_1000b3e6;
  }
  if (*DAT_1000b474 != iVar10) goto LAB_1000b41a;
  iVar7 = *DAT_1000b1b4;
  iVar10 = *(int *)(DAT_1000b1bc + (uint)*(ushort *)(DAT_1000b1b8 + 2) * 4);
  *DAT_1000b1c0 = iVar10;
  piVar4 = DAT_1000b1cc;
  if ((int)uVar13 == 0) {
    FUN_10119dc2(DAT_1000b1c4);
    uVar6 = DAT_1000b1c8;
    if (*DAT_1000b1b4 == iVar7) goto LAB_1000b158;
  }
  else {
    *DAT_1000b1cc = iVar10 + 4;
    *(undefined2 *)(piVar4 + 2) = 1;
    *(undefined2 *)((int)piVar4 + 0xe) = 0xffff;
    *(undefined1 *)(piVar4 + 4) = 0;
    piVar4[1] = DAT_1000b1d0;
    iVar10 = FUN_101324f8();
    if (iVar10 == 0) {
      FUN_10119dc2(DAT_1000b1d8);
      uVar6 = DAT_1000b1dc;
      if (*DAT_1000b1b4 == iVar7) goto LAB_1000b158;
    }
    else {
      FUN_10119dc2(DAT_1000b1c4);
      if (*DAT_1000b1b4 == iVar7) {
        FUN_10119dc2(DAT_1000b1d4,iVar10);
        return;
      }
    }
  }
  FUN_1013cdc0();
  uVar6 = DAT_1000b1c8;
LAB_1000b158:
  FUN_10119dc2(uVar6);
  return;
}

