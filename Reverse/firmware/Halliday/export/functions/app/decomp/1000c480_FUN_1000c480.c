/* FUN_1000c480 @ 0x1000c480 */

undefined4 FUN_1000c480(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  local_1c = *DAT_1000c51c;
  local_48 = *DAT_1000c520;
  uStack_44 = DAT_1000c520[1];
  uStack_40 = DAT_1000c520[2];
  uStack_3c = DAT_1000c520[3];
  local_38 = DAT_1000c520[4];
  uStack_34 = DAT_1000c520[5];
  uStack_30 = DAT_1000c520[6];
  uStack_2c = DAT_1000c520[7];
  local_28 = DAT_1000c520[8];
  uStack_24 = DAT_1000c520[9];
  uStack_20 = DAT_1000c520[10];
  uVar2 = FUN_10115464();
  iVar3 = FUN_1013cd52();
  iVar4 = FUN_100a1a3c(&local_48,0xb);
  if (iVar4 != 0) goto LAB_1000c510;
  FUN_10138b7e(0x24,0,3);
  FUN_10115194(uVar2,iVar3 + 5);
  iVar4 = FUN_1005c958(DAT_1000c524);
  piVar1 = DAT_1000c528;
  *DAT_1000c528 = iVar4;
  if (iVar4 == 0) {
    iVar4 = FUN_1005c958(DAT_1000c52c);
    *piVar1 = iVar4;
    if (iVar4 == 0) {
      iVar4 = FUN_100122f8();
      *piVar1 = iVar4;
    }
  }
  FUN_100125dc();
  FUN_10115194(uVar2,iVar3);
  FUN_1011dbc8(0xdac);
  FUN_10138b9c(0x24);
  uVar2 = 0;
  while( true ) {
    if (*DAT_1000c51c == local_1c) break;
    FUN_1013cdc0();
LAB_1000c510:
    uVar2 = 0xffffffea;
  }
  return uVar2;
}

