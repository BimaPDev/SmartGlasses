/* FUN_1405dde8 @ 0x1405dde8 */

void FUN_1405dde8(undefined2 param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_14074378(0xd12,param_1,4,8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
    uVar1 = *(undefined2 *)(param_3 + 1);
    *(undefined1 *)((int)puVar2 + 7) = param_2;
    *(undefined2 *)(puVar2 + 1) = uVar1;
    *(undefined1 *)((int)puVar2 + 6) = 1;
    FUN_140743d0();
    return;
  }
  return;
}

