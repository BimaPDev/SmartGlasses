/* FUN_10056ae4 @ 0x10056ae4 */

undefined4 FUN_10056ae4(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0:
    *DAT_10056b88 = param_2;
    return 0;
  case 1:
    uVar1 = *DAT_10056b8c & 0xfffffffd | (uint)(param_2 != 0) << 1;
    break;
  case 2:
    uVar1 = *DAT_10056b8c & 0xfffffffb | (uint)(param_2 != 0) << 2;
    break;
  case 3:
    uVar1 = *DAT_10056b8c & 0xfffffffe;
    if (param_2 != 0) {
      uVar1 = uVar1 | 1;
    }
    break;
  case 4:
    uVar1 = *DAT_10056b8c & 0xffffff87 | param_2 << 3;
    break;
  case 5:
    uVar1 = *DAT_10056b8c & 0xffff00ff | param_2 << 8;
    break;
  case 6:
    uVar1 = *DAT_10056b8c & 0xf7ffffff | param_2 << 0x1b;
    break;
  case 7:
    uVar1 = *DAT_10056b8c & 0xefffffff | param_2 << 0x1c;
    break;
  case 8:
    uVar1 = *DAT_10056b8c & 0xfbffffff | param_2 << 0x1a;
    break;
  default:
    return 0xffffffff;
  }
  *DAT_10056b8c = uVar1;
  return 0;
}

