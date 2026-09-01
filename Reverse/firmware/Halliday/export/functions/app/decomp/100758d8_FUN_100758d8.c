/* FUN_100758d8 @ 0x100758d8 */

undefined4 FUN_100758d8(int param_1,char *param_2)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  piVar13 = *(int **)(param_1 + 4);
  iVar8 = *piVar13;
  puVar14 = *(undefined4 **)(param_2 + 0xc);
  pbVar10 = *(byte **)(param_1 + 0x10);
  FUN_10119dc2(PTR_s_phy_i2stx_enable_out_param_>chan_10075b74,*(undefined2 *)(param_2 + 2),
               param_2[5]);
  FUN_10056ca4(2,1);
  iVar12 = *(int *)(param_1 + 4);
  uVar11 = ((int)PTR_DAT_10075b78 - (int)PTR_DAT_10075b7c) * 0x20 & 0xff00;
  if ((*(int *)(param_2 + 0xc) == 0) || (*param_2 == '\0')) {
    FUN_100a5b78(uVar11 | 0x3940011,PTR_s_phy_i2stx_prepare_enable_10075b84,
                 PTR_s_Invalid_parameters_10075b80);
  }
  else {
    uVar9 = (uint)*(ushort *)(param_2 + 2);
    if ((int)(uVar9 << 0x1e) < 0) {
      uVar9 = (*(byte *)(iVar12 + 0x18) & 0x3c) - 8 & 0xff;
      if ((uVar9 < 0x19) && ((~(DAT_10075b9c >> uVar9) & 1) == 0)) {
        FUN_10069080(&local_30);
        FUN_1011a71c(local_30,uStack_2c);
        FUN_10055be0(*(undefined1 *)(iVar12 + 6));
        FUN_10055be0(*(undefined1 *)(iVar12 + 4));
        FUN_10055be0(0x22);
        if ((int)((uint)*(byte *)(iVar12 + 0x18) << 0x1f) < 0) {
          FUN_10055be0(*(undefined1 *)(iVar12 + 5));
        }
        uVar1 = *(ushort *)(param_2 + 2);
        if ((uVar1 & 1) == 0) {
          bVar7 = param_2[5];
          iVar12 = 0;
          if ((uVar1 & 4) == 0) {
            if (bVar7 < 2) {
              pbVar10[0x11] = bVar7;
              *pbVar10 = 1;
            }
            else {
              *pbVar10 = (byte)uVar1 & 4;
            }
            if ((-1 < (int)((uint)*(byte *)(piVar13 + 6) << 0x1e)) ||
               ((int)((uint)*(byte *)(piVar13 + 6) << 0x19) < 0)) goto LAB_100759da;
            bVar7 = 3;
          }
          else {
            if (1 < bVar7) {
              *pbVar10 = (byte)uVar1 & 1;
              goto LAB_100759da;
            }
            bVar7 = 1;
          }
          *pbVar10 = bVar7;
        }
        else {
          iVar12 = 1;
          *pbVar10 = 1;
          pbVar10[0x12] = pbVar10[0x12] | 1;
        }
LAB_100759da:
        FUN_10119dc2(DAT_10075ba4,*pbVar10,iVar12);
        iVar4 = FUN_100755fc(*(undefined4 *)(param_1 + 4),*param_2,*pbVar10,iVar12);
        uVar9 = DAT_10075bb4;
        puVar2 = DAT_10075bb0;
        uVar6 = DAT_10075b90;
        if (iVar4 != 0) {
          FUN_100a5b78(DAT_10075ba8 | uVar11,DAT_10075b90,DAT_10075bac,*param_2);
          FUN_10056ca4(2,0);
          return 0xfffffffd;
        }
        *DAT_10075bb0 = *DAT_10075bb0 | 0x800;
        FUN_100a5b78(uVar9 | uVar11,uVar6,PTR_s_phy_i2stx_enable__CMU_I2STXCLK___10075bb8,*puVar2);
        if (iVar12 == 0) {
          if (param_2[5] == '\x02') {
            if (*(int *)(**(int **)(param_1 + 4) + 4) << 0x1f < 0) {
              FUN_100a5b78(uVar11 | 0x4200011,DAT_10075b90,
                           PTR_s_I2STX_FIFO_now_is_using_____10075bbc);
              FUN_10056ca4(2,0);
              return 0xfffffff3;
            }
            if (param_2[4] == '\0') {
              uVar6 = 0x93;
            }
            else {
              uVar6 = 0x13;
            }
            *(undefined4 *)(**(int **)(param_1 + 4) + 4) = uVar6;
            pbVar10[0x11] = 2;
          }
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        FUN_100757d0(*(undefined4 *)(param_1 + 4),param_2[4],uVar6);
        if ((((int)((uint)*(byte *)(piVar13 + 6) << 0x1f) < 0) && (iVar12 == 0)) &&
           ((int)((uint)*(byte *)(piVar13 + 6) << 0x1e) < 0)) {
          FUN_100a5b78(uVar11 | 0x4380031,DAT_10075b90,PTR_s_I2STX_SRD_enable_10075bc0);
          uVar9 = DAT_10075bc4;
          iVar4 = **(int **)(param_1 + 4);
          bVar7 = *(byte *)((int)*(int **)(param_1 + 4) + 0x19);
          *(undefined4 *)(iVar4 + 0x10) = 0xd0e;
          *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 1;
          iVar12 = FUN_10061948();
          uVar3 = *(uint *)(iVar4 + 0x14);
          while ((~(uint)bVar7 & 0xff) >> 7 != (uVar3 & 7)) {
            iVar5 = FUN_10061948();
            if (uVar9 < (uint)(iVar5 - iVar12) >> 5) {
              FUN_100a5b78(DAT_10075bc8 | uVar11,DAT_10075bd0,DAT_10075bcc);
              break;
            }
            uVar3 = *(uint *)(iVar4 + 0x14);
            FUN_101153fc(2,0);
          }
          *(undefined4 *)(pbVar10 + 8) = *puVar14;
          *(undefined4 *)(pbVar10 + 0xc) = puVar14[1];
          pbVar10[0x10] = -1 < *(char *)((int)piVar13 + 0x19);
        }
        if ((pbVar10[0x11] == 2) && (*(int *)(iVar8 + 8) << 0x17 < 0)) {
          *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) | 0x100;
        }
        pbVar10[0x12] = pbVar10[0x12] | 2;
        return 0;
      }
      uVar9 = (*(byte *)(iVar12 + 0x18) & 0x3f) >> 2;
      uVar3 = uVar11 | 0x3a00011;
      uVar6 = DAT_10075ba0;
    }
    else {
      uVar3 = DAT_10075b94 | uVar11;
      uVar6 = DAT_10075b98;
    }
    FUN_100a5b78(uVar3,PTR_s_phy_i2stx_prepare_enable_10075b84,uVar6,uVar9);
  }
  FUN_100a5b78(DAT_10075b88 | uVar11,DAT_10075b90,DAT_10075b8c,0xffffffea);
  FUN_10056ca4(2,0);
  return 0xffffffea;
}

