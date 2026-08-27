/* FUN_140b7d40 @ 0x140b7d40 */

undefined4 FUN_140b7d40(char *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (char *)0x0) {
    return 0x202;
  }
  switch(param_2) {
  case 1:
    break;
  case 2:
    if (param_3 == 0) {
      *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) & 0xfffffff7;
      return 0;
    }
    *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) | 8;
    return 0;
  case 3:
    if (param_3 == 0) {
      *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) & 0xfffffffb;
      return 0;
    }
    *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) | 4;
    return 0;
  case 4:
    *(int *)(param_1 + 0x2e0) = param_3;
    return 0;
  case 5:
    FUN_140e5748(param_1 + 0x44);
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x2d4] = '\0';
    param_1[0x2d5] = '\0';
    param_1[0x2d6] = '\0';
    param_1[0x2d7] = '\0';
    param_1[0x2d8] = '\0';
    param_1[0x2d9] = '\0';
    param_1[0x2da] = '\0';
    param_1[0x2db] = '\0';
    param_1[0x60] = '\0';
    param_1[0x61] = '\0';
    param_1[0x62] = '\0';
    param_1[99] = '\0';
    uVar2 = *(uint *)(param_1 + 0x2f8);
    uVar1 = uVar2 & 0xffffffee;
    if (*param_1 != '\x01') {
      uVar2 = uVar2 & 0xffffffce;
    }
    *(uint *)(param_1 + 0x2f8) = uVar1;
    param_1[0x2e8] = '\0';
    param_1[0x2e9] = '\0';
    param_1[0x2ea] = '\0';
    param_1[0x2eb] = '\0';
    if (*param_1 != '\x01') {
      *(uint *)(param_1 + 0x2f8) = uVar2;
    }
    param_1[0x2e0] = '\0';
    param_1[0x2e1] = '\0';
    param_1[0x2e2] = '\0';
    param_1[0x2e3] = '\0';
    param_1[0x2ec] = '\0';
    param_1[0x2ed] = '\0';
    param_1[0x2ee] = '\0';
    param_1[0x2ef] = '\0';
    param_1[0x2dc] = '\0';
    param_1[0x2dd] = '\0';
    param_1[0x2de] = '\0';
    param_1[0x2df] = '\0';
    param_1[0x2d0] = '\0';
    param_1[0x2d1] = '\0';
    param_1[0x2d2] = '\0';
    param_1[0x2d3] = '\0';
    param_1[0x2f4] = '\0';
    param_1[0x2f5] = '\0';
    param_1[0x2f6] = '\0';
    param_1[0x2f7] = '\0';
    return 0;
  case 6:
    *(int *)(param_1 + 0x2f0) = param_3;
    return 0;
  case 7:
    *(int *)(param_1 + 0x2fc) = param_3;
    return 0;
  case 8:
    param_1[param_3 * 7 + 0x2ce] = '\x01';
    return 0;
  case 9:
    if (param_3 == 0) {
      *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) & 0xffffffbf;
      return 0;
    }
    *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) | 0x40;
    return 0;
  default:
    return 0;
  }
  if (param_3 == 0) {
    *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) & 0xfffffffd;
    return 0;
  }
  *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) | 2;
  return 0;
}

