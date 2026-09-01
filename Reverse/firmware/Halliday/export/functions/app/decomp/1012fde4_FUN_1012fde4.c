/* FUN_1012fde4 @ 0x1012fde4 */

undefined4 FUN_1012fde4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1012fcbc();
  if (*(int *)(param_1 + 0x120) != 0) {
    if (*(short *)(param_1 + 0xb2) != 0) {
      FUN_1012de76();
    }
    if (*(int *)(param_1 + 0x48) == 0) {
      FUN_1012fe64(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118),
                   *(undefined1 *)(param_1 + 0xcb),*(undefined1 *)(param_1 + 0xcc),
                   *(undefined1 *)(param_1 + 0xce),*(undefined1 *)(param_1 + 0xcf),param_3);
      FUN_100a7040();
    }
  }
  return uVar1;
}

