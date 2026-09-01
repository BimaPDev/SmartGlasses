/* FUN_10034178 @ 0x10034178 */

void FUN_10034178(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  
  iVar11 = 0;
  local_34 = *DAT_1003437c;
  local_3c = 0;
  uStack_38 = 0;
  iVar4 = FUN_1006be64(&local_3c,DAT_10034380,param_3,0);
  uVar10 = (DAT_10034384 - DAT_10034388) * 0x20 & 0xff00;
  if (-1 < iVar4) goto LAB_100341cc;
  FUN_100a5b78(DAT_1003438c | uVar10,DAT_10034394,DAT_10034390,DAT_10034380);
  do {
    while( true ) {
      if (*DAT_1003437c == local_34) {
        return;
      }
      FUN_1013cdc0();
LAB_100341cc:
      FUN_1011ea48(DAT_10034398,iVar11,0x2afc);
      FUN_10033ef8();
      iVar4 = FUN_100ed61c(2,0x33c,DAT_1003439c);
      pbVar3 = DAT_100343c0;
      uVar2 = DAT_100343b0;
      if (iVar4 != 0) break;
      FUN_100a5b78(DAT_100343a0 | uVar10,DAT_10034394,DAT_100343a4);
      FUN_1006c184(&local_3c);
    }
    uVar8 = DAT_100343a8 | uVar10;
    uVar9 = DAT_100343ac | uVar10;
    *DAT_100343c0 = (byte)iVar11;
    sVar7 = 0x65;
    while (sVar7 = sVar7 + -1, sVar7 != 0) {
      iVar5 = FUN_1006c070(&local_3c,iVar4 + 0x234);
      if (iVar5 < 0) {
        FUN_100a5b78(uVar10 | 0x2e00011,DAT_10034394,DAT_100343b4);
        break;
      }
      if (*(char *)(iVar4 + 0x235) == '\0') {
        FUN_100a5b78(DAT_100343b8 | uVar10,DAT_10034394,DAT_100343bc,DAT_10034380);
        break;
      }
      if (*(char *)(iVar4 + 0x234) == '\0') {
        iVar11 = iVar4 + 0x235;
        iVar5 = FUN_1011ea10(iVar11);
        iVar12 = iVar4 + iVar5 + 0x231;
        FUN_100a5b78(uVar8,DAT_10034394,DAT_100343c4,iVar11,*DAT_100343c0);
        iVar5 = FUN_1011ea18(iVar12,DAT_100343c8);
        if (iVar5 != 0) {
          iVar6 = FUN_1011ea18(iVar12,DAT_100343cc);
          iVar5 = DAT_10034398;
          if (iVar6 == 0) {
            if (99 < *DAT_100343c0) {
              *DAT_100343c0 = 99;
            }
            for (uVar13 = 0; uVar13 < *DAT_100343d0; uVar13 = uVar13 + 1) {
              iVar12 = FUN_1011ea18(iVar5 + uVar13 * 0x6e,iVar11);
              if (iVar12 == 0) {
                iVar11 = uVar13 * 0x6e + 10 + iVar5;
                break;
              }
            }
            FUN_100a5b78(uVar2 | uVar10,DAT_10034394,DAT_100343d4,iVar11);
            bVar1 = *pbVar3;
            FUN_1011e9f8(DAT_100343d8 + (uint)bVar1 * 0x101,iVar11,0x100);
            *pbVar3 = bVar1 + 1;
          }
          else {
            iVar5 = FUN_1011ea18(iVar12,DAT_100343dc);
            if (iVar5 != 0) {
              FUN_1011ea48(iVar4,0,300);
              FUN_10118a1c(iVar4,299,DAT_100343e0,DAT_10034380,iVar11);
              FUN_1006c2a0(iVar4);
              FUN_100a5b78(uVar9,DAT_10034394,DAT_100343e4,iVar4);
              FUN_100a5b78(uVar10 | 0x3300011,DAT_10034394,DAT_100343e8);
            }
          }
        }
      }
    }
    FUN_1006c184(&local_3c);
    FUN_100ed77c(2,iVar4);
  } while( true );
}

