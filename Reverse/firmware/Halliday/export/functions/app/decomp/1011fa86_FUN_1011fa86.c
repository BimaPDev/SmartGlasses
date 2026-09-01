/* FUN_1011fa86 @ 0x1011fa86 */

undefined4 FUN_1011fa86(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  local_20 = 7;
  if (**(char **)(param_1 + 0x10) == '\x01') {
    if (**(int **)(*(int *)(param_1 + 4) + 8) == 3) {
      local_1c = param_2;
      uStack_18 = param_3;
      local_14 = param_4;
      uVar1 = FUN_100793c8(param_1,&local_20);
    }
    else {
      uVar1 = 0xffffff89;
    }
  }
  else {
    uVar1 = 0xfffffff3;
  }
  return uVar1;
}

