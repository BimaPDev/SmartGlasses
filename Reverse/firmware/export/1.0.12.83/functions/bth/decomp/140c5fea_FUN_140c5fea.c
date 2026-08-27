/* FUN_140c5fea @ 0x140c5fea */

undefined4 *
FUN_140c5fea(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,int param_8,int param_9,int param_10,
            uint *param_11)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int **ppiVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar14;
  int *local_38 [5];
  int *piVar13;
  
  iVar14 = param_8;
  ppiVar9 = local_38 + 2;
  local_38[1] = param_1;
  local_38[2] = (int *)param_3;
  local_38[3] = (int *)param_4;
  uVar4 = FUN_140cc580(param_10 + 0x6c);
  iVar11 = -(param_9 * 4 + 7U & 0xfffffff8);
  iVar5 = FUN_140c5f22(ppiVar9,&param_5);
  if (iVar5 != 0) {
    bVar2 = FUN_140c5ee0(ppiVar9);
    uVar10 = 0;
    for (iVar5 = 0; iVar5 != param_9; iVar5 = iVar5 + 1) {
      if (((uint)**(byte **)(iVar14 + iVar5 * 4) == (uint)bVar2) ||
         (uVar6 = FUN_140c5530(uVar4), uVar6 == bVar2)) {
        *(int *)((int)local_38 + uVar10 * 4 + iVar11) = iVar5;
        uVar10 = uVar10 + 1;
      }
    }
    uVar6 = 0;
    while (1 < uVar10) {
      uVar7 = FUN_140dd3a4(*(undefined4 *)(iVar14 + *(int *)((int)local_38 + iVar11) * 4));
      local_38[0] = (int *)((int)local_38 + uVar10 * 4 + iVar11);
      piVar12 = (int *)((int)local_38 + iVar11 + 4);
      do {
        piVar13 = piVar12 + 1;
        uVar8 = FUN_140dd3a4(*(undefined4 *)(iVar14 + *piVar12 * 4));
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        piVar12 = piVar13;
      } while (local_38[0] != piVar13);
      uVar6 = uVar6 + 1;
      FUN_140c5418(ppiVar9);
      if ((uVar7 <= uVar6) || (iVar5 = FUN_140c5f22(ppiVar9,&param_5), iVar5 == 0))
      goto LAB_140c60b0;
      uVar7 = 0;
      do {
        local_38[0] = (int *)(uint)*(byte *)(*(int *)(iVar14 + *(int *)((int)local_38 +
                                                                       uVar7 * 4 + iVar11) * 4) +
                                            uVar6);
        bVar2 = FUN_140c5ee0(ppiVar9);
        if (local_38[0] == (int *)(uint)bVar2) {
          uVar7 = uVar7 + 1;
        }
        else {
          uVar10 = uVar10 - 1;
          *(undefined4 *)((int)local_38 + uVar7 * 4 + iVar11) =
               *(undefined4 *)((int)local_38 + uVar10 * 4 + iVar11);
        }
      } while (uVar7 < uVar10);
    }
    if (uVar10 == 1) {
      FUN_140c5418(ppiVar9);
      iVar11 = *(int *)((int)local_38 + iVar11);
      iVar14 = *(int *)(iVar14 + iVar11 * 4);
      uVar10 = FUN_140dd3a4(iVar14);
      while( true ) {
        uVar6 = uVar6 + 1;
        if (uVar10 <= uVar6) break;
        iVar5 = FUN_140c5f22(ppiVar9,&param_5);
        if ((iVar5 == 0) ||
           (cVar1 = *(char *)(iVar14 + uVar6), cVar3 = FUN_140c5ee0(ppiVar9), cVar1 != cVar3))
        goto LAB_140c60b0;
        FUN_140c5418(ppiVar9);
      }
      if (uVar6 == uVar10) {
        *param_7 = iVar11;
        goto LAB_140c60bc;
      }
    }
  }
LAB_140c60b0:
  *param_11 = *param_11 | 4;
LAB_140c60bc:
  *local_38[1] = (int)local_38[2];
  local_38[1][1] = (int)local_38[3];
  return local_38[1];
}

