/* FUN_10086dbc @ 0x10086dbc */

uint FUN_10086dbc(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  piVar1 = (int *)FUN_10087650();
  if (piVar1 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar1 + 8);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(*piVar1,*(undefined1 *)(param_1 + 8));
    }
    if ((int)((uint)*(byte *)(param_1 + 0x18) << 0x1e) < 0) {
      return 1;
    }
    if ((int)((uint)*(byte *)(param_1 + 0x18) << 0x1f) < 0) {
      return 0;
    }
  }
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 8);
  if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x22) & 0x3f) != 0)) {
    uVar2 = 0;
    puVar6 = *(undefined4 **)(iVar5 + 0xc);
    while (puVar6 != (undefined4 *)0x0) {
      pcVar3 = (code *)*puVar6;
      if (((pcVar3 != (code *)0x0) && (uVar7 = puVar6[2], (int)(uVar7 << 0x18) < 0)) &&
         ((uVar7 == 0x80 || ((uVar7 & 0xffffff7f) == (uint)*(byte *)(param_1 + 8))))) {
        *(undefined4 *)(param_1 + 0xc) = puVar6[1];
        (*pcVar3)(param_1);
        if ((int)((uint)*(byte *)(param_1 + 0x18) << 0x1e) < 0) {
          return 1;
        }
        if ((int)((uint)*(byte *)(param_1 + 0x18) << 0x1f) < 0) {
          return 0;
        }
      }
      uVar2 = uVar2 + 1;
      iVar5 = *(int *)(*(int *)(param_1 + 4) + 8);
      if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0x22) & 0x3f) <= uVar2)) break;
      puVar6 = (undefined4 *)(uVar2 * 0xc + *(int *)(iVar5 + 0xc));
    }
  }
  uVar2 = FUN_10124348(0,param_1);
  if (uVar2 == 0) {
    return 0;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 8);
  if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x22) & 0x3f) != 0)) {
    uVar7 = 0;
    puVar6 = *(undefined4 **)(iVar5 + 0xc);
    while (puVar6 != (undefined4 *)0x0) {
      if (uVar2 != 1) {
        return uVar2;
      }
      pcVar3 = (code *)*puVar6;
      if (((pcVar3 != (code *)0x0) && (uVar4 = puVar6[2], -1 < (int)(uVar4 << 0x18))) &&
         ((uVar4 == 0 || (uVar4 == *(byte *)(param_1 + 8))))) {
        *(undefined4 *)(param_1 + 0xc) = puVar6[1];
        (*pcVar3)(param_1);
        if ((int)((uint)*(byte *)(param_1 + 0x18) << 0x1e) < 0) {
          return 1;
        }
        if ((int)((uint)*(byte *)(param_1 + 0x18) << 0x1f) < 0) {
          return 0;
        }
      }
      uVar7 = uVar7 + 1;
      iVar5 = *(int *)(*(int *)(param_1 + 4) + 8);
      if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0x22) & 0x3f) <= uVar7)) goto LAB_10086e10;
      puVar6 = (undefined4 *)(uVar7 * 0xc + *(int *)(iVar5 + 0xc));
    }
  }
  if (uVar2 != 1) {
    return uVar2;
  }
LAB_10086e10:
  if ((*(int *)(*(int *)(param_1 + 4) + 4) != 0) &&
     (-1 < (int)((uint)*(byte *)(param_1 + 0x18) << 0x1d))) {
    if (1 < *(byte *)(param_1 + 8) - 0x23) {
      iVar5 = FUN_10124cb8(*(int *)(param_1 + 4),0x4000);
      if (iVar5 == 0) {
        return 1;
      }
      uVar2 = (uint)*(byte *)(param_1 + 8);
      if (uVar2 < 0x1c) {
        if (0x10 < uVar2) {
          return 1;
        }
      }
      else if ((uVar2 - 0x1e & 0xff) < 0xf) {
        switch(uVar2 - 0x1e) {
        case 0:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0xb:
        case 0xc:
        case 0xe:
          goto LAB_10086e66;
        }
      }
    }
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
    iVar5 = FUN_10086dbc(param_1);
    return (uint)(iVar5 == 1);
  }
LAB_10086e66:
  return 1;
}

