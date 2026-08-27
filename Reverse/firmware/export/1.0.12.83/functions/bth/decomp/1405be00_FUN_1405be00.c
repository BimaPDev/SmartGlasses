/* FUN_1405be00 @ 0x1405be00 */

bool FUN_1405be00(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 2) {
    iVar1 = *(int *)(DAT_1405beec + param_1 * 4);
  }
  else {
    iVar1 = 0;
  }
  if ((*(byte *)(iVar1 + 0x39) & 1) == 0) {
    return (bool)(*(byte *)(iVar1 + 0x39) & 1);
  }
  uVar2 = param_1 >> 3;
  param_1 = param_1 & 7;
  if (((int)(uint)*(byte *)(uVar2 + DAT_1405bef0) >> param_1 & 1U) == 0) {
    if (0x52 < param_2) {
      return param_2 == 0xd2;
    }
    switch(param_2) {
    case 2:
    case 4:
    case 6:
    case 8:
    case 0x10:
    case 0x18:
      if (((int)(uint)*(byte *)(uVar2 + DAT_1405bef4) >> param_1 & 1U) == 0) {
        return false;
      }
      break;
    default:
      goto switchD_1405be3a_caseD_3;
    case 10:
    case 0xc:
    case 0xe:
    case 0x12:
    case 0x16:
      if (-1 < ((int)(uint)*(byte *)(uVar2 + DAT_1405bef4) >> param_1) << 0x1f) {
        *(byte *)(uVar2 + DAT_1405bef4) = (byte)(1 << param_1) | *(byte *)(uVar2 + DAT_1405bef4);
        return true;
      }
      break;
    case 0x1b:
    case 0x52:
      return true;
    case 0x1d:
      iVar1 = FUN_1405b698(param_3);
      return iVar1 != 2;
    }
    *(byte *)(uVar2 + DAT_1405bef0) = *(byte *)(uVar2 + DAT_1405bef0) | (byte)(1 << param_1);
    FUN_1405c424();
    return false;
  }
switchD_1405be3a_caseD_3:
  return false;
}

