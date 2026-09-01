/* FUN_100cbd9c @ 0x100cbd9c */

void FUN_100cbd9c(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  code *pcVar5;
  short sVar6;
  int iVar7;
  undefined4 extraout_r3;
  int *piVar8;
  int *extraout_r3_00;
  uint uVar9;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar10;
  
  piVar8 = (int *)(param_1 + 0x58);
  iVar7 = param_1;
  do {
    iVar3 = FUN_10133e76(piVar8);
    if (iVar3 == 0) {
      uVar9 = (DAT_100cbe98 - DAT_100cbe94) * 0x20 & 0xff00;
      uVar4 = DAT_100cbeb8;
      uVar10 = DAT_100cbeb4;
      goto LAB_100cbdf4;
    }
    piVar8 = extraout_r3_00;
  } while (*extraout_r3_00 != iVar3);
  *extraout_r3_00 = iVar3 + -1;
  if (*(int *)(param_1 + 0x98) != 0) {
LAB_100cbc34:
    uVar1 = FUN_10133de0(*(undefined4 *)(param_1 + 0x98));
    sVar6 = 0;
    if (uVar1 != 0) {
      sVar6 = *(short *)(extraout_r1 + 0x14);
    }
    if ((uint)*(ushort *)(param_1 + 0x9c) < (uint)uVar1 + (uint)*(ushort *)(param_2 + 0xc)) {
      iVar7 = DAT_100cbd74 - DAT_100cbd70;
      uVar4 = DAT_100cbd80;
      uVar10 = DAT_100cbd7c;
    }
    else {
      sVar6 = sVar6 + 1;
      *(short *)(extraout_r1 + 0x14) = sVar6;
      sVar2 = FUN_100c2044(*(undefined4 *)(param_1 + 0x98),*(undefined2 *)(param_2 + 0xc),
                           *(undefined4 *)(param_2 + 8),0,0,0,DAT_100cbd84,param_1,iVar7,unaff_r4,
                           unaff_r5);
      if (*(short *)(param_2 + 0xc) == sVar2) {
        uVar10 = *(undefined4 *)(param_1 + 0x98);
        uVar4 = FUN_10133de0(uVar10);
        if (uVar4 < *(ushort *)(param_1 + 0x9c)) {
          iVar7 = FUN_10133e76(param_1 + 0x58);
          if ((iVar7 == 0) && (*(short *)(param_1 + 0x56) == sVar6)) {
            iVar7 = FUN_10133e76(extraout_r3);
            iVar3 = FUN_10133de0(param_2);
            uVar4 = (((uint)*(ushort *)(param_1 + 0x9c) + (uint)*(ushort *)(param_1 + 0x54) + -1) -
                    iVar3) / (uint)*(ushort *)(param_1 + 0x54);
            if (iVar7 <= (int)(uVar4 & 0xffff)) {
              FUN_100cb924(param_1,uVar4 - iVar7 & 0xffff);
              return;
            }
          }
          return;
        }
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined2 *)(param_1 + 0x9c) = 0;
        iVar7 = (**(code **)(*(int *)(param_1 + 4) + 0x10))(param_1,uVar10);
        if (iVar7 < 0) {
          if (iVar7 == -0x77) {
            return;
          }
          FUN_100a5b78(DAT_100cbd90 | (DAT_100cbd74 - DAT_100cbd70) * 0x20 & 0xff00U,DAT_100cbd98,
                       DAT_100cbd94);
          FUN_101342d2(param_1);
        }
        else {
          FUN_100cb924(param_1,sVar6);
        }
        FUN_100c1c90(uVar10);
        return;
      }
      iVar7 = DAT_100cbd74 - DAT_100cbd70;
      uVar4 = DAT_100cbd8c;
      uVar10 = DAT_100cbd88;
    }
    FUN_100a5b78(uVar4 | iVar7 * 0x20 & 0xff00U,DAT_100cbd78,uVar10);
    FUN_101342d2(param_1);
    return;
  }
  uVar4 = FUN_10132740(param_2 + 8);
  if (*(ushort *)(param_1 + 0x52) < uVar4) {
    uVar9 = (DAT_100cbe98 - DAT_100cbe94) * 0x20 & 0xff00;
    uVar4 = DAT_100cbea4;
    uVar10 = DAT_100cbea0;
  }
  else {
    pcVar5 = *(code **)(*(int *)(param_1 + 4) + 0xc);
    if (pcVar5 == (code *)0x0) {
      iVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x10))(param_1);
      if (iVar3 == 0) {
        FUN_100cb924(param_1,1);
        return;
      }
      if (iVar3 == -0x77) {
        return;
      }
      FUN_100a5b78((DAT_100cbe98 - DAT_100cbe94) * 0x20 & 0xff00U | 0x8b00011,DAT_100cbe9c,
                   DAT_100cbeb0,iVar3,iVar7,param_2,param_3);
      goto LAB_100cbe60;
    }
    iVar3 = (*pcVar5)(param_1);
    *(int *)(param_1 + 0x98) = iVar3;
    if (iVar3 != 0) {
      *(short *)(param_1 + 0x9c) = (short)uVar4;
      goto LAB_100cbc34;
    }
    uVar9 = (DAT_100cbe98 - DAT_100cbe94) * 0x20 & 0xff00;
    uVar4 = DAT_100cbeac;
    uVar10 = DAT_100cbea8;
  }
LAB_100cbdf4:
  FUN_100a5b78(uVar4 | uVar9,DAT_100cbe9c,uVar10);
LAB_100cbe60:
  FUN_101342d2(param_1);
  return;
}

