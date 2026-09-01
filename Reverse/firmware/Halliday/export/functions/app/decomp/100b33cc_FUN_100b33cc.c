/* FUN_100b33cc @ 0x100b33cc */

undefined2 * FUN_100b33cc(undefined2 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)thunk_FUN_1009f30c(param_3 + 0xc,DAT_100b3400);
  if (puVar1 != (undefined2 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = param_2;
    *(int *)(puVar1 + 4) = param_3;
    *puVar1 = param_1;
    if (param_4 != 0) {
      FUN_1011ea40(puVar1 + 6,param_4,param_3);
    }
  }
  return puVar1;
}

