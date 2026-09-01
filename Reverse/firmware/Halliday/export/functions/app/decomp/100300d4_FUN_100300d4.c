/* FUN_100300d4 @ 0x100300d4 */

void FUN_100300d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  
  iVar9 = *DAT_1003029c;
  iVar14 = *DAT_100302a0;
  if ((iVar14 == 0) || (iVar11 = *(int *)(DAT_100302a4 + 0xe8), iVar11 == 0)) {
LAB_10030288:
    if (*DAT_1003029c == iVar9) {
      return;
    }
  }
  else {
    if (*(char *)(iVar11 + 0x2a5) != '\0') {
      uVar6 = FUN_10126fb4(*(undefined4 *)(iVar14 + 0xc),0xffffffff,param_3,
                           *(char *)(iVar11 + 0x2a5),param_1,param_2,param_3);
      pbVar5 = DAT_100302d4;
      iVar3 = DAT_100302ac;
      iVar7 = DAT_100302a8;
      bVar1 = *(byte *)(iVar11 + 0x2a4);
      uVar12 = (uint)bVar1;
      bVar2 = *DAT_100302d4;
      iVar11 = iVar11 + 0xa2;
      iVar15 = iVar11;
      if (uVar12 == 0) {
        if (bVar2 != 0) goto LAB_10030160;
LAB_100301a0:
        uVar10 = (uint)*DAT_100302d4;
        FUN_100a5b78((DAT_100302ac - DAT_100302a8) * 0x20 & 0xff00U | DAT_100302c0,DAT_100302b8,
                     DAT_100302c4,uVar12,uVar10,iVar11);
      }
      else {
        if (uVar12 != 2) {
          if (((uVar12 != 1) && (uVar12 != 3)) || (bVar2 != 1)) goto LAB_10030160;
          goto LAB_100301a0;
        }
        if ((bVar2 & 0xfd) == 0) goto LAB_100301a0;
LAB_10030160:
        uVar10 = uVar12;
        FUN_100a5b78((DAT_100302ac - DAT_100302a8) * 0x20 & 0xff00U | 0x2340033,DAT_100302b8,
                     DAT_100302bc,*DAT_100302d4,uVar12,iVar11);
        uVar6 = 0;
        if (*(int *)(iVar14 + 0xc) != 0) {
          uVar6 = FUN_10126fb4(*(int *)(iVar14 + 0xc),0xffffffff);
        }
      }
      FUN_100a5b78(DAT_100302c8 | (iVar3 - iVar7) * 0x20 & 0xff00U,DAT_100302b8,DAT_100302cc,uVar12,
                   uVar10,iVar15);
      pbVar4 = DAT_100302d0;
      if ((bVar1 & 0xfd) == 0) {
        iVar7 = FUN_1011ea10(iVar11);
        if (iVar7 != 0) {
          FUN_10097998(uVar6,iVar11);
        }
        *(undefined1 *)(iVar14 + 0x41c) = 0;
        if (uVar12 == 2) {
          FUN_10030054();
        }
      }
      else {
        *DAT_100302d0 = *DAT_100302d0 + 1;
        FUN_10048434(0);
        FUN_1001b8c8(0);
        if (5 < *pbVar4) {
          iVar7 = *(int *)(iVar14 + 0x1fc);
          *pbVar4 = 0;
          if (iVar7 != 0) {
            FUN_10094ab8();
            *(undefined4 *)(iVar14 + 0x1fc) = 0;
          }
          uVar13 = *(undefined4 *)(iVar14 + 0x10);
          uVar8 = FUN_1004cf14(1);
          FUN_10097998(uVar13,uVar8);
          *(undefined1 *)(iVar14 + 0x41c) = 1;
          iVar14 = FUN_1011ea10(iVar11);
          if (iVar14 != 0) {
            FUN_10097998(uVar6,iVar11);
          }
        }
      }
      FUN_10089bf8(uVar6);
      FUN_10126f8e(uVar6,1,0);
      FUN_10126f84(uVar6,100,0);
      *pbVar5 = bVar1;
      goto LAB_10030288;
    }
    if (*(char *)(iVar11 + 0x14ca) == '\0') goto LAB_10030288;
    if (*DAT_1003029c == iVar9) goto LAB_1003011c;
  }
  FUN_1013cdc0();
LAB_1003011c:
  FUN_100a5b78(DAT_100302b0 | (DAT_100302ac - DAT_100302a8) * 0x20 & 0xff00U,DAT_100302b8,
               DAT_100302b4);
  return;
}

