/* FUN_10043880 @ 0x10043880 */

void FUN_10043880(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_100438f0;
  switch(param_1) {
  case 0x81:
    if (*DAT_100438f0 != iVar2) break;
    goto LAB_100438ae;
  case 0x82:
  case 0x83:
  case 0x89:
  case 0x8a:
    if (*DAT_100438f0 == iVar2) {
      uVar1 = 5;
      goto LAB_100438b2;
    }
    break;
  case 0x84:
    if (*DAT_100438f0 == iVar2) {
      uVar1 = 3;
      goto LAB_100438b2;
    }
    break;
  default:
    if (*DAT_100438f0 == iVar2) {
      return;
    }
  }
  FUN_1013cdc0();
LAB_100438ae:
  uVar1 = 2;
LAB_100438b2:
  (**(code **)(DAT_100438f4 + 0xc))(uVar1);
  return;
}

