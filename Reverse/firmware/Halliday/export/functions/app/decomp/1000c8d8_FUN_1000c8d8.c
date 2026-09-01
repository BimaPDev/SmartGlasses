/* FUN_1000c8d8 @ 0x1000c8d8 */

void FUN_1000c8d8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int extraout_r3;
  int iVar8;
  undefined4 unaff_r4;
  int iVar9;
  undefined4 unaff_r5;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  
  iVar8 = *DAT_1000c9f8;
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
  case 3:
switchD_1000c8ec_caseD_1:
    if (*DAT_1000c9f8 == iVar8) {
      return;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 8) == 1) {
      if (*DAT_1000c9f8 == iVar8) goto LAB_1000c90a;
    }
    else {
      if (*(int *)(param_1 + 8) != 2) goto switchD_1000c8ec_caseD_1;
      iVar7 = *DAT_1000c9f8;
      uVar4 = DAT_1000c9fc;
joined_r0x1000c980:
      if (iVar7 == iVar8) {
        iVar8 = *DAT_1000c740;
        iVar7 = FUN_1009e224();
        if (((iVar7 != 0) && (iVar7 = FUN_1011ea18(iVar7,uVar4), iVar7 == 0)) &&
           ((((iVar7 = FUN_1011ea18(uVar4,DAT_1000c744), iVar7 != 0 &&
              (iVar7 = FUN_1011ea18(uVar4,DAT_1000c74c), iVar7 != 0)) ||
             (iVar7 = FUN_100a4228(2), iVar7 == 1)) ||
            ((iVar7 = FUN_100a4228(4), iVar7 != 1 && (iVar7 = FUN_100a4228(2), iVar7 != 1)))))) {
          FUN_100a1690(DAT_1000c748,2,0);
        }
        iVar7 = FUN_1011ea18(uVar4,DAT_1000c744);
        if (((iVar7 == 0) || (iVar7 = FUN_1011ea18(uVar4,DAT_1000c74c), iVar7 == 0)) &&
           ((iVar7 = FUN_100a4228(4), iVar7 == 1 || (iVar7 = FUN_100a4228(2), iVar7 == 1)))) {
          if (*DAT_1000c740 == iVar8) {
            return;
          }
        }
        else if (*DAT_1000c740 == iVar8) goto LAB_100a1958;
        FUN_1013cdc0();
        iVar8 = extraout_r3;
LAB_100a1958:
        iVar7 = DAT_100a19d4;
        FUN_1011dbf4(DAT_100a19d8,0xffffffff);
        uVar2 = DAT_100a19e8;
        uVar1 = DAT_100a19e4;
        iVar9 = DAT_100a19dc - DAT_100a19e0;
        iVar10 = iVar7;
        for (iVar11 = 0; iVar11 < (int)(uint)*(byte *)(iVar7 + 4); iVar11 = iVar11 + 1) {
          uVar12 = *(undefined4 *)(iVar10 + 8);
          uVar5 = FUN_1011ea10(uVar4);
          iVar6 = FUN_1011ea30(uVar12,uVar4,uVar5);
          if ((iVar6 == 0) && (*(char *)(iVar10 + 0xc) != '\0')) {
            *(undefined1 *)(iVar10 + 0xc) = 0;
            *(char *)(iVar7 + 5) = *(char *)(iVar7 + 5) + -1;
            FUN_100a5b78(iVar9 * 0x20 & 0xff00U | 0xe00031,uVar2,uVar1,*(undefined4 *)(iVar10 + 8),
                         iVar8,unaff_r4,unaff_r5);
          }
          iVar10 = iVar10 + 8;
        }
        FUN_100a1684();
        return;
      }
    }
    break;
  case 4:
    if (*(int *)(param_1 + 8) == 1) {
      FUN_100a18bc(DAT_1000ca00);
      uVar3 = FUN_1012d932();
      if ((uVar3 < 0x1389) || (uVar3 = FUN_100a22ac(), uVar3 < 0x1389))
      goto switchD_1000c8ec_caseD_1;
      if (*DAT_1000c9f8 == iVar8) {
        FUN_100a1690(DAT_1000ca00,1,0);
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 8) != 2) goto switchD_1000c8ec_caseD_1;
      uVar3 = FUN_100a22ac();
      uVar4 = DAT_1000ca00;
      if (1000 < uVar3) {
        iVar7 = *DAT_1000c9f8;
        goto joined_r0x1000c980;
      }
      if (*DAT_1000c9f8 == iVar8) goto LAB_100a1958;
    }
    break;
  default:
    if (*DAT_1000c9f8 == iVar8) {
      FUN_100a5b78((DAT_1000ca08 - DAT_1000ca04) * 0x20 & 0xff00U | 0x1260011,DAT_1000ca0c,
                   DAT_1000ca10);
      return;
    }
    break;
  case 6:
    if (*(int *)(param_1 + 8) != 1) goto switchD_1000c8ec_caseD_1;
    FUN_1011aab8(1);
    if (*DAT_1000c9f8 == iVar8) {
      FUN_1011aabe(1);
      return;
    }
  }
  FUN_1013cdc0();
LAB_1000c90a:
  FUN_100a18bc(DAT_1000c9fc);
  return;
}

