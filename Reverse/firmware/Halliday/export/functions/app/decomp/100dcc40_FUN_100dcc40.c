/* FUN_100dcc40 @ 0x100dcc40 */

int FUN_100dcc40(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  short sVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    return -0xd;
  }
  iVar6 = FUN_100dcc30();
  psVar9 = *(short **)(param_1 + 0x54);
  if (psVar9 == (short *)0x0) {
    return -0xd;
  }
  if (iVar6 == 0) {
    psVar9[4] = 0;
    return param_3;
  }
  iVar10 = *(int *)(psVar9 + 2);
  iVar7 = FUN_1011dbc4();
  if ((iVar7 != 0) && (*(byte *)(psVar9 + 6) < 3)) {
    *(byte *)(psVar9 + 6) = *(byte *)(psVar9 + 6) + 1;
    return param_3;
  }
  uVar8 = (uint)(ushort)psVar9[4];
  if (*psVar9 == 0xb) {
    psVar9[4] = psVar9[4] + 1;
    *(undefined1 *)(iVar10 + uVar8) = 1;
    puVar4 = PTR_DAT_100dcddc;
    uVar1 = psVar9[4];
    psVar9[4] = uVar1 + 1;
    pbVar5 = DAT_100dcdf8;
    uVar8 = *(byte *)(psVar9 + 5) + 1 & 3;
    *(char *)(psVar9 + 5) = (char)uVar8;
    *(undefined *)(iVar10 + (uint)uVar1) = puVar4[uVar8];
    FUN_1011ea40((uint)(ushort)psVar9[4] + iVar10,param_2,param_3);
    uVar1 = psVar9[4];
    psVar9[4] = (short)((uint)uVar1 + param_3);
    *(undefined1 *)(iVar10 + ((uint)uVar1 + param_3 & 0xffff)) = 0;
    uVar8 = FUN_10136dee(iVar6);
    if (0x13 < uVar8) {
      FUN_100a5b78(((int)PTR_DAT_100dcde4 - (int)PTR_DAT_100dcde0) * 0x20 & 0xff00U | 0xb00021,
                   PTR_s_sco_upload_stream_send_direct_100dcdec,
                   PTR_s_Sco_controler_pending__100dcde8);
      bVar2 = *pbVar5;
      psVar9[4] = 0;
      if (bVar2 < 2) {
        *pbVar5 = bVar2 + 1;
      }
      if (*pbVar5 != 2) {
        return -0x10;
      }
      return param_3;
    }
    sVar3 = psVar9[4];
    *pbVar5 = 0;
    iVar6 = FUN_10131ce2(iVar6,iVar10,(char)sVar3);
    if (iVar6 == 0) goto LAB_100dcd40;
    uVar8 = ((int)PTR_DAT_100dcde4 - (int)PTR_DAT_100dcde0) * 0x20 & 0xff00U | 0xbe0000;
  }
  else {
    if ((int)(uint)(ushort)psVar9[1] < (int)(uVar8 + param_3)) {
      FUN_100a5b78(((int)PTR_DAT_100dcde4 - (int)PTR_DAT_100dcde0) * 0x20 & 0xff00U | 0xc70022,
                   PTR_s_sco_upload_stream_send_direct_100dcdec,PTR_s_buff_overflow__d__d_100dcdf4,
                   (uint)(ushort)psVar9[1],param_3);
    }
    else {
      FUN_1011ea40(uVar8 + iVar10,param_2,param_3);
      psVar9[4] = psVar9[4] + (short)param_3;
    }
    if (psVar9[4] != psVar9[1]) {
      return param_3;
    }
    uVar8 = FUN_10136dee(iVar6);
    if (0x13 < uVar8) {
      FUN_100a5b78(((int)PTR_DAT_100dcde4 - (int)PTR_DAT_100dcde0) * 0x20 & 0xff00U | 0xcc0021,
                   PTR_s_sco_upload_stream_send_direct_100dcdec,
                   PTR_s_Sco_controler_pending__100dcde8);
      psVar9[4] = 0;
      return -0x10;
    }
    iVar6 = FUN_10131ce2(iVar6,iVar10,(char)psVar9[4]);
    if (iVar6 == 0) goto LAB_100dcd40;
    uVar8 = ((int)PTR_DAT_100dcde4 - (int)PTR_DAT_100dcde0) * 0x20 & 0xff00U | 0xd20000;
  }
  FUN_100a5b78(uVar8 | 0x21,PTR_s_sco_upload_stream_send_direct_100dcdec,
               PTR_s_sco_send_failed_ret__d_100dcdf0,iVar6);
LAB_100dcd40:
  psVar9[4] = 0;
  return param_3;
}

