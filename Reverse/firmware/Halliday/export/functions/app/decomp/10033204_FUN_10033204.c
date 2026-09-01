/* FUN_10033204 @ 0x10033204 */

void FUN_10033204(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  
  iVar8 = *DAT_10033460;
  puVar9 = (undefined4 *)*DAT_10033464;
  uVar11 = (DAT_10033468 - DAT_1003346c) * 0x20 & 0xff00;
  if (puVar9 == (undefined4 *)0x0) {
    if (*DAT_10033460 != iVar8) goto LAB_10033232;
  }
  else {
    if (puVar9[5] == 0) {
      if (*DAT_10033460 == iVar8) {
        uVar11 = uVar11 | 0x2480011;
        uVar5 = DAT_1003347c;
        goto LAB_1003323e;
      }
    }
    else {
      iVar12 = (int)puVar9 + 0x271;
      FUN_1011ea48(iVar12,0,0x800);
      iVar10 = puVar9[0x5a];
      puVar13 = puVar9 + 0x5c;
      FUN_100a5b78(DAT_10033480 | uVar11,DAT_10033478,DAT_10033484,param_1,iVar10,puVar13);
      uVar5 = puVar9[0x59];
      uVar6 = puVar9[0x58];
      uVar7 = (uint)*(ushort *)((int)puVar9 + 0x16e);
      FUN_100a5b78(uVar11 | 0x2500034,DAT_10033478,DAT_10033488,*(undefined1 *)((int)puVar9 + 0x16d)
                   ,uVar7,uVar6,uVar5);
      if (param_1 == 1) {
        iVar2 = FUN_10032df8();
        uVar1 = DAT_10033490;
        uVar7 = DAT_1003348c;
        uVar6 = DAT_10033478;
        if (iVar2 == 0) {
          iVar2 = iVar10 + 1;
          FUN_100a5b78(DAT_100334a0 | uVar11,DAT_10033478,DAT_100334a4,iVar10,iVar2,puVar9[0x58],
                       uVar5);
        }
        else {
          puVar9[0x5a] = 0;
          puVar9[0x58] = 0;
          FUN_100a5b78(uVar7 | uVar11,uVar6,uVar1);
          iVar2 = 0;
        }
      }
      else {
        iVar2 = iVar10;
        if (param_1 == 2) {
          if (iVar10 != 0) {
            iVar2 = iVar10 + -1;
            if (iVar2 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_10035484(puVar13,iVar10 + -2);
            }
            if (uVar4 < (uint)puVar9[0x59]) {
              FUN_100a5b78(DAT_100334a8 | uVar11,DAT_10033478,DAT_100334ac,iVar10,iVar2,puVar9[0x58]
                           ,uVar4);
            }
            else {
              FUN_100a5b78(uVar11 | 0x27c0021,DAT_10033478,DAT_100334b0,uVar4,uVar7,uVar6,uVar5);
            }
          }
        }
        else if (param_1 == 0) {
          FUN_100a5b78(DAT_100334b4 | uVar11,DAT_10033478,DAT_100334b8);
          FUN_1012bb5c(puVar9[8],0,(int)*(short *)(puVar9 + 0x59));
          FUN_1012bb2a(puVar9[8],(int)*(short *)(puVar9 + 0x58));
          FUN_1008a2b0(puVar9[5],0,0);
          FUN_1011ea48(iVar12,0,0x800);
          FUN_1011ea48((int)puVar9 + 0xa71,0,0x800);
        }
      }
      FUN_10097998(puVar9[5],DAT_10033494);
      iVar3 = FUN_1003304c(iVar12,iVar2);
      FUN_1004f110(*puVar9);
      uVar5 = FUN_1011ea10(iVar12);
      iVar10 = iVar3;
      FUN_100a5b78(uVar11 | 0x2a80033,DAT_10033478,DAT_10033498,iVar2,iVar3,uVar5);
      if (iVar3 == 0) {
        FUN_100a5b78(uVar11 | 0x2ac0012,DAT_10033478,DAT_1003349c,iVar2,puVar13,uVar5);
        uVar5 = 0x35;
        uVar6 = puVar9[5];
      }
      else {
        iVar3 = FUN_1011ea10(iVar12);
        if (iVar3 != 0) {
          FUN_100a5b78(DAT_100334c4 | uVar11,DAT_10033478,DAT_100334c8,DAT_10033478,iVar12,uVar5);
          FUN_10097aec(puVar9[5],DAT_100334cc,iVar12);
          FUN_1004f110(*puVar9);
          if (*DAT_10033460 == iVar8) {
            FUN_1012bb2a(puVar9[8],(int)*(short *)(puVar9 + 0x58));
            return;
          }
          goto LAB_10033232;
        }
        FUN_100a5b78(DAT_100334bc | uVar11,DAT_10033478,DAT_100334c0,iVar2,iVar10,uVar5);
        uVar5 = 0x36;
        uVar6 = puVar9[5];
      }
      uVar5 = FUN_1004cf14(uVar5);
      if (*DAT_10033460 == iVar8) {
        FUN_10097998(uVar6,uVar5);
        return;
      }
    }
LAB_10033232:
    FUN_1013cdc0();
  }
  uVar11 = DAT_10033470 | uVar11;
  uVar5 = DAT_10033474;
LAB_1003323e:
  FUN_100a5b78(uVar11,DAT_10033478,uVar5);
  return;
}

