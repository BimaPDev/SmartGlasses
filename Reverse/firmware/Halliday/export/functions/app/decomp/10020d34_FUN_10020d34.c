/* FUN_10020d34 @ 0x10020d34 */

void FUN_10020d34(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(param_2,param_1);
  if (param_1 < 0x1a) {
    uVar4 = 0;
    if (*DAT_10020d6c == *DAT_10020d6c) goto LAB_10020cd8;
  }
  else if (*DAT_10020d6c == *DAT_10020d6c) {
    return;
  }
  uVar6 = FUN_1013cdc0();
  uVar4 = extraout_r2;
LAB_10020cd8:
  uVar2 = DAT_10020d28;
  iVar1 = DAT_10020d20;
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  iVar5 = *DAT_10020d1c;
  *(char *)(DAT_10020d24 + (int)uVar6) = (char)((ulonglong)uVar6 >> 0x20);
  FUN_100a5b78((iVar1 - DAT_10020d2c) * 0x20 & 0xff00U | 0x1160032,DAT_10020d30,uVar2,(int)uVar6,
               uVar3,uVar3,uVar4);
  if (*DAT_10020d1c != iVar5) {
    FUN_1013cdc0();
  }
  return;
}

