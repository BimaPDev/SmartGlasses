/* FUN_2c65c286 @ 0x2c65c286 */

undefined4 *
FUN_2c65c286(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    FUN_2c65bef8(&local_40,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_2c);
    local_38 = local_40;
    uStack_34 = uStack_3c;
    if (local_2c[0] < 2) {
      *pbVar7 = (byte)local_2c[0] & 1;
      goto LAB_2c65c2e2;
    }
    *pbVar7 = 1;
    *puVar6 = 4;
    iVar9 = FUN_2c652d76(&local_38,&param_5);
    if (iVar9 == 0) goto LAB_2c65c2e2;
    uVar11 = *puVar6 | 2;
  }
  else {
    iVar9 = FUN_2c65a49c(local_2c,param_7 + 0x6c);
    uVar11 = 0;
    bVar2 = *(int *)(iVar9 + 0x20) == 0;
    bVar1 = *(int *)(iVar9 + 0x18) == 0;
    bVar4 = true;
    bVar3 = true;
    while ((!bVar2 || (!bVar1))) {
      iVar10 = FUN_2c652d76(&local_38,&param_5);
      if (iVar10 != 0) goto LAB_2c65c3d0;
      cVar8 = FUN_2c652d58(&local_38);
      if (bVar2) {
        if (!bVar4) goto LAB_2c65c366;
LAB_2c65c378:
        if (!bVar1) {
          bVar1 = true;
          goto LAB_2c65c37c;
        }
        bVar5 = bVar3;
        if (!bVar3) goto LAB_2c65c386;
        goto LAB_2c65c390;
      }
      if (*(char *)(*(int *)(iVar9 + 0x1c) + uVar11) == cVar8) goto LAB_2c65c378;
LAB_2c65c366:
      if (bVar1) {
        iVar10 = 0;
        goto LAB_2c65c3d2;
      }
LAB_2c65c37c:
      if (*(char *)(*(int *)(iVar9 + 0x14) + uVar11) != cVar8) {
LAB_2c65c386:
        if (bVar2) {
          if (bVar1) {
            iVar10 = 0;
            bVar3 = false;
            goto LAB_2c65c3fa;
          }
          *pbVar7 = 0;
          goto LAB_2c65c41a;
        }
        iVar10 = 0;
        if (bVar1) {
          bVar3 = true;
          bVar5 = false;
          goto LAB_2c65c390;
        }
        goto LAB_2c65c41e;
      }
      bVar3 = bVar1;
      bVar5 = true;
LAB_2c65c390:
      uVar11 = uVar11 + 1;
      FUN_2c659e18(&local_38);
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
LAB_2c65c3d0:
    if (bVar4) {
LAB_2c65c3fa:
      if ((*(uint *)(iVar9 + 0x20) != uVar11) || (uVar11 == 0)) goto LAB_2c65c3d2;
      *pbVar7 = 0;
      if ((bVar3) && (*(uint *)(iVar9 + 0x18) == uVar11)) goto LAB_2c65c41a;
LAB_2c65c3e8:
      if (iVar10 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 2;
      }
      goto LAB_2c65c314;
    }
LAB_2c65c3d2:
    if (((bVar3) && (*(uint *)(iVar9 + 0x18) == uVar11)) && (uVar11 != 0)) {
      *pbVar7 = 1;
      goto LAB_2c65c3e8;
    }
LAB_2c65c41e:
    *pbVar7 = 0;
    if (iVar10 == 0) {
LAB_2c65c41a:
      uVar11 = 4;
    }
    else {
      uVar11 = 6;
    }
  }
LAB_2c65c314:
  *puVar6 = uVar11;
LAB_2c65c2e2:
  *param_1 = local_38;
  param_1[1] = uStack_34;
  return param_1;
}

