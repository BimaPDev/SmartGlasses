/* FUN_2c5f9924 @ 0x2c5f9924 */

int FUN_2c5f9924(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (((param_2 != 0) && (*(short *)(param_2 + 0x34) == 0xb)) &&
     (puVar5 = *(ushort **)(param_2 + 0x38),
     0x80000 < (int)(*(int *)(puVar5 + 4) * (uint)*puVar5 - *(int *)(puVar5 + 6)))) {
    return 0;
  }
  iVar1 = thunk_FUN_2c5f583c(param_1,param_2,0xc,*(undefined4 *)(param_2 + 0x28));
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  uVar2 = (**(code **)*param_1)(1);
  *(undefined4 *)(iVar1 + 0x38) = uVar2;
  iVar3 = FUN_2c5f6770(param_1);
  iVar4 = FUN_2c5f6770(param_1);
  puVar5 = (ushort *)FUN_2c5f944c(param_1,param_3 + iVar3,param_4 - iVar4);
  if (puVar5 == (ushort *)0x0) {
    FUN_2c5f9d24(iVar1);
    return 0;
  }
  uVar2 = FUN_2c5f1414(*(undefined4 *)(param_2 + 0x48),0);
  *(undefined4 *)(iVar1 + 0x48) = uVar2;
  if (*(short *)(param_2 + 0x34) != 0xb) goto LAB_2c5f9a62;
  puVar7 = *(ushort **)(param_2 + 0x38);
  uVar6 = (uint)*puVar7;
  if ((*puVar5 == 0) || (uVar6 == 0)) {
    uVar9 = 0;
LAB_2c5f9ac8:
    *(int *)(puVar7 + 4) = *(int *)(puVar7 + 4) + 1;
    *(uint *)(*(int *)(param_2 + 0x38) + 0xc) = *(int *)(*(int *)(param_2 + 0x38) + 0xc) + uVar9;
  }
  else {
    uVar9 = 0;
    do {
      iVar4 = *(int *)(puVar5 + 4);
      iVar10 = iVar4 + uVar9 * 0x10;
      iVar3 = thunk_FUN_2c5f583c(param_1,iVar1,0xd,*(int *)(iVar10 + 4) + *(int *)(param_2 + 0x28));
      *(int *)(iVar3 + 0x30) = *(int *)(param_2 + 0x28) + *(int *)(iVar10 + 8);
      FUN_2c5f5450(param_1,*(undefined4 *)(*(int *)(iVar4 + uVar9 * 0x10) + 4));
      if (*(short *)(iVar3 + 0x34) == 0xd) {
        *(uint *)(iVar3 + 0x38) = uVar9;
      }
      uVar9 = uVar9 + 1;
      *(int *)(iVar3 + 0x20) = param_1[0x18];
      uVar2 = FUN_2c5f6ba8(param_1 + 0x15);
      *(undefined4 *)(iVar3 + 0x1c) = uVar2;
      uVar8 = (uint)*puVar5;
      if (uVar6 <= *puVar5) {
        uVar8 = uVar6;
      }
    } while ((int)uVar9 < (int)uVar8);
    if (*(short *)(param_2 + 0x34) == 0xb) {
      puVar7 = *(ushort **)(param_2 + 0x38);
      goto LAB_2c5f9ac8;
    }
  }
  if ((int)uVar9 < (int)uVar6) {
    do {
      iVar3 = thunk_FUN_2c5f583c(param_1,iVar1,0xd,0);
      if ((iVar3 != 0) && (*(short *)(iVar3 + 0x34) == 0xd)) {
        *(uint *)(iVar3 + 0x38) = uVar9;
      }
      uVar9 = uVar9 + 1;
      *(int *)(iVar3 + 0x20) = param_1[0x18];
      uVar2 = FUN_2c5f6ba8(param_1 + 0x15);
      *(undefined4 *)(iVar3 + 0x1c) = uVar2;
    } while (uVar9 != uVar6);
  }
LAB_2c5f9a62:
  iVar3 = *param_1;
  FUN_2c5f9384(iVar3,puVar5);
  (**(code **)(iVar3 + 8))(puVar5);
  iVar3 = FUN_2c5f676c(param_1);
  FUN_2c5f6778(param_1,param_3,(param_4 + -1) - iVar3,0);
  FUN_2c5f545c(*param_1,iVar1,param_1[1],param_1[0x19]);
  return iVar1;
}

