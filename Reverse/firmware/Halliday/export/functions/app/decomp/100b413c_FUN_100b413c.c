/* FUN_100b413c @ 0x100b413c */

undefined4
FUN_100b413c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)thunk_FUN_1009f30c(0x1c,DAT_100b4188,param_3,param_4,param_4);
  if (puVar1 == (undefined2 *)0x0) {
    uVar2 = 0xfffffff4;
  }
  else {
    *puVar1 = 0x120;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 4) = 0x10;
    *(undefined4 *)(puVar1 + 6) = param_2;
    *(undefined4 *)(puVar1 + 8) = 3;
    uVar2 = param_3[1];
    *(undefined4 *)(puVar1 + 10) = *param_3;
    *(undefined4 *)(puVar1 + 0xc) = uVar2;
    uVar2 = FUN_10064d1c(param_1,puVar1,param_3 + 2);
    FUN_1012d1f4(puVar1);
  }
  return uVar2;
}

