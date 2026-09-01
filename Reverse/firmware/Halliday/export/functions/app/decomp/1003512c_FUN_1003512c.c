/* FUN_1003512c @ 0x1003512c */

void FUN_1003512c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_100351fc;
  local_1c = *DAT_100351f8;
  local_28 = 0;
  uStack_24 = 0;
  local_20 = 0;
  FUN_10033ec4(10000,0,param_3,0);
  uVar4 = (iVar1 - DAT_10035200) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_10035204 | uVar4,DAT_1003520c,DAT_10035208);
  iVar1 = FUN_10034e64(&local_28,param_1);
  if (-1 < iVar1) goto LAB_1003518a;
  do {
    FUN_10033e94();
    uVar2 = 0xffffffff;
    while( true ) {
      if (*DAT_100351f8 == local_1c) {
        return;
      }
      FUN_1013cdc0(uVar2);
LAB_1003518a:
      FUN_1006bd24(&local_28,0,0);
      iVar1 = FUN_1006bcd4(&local_28,param_2,0x10);
      uVar3 = DAT_10035214;
      uVar2 = DAT_10035210;
      if (iVar1 < 0) break;
      local_2c = *param_2;
      FUN_1006bd24(&local_28,(param_2[2] & 0xffff) * 4 + 0x10,0);
      iVar1 = FUN_1006bcd4(&local_28,&local_2c);
      uVar3 = DAT_1003521c;
      uVar2 = DAT_10035218;
      if (iVar1 < 0) break;
      FUN_1006bc30(&local_28);
      FUN_10033e94();
      uVar2 = 0;
    }
    FUN_100a5b78(uVar3 | uVar4,DAT_1003520c,uVar2);
    FUN_1006bc30(&local_28);
  } while( true );
}

