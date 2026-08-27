/* FUN_14083258 @ 0x14083258 */

void FUN_14083258(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1408ac24(param_1,1,0x34,DAT_14083290);
  if (((puVar1 != (undefined4 *)0x0) && (*(char *)((int)puVar1 + 5) == '\0')) && (puVar1[3] == 0)) {
    *puVar1 = 0;
    *(undefined4 *)((int)puVar1 + 6) = *param_1;
    *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)(param_1 + 1);
    puVar1[3] = puVar1 + 3;
    puVar1[4] = puVar1 + 3;
    *(undefined2 *)(puVar1 + 1) = 0;
    return;
  }
  return;
}

