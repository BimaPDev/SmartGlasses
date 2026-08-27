/* FUN_14047a18 @ 0x14047a18 */

void FUN_14047a18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  FUN_14047978(DAT_14047a30,9,param_3,param_4,param_4);
  puVar1 = DAT_14047a04;
  do {
    if (*(char *)((int)puVar1 + 6) == '\0') {
      *puVar1 = DAT_14047a34;
      *(undefined2 *)(puVar1 + 1) = 8;
      *(undefined1 *)((int)puVar1 + 6) = 1;
      return;
    }
    puVar1 = puVar1 + 2;
  } while (puVar1 != DAT_14047a04 + 200);
  FUN_1402a6e8(4,0x9a,DAT_14047a14,DAT_14047a10,DAT_14047a08,DAT_14047a0c);
  return;
}

