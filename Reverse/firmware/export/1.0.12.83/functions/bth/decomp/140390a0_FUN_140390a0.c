/* FUN_140390a0 @ 0x140390a0 */

void FUN_140390a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_140390b0;
  if (param_1 != (undefined4 *)0x0) {
    *DAT_140390b0 = *param_1;
    *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_1 + 1);
  }
  return;
}

