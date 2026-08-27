/* FUN_2c4d3af8 @ 0x2c4d3af8 */

undefined4 FUN_2c4d3af8(char *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  if (param_1 == (char *)0x0) {
    return 0x202;
  }
  switch(param_2) {
  case 1:
    break;
  case 2:
    if (param_3 == 0) {
      *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xfffffff7;
      return 0;
    }
    *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 8;
    return 0;
  case 3:
    if (param_3 == 0) {
      *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xfffffffb;
      return 0;
    }
    *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 4;
    return 0;
  case 4:
    *(int *)(param_1 + 0x31c) = param_3;
    return 0;
  case 5:
    FUN_2c4d74c8(param_1 + 0x44);
    uVar1 = *(uint *)(param_1 + 0x334);
    param_1[0x60] = '\0';
    param_1[0x61] = '\0';
    param_1[0x62] = '\0';
    param_1[99] = '\0';
    *(uint *)(param_1 + 0x334) = uVar1 & 0xffffffee;
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x310] = '\0';
    param_1[0x311] = '\0';
    param_1[0x312] = '\0';
    param_1[0x313] = '\0';
    param_1[0x314] = '\0';
    param_1[0x315] = '\0';
    param_1[0x316] = '\0';
    param_1[0x317] = '\0';
    if (*param_1 != '\x01') {
      *(uint *)(param_1 + 0x334) = uVar1 & 0xffffffce;
    }
    param_1[0x324] = '\0';
    param_1[0x325] = '\0';
    param_1[0x326] = '\0';
    param_1[0x327] = '\0';
    param_1[0x31c] = '\0';
    param_1[0x31d] = '\0';
    param_1[0x31e] = '\0';
    param_1[799] = '\0';
    param_1[0x328] = '\0';
    param_1[0x329] = '\0';
    param_1[0x32a] = '\0';
    param_1[0x32b] = '\0';
    param_1[0x318] = '\0';
    param_1[0x319] = '\0';
    param_1[0x31a] = '\0';
    param_1[0x31b] = '\0';
    param_1[0x30c] = '\0';
    param_1[0x30d] = '\0';
    param_1[0x30e] = '\0';
    param_1[0x30f] = '\0';
    param_1[0x330] = '\0';
    param_1[0x331] = '\0';
    param_1[0x332] = '\0';
    param_1[0x333] = '\0';
    return 0;
  case 6:
    *(int *)(param_1 + 0x32c) = param_3;
    return 0;
  case 7:
    *(int *)(param_1 + 0x338) = param_3;
    return 0;
  case 8:
    param_1[param_3 * 7 + 0x30a] = '\x01';
    return 0;
  case 9:
    if (param_3 == 0) {
      *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xffffffbf;
      return 0;
    }
    *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 0x40;
    return 0;
  default:
    return 0;
  }
  if (param_3 == 0) {
    *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xfffffffd;
    return 0;
  }
  *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 2;
  return 0;
}

