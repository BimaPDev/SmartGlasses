/* FUN_2c64cf1c @ 0x2c64cf1c */

void FUN_2c64cf1c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  
  if (param_3 != 0) {
    uVar1 = FUN_2c64cf04(param_2);
    if (*(int *)(param_1 + 8) - 1U < uVar1) {
      uVar10 = uVar1 + 4;
      iVar11 = *(int *)(param_1 + 4);
      if (uVar10 < 0x1fffffff) {
        iVar9 = uVar10 * 4;
      }
      else {
        iVar9 = -1;
      }
      iVar2 = thunk_FUN_2c64ca5c(iVar9);
      uVar3 = *(uint *)(param_1 + 8);
      for (uVar8 = 0; uVar3 != uVar8; uVar8 = uVar8 + 1) {
        *(undefined4 *)(iVar2 + uVar8 * 4) = *(undefined4 *)(*(int *)(param_1 + 4) + uVar8 * 4);
      }
      iVar6 = ((4 - uVar3) + uVar1) * 4;
      if (uVar10 < uVar3) {
        iVar6 = 0;
      }
      FUN_2c674268(iVar2 + uVar3 * 4,0,iVar6,uVar8,param_4);
      iVar6 = *(int *)(param_1 + 0xc);
      iVar9 = thunk_FUN_2c64ca5c(iVar9);
      uVar3 = *(uint *)(param_1 + 8);
      for (uVar8 = 0; uVar3 != uVar8; uVar8 = uVar8 + 1) {
        *(undefined4 *)(iVar9 + uVar8 * 4) = *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar8 * 4);
      }
      iVar7 = ((4 - uVar3) + uVar1) * 4;
      if (uVar10 < uVar3) {
        iVar7 = 0;
      }
      FUN_2c674268(iVar9 + uVar3 * 4,0,iVar7,uVar8,param_4);
      *(int *)(param_1 + 0xc) = iVar9;
      *(int *)(param_1 + 4) = iVar2;
      *(uint *)(param_1 + 8) = uVar10;
      if (iVar11 != 0) {
        thunk_FUN_2c669588(iVar11);
      }
      if (iVar6 != 0) {
        thunk_FUN_2c669588(iVar6);
      }
    }
    iVar11 = *(int *)(param_1 + 4);
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    piVar4 = DAT_2c64d08c;
    if (*(int *)(iVar11 + uVar1 * 4) != 0) {
      while (*piVar4 != 0) {
        uVar12 = FUN_2c64cf04();
        iVar9 = (int)((ulonglong)uVar12 >> 0x20);
        if (uVar1 == (uint)uVar12) {
          iVar2 = *(int *)(param_1 + 4);
          uVar12 = FUN_2c64cf04(*(undefined4 *)(iVar9 + 4));
          iVar9 = (int)uVar12;
          if (*(int *)(iVar2 + iVar9 * 4) != 0) {
            iVar6 = FUN_2c65538c(param_3,*(undefined4 *)((int)((ulonglong)uVar12 >> 0x20) + 4));
LAB_2c64cff6:
            *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
            FUN_2c64cdce(*(undefined4 *)(iVar2 + iVar9 * 4));
            *(int *)(iVar2 + iVar9 * 4) = iVar6;
          }
          break;
        }
        uVar12 = FUN_2c64cf04(*(undefined4 *)(iVar9 + 4));
        puVar5 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
        if (uVar1 == (uint)uVar12) {
          iVar2 = *(int *)(param_1 + 4);
          uVar12 = FUN_2c64cf04(*puVar5);
          iVar9 = (int)uVar12;
          if (*(int *)(iVar2 + iVar9 * 4) != 0) {
            iVar6 = FUN_2c65019c(param_3,*(undefined4 *)((ulonglong)uVar12 >> 0x20));
            goto LAB_2c64cff6;
          }
          break;
        }
        piVar4 = puVar5 + 2;
      }
      FUN_2c64cdce(*(undefined4 *)(iVar11 + uVar1 * 4));
    }
    *(int *)(iVar11 + uVar1 * 4) = param_3;
    for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 8); uVar1 = uVar1 + 1) {
      if (*(int *)(*(int *)(param_1 + 0xc) + uVar1 * 4) != 0) {
        FUN_2c64cdce();
        *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 4) = 0;
      }
    }
  }
  return;
}

