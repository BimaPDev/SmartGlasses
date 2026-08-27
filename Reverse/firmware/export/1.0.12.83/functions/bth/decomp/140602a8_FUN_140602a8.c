/* FUN_140602a8 @ 0x140602a8 */

undefined4 FUN_140602a8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_1406db30(0x2005,6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(DAT_140602e4 + 0xa6);
    if (*(char *)(DAT_140602e4 + 0xac) == '\0') {
      puVar2 = (undefined4 *)(DAT_140602e4 + 0x46);
    }
    *puVar1 = *puVar2;
    *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(puVar2 + 1);
    FUN_1406da30(puVar1,param_1,param_2);
    return 0;
  }
  return 0x4b;
}

