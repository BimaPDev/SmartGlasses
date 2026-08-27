/* FUN_2c659e2c @ 0x2c659e2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c659e2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined1 param_6,undefined4 *param_7)

{
  byte *pbVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  iVar4 = FUN_2c659524(param_5 + 0x6c);
  iVar5 = FUN_2c659864(param_5 + 0x6c);
  pbVar8 = (byte *)*param_7;
  pbVar1 = pbVar8 + -0xc;
  if (*pbVar8 == *(byte *)(iVar5 + 0x38)) {
    uStack_3c = *(undefined4 *)(iVar5 + 0x34);
    uVar11 = *(uint *)(iVar5 + 0x28);
    puStack_54 = *(undefined1 **)(iVar5 + 0x24);
    if (*(int *)pbVar1 != 0) {
      pbVar8 = pbVar8 + 1;
    }
  }
  else {
    uStack_3c = *(undefined4 *)(iVar5 + 0x30);
    uVar11 = *(uint *)(iVar5 + 0x20);
    puStack_54 = *(undefined1 **)(iVar5 + 0x1c);
  }
  pbVar3 = pbVar8;
  do {
    pbVar7 = pbVar3;
    if (pbVar8 + *(int *)pbVar1 <= pbVar7) break;
    pbVar3 = pbVar7 + 1;
  } while ((int)((uint)*(byte *)(*(int *)(iVar4 + 0x18) + (uint)*pbVar7) << 0x1d) < 0);
  uVar12 = (int)pbVar7 - (int)pbVar8;
  uStack_48 = param_3;
  uStack_44 = param_4;
  if (uVar12 != 0) {
    iStack_38 = _LAB_2c65a07c;
    FUN_2c6510f6(&iStack_38,uVar12 * 2);
    iVar4 = *(int *)(iVar5 + 0x2c);
    uVar9 = uVar12 - iVar4;
    if (0 < (int)uVar9) {
      uVar9 = uVar9 & ~(iVar4 >> 0x20);
      if (iVar4 < 0) {
        uVar9 = uVar12;
      }
      if (*(int *)(iVar5 + 0xc) == 0) {
        FUN_2c651034(&iStack_38,pbVar8,uVar9);
      }
      else {
        FUN_2c650fb4(&iStack_38,0,*(undefined4 *)(iStack_38 + -0xc),uVar9 << 1,0);
        FUN_2c650f64(&iStack_38);
        iVar4 = FUN_2c659b3c(iStack_38,*(undefined1 *)(iVar5 + 0x12),*(undefined4 *)(iVar5 + 8),
                             *(undefined4 *)(iVar5 + 0xc),pbVar8,pbVar8 + uVar9);
        FUN_2c650f64(&iStack_38);
        FUN_2c658ff4(&iStack_38,iVar4 - iStack_38,0xffffffff);
      }
    }
    if (0 < *(int *)(iVar5 + 0x2c)) {
      FUN_2c651292(&iStack_38,*(undefined1 *)(iVar5 + 0x11));
      if ((int)uVar9 < 0) {
        FUN_2c6511f4(&iStack_38,-uVar9,*(undefined1 *)(iVar5 + 0x39));
      }
      else {
        uVar12 = *(uint *)(iVar5 + 0x2c);
        pbVar8 = pbVar8 + uVar9;
      }
      FUN_2c651180(&iStack_38,pbVar8,uVar12);
    }
    uVar12 = *(uint *)(param_5 + 0xc) & 0xb0;
    iVar4 = 0;
    if ((*(uint *)(param_5 + 0xc) & 0x200) != 0) {
      iVar4 = *(int *)(iVar5 + 0x18);
    }
    iStack_34 = _LAB_2c65a07c;
    uVar9 = iVar4 + *(int *)(iStack_38 + -0xc) + uVar11;
    FUN_2c6510f6(&iStack_34,uVar9 * 2);
    uVar10 = *(uint *)(param_5 + 8);
    if (uVar12 == 0x10) {
      if (uVar9 < uVar10) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
    iVar4 = 0;
    do {
      switch(*(undefined1 *)((int)&uStack_3c + iVar4)) {
      case 0:
        if (bVar2) {
LAB_2c65a04e:
          FUN_2c6511f4(&iStack_34,uVar10 - uVar9,param_6);
        }
        break;
      case 1:
        uVar6 = param_6;
        if (bVar2) goto LAB_2c65a04e;
LAB_2c65a036:
        FUN_2c651292(&iStack_34,uVar6);
        break;
      case 2:
        if (*(int *)(param_5 + 0xc) << 0x16 < 0) {
          FUN_2c651180(&iStack_34,*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18));
        }
        break;
      case 3:
        if (uVar11 != 0) {
          uVar6 = *puStack_54;
          goto LAB_2c65a036;
        }
        break;
      case 4:
        FUN_2c651134(&iStack_34,&iStack_38);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    if (1 < uVar11) {
      FUN_2c651180(&iStack_34,puStack_54 + 1,uVar11 - 1);
    }
    uVar11 = *(uint *)(iStack_34 + -0xc);
    if (uVar11 < uVar10) {
      if (uVar12 == 0x20) {
        FUN_2c6511f4(&iStack_34,uVar10 - uVar11,param_6);
        uVar11 = uVar10;
      }
      else {
        FUN_2c650fb4(&iStack_34,0,0,uVar10 - uVar11,param_6);
        uVar11 = uVar10;
      }
    }
    FUN_2c65277c(&uStack_30,param_3,param_4,iStack_34,uVar11);
    uStack_48 = uStack_30;
    uStack_44 = CONCAT31((int3)((uint)param_4 >> 8),uStack_2c);
    FUN_2c650e60(&iStack_34);
    FUN_2c650e60(&iStack_38);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  return param_1;
}

