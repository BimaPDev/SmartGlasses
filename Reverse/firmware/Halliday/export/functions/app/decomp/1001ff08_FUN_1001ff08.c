/* FUN_1001ff08 @ 0x1001ff08 */

void FUN_1001ff08(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_r1;
  int iVar3;
  
  if (param_1 == 0) {
    uVar2 = 0;
    if (*DAT_1001ff50 == *DAT_1001ff50) goto LAB_1001fe9c;
  }
  else {
    if (param_2 < 3) {
      uVar2 = *(undefined4 *)(DAT_1001ff54 + param_2 * 4 + 4);
    }
    else {
      uVar2 = 1;
    }
    if (*DAT_1001ff50 == *DAT_1001ff50) {
      return;
    }
  }
  FUN_1013cdc0(uVar2);
  param_2 = extraout_r1;
LAB_1001fe9c:
  iVar1 = DAT_1001fefc;
  iVar3 = *DAT_1001fef0;
  FUN_100a5b78((DAT_1001fef4 - DAT_1001fef8) * 0x20 & 0xff00U | 0xe80032,DAT_1001ff04,DAT_1001ff00,
               param_2,*(undefined4 *)(DAT_1001fefc + 0x10));
  if (param_2 < 3) {
    uVar2 = *(undefined4 *)(iVar1 + (param_2 + 4) * 4);
  }
  else {
    uVar2 = 0;
  }
  if (*DAT_1001fef0 != iVar3) {
    FUN_1013cdc0(uVar2);
  }
  return;
}

