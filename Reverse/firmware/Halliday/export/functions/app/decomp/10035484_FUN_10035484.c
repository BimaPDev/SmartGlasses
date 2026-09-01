/* FUN_10035484 @ 0x10035484 */

/* WARNING: Type propagation algorithm not settling */

void FUN_10035484(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_34 [4];
  undefined1 auStack_24 [4];
  uint local_20;
  int local_14;
  
  local_14 = *DAT_10035568;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[0] = 0;
  FUN_10033ec4(10000,0,param_3,0);
  iVar1 = FUN_10034e64(local_34 + 1,param_1);
  if (-1 < iVar1) goto LAB_100354e8;
  uVar4 = (DAT_10035570 - DAT_1003556c) * 0x20 & 0xff00;
  uVar2 = DAT_1003557c;
  uVar3 = DAT_10035578;
LAB_100354c8:
  uVar2 = uVar2 | uVar4;
  do {
    FUN_100a5b78(uVar2,DAT_10035574,uVar3);
    while( true ) {
      FUN_1006bc30(local_34 + 1);
      FUN_10033e94();
      if (*DAT_10035568 == local_14) {
        return;
      }
      FUN_1013cdc0(local_34[0]);
LAB_100354e8:
      iVar1 = FUN_1006bc84(local_34 + 1,auStack_24,0x10);
      if (iVar1 < 0) {
        uVar4 = (DAT_10035570 - DAT_1003556c) * 0x20 & 0xff00;
        uVar2 = DAT_10035584;
        uVar3 = DAT_10035580;
        goto LAB_100354c8;
      }
      iVar1 = FUN_1006bd24(local_34 + 1,param_2 * 4 + 0x10,0);
      if (iVar1 < 0) {
        uVar4 = (DAT_10035570 - DAT_1003556c) * 0x20 & 0xff00;
        uVar2 = DAT_1003558c;
        uVar3 = DAT_10035588;
        goto LAB_100354c8;
      }
      iVar1 = FUN_1006bc84(local_34 + 1,local_34);
      if (iVar1 < 0) break;
      if (local_20 <= local_34[0]) {
        local_34[0] = 0;
      }
    }
    uVar2 = (DAT_10035570 - DAT_1003556c) * 0x20 & 0xff00U | 0x3f40011;
    uVar3 = DAT_10035588;
  } while( true );
}

