/* FUN_100404a8 @ 0x100404a8 */

void FUN_100404a8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  uint uVar5;
  undefined4 unaff_r4;
  uint uVar6;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  uint uVar7;
  
  iVar4 = *DAT_1004062c;
  uVar7 = param_1;
  iVar2 = FUN_1000f6f0();
  puVar1 = DAT_10040640;
  if (iVar2 == 0) {
    uVar6 = param_1 - 0x71;
    switch(param_1) {
    case 0x71:
      FUN_100a5b78((DAT_10040634 - DAT_10040630) * 0x20 & 0xff00U | 0x18a0031,DAT_1004063c,
                   DAT_10040638,DAT_10040630,uVar7,param_2,param_3);
      if (*DAT_1004062c == iVar4) {
        UNRECOVERED_JUMPTABLE = (code *)*DAT_10040640;
LAB_10040512:
                    /* WARNING: Could not recover jumptable at 0x1004051a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      break;
    case 0x72:
      uVar5 = (*(code *)DAT_10040640[9])();
      if (99 < uVar5) goto switchD_100404de_default;
      uVar6 = (uVar5 / 0x14 + 1 & 0xff) * 0x14 & 0xff;
      FUN_100a5b78((DAT_10040634 - DAT_10040630) * 0x20 & 0xff00U | 0x1940031,DAT_1004063c,
                   DAT_10040644,uVar6,uVar7,param_2,param_3);
      if (*DAT_1004062c == iVar4) {
        UNRECOVERED_JUMPTABLE = (code *)puVar1[8];
LAB_10040562:
                    /* WARNING: Could not recover jumptable at 0x1004056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uVar6);
        return;
      }
      break;
    case 0x73:
      uVar5 = (*(code *)DAT_10040640[9])();
      if (uVar5 == 0) goto switchD_100404de_default;
      if (uVar5 % 0x14 == 0) {
        uVar5 = uVar5 - 0x14;
      }
      else {
        uVar5 = (uVar5 / 0x14) * 0x14;
      }
      uVar6 = uVar5 & 0xff;
      if (uVar6 < 0x14) {
        uVar6 = 0;
      }
      FUN_100a5b78(DAT_10040648 | (DAT_10040634 - DAT_10040630) * 0x20 & 0xff00U,DAT_1004063c,
                   DAT_1004064c,uVar6,uVar7,param_2,param_3);
      if (*DAT_1004062c == iVar4) {
        UNRECOVERED_JUMPTABLE = (code *)puVar1[8];
        goto LAB_10040562;
      }
      break;
    case 0x74:
      FUN_100a5b78((DAT_10040634 - DAT_10040630) * 0x20 & 0xff00U | 0x1aa0031,DAT_1004063c,
                   DAT_10040650,DAT_10040630,uVar7,param_2,param_3);
      if (*DAT_1004062c == iVar4) {
        UNRECOVERED_JUMPTABLE = (code *)DAT_10040640[5];
        goto LAB_10040512;
      }
      break;
    case 0x75:
      uVar5 = (DAT_10040634 - DAT_10040630) * 0x20 & 0xff00;
      FUN_100a5b78(DAT_10040654 | uVar5,DAT_1004063c,DAT_10040658,uVar5,uVar7,param_2,param_3);
      if (*DAT_1004062c == iVar4) {
        UNRECOVERED_JUMPTABLE = (code *)DAT_10040640[4];
        goto LAB_10040512;
      }
      break;
    default:
switchD_100404de_default:
      if (*DAT_1004062c == iVar4) {
        return;
      }
    }
LAB_100404c6:
    FUN_1013cdc0();
    uVar3 = extraout_r2;
  }
  else {
    uVar3 = 0;
    uVar6 = param_1;
    if (*DAT_1004062c != iVar4) goto LAB_100404c6;
  }
  iVar2 = *DAT_10040498;
  FUN_100a5b78((DAT_10040490 - DAT_10040494) * 0x20 & 0xff00U | 0x1720031,DAT_100404a0,DAT_1004049c,
               uVar6,uVar6,iVar2,uVar3,unaff_r4,unaff_r5,unaff_lr);
  if (uVar6 == 0x72) {
    if (*DAT_10040498 != iVar2) goto LAB_1004046c;
  }
  else {
    if (uVar6 == 0x73) {
      if (*DAT_10040498 == iVar2) {
        UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(DAT_100404a4 + 0x30) + 0x18);
        goto LAB_10040476;
      }
    }
    else if (*DAT_10040498 == iVar2) {
      return;
    }
LAB_1004046c:
    FUN_1013cdc0();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(DAT_100404a4 + 0x30) + 0x14);
LAB_10040476:
                    /* WARNING: Could not recover jumptable at 0x1004047c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

