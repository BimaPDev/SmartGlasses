/* FUN_100f95c4 @ 0x100f95c4 */

uint FUN_100f95c4(int *param_1,uint *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  int local_44;
  int local_40;
  int local_34;
  int local_30;
  undefined4 auStack_2c [2];
  uint *puVar10;
  
  local_34 = 0;
  local_30 = 0;
  if (((param_4 == (int *)0x0) && (-1 < param_3)) || (param_2 == (uint *)0x0)) {
    return 6;
  }
  if (((*param_2 & 2) == 0) || (param_2[4] == 0)) {
    local_44 = 0;
    uVar1 = FUN_100f9014(param_1,param_2,&local_34);
    if (uVar1 == 0) goto LAB_100f95fa;
LAB_100f96b4:
    local_40 = 0;
    puVar11 = (undefined4 *)0x0;
joined_r0x100f965c:
    uVar13 = uVar1 & 0xff;
    if (uVar13 == 0x51) {
LAB_100f96c0:
      uVar6 = 2;
    }
    else {
      uVar6 = uVar13;
      if (uVar13 != 2) {
LAB_100f9662:
        uVar6 = uVar1;
        if (uVar13 == 0x55) {
          uVar6 = 2;
        }
      }
    }
  }
  else {
    local_44 = 1;
    uVar1 = FUN_100f9014(param_1,param_2,&local_34);
    if (uVar1 != 0) goto LAB_100f96b4;
LAB_100f95fa:
    local_40 = *param_1;
    if ((-1 < (int)(*param_2 << 0x1c)) ||
       (puVar11 = (undefined4 *)param_2[5], puVar11 == (undefined4 *)0x0)) {
      iVar5 = param_1[4];
      puVar8 = (uint *)(param_1 + 5);
      if (puVar8 + iVar5 <= puVar8) {
        puVar11 = (undefined4 *)0x0;
        uVar6 = 0xb;
        goto LAB_100f966a;
      }
      uVar1 = 0xb;
      puVar14 = (undefined4 *)0x0;
      puVar9 = puVar8;
      do {
        puVar10 = puVar9 + 1;
        puVar11 = (undefined4 *)*puVar9;
        if (*(int *)*puVar11 << 0x1f < 0) {
          if ((*param_2 & 0x10) == 0) {
            uVar1 = 0;
            uVar6 = 0;
          }
          else {
            uVar1 = param_2[6];
            uVar6 = param_2[7];
          }
          uVar1 = FUN_100f83ac(puVar11,&local_34,local_44,param_3,uVar1,uVar6,&local_30);
          uVar13 = uVar1 & 0xff;
          if (uVar1 == 0) goto LAB_100f970e;
          puVar14 = puVar11;
          if (uVar13 != 2) {
            if (uVar13 != 0x51) goto LAB_100f9662;
            goto LAB_100f96c0;
          }
        }
        puVar9 = puVar10;
        puVar11 = puVar14;
      } while (puVar10 < puVar8 + iVar5);
      goto joined_r0x100f965c;
    }
    if (*(int *)*puVar11 << 0x1f < 0) {
      if ((*param_2 & 0x10) == 0) {
        uVar1 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = param_2[6];
        uVar1 = param_2[7];
      }
      uVar6 = FUN_100f83ac(puVar11,&local_34,local_44,param_3,uVar6,uVar1,&local_30);
      if (uVar6 == 0) {
LAB_100f970e:
        piVar2 = (int *)(**(code **)(local_40 + 4))(local_40,0xc);
        if (piVar2 != (int *)0x0) {
          *piVar2 = 0;
          piVar2[1] = 0;
          iVar5 = *(int *)(local_30 + 0x60);
          piVar2[2] = local_30;
          if (iVar5 != -0x10) {
            iVar12 = *(int *)(iVar5 + 0x14);
            *piVar2 = iVar12;
            piVar2[1] = 0;
            if (iVar12 == 0) {
              *(int **)(iVar5 + 0x10) = piVar2;
            }
            else {
              *(int **)(iVar12 + 4) = piVar2;
            }
            *(int **)(iVar5 + 0x14) = piVar2;
          }
          if (-1 < param_3) {
            uVar1 = FUN_100f9340(local_30,0);
            if ((uVar1 != 0) || (uVar1 = FUN_100f94a0(local_30,auStack_2c), uVar1 != 0)) {
              FUN_100f943c(local_30);
              return uVar1;
            }
            *(undefined4 *)(local_30 + 0x58) = auStack_2c[0];
          }
          iVar5 = *(int *)(local_30 + 8);
          if (iVar5 << 0x1f < 0) {
            sVar4 = *(short *)(local_30 + 0x4a);
            if (sVar4 < 0) {
              sVar4 = -sVar4;
              *(short *)(local_30 + 0x4a) = sVar4;
            }
            if (-1 < iVar5 << 0x1a) {
              *(short *)(local_30 + 0x4e) = sVar4;
            }
          }
          if ((iVar5 << 0x1e < 0) && (0 < *(int *)(local_30 + 0x1c))) {
            psVar7 = *(short **)(local_30 + 0x20);
            psVar3 = psVar7 + *(int *)(local_30 + 0x1c) * 8;
            do {
              sVar4 = *psVar7;
              if (sVar4 < 0) {
                sVar4 = -sVar4;
                *psVar7 = sVar4;
              }
              if (*(int *)(psVar7 + 4) < 0) {
                *(int *)(psVar7 + 4) = -*(int *)(psVar7 + 4);
              }
              iVar5 = *(int *)(psVar7 + 6);
              if (iVar5 < 0) {
                iVar5 = -iVar5;
                *(int *)(psVar7 + 6) = iVar5;
              }
              if (((sVar4 < 0) || (*(int *)(psVar7 + 4) < 0)) || (iVar5 < 0)) {
                psVar7[2] = 0;
                psVar7[3] = 0;
                psVar7[4] = 0;
                psVar7[5] = 0;
                psVar7[1] = 0;
                *psVar7 = 0;
                psVar7[6] = 0;
                psVar7[7] = 0;
              }
              psVar7 = psVar7 + 8;
            } while (psVar3 != psVar7);
          }
          puVar11 = *(undefined4 **)(local_30 + 0x80);
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          *puVar11 = 0x10000;
          puVar11[3] = 0x10000;
          puVar11[0xf] = 1;
          *(undefined1 *)(puVar11 + 0xd) = 0xff;
          if (param_4 != (int *)0x0) {
            *param_4 = local_30;
            return 0;
          }
          FUN_100f943c(local_30);
          return 0;
        }
        uVar6 = 0x40;
        goto LAB_100f9684;
      }
    }
    else {
      uVar6 = 0x20;
    }
  }
LAB_100f966a:
  iVar5 = local_34;
  if (local_34 != 0) {
    iVar12 = *(int *)(local_34 + 0x1c);
    if (*(code **)(local_34 + 0x18) != (code *)0x0) {
      (**(code **)(local_34 + 0x18))(local_34);
    }
    if (local_44 == 0) {
      (**(code **)(iVar12 + 8))(iVar12,iVar5);
    }
  }
LAB_100f9684:
  if (local_30 != 0) {
    FUN_100f8ad0(local_40,local_30,puVar11);
  }
  return uVar6;
}

