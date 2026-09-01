/* FUN_100206d8 @ 0x100206d8 */

void FUN_100206d8(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_r4;
  uint unaff_r5;
  uint uVar10;
  int unaff_r6;
  int iVar11;
  code *pcVar12;
  undefined4 unaff_lr;
  
  iVar8 = *DAT_10020820;
  uVar10 = unaff_r5;
  if ((param_1 == 0) || (*(char *)(param_1 + 0x17a) == '\0')) {
LAB_10020812:
    if (*DAT_10020820 == iVar8) {
      return;
    }
  }
  else {
    iVar11 = param_1 + 0x14;
    uVar10 = (DAT_10020828 - DAT_10020824) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1002082c | uVar10,DAT_10020834,DAT_10020830,*(char *)(param_1 + 0x17a),iVar11);
    iVar3 = FUN_10025134(iVar11);
    if (iVar3 == 0) {
      iVar3 = FUN_10023584(*(undefined1 *)(param_1 + 0x17a),iVar11);
      *(char *)(param_1 + 0x17d) = (char)iVar3;
      if (iVar3 == 2) {
        uVar4 = uVar10 | 0x1460031;
        uVar6 = DAT_1002083c;
LAB_10020762:
        FUN_100a5b78(uVar4,DAT_10020834,uVar6);
        iVar3 = 1;
        iVar11 = unaff_r6;
      }
      else {
        if ((iVar3 == 0) && (iVar3 = FUN_100205b0(*(undefined1 *)(param_1 + 0x17a)), iVar3 == 0)) {
          uVar4 = DAT_1002084c | uVar10;
          uVar6 = DAT_10020850;
          goto LAB_10020762;
        }
        iVar3 = 0;
        iVar11 = unaff_r6;
      }
      if ((*(byte *)(param_1 + 0x17d) & 0xfd) == 1) {
LAB_1002077a:
        unaff_r6 = 0;
      }
      else {
        iVar5 = FUN_10023584(*(undefined1 *)(param_1 + 0x17a),param_1 + 0x38);
        *(char *)(param_1 + 0x17d) = (char)iVar5;
        if (iVar5 == 2) {
          uVar4 = uVar10 | 0x1560031;
          uVar6 = DAT_10020854;
        }
        else {
          if ((iVar5 != 0) || (iVar5 = FUN_100205b0(*(undefined1 *)(param_1 + 0x17a)), iVar5 != 0))
          goto LAB_1002077a;
          uVar4 = DAT_10020858 | uVar10;
          uVar6 = DAT_1002085c;
        }
        FUN_100a5b78(uVar4,DAT_10020834,uVar6);
        unaff_r6 = 1;
      }
      iVar5 = FUN_100259e8();
      if (iVar5 == 0) {
        unaff_r6 = 0;
        iVar3 = 0;
      }
      FUN_100a5b78(DAT_10020840 | uVar10,DAT_10020834,DAT_10020844,iVar3,unaff_r6);
      if ((iVar3 != 0) || (unaff_r6 != 0)) goto LAB_10020812;
      uVar6 = (**(code **)(DAT_10020848 + 0xc))(param_1);
      if (*DAT_10020820 == iVar8) {
        iVar9 = *DAT_10023858;
        uVar10 = unaff_r5;
        iVar5 = FUN_100401bc();
        iVar3 = DAT_10023860;
        iVar8 = DAT_1002385c;
        if (iVar5 == 0) {
          if (*DAT_10023858 == iVar9) {
            return;
          }
        }
        else {
          pcVar12 = *(code **)(DAT_1002385c + 0x18);
          uVar2 = (*pcVar12)();
          *(undefined1 *)(iVar3 + 0x6a8) = uVar2;
          iVar5 = (*pcVar12)();
          if (iVar5 == 0) {
            (**(code **)(iVar8 + 8))();
          }
          unaff_r5 = 0;
          *(undefined1 *)(iVar3 + 0x17) = 0;
          bVar7 = *(byte *)(iVar3 + 2) & 0xfc | 3;
          *(byte *)(iVar3 + 2) = bVar7;
          puVar1 = DAT_10023864;
          FUN_10052c38(2,4,0,bVar7,uVar6,iVar9,unaff_r4,uVar10,iVar11,unaff_lr);
          iVar8 = (*(code *)puVar1[2])();
          if (iVar8 == 0x5d) {
            uVar6 = 0x5d;
            if (*DAT_10023858 == iVar9) goto LAB_1002382a;
          }
          else if (*DAT_10023858 == iVar9) {
                    /* WARNING: Could not recover jumptable at 0x10023848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar1)(0x5d);
            return;
          }
        }
        uVar6 = FUN_1013cdc0();
LAB_1002382a:
        FUN_1004375c(uVar6,unaff_r5);
        return;
      }
    }
    else {
      unaff_r6 = iVar11;
      if (*DAT_10020820 == iVar8) goto LAB_1002072c;
    }
  }
  FUN_1013cdc0();
LAB_1002072c:
  FUN_100a5b78(uVar10 | 0x13e0031,DAT_10020834,DAT_10020838,unaff_r6);
  return;
}

