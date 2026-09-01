/* FUN_1000b24c @ 0x1000b24c */

void FUN_1000b24c(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  undefined1 *extraout_r3;
  undefined1 *puVar6;
  int iVar7;
  short *psVar8;
  
  iVar4 = DAT_1000b344;
  iVar7 = *DAT_1000b320;
  if (param_2 == 0) {
    psVar8 = (short *)*DAT_1000b324;
    sVar1 = *psVar8;
    if ((sVar1 == 0) || (psVar8[1] == 0)) goto LAB_1000b2de;
    psVar8[0xc] = -1;
    uVar3 = DAT_1000b334;
    iVar4 = DAT_1000b330;
    if (param_1 == 0) {
      FUN_10119dc2(DAT_1000b328);
      iVar4 = *DAT_1000b320;
      uVar3 = DAT_1000b32c;
joined_r0x1000b2d8:
      if (iVar4 == iVar7) goto LAB_1000b28c;
    }
    else {
      *(short *)(DAT_1000b330 + 0xe) = psVar8[1];
      *(undefined4 *)(iVar4 + 4) = uVar3;
      *(short *)(iVar4 + 8) = sVar1;
      *(undefined1 *)(iVar4 + 0x10) = 3;
      iVar4 = FUN_101324f8();
      if (iVar4 == 0) {
        FUN_10119dc2(DAT_1000b33c);
        iVar4 = *DAT_1000b320;
        uVar3 = DAT_1000b340;
        goto joined_r0x1000b2d8;
      }
      FUN_10119dc2(DAT_1000b328);
      if (*DAT_1000b320 == iVar7) {
        FUN_10119dc2(DAT_1000b338,iVar4);
        return;
      }
    }
  }
  else {
LAB_1000b2de:
    *(undefined1 *)(DAT_1000b344 + 4) = 0;
    uVar5 = *(short *)(iVar4 + 2) + 1;
    *(ushort *)(iVar4 + 2) = uVar5;
    puVar6 = DAT_1000b120;
    if (*(int *)(DAT_1000b348 + (uint)uVar5 * 4) == 0) {
      if (*DAT_1000b320 == iVar7) {
        iVar4 = *DAT_1000b11c;
        *DAT_1000b120 = 0;
        if (*DAT_1000b11c != iVar4) {
          FUN_1013cdc0();
          puVar6 = extraout_r3;
        }
        FUN_1000ab14(6,puVar6[4]);
        return;
      }
    }
    else if (*DAT_1000b320 == iVar7) {
      iVar4 = *DAT_1000b1b4;
      iVar7 = *(int *)(DAT_1000b1bc + (uint)*(ushort *)(DAT_1000b1b8 + 2) * 4);
      *DAT_1000b1c0 = iVar7;
      piVar2 = DAT_1000b1cc;
      if (param_1 == 0) {
        FUN_10119dc2(DAT_1000b1c4);
        iVar7 = *DAT_1000b1b4;
        uVar3 = DAT_1000b1c8;
joined_r0x1000b1ac:
        if (iVar7 == iVar4) goto LAB_1000b158;
      }
      else {
        *DAT_1000b1cc = iVar7 + 4;
        *(undefined2 *)(piVar2 + 2) = 1;
        *(undefined2 *)((int)piVar2 + 0xe) = 0xffff;
        *(undefined1 *)(piVar2 + 4) = 0;
        piVar2[1] = DAT_1000b1d0;
        iVar7 = FUN_101324f8();
        if (iVar7 == 0) {
          FUN_10119dc2(DAT_1000b1d8);
          iVar7 = *DAT_1000b1b4;
          uVar3 = DAT_1000b1dc;
          goto joined_r0x1000b1ac;
        }
        FUN_10119dc2(DAT_1000b1c4);
        if (*DAT_1000b1b4 == iVar4) {
          FUN_10119dc2(DAT_1000b1d4,iVar7);
          return;
        }
      }
      FUN_1013cdc0();
      uVar3 = DAT_1000b1c8;
LAB_1000b158:
      FUN_10119dc2(uVar3);
      return;
    }
  }
  FUN_1013cdc0();
  uVar3 = DAT_1000b32c;
LAB_1000b28c:
  FUN_10119dc2(uVar3);
  return;
}

