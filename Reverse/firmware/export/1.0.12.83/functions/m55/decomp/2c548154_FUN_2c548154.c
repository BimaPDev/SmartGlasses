/* FUN_2c548154 @ 0x2c548154 */

undefined4 FUN_2c548154(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd4) = param_2;
  FUN_2c54800c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x114) + 0x2c));
  *(undefined1 *)(param_1 + 0xd4) = 0xff;
  return 1;
}

