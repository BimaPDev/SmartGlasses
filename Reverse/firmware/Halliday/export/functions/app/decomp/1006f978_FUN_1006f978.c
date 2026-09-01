/* FUN_1006f978 @ 0x1006f978 */

undefined4 FUN_1006f978(int *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0x20) {
    *param_3 = 2;
    iVar1 = DAT_1006fab0;
    if (*(char *)(*param_1 + 1) == '\x01') {
      *(uint *)(DAT_1006fab0 + 0x1c) = *(uint *)(DAT_1006fab0 + 0x1c) & 0xf8ffffef;
    }
    else if (*(char *)(*param_1 + 1) == '\x04') {
      *(uint *)(DAT_1006fab0 + 0x2c) = *(uint *)(DAT_1006fab0 + 0x2c) & 0xf8ffffef;
      return 0;
    }
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xf8feffff;
    return 0;
  }
  if ((param_2 == 8) || (param_2 == 0x80)) {
    *param_3 = 4;
    iVar1 = DAT_1006fab0;
    if (*(char *)(*param_1 + 1) == '\x01') {
      *(uint *)(DAT_1006fab0 + 0x1c) = *(uint *)(DAT_1006fab0 + 0x1c) & 0xf8ffffef | 0x3000000;
    }
    else if (*(char *)(*param_1 + 1) == '\x04') {
      uVar2 = *(uint *)(DAT_1006fab0 + 0x2c) & 0xf8ffffef | 0x3000000;
      goto LAB_1006f9e4;
    }
    uVar2 = *(uint *)(iVar1 + 0x90) & 0xf8feffff | 0x3000000;
  }
  else if (param_2 == 1) {
    *param_3 = 3;
    iVar1 = DAT_1006fab0;
    if (*(char *)(*param_1 + 1) == '\x01') {
      *(uint *)(DAT_1006fab0 + 0x1c) = *(uint *)(DAT_1006fab0 + 0x1c) & 0xf8ffffef | 0x2000000;
    }
    else if (*(char *)(*param_1 + 1) == '\x04') {
      uVar2 = *(uint *)(DAT_1006fab0 + 0x2c) & 0xf8ffffef | 0x2000000;
LAB_1006f9e4:
      *(uint *)(DAT_1006fab0 + 0x2c) = uVar2;
      return 0;
    }
    uVar2 = *(uint *)(iVar1 + 0x90) & 0xf8feffff | 0x2000000;
  }
  else {
    if (param_2 != 0x40) {
      return 0xffffffea;
    }
    *param_3 = 3;
    iVar1 = DAT_1006fab0;
    if (*(char *)(*param_1 + 1) == '\x01') {
      *(uint *)(DAT_1006fab0 + 0x1c) = *(uint *)(DAT_1006fab0 + 0x1c) & 0xf8ffffef | 0x2000010;
    }
    else if (*(char *)(*param_1 + 1) == '\x04') {
      uVar2 = *(uint *)(DAT_1006fab0 + 0x2c) & 0xf8ffffef | 0x2000010;
      goto LAB_1006f9e4;
    }
    uVar2 = *(uint *)(iVar1 + 0x90) & 0xf8feffff | 0x2010000;
  }
  *(uint *)(iVar1 + 0x90) = uVar2;
  return 0;
}

