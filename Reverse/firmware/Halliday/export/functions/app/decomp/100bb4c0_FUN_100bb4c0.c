/* FUN_100bb4c0 @ 0x100bb4c0 */

void FUN_100bb4c0(void)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined1 local_44 [32];
  
  puVar4 = PTR_FUN_100bb58c_1_100bb57c;
  puVar3 = PTR_s_bt_discover_check_finish_100bb578;
  puVar2 = PTR_s_Req_name__2x_2x_2x_2x_2x_2x_100bb574;
  pbVar1 = DAT_100bb568;
  iVar8 = 0;
  iVar7 = (int)PTR_DAT_100bb56c - (int)PTR_DAT_100bb570;
  pbVar6 = DAT_100bb568;
  do {
    iVar8 = iVar8 + 1;
    if (((pbVar1[iVar8 * 8 + 7] & 1) != 0) && ((int)((uint)pbVar1[iVar8 * 8 + 7] << 0x1e) < 0)) {
      FUN_100a5b78(iVar7 * 0x20 & 0xff00U | 0xc10036,puVar3,puVar2,pbVar6[0xd],pbVar6[0xc],
                   pbVar6[0xb],pbVar6[10],pbVar6[9],pbVar6[8]);
      pbVar1[iVar8 * 8 + 7] = pbVar1[iVar8 * 8 + 7] & 0xfd;
      iVar5 = FUN_1013680c(pbVar6 + 8,puVar4);
      if (iVar5 == 0) {
        return;
      }
    }
    pbVar6 = pbVar6 + 8;
  } while (iVar8 != 4);
  FUN_1011ea48(local_44,0);
  *pbVar1 = *pbVar1 & 0xfe;
  local_44[0] = 1;
  if (*(code **)(pbVar1 + 4) != (code *)0x0) {
    (**(code **)(pbVar1 + 4))(local_44);
  }
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0;
  return;
}

