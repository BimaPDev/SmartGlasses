/* FUN_100a61f0 @ 0x100a61f0 */

int FUN_100a61f0(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  code *extraout_r1;
  code *extraout_r1_00;
  code *pcVar8;
  code *pcVar9;
  uint uVar10;
  byte *pbVar11;
  uint extraout_r2;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  byte local_e8 [2];
  undefined2 local_e6;
  undefined4 local_e4;
  undefined4 local_e0 [9];
  byte local_bc;
  byte local_bb;
  undefined2 local_ba;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  undefined4 auStack_a8 [36];
  
  if ((*(byte *)(DAT_100a6218 + 2) & 4) == 0) {
    if ((*(byte *)(DAT_100a6218 + 2) & 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = -5;
    }
    return iVar1;
  }
  uVar14 = FUN_100a623c(param_1,param_2,param_4);
  iVar1 = DAT_100a649c;
  pcVar9 = (code *)((ulonglong)uVar14 >> 0x20);
  iVar7 = (int)uVar14;
  if ((((param_3 == 0) || (extraout_r2 == 0)) || (iVar7 == 0)) ||
     (((param_3 | extraout_r2) & 3) != 0)) {
    FUN_10119dc2(DAT_100a6654,param_3);
  }
  else {
    if ((param_1 < 2) || (param_1 == 3)) {
      iVar13 = 0;
      iVar12 = 0;
      pcVar8 = pcVar9;
      while( true ) {
        iVar2 = FUN_1012dbce(iVar7,pcVar8,iVar12,0,local_e8,8);
        if (iVar2 == 0) break;
        if ((((local_e8[0] & 0xf) == 5) && (local_e8[0] < 0x80)) &&
           (local_e8[1] < *(byte *)(DAT_100a6498 + 1))) {
          if ((local_e4._3_1_ & 0xe0) != 0x20) {
            if ((local_e4._3_1_ & 0xe0) == 0x60) {
              uVar4 = local_e4 & 0xffffff;
              if (uVar4 != 0) {
                uVar4 = uVar4 + iVar1;
              }
              iVar5 = FUN_100a5a1c(uVar4);
              if (iVar5 != 0) goto LAB_100a636c;
            }
            goto LAB_100a6318;
          }
          if (0x24 < (local_e4 & 0xffffff)) goto LAB_100a6318;
LAB_100a636c:
          uVar4 = local_e4 >> 0x18;
          iVar12 = iVar12 + iVar2;
          if ((uVar4 & 0xe0) == 0x60) {
            uVar4 = ((uVar4 & 1) + (uint)(local_e8[0] >> 4) + ((uVar4 & 3) >> 1)) * 4;
          }
          else {
            uVar4 = local_e4 & 0xffffff;
          }
          iVar5 = 0;
          if ((uVar4 != 0) &&
             (iVar5 = FUN_1012dbce(iVar7,iVar2,iVar12,0,local_e0,uVar4), iVar5 == 0)) break;
          iVar12 = iVar12 + iVar5;
          FUN_1011ea48(&local_bc,0,0x94);
          uVar4 = local_e4 >> 0x18;
          if ((uVar4 & 0xe0) == 0x60) {
            local_bc = local_e8[1];
            local_bb = (byte)((uVar4 << 0x1b) >> 0x1d) | 0x30;
            local_ba = local_e6;
            local_b0 = (uint)(local_e8[0] >> 4);
            local_ac = local_e4 & 0xffffff;
            if (local_ac != 0) {
              local_ac = local_ac + iVar1;
            }
            uVar10 = uVar4 & 1;
            if ((local_e4 & 0x1000000) != 0) {
              local_b4 = local_e0[0];
              uVar10 = 1;
            }
            if ((int)(uVar4 << 0x1e) < 0) {
              puVar6 = local_e0 + uVar10;
              uVar10 = uVar10 + 1;
              local_b8 = *puVar6;
            }
            puVar6 = auStack_a8;
            pbVar11 = local_e8 + (uVar10 + 2) * 4;
            for (iVar2 = 0; iVar2 < (int)(uint)(local_e8[0] >> 4); iVar2 = iVar2 + 1) {
              *puVar6 = *(undefined4 *)pbVar11;
              puVar6 = puVar6 + 1;
              pbVar11 = pbVar11 + 4;
            }
          }
          else if ((uVar4 & 0xe0) == 0x20) {
            local_bb = (byte)((uVar4 << 0x1b) >> 0x1d) | 0x10;
            local_ba = local_e6;
            local_bc = local_e8[1];
            local_b8 = 0;
            local_b4 = 0;
            local_b0 = local_e4 & 0xffffff;
            FUN_1013d03e(&local_ac,local_e0,local_b0,0x84);
          }
          uVar14 = FUN_100a529c(&local_bc,param_3,extraout_r2);
          pcVar8 = (code *)((ulonglong)uVar14 >> 0x20);
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(param_3,(int)uVar14);
            pcVar8 = extraout_r1_00;
          }
          iVar13 = iVar13 + (int)uVar14;
        }
        else {
LAB_100a6318:
          FUN_10119dc2(DAT_100a6494,iVar12);
          FUN_100a5f38(local_e8,1,8,0x10,0xffffffff);
          iVar12 = iVar12 + 1;
          pcVar8 = extraout_r1;
        }
      }
      uVar3 = thunk_FUN_1012dd88(iVar7);
      FUN_10119dc2(DAT_100a6490,iVar12,uVar3);
      return iVar13;
    }
    FUN_10119dc2(DAT_100a6658,param_1);
  }
  return 0;
}

