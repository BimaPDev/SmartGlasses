/* FUN_2c66a0d0 @ 0x2c66a0d0 */

uint FUN_2c66a0d0(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,int *param_5)

{
  double dVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  undefined4 uVar11;
  double dVar12;
  uint local_40;
  int local_3c;
  char local_35;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  puVar2 = (undefined4 *)FUN_2c670680();
  uVar11 = *puVar2;
  uVar3 = FUN_2c66c4ec(uVar11);
  bVar10 = (byte)param_2[6];
  local_30 = 0;
  uVar7 = *param_2;
  puVar9 = (uint *)(*param_5 + 7U & 0xfffffff8);
  *param_5 = (int)(puVar9 + 2);
  dVar1 = DAT_2c66a378;
  uVar6 = puVar9[1];
  param_2[0x12] = *puVar9;
  param_2[0x13] = uVar6;
  puVar9 = DAT_2c66a388;
  dVar12 = *(double *)(param_2 + 0x12);
  if (ABS(dVar12) <= dVar1) {
    if (NAN(dVar12)) {
      puVar8 = DAT_2c66a38c;
      if ((longlong)dVar12 < 0) {
        *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
        puVar8 = DAT_2c66a38c;
      }
      goto LAB_2c66a140;
    }
    if (param_2[1] == 0xffffffff) {
      uVar6 = 6;
LAB_2c66a1a2:
      param_2[1] = uVar6;
    }
    else if (((bVar10 & 0xdf) == 0x47) && (param_2[1] == 0)) {
      uVar6 = 1;
      goto LAB_2c66a1a2;
    }
    uVar7 = uVar7 | 0x400;
    *param_2 = uVar7;
    puVar8 = (uint *)FUN_2c669fb0(param_1,param_2[1],uVar7,&local_35,&local_34,bVar10,&local_30,0);
    if ((bVar10 & 0xdf) == 0x47) {
      if (((int)local_34 < -3) || ((int)param_2[1] < (int)local_34)) {
        bVar10 = bVar10 - 2;
        goto LAB_2c66a1e0;
      }
      bVar10 = 0x67;
LAB_2c66a260:
      if ((int)local_34 < (int)local_30) {
        if ((int)local_34 < 1) {
          iVar4 = 2 - local_34;
        }
        else {
          iVar4 = 1;
        }
        uVar6 = local_30 + iVar4;
LAB_2c66a242:
        param_2[4] = uVar6;
      }
      else {
        param_2[4] = local_34;
        if ((int)(*param_2 << 0x1f) < 0) {
          uVar6 = local_34 + 1;
          goto LAB_2c66a242;
        }
      }
LAB_2c66a244:
      param_2[0x16] = local_34;
      local_40 = 0;
    }
    else {
LAB_2c66a1e0:
      if (0x65 < bVar10) {
        if (bVar10 != 0x66) goto LAB_2c66a260;
        uVar6 = param_2[1];
        if ((int)local_34 < 1) {
          if ((uVar6 == 0) && (-1 < (int)(*param_2 << 0x1f))) {
            uVar6 = 1;
          }
          else {
            uVar6 = uVar6 + 2;
          }
        }
        else {
          param_2[4] = local_34;
          if ((uVar6 == 0) && (-1 < (int)(*param_2 << 0x1f))) goto LAB_2c66a244;
          uVar6 = uVar6 + 1 + local_34;
        }
        goto LAB_2c66a242;
      }
      local_34 = local_34 - 1;
      local_40 = FUN_2c66a054(param_2 + 0x14,local_34,bVar10);
      param_2[4] = local_30 + local_40;
      if ((1 < (int)local_30) || ((int)(*param_2 << 0x1f) < 0)) {
        param_2[4] = local_30 + local_40 + 1;
      }
    }
    if (local_35 != '\0') {
      *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
    }
  }
  else {
    puVar9 = DAT_2c66a384;
    puVar8 = DAT_2c66a380;
    if ((int)((uint)(dVar12 < 0.0) << 0x1f) < 0) {
      *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
      puVar9 = DAT_2c66a384;
      puVar8 = DAT_2c66a380;
    }
LAB_2c66a140:
    if (0x47 < bVar10) {
      puVar8 = puVar9;
    }
    param_2[4] = 3;
    *param_2 = uVar7 & 0xfffffffb;
    local_40 = 0;
  }
  iVar4 = FUN_2c66a50c(param_1,param_2,local_2c,param_3,param_4);
  if (iVar4 == -1) {
    return 0xffffffff;
  }
  if ((int)(*param_2 << 0x15) < 0) {
    if (bVar10 < 0x66) {
      if (((int)local_30 < 2) && (-1 < (int)(*param_2 << 0x1f))) {
        iVar4 = 1;
LAB_2c66a4a2:
        iVar4 = (*param_4)(param_1,param_3,puVar8,iVar4);
        if (iVar4 == -1) {
          return 0xffffffff;
        }
      }
      else {
        iVar4 = (*param_4)(param_1,param_3,puVar8,1);
        if (iVar4 == -1) {
          return 0xffffffff;
        }
        iVar4 = (*param_4)(param_1,param_3,uVar11,uVar3);
        if (iVar4 == -1) {
          return 0xffffffff;
        }
        if (*(double *)(param_2 + 0x12) != 0.0) {
          puVar8 = (uint *)((int)puVar8 + 1);
          iVar4 = local_30 - 1;
          goto LAB_2c66a4a2;
        }
        for (iVar4 = 0; iVar4 < (int)(local_30 - 1); iVar4 = iVar4 + 1) {
          iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
          if (iVar5 == -1) {
            return 0xffffffff;
          }
        }
      }
      puVar8 = param_2 + 0x14;
    }
    else {
      if (*(double *)(param_2 + 0x12) == 0.0) {
        iVar4 = (*param_4)(param_1,param_3,DAT_2c66a390,1);
        if (iVar4 == -1) {
          return 0xffffffff;
        }
        if (((int)local_34 < (int)local_30) || ((int)(*param_2 << 0x1f) < 0)) {
          iVar4 = (*param_4)(param_1,param_3,uVar11,uVar3);
          if (iVar4 == -1) {
            return 0xffffffff;
          }
          for (iVar4 = 0; iVar4 < (int)(local_30 - 1); iVar4 = iVar4 + 1) {
            iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
            if (iVar5 == -1) {
              return 0xffffffff;
            }
          }
        }
        goto LAB_2c66a2ea;
      }
      if (0 < (int)local_34) {
        uVar6 = local_30;
        if ((int)param_2[0x16] <= (int)local_30) {
          uVar6 = param_2[0x16];
        }
        if ((0 < (int)uVar6) && (iVar4 = (*param_4)(param_1,param_3,puVar8,uVar6), iVar4 == -1)) {
          return 0xffffffff;
        }
        for (local_3c = 0; uVar7 = param_2[0x16],
            local_3c < (int)(uVar7 - (uVar6 & ~((int)uVar6 >> 0x1f))); local_3c = local_3c + 1) {
          iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
          if (iVar4 == -1) {
            return 0xffffffff;
          }
        }
        if ((((int)local_34 < (int)local_30) || ((int)(*param_2 << 0x1f) < 0)) &&
           (iVar4 = (*param_4)(param_1,param_3,uVar11,uVar3), iVar4 == -1)) {
          return 0xffffffff;
        }
        uVar6 = local_30 - local_34;
        if ((int)(local_30 - uVar7) <= (int)(local_30 - local_34)) {
          uVar6 = local_30 - uVar7;
        }
        if ((0 < (int)uVar6) &&
           (iVar4 = (*param_4)(param_1,param_3,uVar7 + (int)puVar8,uVar6), iVar4 == -1)) {
          return 0xffffffff;
        }
        for (iVar4 = 0; iVar4 < (int)((local_30 - local_34) - (uVar6 & ~((int)uVar6 >> 0x1f)));
            iVar4 = iVar4 + 1) {
          iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
          if (iVar5 == -1) {
            return 0xffffffff;
          }
        }
        goto LAB_2c66a2ea;
      }
      iVar4 = (*param_4)(param_1,param_3,DAT_2c66a390,1);
      if (iVar4 == -1) {
        return 0xffffffff;
      }
      if ((local_30 == 0 && local_34 == 0) && (-1 < (int)(*param_2 << 0x1f))) goto LAB_2c66a2ea;
      iVar4 = (*param_4)(param_1,param_3,uVar11,uVar3);
      if (iVar4 == -1) {
        return 0xffffffff;
      }
      for (iVar4 = 0; local_40 = local_30, -iVar4 != local_34 && iVar4 <= (int)-local_34;
          iVar4 = iVar4 + 1) {
        iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
        if (iVar5 == -1) {
          return 0xffffffff;
        }
      }
    }
  }
  else {
    local_40 = param_2[4];
  }
  iVar4 = (*param_4)(param_1,param_3,puVar8,local_40);
  if (iVar4 == -1) {
    return 0xffffffff;
  }
LAB_2c66a2ea:
  if ((int)(*param_2 << 0x1e) < 0) {
    for (iVar4 = 0; iVar4 < (int)(param_2[3] - local_2c[0]); iVar4 = iVar4 + 1) {
      iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
      if (iVar5 == -1) {
        return 0xffffffff;
      }
    }
  }
  if ((int)param_2[3] < (int)local_2c[0]) {
    return local_2c[0];
  }
  return param_2[3];
}

