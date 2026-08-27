/* FUN_140564f8 @ 0x140564f8 */

void FUN_140564f8(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_14074378(0xe00,param_2,param_1 << 8 | 3,4);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = (char)param_1;
    *(undefined2 *)(puVar1 + 2) = param_3;
    puVar1[1] = 1;
    FUN_140743d0();
    return;
  }
  return;
}

