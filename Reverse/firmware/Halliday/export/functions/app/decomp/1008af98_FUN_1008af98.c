/* FUN_1008af98 @ 0x1008af98 */

void FUN_1008af98(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  
  iVar1 = FUN_10086f50(param_1,0x21,0);
  if (iVar1 == 0) {
    return;
  }
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 0x10;
  while (iVar1 = FUN_10126fb4(param_1,0), iVar1 != 0) {
    FUN_1008af98(iVar1);
  }
  iVar2 = FUN_10124ce2(param_1);
  iVar1 = 0;
  while (iVar1 = FUN_10093034(iVar1), iVar1 != 0) {
    if ((param_1 == *(int *)(iVar1 + 0x48)) || (param_1 == *(int *)(iVar1 + 0x4c))) {
      FUN_1008765c(iVar1,param_1);
    }
    if (param_1 == *(int *)(iVar1 + 0x54)) {
      *(undefined4 *)(iVar1 + 0x54) = 0;
    }
    if ((iVar2 == *(int *)(iVar1 + 0x80)) && (iVar3 = FUN_100876fc(), param_1 == iVar3)) {
      FUN_1008765c(iVar1,param_1);
    }
  }
  FUN_10124dd2(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = FUN_1008af34();
    iVar2 = *(int *)(iVar1 + 0xc);
    for (uVar7 = 0; (uVar7 != *(uint *)(iVar1 + 0x24) && (param_1 != *(int *)(iVar2 + uVar7 * 4)));
        uVar7 = uVar7 + 1) {
    }
    uVar5 = *(uint *)(iVar1 + 0x24) - 1;
    puVar6 = (undefined4 *)(iVar2 + uVar7 * 4);
    for (; uVar7 < uVar5; uVar7 = uVar7 + 1) {
      *puVar6 = puVar6[1];
      puVar6 = puVar6 + 1;
    }
    *(uint *)(iVar1 + 0x24) = uVar5;
    uVar4 = FUN_10094280(iVar2,uVar5 * 4,DAT_1008b09c);
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
  }
  else {
    uVar7 = FUN_10126fda(param_1);
    while( true ) {
      piVar8 = *(int **)(*(int *)(param_1 + 4) + 8);
      iVar1 = *piVar8;
      uVar5 = piVar8[1] - 1;
      if (uVar5 <= uVar7) break;
      uVar7 = uVar7 + 1;
      *(undefined4 *)(iVar1 + uVar7 * 4 + -4) = *(undefined4 *)(iVar1 + uVar7 * 4);
    }
    piVar8[1] = uVar5;
    iVar1 = FUN_10094280(iVar1,uVar5 * 4,DAT_1008b09c);
    *piVar8 = iVar1;
  }
  FUN_10094268(param_1,DAT_1008b09c);
  return;
}

