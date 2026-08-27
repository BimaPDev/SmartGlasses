/* FUN_140c5934 @ 0x140c5934 */

undefined4 *
FUN_140c5934(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  undefined1 *local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 uStack_5c;
  undefined1 *local_58;
  int local_54;
  undefined1 local_50 [16];
  undefined1 *local_40;
  uint local_3c;
  undefined1 local_38 [20];
  
  iVar3 = FUN_140cc580(param_5 + 0x6c);
  iVar4 = FUN_140c542c(param_5 + 0x6c);
  pbVar9 = (byte *)*param_7;
  if (*pbVar9 == *(byte *)(iVar4 + 0x38)) {
    local_64 = *(undefined4 *)(iVar4 + 0x34);
    uVar13 = *(uint *)(iVar4 + 0x28);
    local_7c = *(undefined1 **)(iVar4 + 0x24);
    if (param_7[1] != 0) {
      pbVar9 = pbVar9 + 1;
    }
  }
  else {
    local_64 = *(undefined4 *)(iVar4 + 0x30);
    uVar13 = *(uint *)(iVar4 + 0x20);
    local_7c = *(undefined1 **)(iVar4 + 0x1c);
  }
  pbVar2 = pbVar9;
  do {
    pbVar7 = pbVar2;
    if (pbVar9 + param_7[1] <= pbVar7) break;
    pbVar2 = pbVar7 + 1;
  } while ((int)((uint)*(byte *)(*(int *)(iVar3 + 0x18) + (uint)*pbVar7) << 0x1d) < 0);
  iVar3 = (int)pbVar7 - (int)pbVar9;
  local_70 = param_3;
  local_6c = param_4;
  if (iVar3 != 0) {
    local_58 = local_50;
    local_54 = 0;
    local_50[0] = 0;
    FUN_140d1aba(&local_58,iVar3 * 2);
    iVar11 = iVar3 - *(int *)(iVar4 + 0x2c);
    if (0 < iVar11) {
      if (*(int *)(iVar4 + 0x2c) < 0) {
        iVar11 = iVar3;
      }
      if (*(int *)(iVar4 + 0xc) == 0) {
        FUN_140d1c2c(&local_58,0,local_54,pbVar9,iVar11);
      }
      else {
        FUN_140d1b58(&local_58,0,local_54,iVar11 << 1,0);
        iVar5 = FUN_140ccb98(local_58,*(undefined1 *)(iVar4 + 0x12),*(undefined4 *)(iVar4 + 8),
                             *(undefined4 *)(iVar4 + 0xc),pbVar9,pbVar9 + iVar11);
        FUN_140c53d8(&local_58,iVar5 - (int)local_58,0xffffffff);
      }
    }
    if (0 < *(int *)(iVar4 + 0x2c)) {
      FUN_140d1b1c(&local_58,*(undefined1 *)(iVar4 + 0x11));
      if (iVar11 < 0) {
        FUN_140c535a(&local_58,-iVar11,*(undefined1 *)(iVar4 + 0x39));
      }
      else {
        iVar3 = *(int *)(iVar4 + 0x2c);
        pbVar9 = pbVar9 + iVar11;
      }
      FUN_140d1d64(&local_58,pbVar9,iVar3);
    }
    bVar1 = false;
    uVar8 = *(uint *)(param_5 + 0xc) & 0xb0;
    local_3c = 0;
    iVar3 = 0;
    if ((*(uint *)(param_5 + 0xc) & 0x200) != 0) {
      iVar3 = *(int *)(iVar4 + 0x18);
    }
    local_40 = local_38;
    local_38[0] = 0;
    uVar10 = iVar3 + uVar13 + local_54;
    FUN_140d1aba(&local_40,uVar10 * 2);
    uVar12 = *(uint *)(param_5 + 8);
    if ((uVar8 == 0x10) && (bVar1 = false, uVar10 < uVar12)) {
      bVar1 = true;
    }
    iVar3 = 0;
    do {
      switch(*(undefined1 *)((int)&local_64 + iVar3)) {
      case 0:
        if (bVar1) {
LAB_140c5b3e:
          FUN_140c535a(&local_40,uVar12 - uVar10,param_6);
        }
        break;
      case 1:
        uVar6 = param_6;
        if (bVar1) goto LAB_140c5b3e;
LAB_140c5b28:
        FUN_140d1b1c(&local_40,uVar6);
        break;
      case 2:
        if (*(int *)(param_5 + 0xc) << 0x16 < 0) {
          FUN_140d1d64(&local_40,*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
        }
        break;
      case 3:
        if (uVar13 != 0) {
          uVar6 = *local_7c;
          goto LAB_140c5b28;
        }
        break;
      case 4:
        FUN_140d1d24(&local_40,local_58,local_54);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    if (1 < uVar13) {
      FUN_140d1d64(&local_40,local_7c + 1,uVar13 - 1);
    }
    uVar13 = local_3c;
    if (local_3c < uVar12) {
      uVar13 = uVar12;
      if (uVar8 == 0x20) {
        FUN_140c535a(&local_40,uVar12 - local_3c,param_6);
      }
      else {
        FUN_140c5494(&local_40,0,uVar12 - local_3c,param_6);
      }
    }
    FUN_140c5900(&local_60,param_3,param_4,local_40,uVar13);
    local_70 = local_60;
    local_6c = CONCAT31((int3)((uint)param_4 >> 8),uStack_5c);
    FUN_140d18d4(&local_40);
    FUN_140d18d4(&local_58);
  }
  *(undefined4 *)(param_5 + 8) = 0;
  *param_1 = local_70;
  param_1[1] = local_6c;
  return param_1;
}

