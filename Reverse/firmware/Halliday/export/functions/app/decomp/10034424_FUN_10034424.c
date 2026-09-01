/* FUN_10034424 @ 0x10034424 */

undefined4 FUN_10034424(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int unaff_r6;
  int unaff_r7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  
  iVar5 = DAT_100345f4;
  local_2c = *DAT_100345f0;
  uVar6 = (DAT_100345f8 - DAT_100345fc) * 0x20 & 0xff00;
  if (100 < *(uint *)(DAT_100345f4 + 11000)) {
    FUN_100a5b78(uVar6 | 0xd90022,DAT_10034600,DAT_10034604,*(uint *)(DAT_100345f4 + 11000),100);
    goto LAB_10034462;
  }
  unaff_r6 = FUN_100552d0();
  if (unaff_r6 == 0) {
    FUN_100a5b78(uVar6 | 0xe10011,DAT_10034600,DAT_10034608);
    goto LAB_10034462;
  }
  iVar1 = FUN_100552b8();
  if (iVar1 == 0) {
    uVar2 = uVar6 | 0xe90011;
    unaff_r7 = 0;
    uVar7 = DAT_1003460c;
LAB_10034496:
    FUN_100a5b78(uVar2,DAT_10034600,uVar7);
  }
  else {
    FUN_1011a5f6(unaff_r6,DAT_10034610,iVar1);
    FUN_100a5b78(uVar6 | 0xf00031,DAT_10034600,DAT_10034614,*(undefined4 *)(iVar5 + 11000));
    for (uVar2 = 0; uVar2 < *DAT_10034618; uVar2 = uVar2 + 1) {
      FUN_100a5b78(uVar6 | 0xf30032,DAT_10034600,DAT_10034624,iVar5,iVar5 + 10);
      iVar3 = FUN_100552d0();
      if (iVar3 == 0) {
        FUN_100a5b78(uVar6 | 0xf80011,DAT_10034600,DAT_10034628);
      }
      else {
        FUN_1011a5fc(iVar3,DAT_1003462c,iVar5);
        FUN_1011a5fc(iVar3,DAT_10034630,iVar5 + 10);
        thunk_FUN_1011a4f8(iVar1,iVar3);
      }
      iVar5 = iVar5 + 0x6e;
    }
    unaff_r7 = FUN_1011a5e6(unaff_r6);
    if (unaff_r7 == 0) {
      uVar2 = DAT_1003461c | uVar6;
      uVar7 = DAT_10034620;
      goto LAB_10034496;
    }
    iVar5 = FUN_1006c2a0(DAT_10034634);
    if ((iVar5 < 0) && (piVar4 = (int *)thunk_FUN_10112f50(), *piVar4 != 2)) {
      FUN_100a5b78(DAT_10034638 | uVar6,DAT_10034600,DAT_1003463c,DAT_10034634);
    }
    local_38 = 0;
    uStack_34 = 0;
    local_30 = 0;
    iVar5 = FUN_1006ba84(&local_38,DAT_10034634,0x12);
    if (iVar5 != 0) goto LAB_100345ca;
    iVar5 = FUN_1011ea10(unaff_r7);
    iVar1 = FUN_1006bcd4(&local_38,unaff_r7,iVar5);
    if (iVar5 == iVar1) {
      FUN_1006bc30(&local_38);
      FUN_10054e90(unaff_r6);
      FUN_10117e54(unaff_r7);
      uVar7 = 0;
      goto LAB_100345bc;
    }
    FUN_100a5b78(uVar6 | 0x11e0012,DAT_10034600,DAT_10034640,iVar1,iVar5);
    FUN_1006bc30(&local_38);
    FUN_10117e54(unaff_r7);
  }
  FUN_10054e90(unaff_r6);
LAB_10034462:
  while( true ) {
    uVar7 = 0xffffffff;
LAB_100345bc:
    if (*DAT_100345f0 == local_2c) break;
    iVar5 = FUN_1013cdc0();
LAB_100345ca:
    FUN_100a5b78(DAT_10034644 | uVar6,DAT_10034600,DAT_10034648,iVar5);
    FUN_10054e90(unaff_r6);
    FUN_10117e54(unaff_r7);
  }
  return uVar7;
}

