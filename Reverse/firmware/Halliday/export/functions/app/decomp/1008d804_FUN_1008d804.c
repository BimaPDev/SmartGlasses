/* FUN_1008d804 @ 0x1008d804 */

undefined4 FUN_1008d804(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r2;
  undefined4 *puVar5;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    uVar1 = FUN_10094038(*(undefined4 *)(param_2 + 4));
    iVar2 = FUN_1011ea18(uVar1,DAT_1008da90);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = FUN_10093f0c(&local_2c,*(undefined4 *)(param_2 + 4),2);
    if (iVar2 != 0) {
      uVar1 = 0x150;
      uVar7 = DAT_1008da98;
      uVar10 = DAT_1008da94;
      goto LAB_1008d83a;
    }
    if (*(int *)(param_2 + 0x24) == 0) {
      iVar2 = FUN_10094254(0x14,DAT_1008da98);
      *(int *)(param_2 + 0x24) = iVar2;
      if (iVar2 == 0) {
        uVar9 = FUN_10094174(3,DAT_1008da9c,0x157,DAT_1008da98,DAT_1008daa8,DAT_1008daa4,
                             DAT_1008daa0);
        FUN_10119dc2(DAT_1008dab0,DAT_1008daac,DAT_1008da9c,0x157,uVar9);
        FUN_10119dc2(DAT_1008dab4);
        FUN_1011a1f0(DAT_1008da9c,0x157,extraout_r2,extraout_r3);
      }
      if (*(int *)(param_2 + 0x24) == 0) {
        FUN_10094174(3,DAT_1008da9c,0x159,DAT_1008da98,DAT_1008dab8);
        FUN_10093c38(&local_2c);
        return 0;
      }
      FUN_10128176(*(int *)(param_2 + 0x24),0x14);
    }
    puVar5 = *(undefined4 **)(param_2 + 0x24);
    *puVar5 = local_2c;
    puVar5[1] = uStack_28;
    puVar5[2] = local_24;
  }
  else if ((*(char *)(param_2 + 0x10) == '\0') && (*(int *)(*(int *)(param_2 + 4) + 8) == 0)) {
    return 0;
  }
  uVar3 = *(byte *)(param_2 + 0x14) & 0x1f;
  if ((uVar3 == 0xe) || (uVar3 == 0x14)) {
    if (*(char *)(param_2 + 0x10) != '\0') {
      if (uVar3 == 0x14) {
        iVar2 = 3;
      }
      else {
        iVar2 = 1;
      }
      iVar2 = iVar2 * (uint)(*(ushort *)(param_2 + 0x16) >> 5) *
                      ((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10);
      iVar4 = FUN_10094254(iVar2,DAT_1008da98);
      if (iVar4 == 0) {
        return 0;
      }
      uVar1 = *(undefined4 *)(param_2 + 0x24);
      FUN_1012af70(uVar1,4,0);
      iVar2 = FUN_10093c80(uVar1,iVar4,iVar2,0);
      if (iVar2 != 0) {
        FUN_10094268(iVar4,DAT_1008da98);
        return 0;
      }
      *(int *)(param_2 + 0x18) = iVar4;
      return 1;
    }
  }
  else {
    if (2 < uVar3 - 4) {
      if (uVar3 - 7 < 4) {
        uVar3 = FUN_1008c0b0();
        iVar2 = 1 << (uVar3 & 0xff);
        if (*(int *)(param_2 + 0x24) == 0) {
          iVar4 = FUN_10094254(0x14,DAT_1008da98);
          *(int *)(param_2 + 0x24) = iVar4;
          if (iVar4 == 0) {
            uVar9 = FUN_10094174(3,DAT_1008da9c,0x19c,DAT_1008da98,DAT_1008daa8,DAT_1008daa4,
                                 DAT_1008daa0);
            FUN_10119dc2(DAT_1008dab0,DAT_1008daac,DAT_1008da9c,0x19c,uVar9);
            FUN_10119dc2(DAT_1008dab4);
            FUN_1011a1f0(DAT_1008da9c,0x19c,extraout_r2_00,extraout_r3_00);
          }
          if (*(int *)(param_2 + 0x24) == 0) {
            FUN_10094174(3,DAT_1008da9c,0x19e,DAT_1008da98,DAT_1008dab8);
            return 0;
          }
          FUN_10128176(*(int *)(param_2 + 0x24),0x14);
        }
        iVar8 = *(int *)(param_2 + 0x24);
        iVar4 = FUN_10094254(2 << (uVar3 & 0xff),DAT_1008da98);
        *(int *)(iVar8 + 0xc) = iVar4;
        if (iVar4 == 0) {
          uVar9 = FUN_10094174(3,DAT_1008da9c,0x1a6,DAT_1008da98,DAT_1008daa8,DAT_1008dabc,
                               DAT_1008daa0);
          FUN_10119dc2(DAT_1008dab0,DAT_1008daac,DAT_1008da9c,0x1a6,uVar9);
          FUN_10119dc2(DAT_1008dab4);
          FUN_1011a1f0(DAT_1008da9c,0x1a6,extraout_r2_01,extraout_r3_01);
        }
        iVar4 = FUN_10094254(iVar2,DAT_1008da98);
        *(int *)(iVar8 + 0x10) = iVar4;
        if (iVar4 == 0) {
          uVar9 = FUN_10094174(3,DAT_1008da9c,0x1a8,DAT_1008da98,DAT_1008daa8,DAT_1008dac0,
                               DAT_1008daa0);
          FUN_10119dc2(DAT_1008dab0,DAT_1008daac,DAT_1008da9c,0x1a8,uVar9);
          FUN_10119dc2(DAT_1008dab4);
          FUN_1011a1f0(DAT_1008da9c,0x1a8,extraout_r2_02,extraout_r3_02);
        }
        if ((*(int *)(iVar8 + 0xc) != 0) && (*(int *)(iVar8 + 0x10) != 0)) {
          if (*(char *)(param_2 + 0x10) != '\x01') {
            pbVar6 = *(byte **)(*(int *)(param_2 + 4) + 8);
            for (iVar4 = 0; iVar4 != iVar2; iVar4 = iVar4 + 1) {
              *(ushort *)(*(int *)(iVar8 + 0xc) + iVar4 * 2) =
                   (ushort)(*pbVar6 >> 3) | (ushort)(pbVar6[1] >> 2) << 5 |
                   (ushort)(pbVar6[2] >> 3) << 0xb;
              *(byte *)(*(int *)(iVar8 + 0x10) + iVar4) = pbVar6[3];
              pbVar6 = pbVar6 + 4;
            }
            return 1;
          }
          FUN_1012af70(iVar8,4,0);
          for (iVar4 = 0; iVar4 != iVar2; iVar4 = iVar4 + 1) {
            FUN_10093c80(iVar8,&local_2c,4,0);
            *(ushort *)(*(int *)(iVar8 + 0xc) + iVar4 * 2) =
                 (ushort)((byte)local_2c >> 3) | (ushort)(local_2c._1_1_ >> 2) << 5 |
                 (ushort)(local_2c._2_1_ >> 3) << 0xb;
            *(undefined1 *)(*(int *)(iVar8 + 0x10) + iVar4) = local_2c._3_1_;
          }
          return 1;
        }
        FUN_10094174(3,DAT_1008da9c,0x1aa,DAT_1008da98,DAT_1008dab8);
        FUN_1008d384(param_1,param_2);
        return 0;
      }
      if (uVar3 - 0xb < 3) {
        return 1;
      }
      FUN_1008d384(param_1,param_2);
      uVar1 = 0x1d0;
      uVar7 = DAT_1008db74;
      uVar10 = DAT_1008db70;
LAB_1008d83a:
      FUN_10094174(2,DAT_1008da9c,uVar1,uVar7,uVar10);
      return 0;
    }
    if (*(char *)(param_2 + 0x10) != '\0') {
      return 1;
    }
  }
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(*(int *)(param_2 + 4) + 8);
  return 1;
}

