/* FUN_10034fa4 @ 0x10034fa4 */

void FUN_10034fa4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  int local_1c;
  
  uVar3 = 0;
  local_1c = *DAT_10035060;
  local_28 = 0;
  uStack_24 = 0;
  local_20 = 0;
  if (param_1 != 0) goto LAB_10034fd6;
  do {
    uVar1 = 0;
    while( true ) {
      if (*DAT_10035060 == local_1c) {
        return;
      }
      FUN_1013cdc0(uVar1);
LAB_10034fd6:
      iVar2 = FUN_1011ea10();
      if (iVar2 == 0) break;
      FUN_10033ec4(10000,0);
      iVar2 = FUN_10034cfc(&local_28,param_1);
      if (iVar2 < 0) {
        FUN_100a5b78(DAT_1003506c | (DAT_10035068 - DAT_10035064) * 0x20 & 0xff00U,DAT_10035074,
                     DAT_10035070);
      }
      else {
        iVar2 = FUN_1006bd24(&local_28,param_3,uVar3);
        if ((-1 < iVar2) && (uVar3 = FUN_1006bc84(&local_28,param_2,param_4), uVar3 == 0)) {
          FUN_100a5b78((DAT_10035068 - DAT_10035064) * 0x20 & 0xff00U | 0x3540012,DAT_10035074,
                       DAT_10035078,0,param_4);
        }
      }
      FUN_1006bc30(&local_28);
      FUN_10033e94();
      uVar1 = uVar3 & 0xffff;
    }
  } while( true );
}

