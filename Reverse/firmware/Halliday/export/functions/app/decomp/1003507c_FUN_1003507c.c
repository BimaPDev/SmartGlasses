/* FUN_1003507c @ 0x1003507c */

undefined4 FUN_1003507c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  
  uVar2 = 0;
  local_14 = *DAT_1003510c;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  FUN_10033ec4(10000,0,param_3,0);
  iVar1 = FUN_10034cfc(&local_20,param_1);
  uVar3 = (DAT_10035110 - DAT_10035114) * 0x20 & 0xff00;
  if (-1 < iVar1) goto LAB_100350d8;
  FUN_100a5b78(DAT_10035118 | uVar3,DAT_10035120,DAT_1003511c);
  FUN_10033e94();
  while( true ) {
    if (*DAT_1003510c == local_14) break;
    FUN_1013cdc0();
LAB_100350d8:
    FUN_1006bd24(&local_20,uVar2,2);
    uVar2 = FUN_1006bd74(&local_20);
    FUN_1006bc30(&local_20);
    FUN_10033e94();
    FUN_100a5b78(DAT_10035124 | uVar3,DAT_10035120,DAT_10035128,uVar2);
  }
  return uVar2;
}

