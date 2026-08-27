/* FUN_1406806c @ 0x1406806c */

void FUN_1406806c(undefined2 param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4,
                 undefined2 param_5)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_14074378(0xb01,param_3,2,8);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = param_4;
    puVar1[2] = param_5;
    FUN_140743d0();
    return;
  }
  return;
}

