/* FUN_100c82b0 @ 0x100c82b0 */

/* WARNING: Type propagation algorithm not settling */

int FUN_100c82b0(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 extraout_r1;
  int *piVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  int local_44 [3];
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  int iStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  
  iVar7 = *(int *)(param_2 + 0x10);
  local_44[0] = 0;
  uVar9 = FUN_10132e28(DAT_100c84e0);
  if (-1 < (int)uVar9 << 0x1e) {
    return -0xb;
  }
  uVar2 = FUN_100c5170((int)((ulonglong)uVar9 >> 0x20));
  if (uVar2 == 0) {
    return -0x16;
  }
  iVar3 = FUN_10132e28(DAT_100c84e0);
  if (-1 < iVar3 << 0x14) {
    FUN_10132e28(DAT_100c84e0);
  }
  pcVar8 = param_1 + 0x10;
  local_34 = FUN_10132e2e(pcVar8,6);
  if (local_34 != 0) {
    return -0x78;
  }
  local_38 = (undefined2)*(undefined4 *)(param_2 + 8);
  local_2c = 0;
  local_36 = (undefined2)*(undefined4 *)(param_2 + 0xc);
  iStack_30 = local_34;
  local_2b = FUN_10132e0a(*(undefined4 *)(param_2 + 4),0);
  local_2a = extraout_r1;
  if (*param_1 != *param_2) {
    FUN_10132e56(DAT_100c84e0,0xffffefff);
  }
  iVar3 = DAT_100c84e4;
  cVar1 = *param_2;
  *param_1 = cVar1;
  *(char *)(iVar3 + 0x3b) = cVar1;
  iVar3 = FUN_100c6a30(cVar1,*(undefined4 *)(param_2 + 4),iVar7 != 0,(int)&local_34 + 1);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (iVar7 == 0) {
    piVar5 = local_44 + 1;
    local_44[1] = 0;
    local_44[2]._0_3_ = 0;
  }
  else {
    piVar5 = *(int **)(param_2 + 0x10);
  }
  FUN_10132eca(param_1 + 9,piVar5);
  uVar4 = *(uint *)(param_2 + 4);
  if ((int)(uVar4 << 0x1f) < 0) {
    if (iVar7 == 0) {
      local_34 = (uint)local_34._1_3_ << 8;
    }
    else {
      if ((uVar4 & 0x10) == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = 4;
      }
      local_34 = CONCAT31(local_34._1_3_,uVar6);
      FUN_10132eca((int)&local_34 + 2,*(undefined4 *)(param_2 + 0x10));
    }
  }
  else {
    if (param_5 == 0) {
      uVar2 = (uVar4 & 0xf) >> 3;
    }
    else {
      uVar2 = 1;
    }
    local_34 = CONCAT31(local_34._1_3_,'\x03' - (char)uVar2);
  }
  iVar3 = FUN_100c5d4c(0x2006,0xf);
  if (iVar3 == 0) {
    return -0x69;
  }
  FUN_101327a0(iVar3 + 8,&local_38,0xf);
  iVar3 = FUN_100c5e48(0x2006,iVar3,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((iVar7 == 0) &&
     (iVar3 = FUN_100c67c8(param_1,param_3,param_4,param_5,param_6,uVar2,
                           (*(uint *)(param_2 + 4) & 0xf) >> 3), iVar3 != 0)) {
    return iVar3;
  }
  if ((*(int *)(param_2 + 4) << 0x1f < 0) && (iVar3 = FUN_100c5c18(param_1,local_44), iVar3 != 0)) {
    if (iVar3 != -0xc) {
      return iVar3;
    }
    if (iVar7 != 0) {
      return -0xc;
    }
    if (*(int *)(param_2 + 4) << 0x1e < 0) {
      return -0xc;
    }
  }
  else {
    iVar3 = FUN_100c60a0(param_1,1);
    if (iVar3 != 0) {
      FUN_100a5b78(DAT_100c84f0 | (DAT_100c84ec - DAT_100c84e8) * 0x20 & 0xff00U,DAT_100c84f8,
                   DAT_100c84f4);
      if (local_44[0] == 0) {
        return iVar3;
      }
      FUN_100cad6c(local_44[0],0);
      FUN_100ca13c(local_44[0]);
      return iVar3;
    }
    if (local_44[0] != 0) {
      FUN_100ca13c();
    }
    uVar4 = 0;
    if (iVar7 != 0) goto LAB_100c8470;
  }
  uVar4 = ((*(uint *)(param_2 + 4) ^ 2) & 3) >> 1;
LAB_100c8470:
  FUN_10132e84(pcVar8,0xc,uVar4);
  FUN_10132e84(pcVar8,7,(*(uint *)(param_2 + 4) & 0xf) >> 3);
  FUN_10132e84(pcVar8,8,*(uint *)(param_2 + 4) & 1);
  FUN_10132e84(pcVar8,9,uVar2);
  FUN_10132e84(pcVar8,0xb,(*(uint *)(param_2 + 4) & 7) >> 2);
  return 0;
}

