/* FUN_2c52a974 @ 0x2c52a974 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_2c52a974(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = _LAB_2c52a9bc;
  iVar2 = *_LAB_2c52a9bc;
  if (*_LAB_2c52a9bc != 0) {
    do {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar4 + 8);
    } while (*(int *)(iVar4 + 8) != 0);
    iVar2 = lv_mem_alloc(0x10);
    *(int *)(iVar4 + 8) = iVar2;
    *(undefined4 *)(iVar2 + 4) = param_2;
    *(undefined4 *)(*(int *)(iVar4 + 8) + 8) = 0;
    *(char *)(*(int *)(iVar4 + 8) + 0xc) = *(char *)(iVar4 + 0xc) + '\x01';
    return *(undefined1 *)(*(int *)(iVar4 + 8) + 0xc);
  }
  puVar3 = (undefined4 *)lv_mem_alloc(0x10);
  puVar3[2] = 0;
  *puVar3 = param_1;
  puVar3[1] = param_2;
  *(undefined1 *)(puVar3 + 3) = 0;
  *piVar1 = (int)puVar3;
  return 0;
}

