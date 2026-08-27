/* FUN_2c66283e @ 0x2c66283e */

undefined4 *
FUN_2c66283e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    FUN_2c6624d0(&local_40,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_2c);
    local_38 = local_40;
    uStack_34 = uStack_3c;
    if (local_2c[0] < 2) {
      *pbVar7 = (byte)local_2c[0] & 1;
      goto LAB_2c66289a;
    }
    *pbVar7 = 1;
    *puVar6 = 4;
    iVar8 = FUN_2c656bf6(&local_38,&param_5);
    if (iVar8 == 0) goto LAB_2c66289a;
    uVar10 = *puVar6 | 2;
  }
  else {
    iVar8 = FUN_2c660988(local_2c,param_7 + 0x6c);
    uVar10 = 0;
    bVar2 = *(int *)(iVar8 + 0x20) == 0;
    bVar1 = *(int *)(iVar8 + 0x18) == 0;
    bVar4 = true;
    bVar3 = true;
    while ((!bVar2 || (!bVar1))) {
      iVar9 = FUN_2c656bf6(&local_38,&param_5);
      if (iVar9 != 0) goto LAB_2c66298a;
      iVar9 = FUN_2c656bd8(&local_38);
      if (bVar2) {
        if (!bVar4) goto LAB_2c66291e;
LAB_2c662930:
        if (!bVar1) {
          bVar1 = true;
          goto LAB_2c662934;
        }
        bVar5 = bVar3;
        if (!bVar3) goto LAB_2c662940;
        goto LAB_2c66294a;
      }
      if (*(int *)(*(int *)(iVar8 + 0x1c) + uVar10 * 4) == iVar9) goto LAB_2c662930;
LAB_2c66291e:
      if (bVar1) {
        iVar9 = 0;
        goto LAB_2c66298c;
      }
LAB_2c662934:
      if (*(int *)(*(int *)(iVar8 + 0x14) + uVar10 * 4) != iVar9) {
LAB_2c662940:
        if (bVar2) {
          if (bVar1) {
            iVar9 = 0;
            bVar3 = false;
            goto LAB_2c6629b4;
          }
          *pbVar7 = 0;
          goto LAB_2c6629d4;
        }
        iVar9 = 0;
        if (bVar1) {
          bVar3 = true;
          bVar5 = false;
          goto LAB_2c66294a;
        }
        goto LAB_2c6629d8;
      }
      bVar3 = bVar1;
      bVar5 = true;
LAB_2c66294a:
      uVar10 = uVar10 + 1;
      FUN_2c660394(&local_38);
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
LAB_2c66298a:
    if (bVar4) {
LAB_2c6629b4:
      if ((*(uint *)(iVar8 + 0x20) != uVar10) || (uVar10 == 0)) goto LAB_2c66298c;
      *pbVar7 = 0;
      if ((bVar3) && (*(uint *)(iVar8 + 0x18) == uVar10)) goto LAB_2c6629d4;
LAB_2c6629a2:
      if (iVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 2;
      }
      goto LAB_2c6628cc;
    }
LAB_2c66298c:
    if (((bVar3) && (*(uint *)(iVar8 + 0x18) == uVar10)) && (uVar10 != 0)) {
      *pbVar7 = 1;
      goto LAB_2c6629a2;
    }
LAB_2c6629d8:
    *pbVar7 = 0;
    if (iVar9 == 0) {
LAB_2c6629d4:
      uVar10 = 4;
    }
    else {
      uVar10 = 6;
    }
  }
LAB_2c6628cc:
  *puVar6 = uVar10;
LAB_2c66289a:
  *param_1 = local_38;
  param_1[1] = uStack_34;
  return param_1;
}

