/* FUN_10019344 @ 0x10019344 */

void FUN_10019344(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_3c [32];
  int local_1c;
  
  piVar1 = DAT_1001941c;
  local_1c = *DAT_10019410;
  uVar6 = (DAT_10019414 - DAT_10019418) * 0x20 & 0xff00;
  if (*DAT_1001941c != 0) goto LAB_10019382;
  uVar2 = uVar6 | 0xf90021;
  uVar3 = DAT_10019424;
  uVar4 = DAT_10019420;
  while( true ) {
    FUN_100a5b78(uVar2,uVar3,uVar4);
    if (*DAT_10019410 == local_1c) break;
    FUN_1013cdc0();
LAB_10019382:
    FUN_1011ea48(auStack_3c,0,0x20);
    iVar5 = 10;
    do {
      iVar7 = 0x40;
      do {
        FUN_100a07a0(piVar1[1],auStack_3c,0x20);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      FUN_1011dbc8(10);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_1011dbc8(0x32);
    FUN_1011dbf4(DAT_10019428,0xffffffff);
    FUN_100e74c0(0);
    FUN_100e74e4(0);
    FUN_1013cb84(DAT_1001942c);
    FUN_100a7954(3,0);
    FUN_10113e2c(DAT_10019428);
    FUN_100a0a70(piVar1[1]);
    FUN_100a0a70(piVar1[2]);
    FUN_100a9394(*piVar1);
    FUN_100a98c4(*piVar1);
    FUN_100a0b00(piVar1[1]);
    piVar1[1] = 0;
    FUN_100a0b00(piVar1[2]);
    uVar4 = DAT_10019434;
    uVar2 = DAT_10019430;
    uVar3 = DAT_10019424;
    piVar1[2] = 0;
    *piVar1 = 0;
    uVar2 = uVar2 | uVar6;
  }
  return;
}

