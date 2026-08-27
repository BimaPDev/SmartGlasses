/* FUN_140d575e @ 0x140d575e */

undefined4 *
FUN_140d575e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,byte *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_2c [2];
  
  pbVar7 = param_9;
  puVar6 = param_8;
  local_38 = param_3;
  uStack_34 = param_4;
  if ((*(uint *)(param_7 + 0xc) & 1) == 0) {
    local_2c[0] = 0xffffffff;
    FUN_140d53f0(&local_40,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_2c);
    local_38 = local_40;
    uStack_34 = uStack_3c;
    if (local_2c[0] < 2) {
      *pbVar7 = (byte)local_2c[0] & 1;
      goto LAB_140d57ba;
    }
    *pbVar7 = 1;
    *puVar6 = 4;
    iVar8 = FUN_140c9d82(&local_38,&param_5);
    if (iVar8 == 0) goto LAB_140d57ba;
    uVar10 = *puVar6 | 2;
  }
  else {
    iVar8 = FUN_140d38a0(local_2c,param_7 + 0x6c);
    uVar10 = 0;
    bVar2 = *(int *)(iVar8 + 0x20) == 0;
    bVar1 = *(int *)(iVar8 + 0x18) == 0;
    bVar4 = true;
    bVar3 = true;
    while ((!bVar2 || (!bVar1))) {
      iVar9 = FUN_140c9d82(&local_38,&param_5);
      if (iVar9 != 0) goto LAB_140d58aa;
      iVar9 = FUN_140c9d64(&local_38);
      if (bVar2) {
        if (!bVar4) goto LAB_140d583e;
LAB_140d5850:
        if (!bVar1) {
          bVar1 = true;
          goto LAB_140d5854;
        }
        bVar5 = bVar3;
        if (!bVar3) goto LAB_140d5860;
        goto LAB_140d586a;
      }
      if (*(int *)(*(int *)(iVar8 + 0x1c) + uVar10 * 4) == iVar9) goto LAB_140d5850;
LAB_140d583e:
      if (bVar1) {
        iVar9 = 0;
        goto LAB_140d58ac;
      }
LAB_140d5854:
      if (*(int *)(*(int *)(iVar8 + 0x14) + uVar10 * 4) != iVar9) {
LAB_140d5860:
        if (bVar2) {
          if (bVar1) {
            iVar9 = 0;
            bVar3 = false;
            goto LAB_140d58d4;
          }
          *pbVar7 = 0;
          goto LAB_140d58f4;
        }
        iVar9 = 0;
        if (bVar1) {
          bVar3 = true;
          bVar5 = false;
          goto LAB_140d586a;
        }
        goto LAB_140d58f8;
      }
      bVar3 = bVar1;
      bVar5 = true;
LAB_140d586a:
      uVar10 = uVar10 + 1;
      FUN_140d32a8(&local_38);
      if (bVar3) {
        if (uVar10 < *(uint *)(iVar8 + 0x20)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
      }
      bVar4 = bVar3;
      if (bVar5) {
        bVar1 = *(uint *)(iVar8 + 0x18) <= uVar10;
        bVar3 = bVar5;
      }
      else {
        bVar1 = true;
        bVar3 = bVar5;
      }
    }
    iVar9 = 0;
LAB_140d58aa:
    if (bVar4) {
LAB_140d58d4:
      if ((*(uint *)(iVar8 + 0x20) != uVar10) || (uVar10 == 0)) goto LAB_140d58ac;
      *pbVar7 = 0;
      if ((bVar3) && (*(uint *)(iVar8 + 0x18) == uVar10)) goto LAB_140d58f4;
LAB_140d58c2:
      if (iVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 2;
      }
      goto LAB_140d57ec;
    }
LAB_140d58ac:
    if (((bVar3) && (*(uint *)(iVar8 + 0x18) == uVar10)) && (uVar10 != 0)) {
      *pbVar7 = 1;
      goto LAB_140d58c2;
    }
LAB_140d58f8:
    *pbVar7 = 0;
    if (iVar9 == 0) {
LAB_140d58f4:
      uVar10 = 4;
    }
    else {
      uVar10 = 6;
    }
  }
LAB_140d57ec:
  *puVar6 = uVar10;
LAB_140d57ba:
  *param_1 = local_38;
  param_1[1] = uStack_34;
  return param_1;
}

