/* FUN_100d93d8 @ 0x100d93d8 */

void FUN_100d93d8(int param_1,undefined1 *param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ushort uVar10;
  byte bVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  byte local_2b;
  undefined1 uStack_2a;
  char local_29 [5];
  
  iVar7 = FUN_100d4fe0();
  if (iVar7 != 0) {
    thunk_FUN_10136bf6(param_1,7);
  }
  FUN_100d4e5c(param_1,&local_2b,&uStack_2a,local_29);
  if ((local_2b & 0xfd) == 0) {
    iVar7 = FUN_1013650a();
    if ((param_1 == iVar7) || (iVar7 = FUN_100d5e14(), iVar7 == 3)) {
      piVar3 = DAT_100d95ac;
      piVar2 = DAT_100d95a8;
      if (local_2b == 0) {
        iVar7 = 0xd;
      }
      else {
        iVar7 = 0x10;
      }
      if (local_29[0] == '\x02') {
        iVar7 = iVar7 + 1;
      }
      uVar14 = param_3 - iVar7;
      if (*DAT_100d95a8 == 0) {
        *DAT_100d95ac = 0;
        iVar8 = FUN_10061948();
        *piVar2 = iVar8;
      }
      *piVar3 = *piVar3 + (uVar14 & 0xffff);
      iVar8 = FUN_10061948();
      if (DAT_100d95b0 < (uint)(iVar8 - *piVar2)) {
        if (*piVar2 != 0) {
          FUN_100a5b78(((int)PTR_DAT_100d95b8 - (int)PTR_DAT_100d95b4) * 0x20 & 0xff00U | 0x850031,
                       PTR_s__btsrv_a2dp_debug_date_rate_100d95bc,
                       PTR_s_a2dp_data_rate___d_bytes_s_100d95c0,*piVar3 / 5);
        }
        *piVar3 = 0;
        iVar8 = FUN_10061948();
        *piVar2 = iVar8;
      }
      uVar9 = thunk_FUN_10115958();
      iVar8 = DAT_100d95e0;
      pbVar5 = DAT_100d95c8;
      puVar4 = DAT_100d95c4;
      uVar12 = (uint)*DAT_100d95c8;
      *(short *)(DAT_100d95e0 + uVar12 * 4) = (short)uVar9 - (short)*DAT_100d95c4;
      bVar11 = (byte)(uVar12 + 1);
      if (9 < (uVar12 + 1 & 0xff)) {
        bVar11 = 0;
      }
      *pbVar5 = bVar11;
      *(short *)(iVar8 + uVar12 * 4 + 2) = (short)uVar14;
      *puVar4 = uVar9;
      if (local_2b == 0) {
        uVar10 = (byte)param_2[iVar7 + -1] & 0xf;
      }
      else {
        uVar10 = 1;
      }
      uVar12 = iVar7 - 8U & 0xff;
      puVar13 = param_2 + uVar12;
      uVar1 = CONCAT11(param_2[2],param_2[3]);
      *(ushort *)(param_2 + uVar12) = uVar10;
      *(ushort *)(puVar13 + 2) = uVar1;
      *(short *)(puVar13 + 4) = (short)uVar14;
      *(short *)(puVar13 + 6) = (short)(uVar14 & 1);
      iVar7 = thunk_FUN_10115958();
      puVar6 = DAT_100d95e8;
      piVar2 = DAT_100d95e4;
      if ((param_1 == *DAT_100d95cc) && ((uint)(iVar7 - *DAT_100d95e4) < 0x12d)) {
        uVar10 = *DAT_100d95e8 + 1;
        *DAT_100d95e8 = uVar10;
        if ((uint)uVar1 != (uint)uVar10) {
          FUN_100a5b78(((int)PTR_DAT_100d95b8 - (int)PTR_DAT_100d95b4) * 0x20 & 0xff00U | 0xe40012,
                       PTR_s_btsrv_a2dp_pack_date_header_100d95d4,PTR_s_pkt_miss__d__d_100d95d0,
                       (uint)uVar1,uVar10 - 1);
        }
      }
      else {
        *DAT_100d95cc = param_1;
      }
      *puVar6 = uVar1;
      *piVar2 = iVar7;
      FUN_100d93ac(param_1,6,puVar13,(param_3 - uVar12) + (uVar14 & 1));
    }
  }
  else {
    FUN_100a5b78(((int)PTR_DAT_100d95b8 - (int)PTR_DAT_100d95b4) * 0x20 & 0xff00U | 0x1200033,
                 PTR_s__btsrv_a2dp_media_handler_cb_100d95dc,
                 PTR_s_A2dp_not_support_type__0x_x__0x__100d95d8,*param_2,param_2[1],local_2b);
  }
  return;
}

