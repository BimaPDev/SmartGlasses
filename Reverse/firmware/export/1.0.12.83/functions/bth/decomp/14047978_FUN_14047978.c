/* FUN_14047978 @ 0x14047978 */

void FUN_14047978(undefined4 param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_140479b4;
  do {
    if (*(char *)((int)puVar1 + 6) == '\0') {
      *puVar1 = param_1;
      *(undefined2 *)(puVar1 + 1) = param_2;
      *(undefined1 *)((int)puVar1 + 6) = 1;
      return;
    }
    puVar1 = puVar1 + 2;
  } while (puVar1 != DAT_140479b4 + 200);
  FUN_1402a6e8(4,0x79,DAT_140479c4,DAT_140479c0,DAT_140479b8,DAT_140479bc);
  return;
}

