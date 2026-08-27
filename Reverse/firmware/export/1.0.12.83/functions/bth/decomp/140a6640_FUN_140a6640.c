/* FUN_140a6640 @ 0x140a6640 */

void FUN_140a6640(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_1c;
  undefined2 local_18;
  int local_14;
  
  local_14 = *DAT_140a66d4;
  FUN_140a5904(param_1,0,param_3,0);
  if (param_2 != 0) {
    local_1c = *DAT_140a66d8;
    local_18 = (undefined2)DAT_140a66d8[1];
    puVar1 = (undefined4 *)FUN_140a65cc();
    if (puVar1 != (undefined4 *)0x0) {
      local_1c = *puVar1;
      local_18 = *(undefined2 *)(puVar1 + 1);
    }
    FUN_14038d6c(*(undefined1 *)(param_2 + 0x144),*(undefined1 *)(param_2 + 0x145),
                 *(undefined1 *)(param_2 + 0x146),*(undefined1 *)(param_2 + 0x147),
                 *(undefined1 *)(param_2 + 0x148),&local_1c,*(undefined1 *)(param_2 + 0x149),
                 *(undefined1 *)(param_2 + 0x14a),*(undefined1 *)(param_2 + 0x14b),
                 *(undefined1 *)(param_2 + 0x14c),*(undefined2 *)(param_2 + 0x14e),
                 *(undefined4 *)(param_2 + 0x158));
  }
  if (*DAT_140a66d4 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

