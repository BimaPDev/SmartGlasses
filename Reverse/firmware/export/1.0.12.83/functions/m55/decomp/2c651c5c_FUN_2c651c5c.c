/* FUN_2c651c5c @ 0x2c651c5c */

undefined4 FUN_2c651c5c(undefined4 param_1,uint param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 < 0x18) {
    switch(param_2) {
    case 1:
      pbVar1 = DAT_2c651cd8;
      break;
    case 2:
      pbVar1 = DAT_2c651cdc;
      break;
    case 3:
      pbVar1 = DAT_2c651ce0;
      break;
    case 4:
      pbVar1 = DAT_2c651ce4;
      break;
    default:
      goto switchD_2c651c68_caseD_5;
    case 7:
      pbVar1 = DAT_2c651cec;
      break;
    case 8:
      pbVar1 = DAT_2c651cd0;
      break;
    case 0x10:
      pbVar1 = DAT_2c651ce8;
      break;
    case 0x17:
      pbVar1 = DAT_2c651cf0;
    }
  }
  else {
    pbVar1 = DAT_2c651ccc;
    if (((param_2 == 0x44) || (pbVar1 = DAT_2c651cf4, param_2 == 0x97)) ||
       (pbVar1 = DAT_2c651cd4, param_2 == 0x20)) goto LAB_2c651c9c;
switchD_2c651c68_caseD_5:
    pbVar1 = DAT_2c651ccc;
    if (((param_2 & 0x44) == 0) && (pbVar1 = DAT_2c651cf4, (param_2 & 0x97) == 0)) {
      return 0;
    }
  }
LAB_2c651c9c:
  puVar2 = (undefined4 *)*DAT_2c66ecfc;
  iVar3 = *pbVar1 - 0x61;
  switch(*pbVar1) {
  case 0x61:
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66ecc0,param_3,iVar3,DAT_2c66ecfc);
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66ecc4);
    if (iVar3 == 0) {
      return 2;
    }
    break;
  case 0x62:
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66ecc8,param_3,iVar3,DAT_2c66ecfc);
    if (iVar3 == 0) {
      return 3;
    }
    break;
  case 99:
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66eccc,param_3,iVar3,DAT_2c66ecfc);
    if (iVar3 == 0) {
      return 4;
    }
    break;
  case 100:
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66ecd0,param_3,iVar3,DAT_2c66ecfc);
    if (iVar3 == 0) {
      return 5;
    }
    break;
  case 0x67:
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66ecd4,param_3,iVar3,DAT_2c66ecfc);
    if (iVar3 == 0) {
      return 6;
    }
    break;
  case 0x6c:
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66ecd8,param_3,iVar3,DAT_2c66ecfc);
    if (iVar3 == 0) {
      return 7;
    }
    break;
  case 0x70:
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66ecdc,param_3,iVar3,DAT_2c66ecfc);
    if (iVar3 == 0) {
      return 8;
    }
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66ece0);
    if (iVar3 == 0) {
      return 9;
    }
    break;
  case 0x73:
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66ece4,param_3,iVar3,DAT_2c66ecfc);
    if (iVar3 == 0) {
      return 10;
    }
    break;
  case 0x75:
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66ece8,param_3,iVar3,DAT_2c66ecfc);
    if (iVar3 == 0) {
      return 0xb;
    }
    break;
  case 0x78:
    iVar3 = FUN_2c66b624(pbVar1,DAT_2c66ecec,param_3,iVar3,DAT_2c66ecfc);
    if (iVar3 == 0) {
      return 0xc;
    }
  }
  *puVar2 = 0x16;
  return 0;
}

