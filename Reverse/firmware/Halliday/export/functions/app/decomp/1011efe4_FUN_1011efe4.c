/* FUN_1011efe4 @ 0x1011efe4 */

undefined4 FUN_1011efe4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iStack_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iStack_10 = param_1;
  local_c = param_2;
  FUN_1011ee5e(*(undefined4 *)(iVar1 + 0x14),*(undefined1 *)(iVar1 + 0x19),&iStack_10);
  (**(code **)(*(int *)(*(int *)(iVar1 + 0x14) + 8) + 0xc))
            (*(int *)(iVar1 + 0x14),*(undefined1 *)(iVar1 + 0x19));
  return local_c;
}

