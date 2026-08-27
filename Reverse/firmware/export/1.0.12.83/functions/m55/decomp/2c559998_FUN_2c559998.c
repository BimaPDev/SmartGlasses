/* FUN_2c559998 @ 0x2c559998 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c559998(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c559b9c;
  cVar3 = *(char *)(param_1 + 0xbc);
  if (cVar3 == '\x06') {
    puVar4 = (undefined4 *)lv_mem_alloc(0x13);
    puVar7 = _LAB_2c559ba0;
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c559bb8,0x3a,_LAB_2c559bb4);
    }
    FUN_2c62c3b0(puVar4,0);
    uVar9 = *puVar7;
    uVar6 = puVar7[1];
    uVar8 = puVar7[2];
    puVar4[3] = puVar7[3];
    uVar2 = *(undefined2 *)(puVar7 + 4);
    *puVar4 = uVar9;
    *(undefined2 *)(puVar4 + 4) = uVar2;
    uVar1 = *(undefined1 *)((int)puVar7 + 0x12);
    puVar4[1] = uVar6;
    puVar4[2] = uVar8;
    *(undefined1 *)((int)puVar4 + 0x12) = uVar1;
    piVar5 = *(int **)(param_1 + 0xb4);
    puStack_20 = puVar4;
    if (piVar5 == *(int **)(param_1 + 0xb8)) {
      FUN_2c5598cc(param_1 + 0xb0,piVar5,&puStack_20);
    }
    else {
      *piVar5 = (int)puVar4;
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 4;
    }
    FUN_2c5591c8(param_1,param_2,0);
    cVar3 = *(char *)(param_1 + 0xbc);
  }
  if (cVar3 == '\a') {
    puVar4 = (undefined4 *)lv_mem_alloc(0x16);
    puVar7 = _LAB_2c559ba4;
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c559bb8,0x3a,_LAB_2c559bb4);
    }
    FUN_2c62c3b0(puVar4,0);
    uVar6 = puVar7[1];
    uVar8 = puVar7[2];
    uVar9 = puVar7[3];
    *puVar4 = *puVar7;
    puVar4[3] = uVar9;
    uVar9 = puVar7[4];
    uVar2 = *(undefined2 *)(puVar7 + 5);
    puVar4[1] = uVar6;
    puVar4[2] = uVar8;
    puVar4[4] = uVar9;
    *(undefined2 *)(puVar4 + 5) = uVar2;
    puVar7 = *(undefined4 **)(param_1 + 0xb4);
    puStack_20 = puVar4;
    if (puVar7 == *(undefined4 **)(param_1 + 0xb8)) {
      FUN_2c5598cc(param_1 + 0xb0,puVar7,&puStack_20);
    }
    else {
      *puVar7 = puVar4;
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 4;
    }
    FUN_2c5591c8(param_1,param_2,0);
    cVar3 = *(char *)(param_1 + 0xbc);
  }
  if (cVar3 == '\b') {
    puVar4 = (undefined4 *)lv_mem_alloc(0x13);
    puVar7 = _LAB_2c559ba8;
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c559bb8,0x3a,_LAB_2c559bb4);
    }
    FUN_2c62c3b0(puVar4,0);
    uVar9 = *puVar7;
    uVar6 = puVar7[1];
    uVar8 = puVar7[2];
    puVar4[3] = puVar7[3];
    uVar2 = *(undefined2 *)(puVar7 + 4);
    *puVar4 = uVar9;
    *(undefined2 *)(puVar4 + 4) = uVar2;
    uVar1 = *(undefined1 *)((int)puVar7 + 0x12);
    puVar4[1] = uVar6;
    puVar4[2] = uVar8;
    *(undefined1 *)((int)puVar4 + 0x12) = uVar1;
    puVar7 = *(undefined4 **)(param_1 + 0xb4);
    puStack_20 = puVar4;
    if (puVar7 == *(undefined4 **)(param_1 + 0xb8)) {
      FUN_2c5598cc(param_1 + 0xb0,puVar7,&puStack_20);
    }
    else {
      *puVar7 = puVar4;
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 4;
    }
    FUN_2c5591c8(param_1,param_2,0);
    cVar3 = *(char *)(param_1 + 0xbc);
  }
  if (cVar3 == '\t') {
    puVar4 = (undefined4 *)lv_mem_alloc(0x16);
    puVar7 = _LAB_2c559bac;
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c559bb8,0x3a,_LAB_2c559bb4);
    }
    FUN_2c62c3b0(puVar4,0);
    uVar6 = puVar7[1];
    uVar8 = puVar7[2];
    uVar9 = puVar7[3];
    *puVar4 = *puVar7;
    puVar4[3] = uVar9;
    uVar9 = puVar7[4];
    uVar2 = *(undefined2 *)(puVar7 + 5);
    puVar4[1] = uVar6;
    puVar4[2] = uVar8;
    puVar4[4] = uVar9;
    *(undefined2 *)(puVar4 + 5) = uVar2;
    puVar7 = *(undefined4 **)(param_1 + 0xb4);
    puStack_20 = puVar4;
    if (puVar7 == *(undefined4 **)(param_1 + 0xb8)) {
      FUN_2c5598cc(param_1 + 0xb0,puVar7,&puStack_20);
    }
    else {
      *puVar7 = puVar4;
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 4;
    }
    if (*_LAB_2c559b9c == iStack_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c55949c,0xb8,_LAB_2c559490,_LAB_2c559498,_LAB_2c559490,
                   *(undefined1 *)(param_1 + 0xbc));
    }
  }
  else if (*_LAB_2c559b9c == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

