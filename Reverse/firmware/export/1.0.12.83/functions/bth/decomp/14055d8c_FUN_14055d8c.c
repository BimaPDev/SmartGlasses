/* FUN_14055d8c @ 0x14055d8c */

void FUN_14055d8c(undefined1 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_14074378(0xe18,param_2,3,8);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_1;
    *(undefined2 *)(puVar1 + 2) = param_3;
    *(undefined2 *)(puVar1 + 4) = param_4;
    puVar1[1] = 1;
    FUN_140743d0();
    return;
  }
  return;
}

