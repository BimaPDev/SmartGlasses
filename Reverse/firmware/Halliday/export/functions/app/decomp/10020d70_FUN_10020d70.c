/* FUN_10020d70 @ 0x10020d70 */

void FUN_10020d70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    if (*DAT_10020da8 == *DAT_10020da8) goto LAB_10020cd8;
LAB_10020d8a:
    FUN_1013cdc0();
    uVar4 = extraout_r2;
  }
  else {
    uVar4 = 0;
    if (*DAT_10020da8 != *DAT_10020da8) goto LAB_10020d8a;
  }
  uVar3 = 0x10;
LAB_10020cd8:
  uVar2 = DAT_10020d28;
  iVar1 = DAT_10020d20;
  iVar5 = *DAT_10020d1c;
  *DAT_10020d24 = uVar3;
  FUN_100a5b78((iVar1 - DAT_10020d2c) * 0x20 & 0xff00U | 0x1160032,DAT_10020d30,uVar2,0,uVar3,uVar3,
               uVar4);
  if (*DAT_10020d1c != iVar5) {
    FUN_1013cdc0();
  }
  return;
}

