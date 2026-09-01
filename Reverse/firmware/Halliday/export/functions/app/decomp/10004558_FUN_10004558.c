/* FUN_10004558 @ 0x10004558 */

float FUN_10004558(undefined4 param_1)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r2;
  int iVar5;
  int iVar6;
  int extraout_r3;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint in_fpscr;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  uVar11 = CONCAT44(DAT_1000469c,param_1);
  iVar5 = *DAT_10004698;
  iVar7 = 10;
  iVar6 = 0;
  do {
    iVar3 = (int)((ulonglong)uVar11 >> 0x20);
    pbVar1 = (byte *)uVar11;
    uVar4 = (uint)*pbVar1;
    uVar11 = CONCAT44(iVar3,pbVar1 + 1);
    if (-1 < (int)((uint)*(byte *)(uVar4 + iVar3) << 0x1d)) {
      fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
      if (uVar4 == 0x2e) {
        iVar6 = 1;
        fVar2 = DAT_100046a0;
        while ((int)((uint)*(byte *)(DAT_1000469c + (uint)pbVar1[iVar6]) << 0x1d) < 0) {
          uVar12 = FUN_10003a34(pbVar1[iVar6] - 0x30);
          uVar11 = FUN_10003a34(iVar6);
          if (iVar6 < 0) {
            lVar13 = (ulonglong)DAT_100046a4 << 0x20;
            uVar11 = CONCAT44((int)((ulonglong)uVar11 >> 0x20) + -0x80000000,(int)uVar11);
            while( true ) {
              uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
              uVar8 = (undefined4)uVar11;
              uVar11 = FUN_10003798(uVar8,uVar9,0,DAT_100046a4);
              iVar7 = FUN_10003fd8(uVar8,uVar9,0,0);
              if (iVar7 != 0) break;
              lVar13 = FUN_10003d5c((int)lVar13,(int)((ulonglong)lVar13 >> 0x20),DAT_10004690,
                                    DAT_10004694);
            }
          }
          else {
            lVar13 = (ulonglong)DAT_100046a4 << 0x20;
            while( true ) {
              uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
              uVar8 = (undefined4)uVar11;
              uVar11 = FUN_10003798(uVar8,uVar9,0,DAT_100046a4);
              iVar7 = FUN_10003fd8(uVar8,uVar9,0,0);
              if (iVar7 != 0) break;
              lVar13 = FUN_10003b08((int)lVar13,(int)((ulonglong)lVar13 >> 0x20),DAT_10004690,
                                    DAT_10004694);
            }
          }
          uVar11 = FUN_10003b08((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)lVar13,
                                (int)((ulonglong)lVar13 >> 0x20));
          iVar7 = (int)((ulonglong)uVar11 >> 0x20);
          uVar12 = FUN_10003a58(fVar2);
          FUN_1000379c((int)uVar11,iVar7,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
          fVar2 = (float)FUN_100040f8();
          iVar6 = iVar6 + 1;
        }
        fVar10 = fVar10 + fVar2;
      }
      if (*DAT_10004698 == iVar5) {
        return fVar10;
      }
      uVar11 = FUN_1013cdc0();
      uVar4 = extraout_r2;
      iVar6 = extraout_r3;
    }
    iVar6 = iVar7 * iVar6 + uVar4 + -0x30;
  } while( true );
}

