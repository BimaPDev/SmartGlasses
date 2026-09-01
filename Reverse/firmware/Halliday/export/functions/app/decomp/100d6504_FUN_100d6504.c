/* FUN_100d6504 @ 0x100d6504 */

void FUN_100d6504(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int extraout_r3;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  uVar14 = DAT_100d6690;
  uVar15 = DAT_100d668c;
  piVar3 = DAT_100d6668;
  bVar2 = true;
  iVar12 = 0;
  *(byte *)(*DAT_100d6668 + 0xa4) = *(byte *)(*DAT_100d6668 + 0xa4) | 1;
  uVar10 = ((int)PTR_DAT_100d666c - (int)PTR_DAT_100d6670) * 0x20 & 0xff00;
  uVar15 = uVar10 | uVar15;
  uVar14 = uVar10 | uVar14;
  do {
    iVar16 = iVar12 + 0xd;
    iVar13 = iVar16 * 8;
    if ((int)((uint)*(byte *)(*piVar3 + iVar16 * 8 + 0xb) << 0x1f) < 0) {
      iVar4 = FUN_101364ae(*piVar3 + iVar12 * 8 + 0x6d);
      if (iVar4 == 0) {
        *(byte *)(iVar13 + *piVar3 + 0xb) = *(byte *)(iVar13 + *piVar3 + 0xb) & 0xfe;
      }
      else {
        iVar5 = FUN_101364ba();
        if (iVar5 == 0) {
          bVar1 = *(byte *)(iVar13 + *piVar3 + 0xc);
          if (((bVar1 & 0xf) != 0) &&
             (bVar11 = (bVar1 & 0xf) + 0xf & 0xf,
             *(byte *)(iVar13 + *piVar3 + 0xc) = bVar1 & 0xf0 | bVar11, bVar11 == 0)) {
            FUN_100a5b78(uVar15,PTR_s_btsrv_monitor_timer_handler_100d6680,DAT_100d6688);
            iVar13 = FUN_100c9900();
            if (iVar13 != 0) {
              iVar13 = FUN_1013662e(iVar4);
              uVar7 = 1;
              if (iVar13 != 1) {
                uVar7 = 2;
              }
              FUN_100d976c(iVar4,uVar7);
              bVar2 = false;
              goto LAB_100d6568;
            }
          }
LAB_100d65f8:
          bVar2 = false;
        }
        else {
          iVar6 = FUN_101364ca(iVar4);
          iVar5 = DAT_100d6684;
          if (iVar6 == 0) {
            bVar1 = *(byte *)(iVar13 + *piVar3 + 0xb);
            iVar6 = extraout_r3;
            if (((bVar1 & 0x1e) == 0) ||
               (uVar8 = ((bVar1 & 0x1f) >> 1) + 0xf & 0xf, uVar9 = DAT_100d6684 * uVar8,
               *(byte *)(iVar13 + *piVar3 + 0xb) = bVar1 & 0xe1 | (byte)(uVar8 << 1), iVar6 = iVar5,
               uVar9 < 0x55555556)) {
              FUN_100a5b78(uVar14,PTR_s_btsrv_monitor_timer_handler_100d6680,
                           PTR_s_BAC_Do_avrcp_connect_100d667c,iVar6,param_1,uVar10,param_3);
              FUN_100da24c(iVar4);
            }
            iVar13 = *piVar3 + iVar16 * 8;
            bVar1 = *(byte *)(iVar13 + 0xb);
            if ((bVar1 & 0x1e) != 0) goto LAB_100d65f8;
            *(byte *)(iVar13 + 0xb) = bVar1 & 0xfe | (byte)(((uint)bVar1 << 0x1b) >> 0x1c) & 1;
          }
          else {
            *(byte *)(iVar13 + *piVar3 + 0xb) = *(byte *)(iVar13 + *piVar3 + 0xb) & 0xfe;
          }
        }
      }
    }
LAB_100d6568:
    iVar12 = iVar12 + 1;
    if (iVar12 == 3) {
      *(byte *)(*piVar3 + 0xa4) = *(byte *)(*piVar3 + 0xa4) & 0xfe;
      if (!bVar2) {
        return;
      }
      FUN_100a5b78(uVar10 | 0x11a0031,PTR_s_btsrv_connect_monitor_profile_st_100d6678,
                   PTR_s_BAC_monitor_profile_stop_100d6674,uVar10,param_1,uVar10,param_3);
      FUN_10116598(*piVar3 + 0x88);
      FUN_100d3d2c(1,0);
      return;
    }
  } while( true );
}

