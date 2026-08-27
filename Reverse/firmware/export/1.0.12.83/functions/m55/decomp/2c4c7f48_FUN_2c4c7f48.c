/* FUN_2c4c7f48 @ 0x2c4c7f48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4c7f48(int param_1)

{
  FUN_2c6741e8(0x42,_LAB_2c4c7fd8,_LAB_2c4c7fd4,param_1);
  if (param_1 == 0) {
    *(uint *)(_LAB_2c4c7fdc + 0x610) = *(uint *)(_LAB_2c4c7fdc + 0x610) | 0x2000000;
  }
  else {
    if (param_1 == 1) {
      *(uint *)(_LAB_2c4c7fdc + 0x62c) = *(uint *)(_LAB_2c4c7fdc + 0x62c) | 0x2000000;
      return 0;
    }
    if (param_1 == 2) {
      *(uint *)(_LAB_2c4c7fdc + 0x648) = *(uint *)(_LAB_2c4c7fdc + 0x648) | 0x2000000;
      return 0;
    }
    if (param_1 == 3) {
      *(uint *)(_LAB_2c4c7fdc + 0x664) = *(uint *)(_LAB_2c4c7fdc + 0x664) | 0x2000000;
    }
    else if (param_1 == 4) {
      *(uint *)(_LAB_2c4c7fdc + 0x6a0) = *(uint *)(_LAB_2c4c7fdc + 0x6a0) | 0x2000000;
    }
    else if (param_1 == 5) {
      *(uint *)(_LAB_2c4c7fdc + 0x6bc) = *(uint *)(_LAB_2c4c7fdc + 0x6bc) | 0x2000000;
    }
  }
  return 0;
}

