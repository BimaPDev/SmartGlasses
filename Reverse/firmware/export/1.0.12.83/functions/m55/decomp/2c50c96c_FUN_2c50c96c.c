/* FUN_2c50c96c @ 0x2c50c96c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50c96c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined8 uVar10;
  
  uVar2 = _LAB_2c50caa8;
  puVar1 = _LAB_2c50caa4;
  uVar10 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
  piVar5 = (int *)(param_1 + 0x30);
  do {
    puVar7 = (undefined4 *)*piVar5;
    uVar3 = FUN_2c637344((int)uVar10,uVar3);
    *puVar7 = uVar3;
    piVar6 = piVar5 + 1;
    puVar7 = (undefined4 *)*piVar5;
    FUN_2c6072bc(*puVar7,1,(int)*(short *)(puVar7 + 2),(int)*(short *)((int)puVar7 + 10),param_4);
    FUN_2c607048(*(undefined4 *)*piVar5,0x27d1,0x18);
    FUN_2c606e20(*(undefined4 *)*piVar5,*puVar1,0);
    FUN_2c606e5c(*(undefined4 *)*piVar5,2,0);
    uVar8 = *(undefined4 *)*piVar5;
    uVar3 = FUN_2c5e2e80(uVar2);
    FUN_2c606e38(uVar8,uVar3,0);
    uVar8 = *(undefined4 *)*piVar5;
    uVar3 = registry_lookup(((undefined4 *)*piVar5)[3]);
    FUN_2c638730(uVar8,uVar3);
    FUN_2c606e74(*(undefined4 *)*piVar5,0x99,0);
    piVar9 = (int *)*piVar5;
    if (*piVar9 != 0) {
      lv_obj_add_flag_invalidate(*piVar9,1);
      piVar9 = (int *)*piVar5;
    }
    iVar4 = FUN_2c637344((int)uVar10);
    piVar9[1] = iVar4;
    iVar4 = *piVar5;
    FUN_2c6072bc(*(undefined4 *)(iVar4 + 4),1,(int)*(short *)(iVar4 + 8),
                 (int)(short)(*(short *)(iVar4 + 10) + 0x18));
    FUN_2c607048(*(undefined4 *)(*piVar5 + 4),0xdc,0x16);
    FUN_2c6388dc(*(undefined4 *)(*piVar5 + 4),0);
    FUN_2c606e20(*(undefined4 *)(*piVar5 + 4),*puVar1,0);
    FUN_2c606e5c(*(undefined4 *)(*piVar5 + 4),1,0);
    uVar8 = *(undefined4 *)(*piVar5 + 4);
    uVar3 = FUN_2c5e2e80(uVar2);
    FUN_2c606e38(uVar8,uVar3,0);
    uVar3 = 1;
    if (*(int *)(*piVar5 + 4) != 0) {
      lv_obj_add_flag_invalidate();
      uVar3 = extraout_r1;
    }
    piVar5 = piVar6;
  } while (piVar6 != (int *)(param_1 + 0x44));
  return;
}

