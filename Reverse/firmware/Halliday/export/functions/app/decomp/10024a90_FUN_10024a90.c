/* FUN_10024a90 @ 0x10024a90 */

void FUN_10024a90(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *unaff_r7;
  undefined4 *puVar7;
  
  iVar6 = *DAT_10024bb8;
  puVar2 = (undefined4 *)FUN_1012437a();
  iVar3 = FUN_10124372(param_1);
  puVar7 = DAT_10024bbc;
  if (puVar2 != (undefined4 *)0xd) goto LAB_10024b04;
  puVar2 = (undefined4 *)*DAT_10024bbc;
  uVar4 = FUN_100871bc(param_1);
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 10) {
    unaff_r7 = *(undefined4 **)(iVar3 + 0x10);
    iVar3 = FUN_1011ea18(unaff_r7,PTR_s_remove_1015af2f_0x13_10024bc0);
    if (iVar3 != 0) goto LAB_10024b12;
    FUN_10023d9c();
    (**(code **)(PTR_DAT_10024bc4 + 8))(*(undefined1 *)(puVar2 + 0x81));
    FUN_100245c4();
    FUN_10052c38(2,3,0);
    puVar7 = unaff_r7;
  }
  else if (uVar4 - 0x11 < 2) {
    puVar2 = (undefined4 *)*puVar7;
    iVar3 = FUN_10126fd2(puVar2[9]);
    puVar1 = DAT_10024be0;
    if (iVar3 != 0) {
      iVar3 = (*(code *)DAT_10024be0[3])(puVar2[5]);
      puVar7 = puVar1;
      if (iVar3 == 0) {
        FUN_10023df0();
        FUN_100245c4();
        FUN_100919e0(puVar2[9],0,0,0);
      }
      else {
        iVar3 = (*(code *)puVar1[3])(puVar2[6]);
        if (iVar3 == 0) {
          FUN_10023d9c();
          FUN_100245c4();
        }
      }
    }
  }
  else if (uVar4 == 0x1b) {
    FUN_10023f38();
  }
LAB_10024aec:
  uVar5 = FUN_100871bc(param_1);
  FUN_10094174(4,PTR_s_WEST_TOPDIR_application_bt_watch_10024bd0,0xd8,
               PTR_s_opration_event_handler_10024bcc,PTR_s_Button_clicked___d_10024bc8,uVar5);
  unaff_r7 = puVar7;
LAB_10024b04:
  if (*DAT_10024bb8 == iVar6) {
    return;
  }
  FUN_1013cdc0();
LAB_10024b12:
  iVar3 = FUN_1011ea18(unaff_r7,PTR_DAT_10024bd4);
  puVar7 = unaff_r7;
  if (iVar3 != 0) goto LAB_10024b3c;
  FUN_10023df0();
  uVar5 = FUN_100255c4(*puVar2,puVar2 + 0x6b,*(undefined1 *)(puVar2 + 0x81));
  goto LAB_10024b30;
LAB_10024b3c:
  iVar3 = FUN_1011ea18(unaff_r7,PTR_s_later_10024bdc);
  if (iVar3 == 0) {
    FUN_10023df0();
    uVar5 = FUN_100252d8(*puVar2,puVar2 + 0x6b,*(undefined1 *)(puVar2 + 0x81));
LAB_10024b30:
    FUN_10086fc4(uVar5,PTR_LAB_10024a68_1_10024bd8,0x21,0);
  }
  goto LAB_10024aec;
}

