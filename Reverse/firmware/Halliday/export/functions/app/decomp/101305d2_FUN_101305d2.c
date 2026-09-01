/* FUN_101305d2 @ 0x101305d2 */

undefined4 FUN_101305d2(int param_1)

{
  if (param_1 == 0) {
    return 0xffffffea;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_100a5b78(((int)PTR_DAT_100b3688 - (int)PTR_DAT_100b3684) * 0x20 & 0xff00U | 0x2000031,
                 PTR_s____enter___100b368c);
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_10064c60();
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      if ((int)((uint)*(byte *)(param_1 + 0xa3) << 0x1e) < 0) {
        FUN_1011dcae();
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
    }
    if ((*(int *)(param_1 + 0x54) != 0) && ((int)((uint)*(byte *)(param_1 + 0xa3) << 0x1d) < 0)) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (*(int *)(param_1 + 100) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_1011dcae();
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    return 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_10130a60();
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1012d27c();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1012d27c();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1012d27c();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1012d27c();
  }
  return 0;
}

