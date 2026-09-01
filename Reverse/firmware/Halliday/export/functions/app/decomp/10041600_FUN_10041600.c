/* FUN_10041600 @ 0x10041600 */

int FUN_10041600(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint unaff_r4;
  uint uVar7;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  
  iVar4 = *DAT_1004169c;
  iVar2 = 0;
  uVar7 = unaff_r4;
  if ((param_1 & 1) == 0) {
LAB_10041638:
    if (*DAT_1004169c == iVar4) {
      return iVar2;
    }
  }
  else {
    uVar7 = param_1 & 0xfffffffe;
    iVar2 = FUN_100413fc(uVar7,param_2,param_3,0,param_1,iVar4,param_3);
    if (iVar2 != 0) {
      FUN_100a5b78(DAT_100416a8 | (DAT_100416a4 - DAT_100416a0) * 0x20 & 0xff00U,DAT_100416b0,
                   DAT_100416ac);
      goto LAB_10041638;
    }
    if (uVar7 == 0x20000000) {
LAB_10041658:
      iVar2 = 1;
      goto LAB_10041638;
    }
    if (uVar7 == 0x4000000) {
      FUN_100413a4();
      goto LAB_10041658;
    }
    if (uVar7 == 0x40000000) {
      FUN_100a5b78(DAT_100416b4 | (DAT_100416a4 - DAT_100416a0) * 0x20 & 0xff00U,DAT_100416b0,
                   DAT_100416b8);
      FUN_100415cc();
      goto LAB_10041658;
    }
    uVar3 = 0;
    if (*DAT_1004169c == iVar4) goto LAB_100414cc;
  }
  FUN_1013cdc0();
  uVar3 = extraout_r2;
LAB_100414cc:
  iVar2 = *DAT_100415a4;
  if (uVar7 == 0x400000) {
    FUN_100a5b78((DAT_100415ac - DAT_100415a8) * 0x20 & 0xff00U | 0xfe0031,DAT_100415b4,DAT_100415b8
                 ,DAT_100415a8,0x400000,iVar2,uVar3,unaff_r4,unaff_r5,unaff_lr);
    bVar5 = 0;
    while( true ) {
      iVar4 = FUN_10057648(1);
      uVar6 = (uint)bVar5;
      bVar5 = bVar5 + 1;
      if (iVar4 <= (int)uVar6) break;
      FUN_1011aabe(1);
    }
    FUN_100a2310();
    goto LAB_1004151a;
  }
  if (uVar7 == 0x800000) goto LAB_100414fa;
  if (uVar7 != 0x200000) {
    iVar4 = 0;
    while( true ) {
      if (*DAT_100415a4 == iVar2) break;
      FUN_1013cdc0(iVar4);
LAB_100414fa:
      FUN_100a5b78((DAT_100415ac - DAT_100415a8) * 0x20 & 0xff00U | 0xf90031,DAT_100415b4,
                   DAT_100415b0,DAT_100415a8,uVar7,iVar2,uVar3,unaff_r4,unaff_r5,unaff_lr);
      FUN_1003fbfc();
LAB_1004151a:
      iVar4 = 1;
    }
    return iVar4;
  }
  uVar6 = (DAT_100415ac - DAT_100415a8) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100415bc | uVar6,DAT_100415b4,DAT_100415c0,DAT_100415a8,0x200000,iVar2,uVar3,
               unaff_r4,unaff_r5,unaff_lr);
  iVar4 = FUN_100efda8();
  puVar1 = DAT_100415c8;
  if (iVar4 == 5) {
    FUN_100a5b78(uVar6 | 0x10a0031,DAT_100415b4,DAT_100415c4);
    goto LAB_1004151a;
  }
  iVar4 = (*(code *)DAT_100415c8[2])();
  if (iVar4 == 0x58) goto LAB_1004151a;
  (*(code *)*puVar1)(0x58);
  goto LAB_1004151a;
}

