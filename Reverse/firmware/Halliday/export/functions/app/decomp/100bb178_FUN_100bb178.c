/* FUN_100bb178 @ 0x100bb178 */

void FUN_100bb178(undefined2 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = DAT_100bb184;
  *DAT_100bb184 = *param_1;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 1);
  return;
}

