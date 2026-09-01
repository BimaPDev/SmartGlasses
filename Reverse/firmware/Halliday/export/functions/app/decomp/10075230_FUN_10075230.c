/* FUN_10075230 @ 0x10075230 */

int FUN_10075230(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 local_22 [3];
  
  iVar5 = *(int *)(param_1 + 0x10);
  uVar3 = (DAT_10075358 - DAT_10075354) * 0x20 & 0xff00;
  if (param_2 == (int *)0x0) {
    FUN_100a5b78(DAT_1007535c | uVar3,DAT_10075364,DAT_10075360);
    return -0x16;
  }
  FUN_1011f918(iVar5);
  if (*param_2 != DAT_10075368) {
    FUN_100a5b78(DAT_1007536c | uVar3,DAT_10075364,DAT_10075370);
    iVar4 = -0xe;
    goto LAB_10075282;
  }
  cVar1 = *(char *)((int)param_2 + 10);
  if (cVar1 == '\b') {
    iVar2 = *(int *)(param_1 + 0x10);
    local_22[0] = (undefined2)param_2[2];
    iVar4 = *(int *)(iVar2 + 0x1c);
    if (iVar4 == 0) {
      FUN_100a5b78(DAT_10075374 | uVar3,PTR_s_audio_in_disable_adc_1007537c,
                   PTR_s_Physical_ADC_device_is_not_esixt_10075378);
      iVar4 = -0xe;
    }
    else {
      if ((*(byte *)(param_2 + 3) & 0xc) == 8) {
        if (*(char *)(iVar2 + 0x35) != '\0') {
          *(char *)(iVar2 + 0x35) = *(char *)(iVar2 + 0x35) + -1;
          goto LAB_10075326;
        }
LAB_100752d6:
        *(undefined1 *)(iVar2 + 0x34) = 0;
      }
      else {
LAB_10075326:
        if (*(char *)(iVar2 + 0x35) == '\0') goto LAB_100752d6;
      }
      iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 4))(iVar4,local_22);
      if (iVar4 == 0) {
        if ((*(int *)(iVar5 + 0x18) != 0) && (param_2[1] != 0)) {
          (**(code **)(*(int *)(*(int *)(iVar5 + 0x18) + 8) + 0xc))();
          (**(code **)(*(int *)(*(int *)(iVar5 + 0x18) + 8) + 0x18))
                    (*(int *)(iVar5 + 0x18),param_2[1]);
        }
        FUN_100a5b78(DAT_10075384 | uVar3,DAT_10075364,DAT_10075388,
                     *(undefined1 *)((int)param_2 + 0xd),param_2);
        FUN_100749dc(param_2);
        goto LAB_10075282;
      }
    }
  }
  else {
    if ((cVar1 != '\x10') && (cVar1 != ' ')) {
      FUN_100a5b78(DAT_1007538c | uVar3,DAT_10075364,DAT_10075390,cVar1);
      iVar4 = -0x16;
      goto LAB_10075282;
    }
    iVar4 = -6;
  }
  FUN_100a5b78(uVar3 | 0x2f00012,DAT_10075364,PTR_s_Disable_channel_type__d_error__d_10075380,cVar1,
               iVar4);
LAB_10075282:
  FUN_10113fd0(*(undefined4 *)(param_1 + 0x10));
  return iVar4;
}

