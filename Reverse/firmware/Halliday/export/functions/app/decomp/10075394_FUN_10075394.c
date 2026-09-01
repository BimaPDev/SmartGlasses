/* FUN_10075394 @ 0x10075394 */

int * FUN_10075394(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  uVar11 = (DAT_10075544 - DAT_10075548) * 0x20 & 0xff00;
  if (param_2 == 0) {
    FUN_100a5b78(DAT_1007554c | uVar11,PTR_s_acts_audio_in_open_10075554,
                 PTR_s_NULL_parameter_10075550,DAT_10075548,param_1,0,param_3,param_4);
    return (int *)0x0;
  }
  uVar14 = param_1;
  uVar15 = param_2;
  FUN_1011f918(*(undefined4 *)(param_1 + 0x10));
  iVar13 = DAT_10075568;
  piVar10 = DAT_10075564;
  uVar3 = *(ushort *)(param_2 + 2);
  bVar1 = *(byte *)(param_2 + 2);
  uVar12 = (uint)bVar1;
  uVar6 = uVar3 & 8;
  if ((uVar3 & 8) == 0) {
    if ((uVar3 & 0x30) != 0) goto LAB_10075400;
    FUN_100a5b78(uVar11 | 0x870011,PTR_s_audio_in_session_check_1007555c,
                 PTR_s_Invalid_session_type__d_10075558,uVar12,uVar14,uVar15,param_3,param_4);
LAB_100753e8:
    FUN_100a5b78(uVar11 | 0x2480011,PTR_s_acts_audio_in_open_10075554,
                 PTR_s_Failed_to_get_audio_session__typ_10075560,uVar12,uVar14,uVar15,param_3,
                 param_4);
  }
  else {
    uVar6 = 1;
LAB_10075400:
    uVar9 = uVar6;
    if (*DAT_10075564 != DAT_10075568) {
      if (uVar6 == 0) goto LAB_10075426;
      if (-1 < (int)((uint)*(byte *)(DAT_10075564 + 3) << 0x1f)) goto LAB_1007544a;
      goto LAB_100753e8;
    }
    if ((int)((uint)*(byte *)(DAT_10075564 + 3) << 0x1f) < 0) {
      uVar9 = (uint)((uVar12 & *(ushort *)((int)DAT_10075564 + 10)) != 0);
      if (uVar9 < uVar6) goto LAB_100753e8;
LAB_10075426:
      FUN_100a5b78(uVar11 | 0x960013,PTR_s_audio_in_session_check_1007555c,DAT_1007556c,uVar12,uVar6
                   ,uVar9,param_3,param_4);
      uVar14 = uVar6;
      uVar15 = uVar9;
      goto LAB_100753e8;
    }
    if (uVar6 == 0) goto LAB_10075426;
LAB_1007544a:
    FUN_1011ea48(DAT_10075570,0,0x20);
    *(ushort *)((int)piVar10 + 10) = (ushort)bVar1;
    *(undefined2 *)(piVar10 + 3) = 1;
    *piVar10 = iVar13;
    uVar6 = *(uint *)(param_2 + 0x1c);
    iVar13 = *(int *)(param_2 + 0x20);
    if ((uVar6 == 0) || (iVar13 != 0)) {
      piVar10[4] = *(int *)(param_2 + 0x14);
      iVar7 = *(int *)(param_2 + 0x18);
      piVar10[7] = iVar13;
      piVar10[5] = iVar7;
      piVar10[6] = uVar6;
      cVar2 = *(char *)(param_2 + 4);
      if (cVar2 == '\0') {
        uVar5 = 2;
      }
      else {
        uVar5 = 4;
      }
      *(undefined1 *)((int)piVar10 + 0xe) = uVar5;
      if (uVar12 == 8) {
        iVar13 = *(int *)(*(int *)(param_1 + 0x10) + 0x1c);
        if (iVar13 == 0) {
          FUN_100a5b78(DAT_10075574 | uVar11,PTR_s_audio_in_enable_adc_1007557c,
                       PTR_s_Physical_ADC_device_is_not_esixt_10075578,cVar2,uVar14,uVar15,param_3,
                       param_4);
          iVar13 = -0xe;
        }
        else if ((cVar2 == '\0') || (cVar2 == '\x03')) {
          iVar13 = (*(code *)**(undefined4 **)(iVar13 + 8))(iVar13,param_2);
          uVar14 = DAT_10075594;
          if (iVar13 == 0) {
            uVar4 = **(undefined2 **)(param_2 + 8);
            *(undefined2 *)(piVar10 + 2) = uVar4;
            *(byte *)(piVar10 + 3) = *(byte *)(piVar10 + 3) | 2;
            FUN_100a5b78(uVar14 | uVar11,PTR_s_acts_audio_in_open_10075554,DAT_10075598,
                         *(undefined1 *)((int)piVar10 + 0xd),piVar10,8,uVar4,param_4);
            piVar10 = DAT_10075564;
            goto LAB_10075510;
          }
        }
        else {
          FUN_100a5b78(DAT_1007558c | uVar11,PTR_s_audio_in_enable_adc_1007557c,DAT_10075590,cVar2,
                       uVar14,uVar15,param_3,param_4);
          iVar13 = -0x16;
        }
LAB_1007549c:
        uVar11 = uVar11 | 0x2740012;
        puVar8 = PTR_s_Enable_channel_type__d_error__d_10075580;
        uVar6 = uVar12;
        goto LAB_100754c0;
      }
      if ((uVar12 == 0x10) || (uVar12 == 0x20)) {
        iVar13 = -6;
        goto LAB_1007549c;
      }
      FUN_100a5b78(DAT_1007559c | uVar11,PTR_s_acts_audio_in_open_10075554,DAT_100755a0,uVar12,
                   uVar14,uVar15,param_3,param_4);
    }
    else {
      uVar11 = DAT_10075584 | uVar11;
      iVar13 = 0;
      puVar8 = DAT_10075588;
LAB_100754c0:
      FUN_100a5b78(uVar11,PTR_s_acts_audio_in_open_10075554,puVar8,uVar6,iVar13,uVar15,param_3,
                   param_4);
    }
    FUN_100749dc(DAT_10075564);
  }
  piVar10 = (int *)0x0;
LAB_10075510:
  FUN_10113fd0(*(undefined4 *)(param_1 + 0x10));
  return piVar10;
}

