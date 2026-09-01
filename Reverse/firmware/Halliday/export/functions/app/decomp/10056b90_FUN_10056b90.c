/* FUN_10056b90 @ 0x10056b90 */

undefined4 FUN_10056b90(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = *DAT_10056c04;
    break;
  case 1:
    uVar1 = (*DAT_10056c08 & 3) >> 1;
    break;
  case 2:
    uVar1 = (*DAT_10056c08 & 7) >> 2;
    break;
  case 3:
    uVar1 = *DAT_10056c08 & 1;
    break;
  case 4:
    uVar1 = (*DAT_10056c08 & 0x7f) >> 3;
    break;
  case 5:
    uVar1 = (*DAT_10056c08 & 0xffff) >> 8;
    break;
  case 6:
    uVar1 = (*DAT_10056c08 & 0xfffffff) >> 0x1b;
    break;
  case 7:
    uVar1 = (*DAT_10056c08 & 0x1fffffff) >> 0x1c;
    break;
  case 8:
    uVar1 = (*DAT_10056c08 & 0x7ffffff) >> 0x1a;
    break;
  default:
    return 0xffffffff;
  }
  *param_2 = uVar1;
  return 0;
}

