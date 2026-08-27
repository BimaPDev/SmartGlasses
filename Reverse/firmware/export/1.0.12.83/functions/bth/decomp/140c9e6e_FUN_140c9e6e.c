/* FUN_140c9e6e @ 0x140c9e6e */

undefined4 *
FUN_140c9e6e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,int param_8,int param_9,int param_10,
            uint *param_11)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_38 [5];
  
  iVar10 = param_8;
  piVar7 = local_38 + 2;
  local_38[2] = param_3;
  local_38[3] = param_4;
  uVar1 = FUN_140d2a04(param_10 + 0x6c);
  iVar9 = -(param_9 * 4 + 7U & 0xfffffff8);
  iVar2 = FUN_140c9da6(piVar7,&param_5);
  if (iVar2 != 0) {
    iVar2 = FUN_140c9d64(piVar7);
    uVar8 = 0;
    for (iVar12 = 0; iVar12 != param_9; iVar12 = iVar12 + 1) {
      if ((**(int **)(iVar10 + iVar12 * 4) == iVar2) ||
         (local_38[1] = iVar2, iVar3 = FUN_140c9d58(uVar1), iVar2 = local_38[1],
         iVar3 == local_38[1])) {
        *(int *)((int)local_38 + uVar8 * 4 + iVar9) = iVar12;
        uVar8 = uVar8 + 1;
      }
    }
    uVar11 = 0;
    while (1 < uVar8) {
      uVar4 = FUN_140df568(*(undefined4 *)(iVar10 + *(int *)((int)local_38 + iVar9) * 4));
      uVar6 = 1;
      do {
        local_38[1] = uVar6;
        uVar5 = FUN_140df568(*(undefined4 *)
                              (iVar10 + *(int *)((int)local_38 + uVar6 * 4 + iVar9) * 4));
        uVar6 = local_38[1] + 1;
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
      } while (uVar8 != uVar6);
      uVar11 = uVar11 + 1;
      FUN_140c9370(piVar7);
      if ((uVar4 <= uVar11) || (iVar2 = FUN_140c9da6(piVar7,&param_5), iVar2 == 0))
      goto LAB_140c9fac;
      iVar2 = uVar11 * 4;
      uVar4 = 0;
      do {
        local_38[1] = *(int *)(*(int *)(iVar10 + *(int *)((int)local_38 + uVar4 * 4 + iVar9) * 4) +
                              iVar2);
        local_38[0] = iVar2;
        iVar12 = FUN_140c9d64(piVar7);
        iVar2 = local_38[0];
        if (local_38[1] == iVar12) {
          uVar4 = uVar4 + 1;
        }
        else {
          uVar8 = uVar8 - 1;
          *(undefined4 *)((int)local_38 + uVar4 * 4 + iVar9) =
               *(undefined4 *)((int)local_38 + uVar8 * 4 + iVar9);
        }
      } while (uVar4 < uVar8);
    }
    if (uVar8 == 1) {
      FUN_140c9370(piVar7);
      iVar9 = *(int *)((int)local_38 + iVar9);
      iVar10 = *(int *)(iVar10 + iVar9 * 4);
      uVar8 = FUN_140df568(iVar10);
      while( true ) {
        uVar11 = uVar11 + 1;
        if (uVar8 <= uVar11) break;
        iVar2 = FUN_140c9da6(piVar7,&param_5);
        if (iVar2 == 0) goto LAB_140c9fac;
        local_38[1] = *(int *)(iVar10 + uVar11 * 4);
        iVar2 = FUN_140c9d64(piVar7);
        if (local_38[1] != iVar2) goto LAB_140c9fac;
        FUN_140c9370(piVar7);
      }
      if (uVar11 == uVar8) {
        *param_7 = iVar9;
        goto LAB_140c9fb8;
      }
    }
  }
LAB_140c9fac:
  *param_11 = *param_11 | 4;
LAB_140c9fb8:
  *param_1 = local_38[2];
  param_1[1] = local_38[3];
  return param_1;
}

