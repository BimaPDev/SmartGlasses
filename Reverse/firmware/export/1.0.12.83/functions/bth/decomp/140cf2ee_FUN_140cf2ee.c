/* FUN_140cf2ee @ 0x140cf2ee */

undefined4 *
FUN_140cf2ee(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,byte *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  byte *pbVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
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
    FUN_140cef60(&local_40,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_2c);
    local_38 = local_40;
    uStack_34 = uStack_3c;
    if (local_2c[0] < 2) {
      *pbVar7 = (byte)local_2c[0] & 1;
      goto LAB_140cf34a;
    }
    *pbVar7 = 1;
    *puVar6 = 4;
    iVar9 = FUN_140c5efe(&local_38,&param_5);
    if (iVar9 == 0) goto LAB_140cf34a;
    uVar11 = *puVar6 | 2;
  }
  else {
    iVar9 = FUN_140cd4fc(local_2c,param_7 + 0x6c);
    uVar11 = 0;
    bVar2 = *(int *)(iVar9 + 0x20) == 0;
    bVar1 = *(int *)(iVar9 + 0x18) == 0;
    bVar4 = true;
    bVar3 = true;
    while ((!bVar2 || (!bVar1))) {
      iVar10 = FUN_140c5efe(&local_38,&param_5);
      if (iVar10 != 0) goto LAB_140cf438;
      cVar8 = FUN_140c5ee0(&local_38);
      if (bVar2) {
        if (!bVar4) goto LAB_140cf3ce;
LAB_140cf3e0:
        if (!bVar1) {
          bVar1 = true;
          goto LAB_140cf3e4;
        }
        bVar5 = bVar3;
        if (!bVar3) goto LAB_140cf3ee;
        goto LAB_140cf3f8;
      }
      if (*(char *)(*(int *)(iVar9 + 0x1c) + uVar11) == cVar8) goto LAB_140cf3e0;
LAB_140cf3ce:
      if (bVar1) {
        iVar10 = 0;
        goto LAB_140cf43a;
      }
LAB_140cf3e4:
      if (*(char *)(*(int *)(iVar9 + 0x14) + uVar11) != cVar8) {
LAB_140cf3ee:
        if (bVar2) {
          if (bVar1) {
            iVar10 = 0;
            bVar3 = false;
            goto LAB_140cf462;
          }
          *pbVar7 = 0;
          goto LAB_140cf482;
        }
        iVar10 = 0;
        if (bVar1) {
          bVar3 = true;
          bVar5 = false;
          goto LAB_140cf3f8;
        }
        goto LAB_140cf486;
      }
      bVar3 = bVar1;
      bVar5 = true;
LAB_140cf3f8:
      uVar11 = uVar11 + 1;
      FUN_140cce74(&local_38);
      if (bVar3) {
        if (uVar11 < *(uint *)(iVar9 + 0x20)) {
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
        bVar1 = *(uint *)(iVar9 + 0x18) <= uVar11;
        bVar3 = bVar5;
      }
      else {
        bVar1 = true;
        bVar3 = bVar5;
      }
    }
    iVar10 = 0;
LAB_140cf438:
    if (bVar4) {
LAB_140cf462:
      if ((*(uint *)(iVar9 + 0x20) != uVar11) || (uVar11 == 0)) goto LAB_140cf43a;
      *pbVar7 = 0;
      if ((bVar3) && (*(uint *)(iVar9 + 0x18) == uVar11)) goto LAB_140cf482;
LAB_140cf450:
      if (iVar10 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 2;
      }
      goto LAB_140cf37c;
    }
LAB_140cf43a:
    if (((bVar3) && (*(uint *)(iVar9 + 0x18) == uVar11)) && (uVar11 != 0)) {
      *pbVar7 = 1;
      goto LAB_140cf450;
    }
LAB_140cf486:
    *pbVar7 = 0;
    if (iVar10 == 0) {
LAB_140cf482:
      uVar11 = 4;
    }
    else {
      uVar11 = 6;
    }
  }
LAB_140cf37c:
  *puVar6 = uVar11;
LAB_140cf34a:
  *param_1 = local_38;
  param_1[1] = uStack_34;
  return param_1;
}

