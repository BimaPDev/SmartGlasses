/* FUN_140006a8 @ 0x140006a8 */

int FUN_140006a8(undefined4 param_1,int param_2,undefined1 param_3,int param_4)

{
  *(int *)(param_4 + 0x14) = param_2;
  *(uint *)(param_4 + 0x24) = *(uint *)(param_4 + 0x24) | 0x40000;
  *(undefined1 *)(param_4 + 0x1a) = param_3;
  *(uint *)(param_4 + 0x24) = *(uint *)(param_4 + 0x24) | 0x20000;
  *(undefined1 *)(param_4 + 0x19) = param_3;
  *(uint *)(param_4 + 0x24) = *(uint *)(param_4 + 0x24) | 0x10000;
  *(undefined1 *)(param_4 + 0x18) = param_3;
  *(undefined1 *)(param_4 + 0x20) = param_3;
  return param_2 << 4;
}

