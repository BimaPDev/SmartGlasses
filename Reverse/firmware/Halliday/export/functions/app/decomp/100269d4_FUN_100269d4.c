/* FUN_100269d4 @ 0x100269d4 */

void FUN_100269d4(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  int iVar5;
  int iVar6;
  
  iVar5 = *DAT_10026b80;
  iVar2 = FUN_1012437a();
  if ((param_1 == (int *)0x0) || (iVar6 = *DAT_10026b84, iVar6 == 0)) {
LAB_10026a02:
    if (*DAT_10026b80 == iVar5) {
      return;
    }
  }
  else {
    cVar1 = *(char *)(DAT_10026b88 + 0xe0);
    if (iVar2 == 7) {
LAB_100269fa:
      iVar2 = *(int *)(*param_1 + 0x10);
      if (iVar2 == 0) goto LAB_10026a02;
      FUN_100a5b78(((int)PTR_DAT_10026b8c - (int)PTR_DAT_10026b90) * 0x20 & 0xff00U | 0x1200031,
                   PTR_s_event_handle_10026b98,PTR_s_LV_EVENT_CLICKED_user_data_____s_10026ba0,iVar2
                  );
      iVar6 = FUN_1011ea18(iVar2,PTR_s_hangup_10026b9c);
      if (iVar6 == 0) {
        (*(code *)**(undefined4 **)(PTR_DAT_10026ba4 + 0x30))();
        if (cVar1 == '\x01') {
          uVar4 = 0;
          if (*DAT_10026b80 == iVar5) goto LAB_10026ab6;
        }
        else if (*DAT_10026b80 == iVar5) {
          uVar4 = 3;
          goto LAB_10026ab6;
        }
      }
      else {
        iVar6 = FUN_1011ea18(iVar2,PTR_s_accept_10026ba8);
        if (iVar6 == 0) {
          FUN_10026978();
          (**(code **)(*(int *)(PTR_DAT_10026ba4 + 0x30) + 8))();
          if (*DAT_10026b80 == iVar5) {
            uVar4 = 1;
            goto LAB_10026ab6;
          }
        }
        else {
          iVar2 = FUN_1011ea18(iVar2,PTR_s_silence_10026bac);
          if (iVar2 != 0) goto LAB_10026a02;
          (**(code **)(*(int *)(PTR_DAT_10026ba4 + 0x30) + 4))();
          if (*DAT_10026b80 == iVar5) {
            uVar4 = 4;
            goto LAB_10026ab6;
          }
        }
      }
    }
    else {
      if (iVar2 != 0xd) goto LAB_10026a02;
      iVar2 = FUN_100871bc(param_1);
      if (iVar2 == 10) goto LAB_100269fa;
      iVar2 = *(int *)(*param_1 + 0x10);
      if (iVar2 == 0) goto LAB_10026a02;
      uVar4 = FUN_100871bc(param_1);
      FUN_100a5b78(((int)PTR_DAT_10026b8c - (int)PTR_DAT_10026b90) * 0x20 & 0xff00U | 0x13e0032,
                   PTR_s_event_handle_10026b98,PTR_s_LV_EVENT_KEY__d_state_idx___d_10026b94,uVar4,
                   cVar1);
      if (cVar1 == '\x01') {
        iVar3 = FUN_1011ea18(iVar2,PTR_s_hangup_10026b9c);
        if (iVar3 == 0) {
          FUN_1008740c(*(undefined4 *)(iVar6 + 0x368),*(undefined4 *)(iVar6 + 0x14));
          uVar4 = *(undefined4 *)(iVar6 + 0x14);
        }
        else {
          iVar2 = FUN_1011ea18(iVar2,PTR_s_accept_10026ba8);
          if (iVar2 != 0) goto LAB_10026b44;
          FUN_1008740c(*(undefined4 *)(iVar6 + 0x368),*(undefined4 *)(iVar6 + 0x10));
          uVar4 = *(undefined4 *)(iVar6 + 0x10);
        }
        goto LAB_10026a68;
      }
      if (cVar1 == '\x02') {
        FUN_1008740c(*(undefined4 *)(iVar6 + 0x368),*(undefined4 *)(iVar6 + 0x24));
      }
      else if (cVar1 == '\x03') {
        iVar3 = FUN_1011ea18(iVar2,PTR_s_hangup_10026b9c);
        if (iVar3 == 0) {
          uVar4 = *(undefined4 *)(iVar6 + 0x38);
        }
        else {
          iVar2 = FUN_1011ea18(iVar2,PTR_s_silence_10026bac);
          if (iVar2 != 0) goto LAB_10026b44;
          uVar4 = *(undefined4 *)(iVar6 + 0x34);
        }
LAB_10026a68:
        FUN_101245ce(uVar4);
      }
LAB_10026b44:
      if (*DAT_10026b80 == iVar5) {
        FUN_1012458c(*(undefined4 *)(iVar6 + 0x368),1);
        return;
      }
    }
  }
  FUN_1013cdc0();
  uVar4 = extraout_r2;
LAB_10026ab6:
  FUN_10052c38(7,uVar4);
  return;
}

