/* FUN_1002db7c @ 0x1002db7c */

void FUN_1002db7c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_1002dd38;
  uVar5 = (DAT_1002dd3c - DAT_1002dd40) * 0x20 & 0xff00;
  FUN_100a5b78(uVar5 | 0xed0031,DAT_1002dd48,DAT_1002dd44);
  local_40 = 0;
  uStack_3c = 0;
  iVar1 = FUN_1006be64(&local_40,DAT_1002dd4c);
  if (-1 < iVar1) goto LAB_1002dbf4;
  iVar1 = FUN_1006c1dc(DAT_1002dd4c);
  if (iVar1 == 0) goto LAB_1002dbe4;
  uVar2 = uVar5 | 0xf40031;
  uVar4 = DAT_1002dd50;
  uVar8 = DAT_1002dd4c;
  do {
    FUN_100a5b78(uVar2,DAT_1002dd48,uVar4,uVar8);
    while( true ) {
      if (*DAT_1002dd38 == local_2c) {
        return;
      }
      FUN_1013cdc0();
LAB_1002dbe4:
      FUN_100a5b78(uVar5 | 0xf70011,DAT_1002dd48,DAT_1002dd54);
LAB_1002dbf4:
      FUN_1006c184(&local_40);
      local_38 = 0;
      uStack_34 = 0;
      local_30 = 0;
      iVar1 = FUN_1006ba84(&local_38,DAT_1002dd58,3);
      if ((iVar1 < 0) && (iVar1 = FUN_1006ba84(&local_38,DAT_1002dd58,0x13), iVar1 < 0)) break;
      iVar1 = FUN_100ed61c(2,0x114,DAT_1002dd60);
      if (iVar1 != 0) {
        uVar2 = 0;
        uVar6 = uVar5 | DAT_1002dd84;
        uVar7 = uVar5 | DAT_1002dd88;
        do {
          uVar8 = 0x109;
          uVar4 = DAT_1002dd60;
          FUN_100a5b78(uVar6,DAT_1002dd48,DAT_1002dd64,uVar2,DAT_1002dd60,0x109);
          FUN_1011ea48(iVar1,0,0x114);
          iVar3 = FUN_1006bd24(&local_38,uVar2 * 0x114,0);
          if (iVar3 == 0) {
            iVar3 = FUN_1006bc84(&local_38,iVar1,0x114);
            if (iVar3 != 0x114) {
              FUN_100a5b78(uVar5 | 0x1120033,DAT_1002dd48,DAT_1002dd7c,uVar2,
                           *(undefined1 *)(iVar1 + 10),*(undefined1 *)(iVar1 + 9));
              goto LAB_1002dd0c;
            }
            FUN_100a5b78(DAT_1002dd68 | uVar5,DAT_1002dd48,DAT_1002dd6c,uVar2,
                         *(undefined1 *)(iVar1 + 10),*(undefined1 *)(iVar1 + 9));
            FUN_1002d288(iVar1,uVar2 & 0xff);
          }
          else {
            FUN_100a5b78(uVar7,DAT_1002dd48,DAT_1002dd80,uVar2,uVar4,uVar8);
LAB_1002dd0c:
            FUN_1011ea48(iVar1,0,0x114);
            FUN_1006bcd4(&local_38,iVar1,0x114);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 0x14);
        FUN_100ed77c(2,iVar1);
      }
      FUN_100a5b78(uVar5 | 0x11e0032,DAT_1002dd48,DAT_1002dd70,DAT_1002dd60,0x11e);
      FUN_1006bc30(&local_38);
      FUN_1002db08();
      FUN_100a5b78(DAT_1002dd74 | uVar5,DAT_1002dd48,DAT_1002dd78,DAT_1002dd60,0x121);
    }
    uVar2 = uVar5 | 0x1000011;
    uVar4 = DAT_1002dd5c;
    uVar8 = DAT_1002dd58;
  } while( true );
}

