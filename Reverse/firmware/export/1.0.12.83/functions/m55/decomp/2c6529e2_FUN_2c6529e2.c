/* FUN_2c6529e2 @ 0x2c6529e2 */

undefined4 *
FUN_2c6529e2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined1 param_6,undefined4 *param_7)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined1 *puStack_58;
  int iStack_54;
  undefined1 auStack_50 [16];
  undefined1 *puStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [20];
  
  iVar3 = FUN_2c659524(param_5 + 0x6c);
  iVar4 = FUN_2c6521ec(param_5 + 0x6c);
  pbVar9 = (byte *)*param_7;
  if (*pbVar9 == *(byte *)(iVar4 + 0x38)) {
    uStack_64 = *(undefined4 *)(iVar4 + 0x34);
    uVar13 = *(uint *)(iVar4 + 0x28);
    puStack_7c = *(undefined1 **)(iVar4 + 0x24);
    if (param_7[1] != 0) {
      pbVar9 = pbVar9 + 1;
    }
  }
  else {
    uStack_64 = *(undefined4 *)(iVar4 + 0x30);
    uVar13 = *(uint *)(iVar4 + 0x20);
    puStack_7c = *(undefined1 **)(iVar4 + 0x1c);
  }
  pbVar2 = pbVar9;
  do {
    pbVar7 = pbVar2;
    if (pbVar9 + param_7[1] <= pbVar7) break;
    pbVar2 = pbVar7 + 1;
  } while ((int)((uint)*(byte *)(*(int *)(iVar3 + 0x18) + (uint)*pbVar7) << 0x1d) < 0);
  iVar3 = (int)pbVar7 - (int)pbVar9;
  uStack_70 = param_3;
  uStack_6c = param_4;
  if (iVar3 != 0) {
    puStack_58 = auStack_50;
    iStack_54 = 0;
    auStack_50[0] = 0;
    FUN_2c65eb7e(&puStack_58,iVar3 * 2);
    iVar11 = iVar3 - *(int *)(iVar4 + 0x2c);
    if (0 < iVar11) {
      if (*(int *)(iVar4 + 0x2c) < 0) {
        iVar11 = iVar3;
      }
      if (*(int *)(iVar4 + 0xc) == 0) {
        FUN_2c65ecf0(&puStack_58,0,iStack_54,pbVar9,iVar11);
      }
      else {
        FUN_2c65ec1c(&puStack_58,0,iStack_54,iVar11 << 1,0);
        iVar5 = FUN_2c659b3c(puStack_58,*(undefined1 *)(iVar4 + 0x12),*(undefined4 *)(iVar4 + 8),
                             *(undefined4 *)(iVar4 + 0xc),pbVar9,pbVar9 + iVar11);
        FUN_2c652254(&puStack_58,iVar5 - (int)puStack_58,0xffffffff);
      }
    }
    if (0 < *(int *)(iVar4 + 0x2c)) {
      FUN_2c65ebe0(&puStack_58,*(undefined1 *)(iVar4 + 0x11));
      if (iVar11 < 0) {
        FUN_2c6521d6(&puStack_58,-iVar11,*(undefined1 *)(iVar4 + 0x39));
      }
      else {
        iVar3 = *(int *)(iVar4 + 0x2c);
        pbVar9 = pbVar9 + iVar11;
      }
      FUN_2c65ee28(&puStack_58,pbVar9,iVar3);
    }
    bVar1 = false;
    uVar8 = *(uint *)(param_5 + 0xc) & 0xb0;
    uStack_3c = 0;
    iVar3 = 0;
    if ((*(uint *)(param_5 + 0xc) & 0x200) != 0) {
      iVar3 = *(int *)(iVar4 + 0x18);
    }
    puStack_40 = auStack_38;
    auStack_38[0] = 0;
    uVar10 = iVar3 + uVar13 + iStack_54;
    FUN_2c65eb7e(&puStack_40,uVar10 * 2);
    uVar12 = *(uint *)(param_5 + 8);
    if ((uVar8 == 0x10) && (bVar1 = false, uVar10 < uVar12)) {
      bVar1 = true;
    }
    iVar3 = 0;
    do {
      switch(*(undefined1 *)((int)&uStack_64 + iVar3)) {
      case 0:
        if (bVar1) {
LAB_2c652bec:
          FUN_2c6521d6(&puStack_40,uVar12 - uVar10,param_6);
        }
        break;
      case 1:
        uVar6 = param_6;
        if (bVar1) goto LAB_2c652bec;
LAB_2c652bd6:
        FUN_2c65ebe0(&puStack_40,uVar6);
        break;
      case 2:
        if (*(int *)(param_5 + 0xc) << 0x16 < 0) {
          FUN_2c65ee28(&puStack_40,*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
        }
        break;
      case 3:
        if (uVar13 != 0) {
          uVar6 = *puStack_7c;
          goto LAB_2c652bd6;
        }
        break;
      case 4:
        FUN_2c65ede8(&puStack_40,puStack_58,iStack_54);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    if (1 < uVar13) {
      FUN_2c65ee28(&puStack_40,puStack_7c + 1,uVar13 - 1);
    }
    uVar13 = uStack_3c;
    if (uStack_3c < uVar12) {
      uVar13 = uVar12;
      if (uVar8 == 0x20) {
        FUN_2c6521d6(&puStack_40,uVar12 - uStack_3c,param_6);
      }
      else {
        FUN_2c652310(&puStack_40,0,uVar12 - uStack_3c,param_6);
      }
    }
    FUN_2c65277c(&uStack_60,param_3,param_4,puStack_40,uVar13);
    uStack_70 = uStack_60;
    uStack_6c = CONCAT31((int3)((uint)param_4 >> 8),uStack_5c);
    FUN_2c65e94c(&puStack_40);
    FUN_2c65e94c(&puStack_58);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *param_1 = uStack_70;
  param_1[1] = uStack_6c;
  return param_1;
}

