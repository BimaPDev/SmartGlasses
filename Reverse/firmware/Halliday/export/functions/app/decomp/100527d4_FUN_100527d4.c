/* FUN_100527d4 @ 0x100527d4 */

void FUN_100527d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *DAT_100527fc;
  if ((*DAT_100527fc ^ uVar1) != 0) {
    FUN_1013cdc0(param_1,param_1,*DAT_100527fc ^ uVar1,uVar1,param_1,uVar1,param_3);
  }
  FUN_100a0350(DAT_10052800);
  return;
}

