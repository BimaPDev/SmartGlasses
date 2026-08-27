/* FUN_1406d260 @ 0x1406d260 */

int FUN_1406d260(int param_1,uint param_2,undefined1 param_3,undefined4 *param_4,int *param_5)

{
  int iVar1;
  
  *param_4 = 0;
  if (param_2 < 0x53) {
    switch(param_2) {
    case 2:
      iVar1 = FUN_1406b990(param_1,2,param_4,param_5);
      break;
    default:
      goto switchD_1406d280_caseD_3;
    case 4:
    case 6:
    case 8:
    case 0x10:
      iVar1 = FUN_1406c9d4(param_1,param_2,param_4,param_5);
      break;
    case 10:
    case 0xc:
    case 0xe:
    case 0x20:
      iVar1 = FUN_1406ae10(param_1,param_2,param_4,param_5);
      break;
    case 0x12:
    case 0x16:
    case 0x52:
switchD_1406d280_caseD_12:
      iVar1 = FUN_1406bf34(param_1,param_2,param_4,param_5);
      break;
    case 0x18:
      iVar1 = FUN_1406bfb4(param_1,0x18,param_4,param_5);
      break;
    case 0x1b:
    case 0x1d:
    case 0x23:
      iVar1 = FUN_1406b4bc(param_1,param_2,param_4,param_5,param_4);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(DAT_1406d360 + (param_1 + 0x22) * 4);
      *(undefined1 *)(*param_5 + 0x10) = param_3;
      *(byte *)(*param_5 + 0x12) = *(byte *)(*param_5 + 0x12) & 0xf0 | 2;
      FUN_14073a28(iVar1 + 0x28,*param_5);
      return 0;
    }
  }
  else {
    if (param_2 == 0xd2) goto switchD_1406d280_caseD_12;
switchD_1406d280_caseD_3:
    iVar1 = 4;
  }
  return iVar1;
}

