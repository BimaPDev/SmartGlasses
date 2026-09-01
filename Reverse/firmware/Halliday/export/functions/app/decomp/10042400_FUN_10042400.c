/* FUN_10042400 @ 0x10042400 */

uint FUN_10042400(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_1004246c;
  uVar3 = param_1;
  if (99 < param_1) {
    uVar3 = 100;
  }
  iVar4 = *DAT_10042468;
  *DAT_10042470 = 0;
  uVar2 = DAT_10042478;
  *DAT_10042474 = (char)uVar3;
  FUN_100a5b78(DAT_10042484 | (iVar1 - DAT_1004247c) * 0x20 & 0xff00U,DAT_10042480,uVar2,uVar3,
               param_1);
  FUN_10041ef4(7);
  FUN_1004229c(0);
  FUN_10048794();
  FUN_10041cac();
  (**(code **)(DAT_10042488 + 8))();
  if (*DAT_10042468 != iVar4) {
    FUN_1013cdc0();
  }
  return uVar3;
}

