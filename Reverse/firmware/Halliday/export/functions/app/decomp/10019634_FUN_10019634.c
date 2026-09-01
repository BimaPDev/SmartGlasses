/* FUN_10019634 @ 0x10019634 */

void FUN_10019634(byte *param_1)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *extraout_r1;
  undefined *puVar7;
  undefined *puVar8;
  int extraout_r3;
  byte *unaff_r4;
  uint uVar9;
  int iVar10;
  byte *unaff_r6;
  byte *pbVar11;
  byte *unaff_r8;
  byte *unaff_r9;
  byte *unaff_r10;
  byte *unaff_r11;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  
  pbVar2 = DAT_10019944;
  pbVar5 = DAT_10019940;
  pbVar11 = (byte *)(*param_1 & 1);
  local_2c = *(int *)PTR_DAT_10019934;
  if ((*param_1 & 1) == 0) {
    if (param_1[8] != 0) {
      unaff_r9 = (byte *)0xffffffff;
      unaff_r10 = (byte *)0x7f;
      pbVar5 = param_1 + 1;
      unaff_r4 = DAT_10019944;
      unaff_r6 = DAT_10019944;
      unaff_r8 = DAT_10019940;
      unaff_r11 = DAT_10019940;
      goto LAB_10019700;
    }
  }
  else {
    uVar9 = ((int)PTR_DAT_1001993c - (int)PTR_DAT_10019938) * 0x20 & 0xff00;
    FUN_100a5b78(uVar9 | 0xc50031,PTR_s_bt_transmit_inquiry_result_1001994c,
                 PTR_s_Discover_finish_cnt__d_10019948,*DAT_10019940);
    FUN_100bb7bc();
    unaff_r9 = PTR_s__s__connected__d__paired__d__rss_10019978;
    unaff_r4 = (byte *)(uVar9 | 0xcb0034);
    param_1 = pbVar2;
    for (pbVar11 = (byte *)0x0; (int)pbVar11 < (int)(uint)*pbVar5; pbVar11 = pbVar11 + 1) {
      if (*(int *)param_1 == 0) {
        uVar6 = 0xc9;
        puVar7 = PTR_s_bt_transmit_inquiry_result_10019954;
        puVar8 = PTR_s_bt_device_info_i__name____NULL_10019950;
LAB_100196aa:
                    /* WARNING: Subroutine does not return */
        FUN_10117c88(PTR_s_WEST_TOPDIR_application_bt_watch_10019958,uVar6,puVar7,puVar8);
      }
      FUN_100a5b78(unaff_r4,PTR_s_bt_transmit_inquiry_result_1001994c,unaff_r9,*(int *)param_1,
                   pbVar2[(int)pbVar11 * 0xc + 10] & 1,(pbVar2[(int)pbVar11 * 0xc + 10] & 3) >> 1,
                   (int)(char)param_1[0xb]);
      FUN_1012d1f4(*(undefined4 *)param_1);
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 0xc;
    }
    *pbVar5 = 0;
    unaff_r6 = pbVar5;
    unaff_r8 = pbVar2;
  }
LAB_1001968e:
  if (*(int *)PTR_DAT_10019934 == local_2c) {
    return;
  }
  do {
    FUN_1013cdc0();
    pbVar5 = extraout_r1;
    iVar4 = extraout_r3;
    do {
      if ((-1 < (int)((uint)unaff_r4[iVar4 * (int)pbVar11 + 10] << 0x1f)) &&
         ((int)(char)unaff_r6[0xb] < (int)unaff_r10)) {
        unaff_r9 = pbVar11;
        unaff_r10 = (byte *)(int)(char)unaff_r6[0xb];
      }
      pbVar11 = pbVar11 + 1;
      unaff_r6 = unaff_r6 + 0xc;
LAB_10019700:
      uVar9 = (uint)*unaff_r11;
      if ((int)uVar9 <= (int)pbVar11) {
        if (uVar9 < 4) {
          iVar4 = uVar9 * 0xc;
          *unaff_r11 = *unaff_r11 + 1;
        }
        else {
          if (((int)(char)param_1[7] <= (int)unaff_r10) || (unaff_r9 == (byte *)0xffffffff))
          goto LAB_1001968e;
          iVar4 = (int)unaff_r9 * 0xc;
          FUN_1012d1f4(*(undefined4 *)(unaff_r4 + iVar4));
          FUN_100a5b78(((int)PTR_DAT_1001993c - (int)PTR_DAT_10019938) * 0x20 & 0xff00U | 0xa50037,
                       PTR_s__bt_transmit_append_inquiry_resu_10019968,
                       PTR_s_Replace_by_mac__02x__02x__02x__0_10019970,param_1[6],param_1[5],
                       param_1[4],param_1[3],param_1[2],param_1[1],(int)(char)param_1[7]);
        }
        unaff_r6 = unaff_r4 + iVar4;
        iVar4 = thunk_FUN_1009f30c(param_1[8] + 1,PTR_s__bt_transmit_append_inquiry_resu_1001995c);
        *(int *)unaff_r6 = iVar4;
        if (iVar4 == 0) {
          uVar6 = 0xae;
          puVar7 = PTR_s__bt_transmit_append_inquiry_resu_1001995c;
          puVar8 = PTR_s_info_>name____NULL_10019960;
          goto LAB_100196aa;
        }
        FUN_1011ea40(iVar4,*(undefined4 *)(param_1 + 0xc),param_1[8]);
        unaff_r9 = (byte *)0x0;
        *(undefined1 *)(*(int *)unaff_r6 + (uint)param_1[8]) = 0;
        pbVar5 = param_1 + 1;
        *(undefined4 *)(unaff_r6 + 4) = *(undefined4 *)pbVar5;
        *(undefined2 *)(unaff_r6 + 8) = *(undefined2 *)(param_1 + 5);
        puVar7 = PTR_DAT_1001993c;
        unaff_r6[0xb] = param_1[7];
        bVar3 = FUN_10019594(pbVar5);
        unaff_r6[10] = unaff_r6[10] & 0xfe | bVar3 & 1;
        iVar4 = FUN_10131362(pbVar5,0);
        bVar3 = unaff_r6[10];
        iVar10 = (int)puVar7 - (int)PTR_DAT_10019938;
        unaff_r6[10] = bVar3 & 0xfd | (iVar4 == 0) << 1;
        param_1 = (byte *)(iVar10 * 0x20 & 0xff00);
        FUN_100a5b78((uint)param_1 | 0xb90034,PTR_s__bt_transmit_append_inquiry_resu_10019968,
                     PTR_s_Name__s__connected__d__paired__d_10019974,*(undefined4 *)unaff_r6,
                     bVar3 & 1,iVar4 == 0,(int)(char)unaff_r6[0xb]);
        goto LAB_1001977a;
      }
      iVar10 = FUN_1011ea30(unaff_r6 + 4,pbVar5,6);
      iVar4 = 0xc;
    } while (iVar10 != 0);
    bVar3 = param_1[7];
    if (((int)(char)unaff_r4[(int)pbVar11 * 0xc + 0xb] < (int)(char)bVar3) ||
       ((char)unaff_r4[(int)pbVar11 * 0xc + 0xb] == 0)) {
      unaff_r4[(int)pbVar11 * 0xc + 0xb] = bVar3;
      FUN_100a5b78(((int)PTR_DAT_1001993c - (int)PTR_DAT_10019938) * 0x20 & 0xff00U | 0x920032,
                   PTR_s__bt_transmit_append_inquiry_resu_10019968,PTR_s__s_update_rssi__d_10019964,
                   *(undefined4 *)(unaff_r4 + (int)pbVar11 * 0xc),(int)(char)bVar3);
    }
LAB_1001977a:
    pbVar11 = (byte *)(uint)*unaff_r8;
    if ((byte *)0x1 < pbVar11) {
      unaff_r9 = pbVar11 + -1;
      unaff_r8 = (byte *)0x0;
      unaff_r6 = (byte *)&local_38;
      do {
        bVar1 = true;
        pbVar5 = unaff_r9;
        param_1 = unaff_r4 + (int)pbVar11 * 0xc;
        while ((int)unaff_r8 < (int)pbVar5) {
          unaff_r10 = pbVar5 + -1;
          if ((int)((uint)(unaff_r4[(int)unaff_r10 * 0xc + 10] ^ unaff_r4[(int)pbVar5 * 0xc + 10])
                   << 0x1f) < 0) {
            if ((int)((uint)unaff_r4[(int)pbVar5 * 0xc + 10] << 0x1f) < 0) goto LAB_100198e8;
          }
          else if (0 < (int)(char)param_1[-1] - (int)(char)param_1[-0xd]) {
LAB_100198e8:
            local_38 = *(undefined4 *)(param_1 + -0xc);
            uStack_34 = *(undefined4 *)(param_1 + -8);
            uStack_30 = *(undefined4 *)(param_1 + -4);
            *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(param_1 + -0x18);
            *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_1 + -0x14);
            *(undefined4 *)(param_1 + -4) = *(undefined4 *)(param_1 + -0x10);
            *(undefined4 *)(param_1 + -0x18) = local_38;
            *(undefined4 *)(param_1 + -0x14) = uStack_34;
            *(undefined4 *)(param_1 + -0x10) = uStack_30;
            bVar1 = false;
          }
          param_1 = param_1 + -0xc;
          pbVar5 = unaff_r10;
        }
        unaff_r11 = unaff_r9;
      } while ((!bVar1) && (unaff_r8 = unaff_r8 + 1, unaff_r9 != unaff_r8));
    }
    if ((code *)*DAT_1001996c == (code *)0x0) goto LAB_1001968e;
    if (*(int *)PTR_DAT_10019934 == local_2c) {
                    /* WARNING: Could not recover jumptable at 0x10019986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*DAT_1001996c)(DAT_10019988,pbVar11);
      return;
    }
  } while( true );
}

