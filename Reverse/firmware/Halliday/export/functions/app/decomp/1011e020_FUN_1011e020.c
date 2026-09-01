/* FUN_1011e020 @ 0x1011e020 */

undefined4 FUN_1011e020(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  uint local_38 [6];
  
  iVar7 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  iVar3 = FUN_1011df5e();
  FUN_1011df34(param_1);
  uVar1 = FUN_1011df5e(param_1);
  uVar2 = FUN_1011df5e(param_1);
  iVar4 = FUN_1011df34(param_1);
  if (3 < iVar4) {
    return 0xfffffffb;
  }
  for (; iVar7 < iVar4; iVar7 = iVar7 + 1) {
    FUN_1011df34(param_1);
    uVar5 = FUN_1011df34(param_1);
    local_38[iVar7] = (int)uVar5 >> 4;
    local_38[iVar7 + 3] = uVar5 & 0xf;
    FUN_1011df34(param_1);
  }
  *(undefined1 *)(param_1 + 0x98) = 6;
  if (local_38[0] == 1) {
    if (local_38[3] == 1) {
      if (iVar4 == 1) {
        *(undefined1 *)(param_1 + 0x98) = 0;
      }
      if ((((local_38[1] != 1) || (local_38[4] != 1)) || (local_38[2] != 1)) ||
         (uVar6 = 1, local_38[5] != 1)) goto LAB_1011e0a4;
    }
    else {
      if (((local_38[3] != 2) || (local_38[1] != 1)) ||
         ((local_38[4] != 1 || ((local_38[2] != 1 || (local_38[5] != 1)))))) goto LAB_1011e0a4;
      uVar6 = 4;
    }
  }
  else {
    if (local_38[0] != 2) goto LAB_1011e0a4;
    if (local_38[3] == 2) {
      if (local_38[1] != 1) goto LAB_1011e0a4;
      if (((local_38[4] == 1) && (local_38[2] == 1)) && (local_38[5] == 1)) {
        *(undefined1 *)(param_1 + 0x98) = 2;
      }
      if (((local_38[4] != 2) || (local_38[2] != 1)) || (local_38[5] != 2)) goto LAB_1011e0a4;
      uVar6 = 5;
    }
    else {
      if ((((local_38[3] != 1) || (local_38[1] != 1)) || (local_38[4] != 1)) ||
         ((local_38[2] != 1 || (local_38[5] != 1)))) goto LAB_1011e0a4;
      uVar6 = 3;
    }
  }
  *(undefined1 *)(param_1 + 0x98) = uVar6;
LAB_1011e0a4:
  if (0 < iVar4 * -3 + iVar3 + -8) {
    FUN_1011dfde(param_1);
  }
  *(undefined2 *)(param_1 + 0x1c) = uVar2;
  *(undefined2 *)(param_1 + 0x1e) = uVar1;
  return 0;
}

