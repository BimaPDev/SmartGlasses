/* FUN_10118218 @ 0x10118218 */

uint FUN_10118218(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,int *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  byte bVar11;
  char local_3d;
  uint local_3c;
  uint local_38;
  uint local_34 [2];
  
  puVar1 = (undefined4 *)FUN_101192b0();
  uVar10 = *puVar1;
  uVar2 = FUN_1011ea10(uVar10);
  bVar11 = (byte)param_2[6];
  local_38 = 0;
  uVar6 = *param_2;
  puVar7 = (uint *)(*param_5 + 7U & 0xfffffff8);
  *param_5 = (int)(puVar7 + 2);
  uVar8 = puVar7[1];
  param_2[0x12] = *puVar7;
  param_2[0x13] = uVar8;
  uVar8 = param_2[0x12];
  uVar9 = param_2[0x13];
  iVar3 = FUN_1000403c(uVar8,uVar9 & 0x7fffffff,0xffffffff,DAT_101184f4);
  if ((iVar3 == 0) &&
     (iVar3 = FUN_10004000(uVar8,uVar9 & 0x7fffffff,0xffffffff,DAT_101184f4), iVar3 == 0)) {
    iVar3 = FUN_10003fec(uVar8,uVar9,0,0);
    puVar7 = DAT_101184fc;
    puVar5 = DAT_101184f8;
    if (iVar3 != 0) {
      *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
      puVar7 = DAT_101184fc;
      puVar5 = DAT_101184f8;
    }
LAB_101182ac:
    if (0x47 < bVar11) {
      puVar5 = puVar7;
    }
    uVar8 = 0;
    param_2[4] = 3;
    *param_2 = uVar6 & 0xfffffffb;
  }
  else {
    iVar3 = FUN_1000403c(uVar8,uVar9,uVar8,uVar9);
    puVar7 = DAT_10118500;
    if (iVar3 != 0) {
      puVar5 = DAT_10118504;
      if ((int)uVar9 < 0) {
        *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
        puVar5 = DAT_10118504;
      }
      goto LAB_101182ac;
    }
    if (param_2[1] == 0xffffffff) {
      uVar9 = 6;
LAB_10118316:
      param_2[1] = uVar9;
    }
    else if (((bVar11 & 0xdf) == 0x47) && (param_2[1] == 0)) {
      uVar9 = 1;
      goto LAB_10118316;
    }
    uVar6 = uVar6 | 0x400;
    *param_2 = uVar6;
    puVar5 = (uint *)FUN_1013d0e6(uVar8,param_1,param_2[1],uVar6,&local_3d,&local_3c,bVar11,
                                  &local_38,0);
    if ((bVar11 & 0xdf) == 0x47) {
      if (((int)local_3c < -3) || ((int)param_2[1] < (int)local_3c)) {
        bVar11 = bVar11 - 2;
        goto LAB_1011835a;
      }
      bVar11 = 0x67;
LAB_101183da:
      if ((int)local_3c < (int)local_38) {
        if ((int)local_3c < 1) {
          iVar3 = 2 - local_3c;
        }
        else {
          iVar3 = 1;
        }
        uVar6 = local_38 + iVar3;
LAB_101183bc:
        param_2[4] = uVar6;
      }
      else {
        param_2[4] = local_3c;
        if ((int)(*param_2 << 0x1f) < 0) {
          uVar6 = local_3c + 1;
          goto LAB_101183bc;
        }
      }
LAB_101183be:
      uVar8 = 0;
      param_2[0x16] = local_3c;
    }
    else {
LAB_1011835a:
      if (0x65 < bVar11) {
        if (bVar11 != 0x66) goto LAB_101183da;
        uVar6 = param_2[1];
        if ((int)local_3c < 1) {
          if ((uVar6 == 0) && (-1 < (int)(*param_2 << 0x1f))) {
            uVar6 = 1;
          }
          else {
            uVar6 = uVar6 + 2;
          }
        }
        else {
          param_2[4] = local_3c;
          if ((uVar6 == 0) && (-1 < (int)(*param_2 << 0x1f))) goto LAB_101183be;
          uVar6 = uVar6 + 1 + local_3c;
        }
        goto LAB_101183bc;
      }
      local_3c = local_3c - 1;
      uVar8 = FUN_1013d1aa(param_2 + 0x14,local_3c,bVar11);
      param_2[4] = local_38 + uVar8;
      if ((1 < (int)local_38) || ((int)(*param_2 << 0x1f) < 0)) {
        param_2[4] = local_38 + uVar8 + 1;
      }
    }
    if (local_3d != '\0') {
      *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
    }
  }
  iVar3 = FUN_1013d226(param_1,param_2,local_34,param_3,param_4);
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  if ((int)(*param_2 << 0x15) < 0) {
    if (bVar11 < 0x66) {
      if (((int)local_38 < 2) && (-1 < (int)(*param_2 << 0x1f))) {
        iVar3 = 1;
LAB_1011861a:
        iVar3 = (*param_4)(param_1,param_3,puVar5,iVar3);
        if (iVar3 == -1) {
          return 0xffffffff;
        }
      }
      else {
        iVar3 = (*param_4)(param_1,param_3,puVar5,1);
        if (iVar3 == -1) {
          return 0xffffffff;
        }
        iVar3 = (*param_4)(param_1,param_3,uVar10,uVar2);
        if (iVar3 == -1) {
          return 0xffffffff;
        }
        iVar3 = FUN_10003fd8(param_2[0x12],param_2[0x13],0,0);
        if (iVar3 == 0) {
          puVar5 = (uint *)((int)puVar5 + 1);
          iVar3 = local_38 - 1;
          goto LAB_1011861a;
        }
        for (iVar3 = 0; iVar3 < (int)(local_38 - 1); iVar3 = iVar3 + 1) {
          iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
          if (iVar4 == -1) {
            return 0xffffffff;
          }
        }
      }
      puVar5 = param_2 + 0x14;
    }
    else {
      iVar3 = FUN_10003fd8(param_2[0x12],param_2[0x13],0,0);
      if (iVar3 != 0) {
        iVar3 = (*param_4)(param_1,param_3,DAT_10118508,1);
        if (iVar3 == -1) {
          return 0xffffffff;
        }
        if (((int)local_3c < (int)local_38) || ((int)(*param_2 << 0x1f) < 0)) {
          iVar3 = (*param_4)(param_1,param_3,uVar10,uVar2);
          if (iVar3 == -1) {
            return 0xffffffff;
          }
          for (iVar3 = 0; iVar3 < (int)(local_38 - 1); iVar3 = iVar3 + 1) {
            iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
            if (iVar4 == -1) {
              return 0xffffffff;
            }
          }
        }
        goto LAB_10118468;
      }
      if (0 < (int)local_3c) {
        uVar6 = local_38;
        if ((int)param_2[0x16] <= (int)local_38) {
          uVar6 = param_2[0x16];
        }
        if ((0 < (int)uVar6) && (iVar3 = (*param_4)(param_1,param_3,puVar5,uVar6), iVar3 == -1)) {
          return 0xffffffff;
        }
        for (iVar3 = 0; uVar8 = param_2[0x16],
            iVar3 < (int)(uVar8 - (uVar6 & ~((int)uVar6 >> 0x1f))); iVar3 = iVar3 + 1) {
          iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
          if (iVar4 == -1) {
            return 0xffffffff;
          }
        }
        if ((((int)local_3c < (int)local_38) || ((int)(*param_2 << 0x1f) < 0)) &&
           (iVar3 = (*param_4)(param_1,param_3,uVar10,uVar2), iVar3 == -1)) {
          return 0xffffffff;
        }
        uVar6 = local_38 - local_3c;
        if ((int)(local_38 - uVar8) <= (int)(local_38 - local_3c)) {
          uVar6 = local_38 - uVar8;
        }
        if ((0 < (int)uVar6) &&
           (iVar3 = (*param_4)(param_1,param_3,uVar8 + (int)puVar5,uVar6), iVar3 == -1)) {
          return 0xffffffff;
        }
        for (iVar3 = 0; iVar3 < (int)((local_38 - local_3c) - (uVar6 & ~((int)uVar6 >> 0x1f)));
            iVar3 = iVar3 + 1) {
          iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
          if (iVar4 == -1) {
            return 0xffffffff;
          }
        }
        goto LAB_10118468;
      }
      iVar3 = (*param_4)(param_1,param_3,DAT_10118508,1);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      if ((local_38 == 0 && local_3c == 0) && (-1 < (int)(*param_2 << 0x1f))) goto LAB_10118468;
      iVar3 = (*param_4)(param_1,param_3,uVar10,uVar2);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      for (iVar3 = 0; uVar8 = local_38, -iVar3 != local_3c && iVar3 <= (int)-local_3c;
          iVar3 = iVar3 + 1) {
        iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x1a,1);
        if (iVar4 == -1) {
          return 0xffffffff;
        }
      }
    }
  }
  else {
    uVar8 = param_2[4];
  }
  iVar3 = (*param_4)(param_1,param_3,puVar5,uVar8);
  if (iVar3 == -1) {
    return 0xffffffff;
  }
LAB_10118468:
  if ((int)(*param_2 << 0x1e) < 0) {
    for (iVar3 = 0; iVar3 < (int)(param_2[3] - local_34[0]); iVar3 = iVar3 + 1) {
      iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
      if (iVar4 == -1) {
        return 0xffffffff;
      }
    }
  }
  if ((int)param_2[3] < (int)local_34[0]) {
    return local_34[0];
  }
  return param_2[3];
}

