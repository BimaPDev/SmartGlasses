/* FUN_1003304c @ 0x1003304c */

uint FUN_1003304c(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_38 [4];
  uint local_34;
  ushort local_2c;
  int local_24;
  
  local_24 = *DAT_100331b4;
  iVar5 = *DAT_100331b8;
  uVar4 = (DAT_100331bc - DAT_100331c0) * 0x20 & 0xff00;
  uVar6 = param_1;
  if (iVar5 != 0) goto LAB_10033096;
  FUN_100a5b78(DAT_100331c4 | uVar4,DAT_100331cc,DAT_100331c8);
  uVar2 = 0;
LAB_10033086:
  do {
    while( true ) {
      while( true ) {
        if (*DAT_100331b4 == local_24) {
          return uVar2;
        }
        param_1 = FUN_1013cdc0();
LAB_10033096:
        if (param_1 != 0) break;
        FUN_100a5b78(uVar4 | 0x2080011,DAT_100331cc,DAT_100331d0);
        uVar2 = uVar6;
      }
      iVar7 = iVar5 + 0x170;
      iVar1 = FUN_1011ea10(iVar7);
      if (iVar1 != 0) break;
      FUN_100a5b78(DAT_100331d4 | uVar4,DAT_100331cc,DAT_100331d8);
      uVar2 = 0;
    }
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_10035484(iVar7,param_2 + -1);
      if (iVar1 == 0) {
        FUN_100a5b78(DAT_100331dc | uVar4,DAT_100331cc,DAT_100331e0,param_2 + -1,iVar7);
        uVar2 = 0;
        goto LAB_10033086;
      }
    }
    uVar2 = FUN_10032e34(uVar6,iVar1);
    uVar8 = uVar2;
    FUN_100a5b78(uVar4 | 0x21c0033,DAT_100331cc,DAT_100331e4,param_2,iVar1,uVar2);
    if (uVar2 == 0) {
      FUN_100a5b78(DAT_100331fc | uVar4,DAT_100331cc,DAT_10033200,param_2,iVar1,uVar8);
    }
    else {
      uVar6 = iVar1 + uVar2;
      *(uint *)(iVar5 + 0x160) = uVar6;
      *(int *)(iVar5 + 0x168) = param_2;
      if (param_2 != 0) {
        FUN_1011ea48(auStack_38,0,0x14);
        iVar3 = FUN_1003494c(*(undefined1 *)(iVar5 + 0x16c),auStack_38);
        if (iVar3 == 0) {
          if ((uVar2 < local_34 >> 1) || (local_2c < uVar2)) {
            FUN_100a5b78(DAT_100331e8 | uVar4,DAT_100331cc,DAT_100331ec,uVar2,local_34 >> 1,
                         (uint)local_2c,*(undefined1 *)(iVar5 + 0x16c));
          }
          else {
            FUN_100a5b78(DAT_100331f4 | uVar4,DAT_100331cc,DAT_100331f8,uVar2,
                         *(undefined1 *)(iVar5 + 0x16c),uVar8);
          }
        }
      }
      FUN_1003512c(iVar7,iVar5 + 0x160);
      FUN_100a5b78(uVar4 | 0x2380033,DAT_100331cc,DAT_100331f0,param_2,uVar6,iVar1);
    }
  } while( true );
}

