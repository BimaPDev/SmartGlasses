/* FUN_10016a44 @ 0x10016a44 */

void FUN_10016a44(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 extraout_r2;
  int iVar4;
  uint unaff_r5;
  undefined8 uStack_20;
  uint uStack_18;
  uint local_14;
  undefined4 uStack_10;
  
  iVar4 = *DAT_10016a70;
  uStack_10 = param_1;
  uStack_18 = FUN_10015b7c(0,param_2,param_3,0);
  uVar2 = 0;
  if (*DAT_10016a70 != iVar4) {
    uStack_18 = FUN_1013cdc0();
    uVar2 = extraout_r2;
  }
  iVar4 = DAT_10017c1c;
  local_14 = *DAT_10017c18;
  uStack_10 = uVar2;
  if ((*(byte *)(DAT_10017c1c + 0x1e) & 0xc) == 0) goto LAB_10017c08;
  puVar3 = *(uint **)(DAT_10017c1c + 0x20);
  unaff_r5 = (DAT_10017c20 - DAT_10017c24) * 0x20 & 0xff00;
  if (puVar3 == (uint *)0x0) goto LAB_10017be6;
  *(byte *)(DAT_10017c1c + 0x1e) =
       *(byte *)(DAT_10017c1c + 0x1e) & 0xf1 | (byte)((*puVar3 & 7) << 1);
  *(uint *)(iVar4 + 0x20) = puVar3[1];
  FUN_1012d1f4();
  do {
    uStack_20 = FUN_100a5b78(DAT_10017c28 | unaff_r5,DAT_10017c30,DAT_10017c2c,
                             (*(byte *)(iVar4 + 0x1e) & 0xf) >> 1);
    if ((*(byte *)(iVar4 + 0x1e) & 0xe) == 0) {
      uStack_20 = FUN_10013334(DAT_10017c34);
    }
    if ((*(byte *)(iVar4 + 0x1e) & 0xe) == 2) {
      if ((*DAT_10017c18 ^ local_14) == 0) {
        iVar4 = *DAT_1000eb4c;
        uStack_18 = *DAT_10017c18 ^ local_14;
        FUN_1011ea48(&uStack_20,0,0x14,0);
        uVar1 = uStack_20;
        uStack_20._0_4_ = CONCAT22(0xd708,(undefined2)uStack_20);
        uStack_20._4_4_ = CONCAT31(SUB83(uVar1,5),1);
        uVar2 = FUN_1009e224();
        FUN_1009ece8(uVar2,&uStack_20);
        if (*DAT_1000eb4c != iVar4) {
          FUN_1013cdc0();
        }
        return;
      }
    }
    else {
LAB_10017c08:
      if (*DAT_10017c18 == local_14) {
        return;
      }
    }
    FUN_1013cdc0();
LAB_10017be6:
    FUN_100a5b78(DAT_10017c38 | unaff_r5,DAT_10017c30,DAT_10017c3c);
    *(byte *)(iVar4 + 0x1e) = *(byte *)(iVar4 + 0x1e) & 0xf1 | 2;
  } while( true );
}

