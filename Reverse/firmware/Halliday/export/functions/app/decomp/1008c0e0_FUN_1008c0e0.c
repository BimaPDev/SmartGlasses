/* FUN_1008c0e0 @ 0x1008c0e0 */

void FUN_1008c0e0(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 auStack_40 [20];
  
  if (param_4 == 0) {
    uVar4 = 0x42;
    uVar5 = DAT_1008c338;
  }
  else {
    if (*(byte *)((int)param_2 + 0xf) < 3) {
      return;
    }
    if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x1c))();
      if (iVar1 == 1) {
        return;
      }
      if (*(byte *)((int)param_2 + 0xf) < 3) {
        return;
      }
    }
    iVar1 = FUN_1008d30c(param_4,(short)param_2[3],param_2[5]);
    if (iVar1 != 0) {
      bVar8 = *(byte *)(iVar1 + 0x14);
      iVar2 = FUN_101277a8(bVar8 & 0x1f);
      if (iVar2 == 0) {
        bVar8 = bVar8 & 0x1f;
        if (bVar8 == 0xe) {
          if (*param_2 != 0x1000000) {
            bVar8 = 5;
            *(undefined4 *)(iVar1 + 0x18) = 0;
          }
        }
        else if (bVar8 != 0x14) {
          iVar2 = FUN_1008c0c0(extraout_r2);
          if (iVar2 == 0) {
            bVar8 = 4;
          }
          else {
            bVar8 = 5;
          }
        }
      }
      else {
        bVar8 = 6;
      }
      if (*(int *)(iVar1 + 0x20) == 0) {
        if (*(int *)(iVar1 + 0x18) == 0) {
          iVar2 = FUN_1012a896(&local_60,*(undefined4 *)(param_1 + 8),param_3);
          if (iVar2 != 0) {
            iVar6 = (local_58 + 1) - local_60;
            uVar5 = FUN_100942d8(iVar6 * 3);
            uVar4 = *(undefined4 *)(param_1 + 8);
            local_50 = local_60;
            local_4c = local_5c;
            local_48 = local_58;
            local_44 = local_54;
            FUN_1012a844(&local_50,1);
            iVar7 = *param_3;
            iVar9 = local_5c - param_3[1];
            for (iVar2 = local_5c; iVar2 <= local_54; iVar2 = iVar2 + 1) {
              iVar3 = FUN_1012a896(auStack_40,uVar4,&local_50);
              if (iVar3 != 0) {
                iVar3 = FUN_1012817e(iVar1,local_60 - iVar7,iVar9,iVar6,uVar5);
                if (iVar3 != 1) {
                  FUN_1008dd14(iVar1);
                  FUN_10094174(2,DAT_1008c340,0x171,DAT_1008c34c,DAT_1008c350);
                  FUN_10094444(uVar5);
                  FUN_1008dd14(iVar1);
                  *(undefined4 *)(param_1 + 8) = uVar4;
                  goto LAB_1008c132;
                }
                *(undefined1 **)(param_1 + 8) = auStack_40;
                FUN_101277d8(param_1,param_2,&local_50,uVar5,bVar8);
                iVar9 = iVar9 + 1;
                local_4c = local_4c + 1;
                local_44 = local_44 + 1;
              }
            }
            *(undefined4 *)(param_1 + 8) = uVar4;
            FUN_10094444(uVar5);
          }
        }
        else {
          local_50 = *param_3;
          local_4c = param_3[1];
          local_48 = param_3[2];
          local_44 = param_3[3];
          if (*param_2 != 0x1000000) {
            FUN_1012809a(&local_50,(local_48 + 1) - local_50,(local_44 + 1) - local_4c,
                         (int)(short)*param_2,*(short *)((int)param_2 + 2),param_2 + 1);
            local_50 = local_50 + *param_3;
            local_48 = *param_3 + local_48;
            local_4c = local_4c + param_3[1];
            local_44 = local_44 + param_3[1];
          }
          iVar2 = FUN_1012a896(auStack_40,*(undefined4 *)(param_1 + 8),&local_50);
          if (iVar2 != 0) {
            uVar4 = *(undefined4 *)(param_1 + 8);
            uVar5 = *(undefined4 *)(iVar1 + 0x18);
            *(undefined1 **)(param_1 + 8) = auStack_40;
            FUN_101277d8(param_1,param_2,param_3,uVar5,bVar8);
            *(undefined4 *)(param_1 + 8) = uVar4;
          }
        }
      }
      else {
        FUN_10094174(2,DAT_1008c340,0x12e,DAT_1008c34c,DAT_1008c348);
        FUN_1012774c(param_1,param_3,*(undefined4 *)(iVar1 + 0x20));
      }
      FUN_1008dd14(iVar1);
      return;
    }
LAB_1008c132:
    uVar4 = 0x54;
    uVar5 = DAT_1008c348;
  }
  FUN_10094174(2,DAT_1008c340,uVar4,DAT_1008c33c,uVar5);
  FUN_1012774c(param_1,param_3,DAT_1008c344);
  return;
}

