/* FUN_140c4de0 @ 0x140c4de0 */

undefined4 FUN_140c4de0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 < 0x18) {
    switch(param_2) {
    case 1:
      pbVar1 = DAT_140c4e5c;
      break;
    case 2:
      pbVar1 = DAT_140c4e60;
      break;
    case 3:
      pbVar1 = DAT_140c4e64;
      break;
    case 4:
      pbVar1 = DAT_140c4e68;
      break;
    default:
      goto switchD_140c4dec_caseD_5;
    case 7:
      pbVar1 = DAT_140c4e70;
      break;
    case 8:
      pbVar1 = DAT_140c4e54;
      break;
    case 0x10:
      pbVar1 = DAT_140c4e6c;
      break;
    case 0x17:
      pbVar1 = DAT_140c4e74;
    }
  }
  else {
    pbVar1 = DAT_140c4e50;
    if (((param_2 == 0x44) || (pbVar1 = DAT_140c4e78, param_2 == 0x97)) ||
       (pbVar1 = DAT_140c4e58, param_2 == 0x20)) goto LAB_140c4e20;
switchD_140c4dec_caseD_5:
    pbVar1 = DAT_140c4e50;
    if (((param_2 & 0x44) == 0) && (pbVar1 = DAT_140c4e78, (param_2 & 0x97) == 0)) {
      return 0;
    }
  }
LAB_140c4e20:
  puVar2 = (undefined4 *)*DAT_140df858;
  iVar3 = *pbVar1 - 0x61;
  switch(*pbVar1) {
  case 0x61:
    iVar3 = FUN_140dc518(pbVar1,DAT_140df81c,param_3,iVar3,DAT_140df858);
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = FUN_140dc518(pbVar1,DAT_140df820);
    if (iVar3 == 0) {
      return 2;
    }
    break;
  case 0x62:
    iVar3 = FUN_140dc518(pbVar1,DAT_140df824,param_3,iVar3,DAT_140df858);
    if (iVar3 == 0) {
      return 3;
    }
    break;
  case 99:
    iVar3 = FUN_140dc518(pbVar1,DAT_140df828,param_3,iVar3,DAT_140df858);
    if (iVar3 == 0) {
      return 4;
    }
    break;
  case 100:
    iVar3 = FUN_140dc518(pbVar1,DAT_140df82c,param_3,iVar3,DAT_140df858);
    if (iVar3 == 0) {
      return 5;
    }
    break;
  case 0x67:
    iVar3 = FUN_140dc518(pbVar1,DAT_140df830,param_3,iVar3,DAT_140df858);
    if (iVar3 == 0) {
      return 6;
    }
    break;
  case 0x6c:
    iVar3 = FUN_140dc518(pbVar1,DAT_140df834,param_3,iVar3,DAT_140df858);
    if (iVar3 == 0) {
      return 7;
    }
    break;
  case 0x70:
    iVar3 = FUN_140dc518(pbVar1,DAT_140df838,param_3,iVar3,DAT_140df858);
    if (iVar3 == 0) {
      return 8;
    }
    iVar3 = FUN_140dc518(pbVar1,DAT_140df83c);
    if (iVar3 == 0) {
      return 9;
    }
    break;
  case 0x73:
    iVar3 = FUN_140dc518(pbVar1,DAT_140df840,param_3,iVar3,DAT_140df858);
    if (iVar3 == 0) {
      return 10;
    }
    break;
  case 0x75:
    iVar3 = FUN_140dc518(pbVar1,DAT_140df844,param_3,iVar3,DAT_140df858);
    if (iVar3 == 0) {
      return 0xb;
    }
    break;
  case 0x78:
    iVar3 = FUN_140dc518(pbVar1,DAT_140df848,param_3,iVar3,DAT_140df858);
    if (iVar3 == 0) {
      return 0xc;
    }
  }
  *puVar2 = 0x16;
  return 0;
}

