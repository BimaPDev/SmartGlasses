/* FUN_140680a4 @ 0x140680a4 */

void FUN_140680a4(undefined2 param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4,
                 undefined1 param_5,undefined2 param_6)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_14074378(0xb01,param_4,2,8);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = param_5;
    puVar1[2] = param_6;
    *(undefined1 *)((int)puVar1 + 7) = param_3;
    FUN_140743d0();
    return;
  }
  return;
}

