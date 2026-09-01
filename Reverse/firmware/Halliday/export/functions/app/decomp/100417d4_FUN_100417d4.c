/* FUN_100417d4 @ 0x100417d4 */

void FUN_100417d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_10041860;
  switch(param_2) {
  case 0x81:
    break;
  case 0x82:
    local_18 = 0x14;
    goto LAB_100417fc;
  case 0x83:
    local_18 = 0x13;
    goto LAB_100417fc;
  case 0x84:
    local_18 = 0x1b;
    goto LAB_100417fc;
  case 0x85:
    local_18 = 2;
    goto LAB_100417fc;
  default:
    local_18 = 0;
    goto LAB_100417fc;
  case 0x89:
    local_18 = 0x11;
    goto LAB_100417fc;
  case 0x8a:
    local_18 = 0x12;
    goto LAB_100417fc;
  }
switchD_100417ec_caseD_81:
  local_18 = 10;
LAB_100417fc:
  FUN_100a5b78((DAT_10041868 - DAT_10041864) * 0x20 & 0xff00U | 0x1860032,DAT_10041870,DAT_1004186c,
               param_2,local_18);
  if (local_18 != 0) {
    FUN_10086f50(param_1,0xd,&local_18);
  }
  if (*DAT_10041860 == local_14) {
    return;
  }
  FUN_1013cdc0(local_18);
  param_2 = extraout_r1;
  goto switchD_100417ec_caseD_81;
}

