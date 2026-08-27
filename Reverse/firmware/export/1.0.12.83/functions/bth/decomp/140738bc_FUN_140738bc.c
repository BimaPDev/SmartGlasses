/* FUN_140738bc @ 0x140738bc */

undefined4 FUN_140738bc(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0xb) != '\x01') {
    return 1;
  }
  *(undefined1 *)(param_1 + 0x2c) = 0xa5;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if ((int)((uint)*(byte *)(param_1 + 0x2d) << 0x1b) < 0) {
    (**(code **)(param_1 + 0xc))(param_1,*(undefined4 *)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return 0;
}

