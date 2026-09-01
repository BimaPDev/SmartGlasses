/* FUN_10033ef8 @ 0x10033ef8 */

int FUN_10033ef8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint extraout_r3;
  uint uVar11;
  int *piVar12;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined1 auStack_134 [260];
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_10034120;
  iVar2 = FUN_1006c468(DAT_10034124,auStack_134,param_3,0);
  uVar11 = (DAT_10034128 - DAT_1003412c) * 0x20 & 0xff00;
  if (-1 < iVar2) {
    uVar3 = local_30;
    if (local_30 < 0x3001) goto LAB_10033f68;
    FUN_100a5b78(uVar11 | 0x740012,DAT_10034134,DAT_10034138,local_30,0x3000);
    goto LAB_10033f54;
  }
  uVar3 = uVar11 | 0x6e0000;
  uVar10 = DAT_10034130;
LAB_10033f2c:
  FUN_100a5b78(uVar3 | 0x11,DAT_10034134,uVar10);
LAB_10033f54:
  iVar2 = -1;
  do {
    if (*DAT_10034120 == local_2c) {
      return iVar2;
    }
    FUN_1013cdc0();
    uVar3 = extraout_r3;
LAB_10033f68:
    iVar4 = thunk_FUN_1009f30c(uVar3 + 1,DAT_1003413c);
    if (iVar4 == 0) {
      uVar3 = uVar11 | 0x7b0000;
      uVar10 = DAT_10034140;
      goto LAB_10033f2c;
    }
    local_140 = 0;
    uStack_13c = 0;
    local_138 = 0;
    iVar2 = FUN_1006ba84(&local_140,DAT_10034124,1);
    if (iVar2 == 0) {
      iVar5 = FUN_1006bc84(&local_140,iVar4,local_30);
      FUN_100a5b78(uVar11 | 0x850031,DAT_10034134,DAT_10034144,iVar5);
      FUN_1006bc30(&local_140);
      if (iVar5 == 0) {
        FUN_100a5b78(uVar11 | 0xc60011,DAT_10034134,DAT_1003416c);
      }
      else {
        *(undefined1 *)(iVar4 + iVar5) = 0;
        iVar5 = FUN_1011a5de(iVar4);
        if (iVar5 == 0) break;
        iVar6 = FUN_1011a5ec(iVar5,DAT_10034150);
        iVar7 = FUN_1011a636();
        if (iVar7 == 0) {
          FUN_100a5b78(uVar11 | 0xbf0011,DAT_10034134,DAT_10034168);
        }
        else if (iVar6 != 0) {
          for (piVar12 = *(int **)(iVar6 + 8); piVar12 != (int *)0x0; piVar12 = (int *)*piVar12) {
            iVar6 = FUN_1011a644(piVar12);
            if (iVar6 == 0) {
              FUN_100a5b78(uVar11 | 0xa80011,DAT_10034134,DAT_10034154);
            }
            else {
              iVar6 = FUN_1011a5ec(piVar12,DAT_10034158);
              iVar7 = FUN_1011a5ec(piVar12,DAT_1003415c);
              iVar8 = FUN_1011a628(iVar6);
              if ((((iVar8 != 0) && (*(int *)(iVar6 + 0x10) != 0)) &&
                  (iVar9 = FUN_1011a628(iVar7), iVar8 = DAT_10034174, iVar9 != 0)) &&
                 (*(int *)(iVar7 + 0x10) != 0)) {
                FUN_1011e9f8(*DAT_10034160 * 0x6e + DAT_10034174,*(undefined4 *)(iVar6 + 0x10),10);
                FUN_1011e9f8(*DAT_10034160 * 0x6e + iVar8 + 10,*(undefined4 *)(iVar7 + 0x10),100);
                piVar1 = DAT_10034160;
                iVar7 = *DAT_10034160;
                iVar9 = iVar7 * 0x6e;
                iVar6 = iVar8 + iVar9;
                *(undefined1 *)(iVar6 + 9) = 0;
                *(undefined1 *)(iVar6 + 0x6d) = 0;
                *piVar1 = iVar7 + 1;
                FUN_100a5b78(uVar11 | 0xb90032,DAT_10034134,DAT_10034164,iVar6,iVar9 + 10 + iVar8);
              }
            }
          }
        }
        FUN_10054e90(iVar5);
      }
    }
    else {
      FUN_100a5b78(uVar11 | 0xcb0011,DAT_10034134,DAT_10034170,iVar2);
    }
    FUN_1012d1f4(iVar4);
  } while( true );
  iVar2 = FUN_10054e80();
  if (iVar2 == 0) {
    FUN_100a5b78(uVar11 | 0x960011,DAT_10034134,DAT_1003414c,0);
  }
  else {
    FUN_100a5b78(uVar11 | 0x920011,DAT_10034134,DAT_10034148,iVar2);
  }
  FUN_1012d1f4(iVar4);
  goto LAB_10033f54;
}

