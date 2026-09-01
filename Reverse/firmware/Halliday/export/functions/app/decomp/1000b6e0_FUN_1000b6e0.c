/* FUN_1000b6e0 @ 0x1000b6e0 */

void FUN_1000b6e0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  undefined1 *extraout_r3;
  undefined1 *puVar7;
  int iVar8;
  undefined4 unaff_r4;
  short *psVar9;
  undefined4 unaff_lr;
  undefined6 uVar10;
  
  iVar8 = *DAT_1000b77c;
  if (param_2 == 0) {
    iVar4 = *DAT_1000b780;
    uVar6 = *(ushort *)(iVar4 + 0x18);
    iVar5 = (uint)(ushort)(uVar6 + 1) * 0x1c;
    do {
      uVar6 = uVar6 + 1;
      if (*(ushort *)(iVar4 + 0x16) <= uVar6) {
        uVar6 = *(short *)(DAT_1000b784 + 2) + 1;
        *(ushort *)(DAT_1000b784 + 2) = uVar6;
        if (*(int *)(DAT_1000b788 + (uint)uVar6 * 4) == 0) goto LAB_1000b766;
        if (*DAT_1000b77c == iVar8) {
          iVar8 = *DAT_1000b1b4;
          iVar4 = *(int *)(DAT_1000b1bc + (uint)*(ushort *)(DAT_1000b1b8 + 2) * 4);
          *DAT_1000b1c0 = iVar4;
          piVar1 = DAT_1000b1cc;
          if (param_1 == 0) {
            FUN_10119dc2(DAT_1000b1c4);
            uVar2 = DAT_1000b1c8;
            if (*DAT_1000b1b4 == iVar8) goto LAB_1000b158;
          }
          else {
            *DAT_1000b1cc = iVar4 + 4;
            *(undefined2 *)(piVar1 + 2) = 1;
            *(undefined2 *)((int)piVar1 + 0xe) = 0xffff;
            *(undefined1 *)(piVar1 + 4) = 0;
            piVar1[1] = DAT_1000b1d0;
            iVar4 = FUN_101324f8();
            if (iVar4 == 0) {
              FUN_10119dc2(DAT_1000b1d8);
              uVar2 = DAT_1000b1dc;
              if (*DAT_1000b1b4 == iVar8) goto LAB_1000b158;
            }
            else {
              FUN_10119dc2(DAT_1000b1c4);
              if (*DAT_1000b1b4 == iVar8) {
                FUN_10119dc2(DAT_1000b1d4,iVar4);
                return;
              }
            }
          }
          FUN_1013cdc0();
          uVar2 = DAT_1000b1c8;
LAB_1000b158:
          FUN_10119dc2(uVar2);
          return;
        }
        goto LAB_1000b74a;
      }
      psVar9 = (short *)(*(int *)(iVar4 + 0x1c) + iVar5);
      iVar5 = iVar5 + 0x1c;
    } while ((char)psVar9[0xb] == '\0');
    *(ushort *)(iVar4 + 0x18) = uVar6;
    sVar3 = *psVar9;
    if (*DAT_1000b77c != iVar8) goto LAB_1000b74a;
  }
  else {
    *(undefined1 *)(DAT_1000b784 + 4) = 0;
LAB_1000b766:
    puVar7 = DAT_1000b120;
    if (*DAT_1000b77c == iVar8) {
      iVar8 = *DAT_1000b11c;
      *DAT_1000b120 = 0;
      if (*DAT_1000b11c != iVar8) {
        FUN_1013cdc0();
        puVar7 = extraout_r3;
      }
      FUN_1000ab14(6,puVar7[4]);
      return;
    }
LAB_1000b74a:
    uVar10 = FUN_1013cdc0();
    sVar3 = (short)((uint6)uVar10 >> 0x20);
    param_1 = (int)uVar10;
  }
  uVar2 = DAT_1000b0dc;
  iVar8 = DAT_1000b0d8;
  iVar4 = *DAT_1000b0cc;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_1000b0d0,0,sVar3 + 3,sVar3 + 2,0,iVar4,unaff_r4,unaff_lr);
    uVar2 = DAT_1000b0d4;
    if (*DAT_1000b0cc == iVar4) goto LAB_1000b07a;
  }
  else {
    *(short *)(DAT_1000b0d8 + 8) = sVar3 + 2;
    *(undefined4 *)(iVar8 + 4) = uVar2;
    *(short *)(iVar8 + 0xe) = sVar3 + 3;
    *(undefined1 *)(iVar8 + 0x10) = 4;
    iVar8 = FUN_101324f8();
    if (iVar8 == 0) {
      FUN_10119dc2(DAT_1000b0e4);
      uVar2 = DAT_1000b0e8;
      if (*DAT_1000b0cc == iVar4) goto LAB_1000b07a;
    }
    else {
      FUN_10119dc2(DAT_1000b0d0);
      if (*DAT_1000b0cc == iVar4) {
        FUN_10119dc2(DAT_1000b0e0,iVar8);
        return;
      }
    }
  }
  FUN_1013cdc0();
  uVar2 = DAT_1000b0d4;
LAB_1000b07a:
  FUN_10119dc2(uVar2);
  return;
}

