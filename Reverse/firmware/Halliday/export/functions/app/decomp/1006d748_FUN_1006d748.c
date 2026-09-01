/* FUN_1006d748 @ 0x1006d748 */

int FUN_1006d748(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int local_50 [3];
  undefined1 local_44 [4];
  int local_40;
  uint local_34;
  byte local_2c;
  undefined2 local_2a;
  undefined *local_28;
  int iStack_24;
  
  iVar8 = *(int *)(param_1 + 0x10);
  uVar10 = **(undefined4 **)(param_1 + 4);
  FUN_1011ea48(local_44,0,0x24);
  if (param_3 - 1U < 2) {
    iVar7 = 0;
    local_2c = (byte)param_3;
    local_28 = PTR_LAB_1011f01a_1_1006d920;
    local_2a = (undefined2)param_4;
    piVar1 = local_50;
    iStack_24 = param_1;
    do {
      puVar11 = (undefined4 *)(iVar7 * 0xc + param_2);
      uVar5 = puVar11[1];
      iVar7 = iVar7 + 1;
      piVar1[3] = *puVar11;
      piVar1[4] = uVar5;
      piVar1[5] = puVar11[2];
      piVar1 = piVar1 + 3;
    } while (iVar7 < param_3);
    FUN_10113cfc(iVar8,uVar5,0xffffffff,0xffffffff);
    iVar7 = FUN_10061948();
    uVar4 = DAT_1006d940;
    do {
      iVar2 = FUN_1011a09e(iVar8 + 0x44);
      if (iVar2 == 0) {
        FUN_101140ac(iVar8 + 0x14);
        iVar7 = FUN_1006d300(param_1,local_44);
        if (iVar7 == 0) {
          uVar3 = (uint)local_2c;
          uVar4 = uVar3;
          if (uVar3 == 2) {
            uVar4 = local_34;
          }
          uVar6 = *(uint *)(*(int *)(param_1 + 0x10) + 0x3c);
          if (uVar3 == 2) {
            local_40 = local_40 + uVar4;
          }
          uVar4 = *(uint *)(*(int *)(param_1 + 4) + 0x14);
          if (uVar6 != 0) {
            uVar4 = uVar6;
          }
          iVar9 = (uint)(local_40 << 0xf) / uVar4 + 0x32;
          iVar2 = FUN_1011401c(iVar8 + 0x14,uVar6,iVar9,0);
          iVar7 = 0;
          if (iVar2 != 0) {
            local_50[0] = iVar9;
            FUN_100a5b78(DAT_1006d930 |
                         ((int)PTR_DAT_1006d914 - (int)PTR_DAT_1006d910) * 0x20 & 0xff00U,
                         PTR_s_i2c_acts_transfer_1006d91c,DAT_1006d934,param_4);
            iVar7 = -0x74;
          }
          if (*(char *)(iVar8 + 0x38) == '\x04') {
            FUN_100a5b78(DAT_1006d938 |
                         ((int)PTR_DAT_1006d914 - (int)PTR_DAT_1006d910) * 0x20 & 0xff00U,
                         PTR_s_i2c_acts_transfer_1006d91c,DAT_1006d93c,param_4);
            iVar7 = -5;
          }
          else if (iVar7 == 0) goto LAB_1006d906;
        }
        else {
          FUN_100a5b78(DAT_1006d928 |
                       ((int)PTR_DAT_1006d914 - (int)PTR_DAT_1006d910) * 0x20 & 0xff00U,
                       PTR_s_i2c_acts_transfer_1006d91c,PTR_s_i2c_async_error__d_1006d924,iVar7);
          FUN_1006d19c(uVar10);
        }
        FUN_1006d19c(uVar10);
        *(byte *)(iVar8 + 0x88) = *(byte *)(iVar8 + 0x88) & 0xfd;
        FUN_1011f08e(iVar8 + 0x44);
        *(byte *)(iVar8 + 0x88) = *(byte *)(iVar8 + 0x88) & 0xfe;
LAB_1006d906:
        FUN_10113e2c(iVar8);
        return iVar7;
      }
      iVar2 = FUN_10061948();
    } while ((uint)(iVar2 - iVar7) >> 5 <= uVar4);
    FUN_100a5b78(((int)PTR_DAT_1006d914 - (int)PTR_DAT_1006d910) * 0x20 & 0xff00U | 0x2d80011,
                 PTR_s_i2c_acts_transfer_1006d91c,DAT_1006d92c);
    FUN_10113e2c(iVar8);
    iVar8 = -0x74;
  }
  else {
    FUN_100a5b78(((int)PTR_DAT_1006d914 - (int)PTR_DAT_1006d910) * 0x20 & 0xff00U | 0x2bc0011,
                 PTR_s_i2c_acts_transfer_1006d91c,PTR_s_invalid_num_msgs__d_1006d918,param_3);
    iVar8 = -0x16;
  }
  return iVar8;
}

