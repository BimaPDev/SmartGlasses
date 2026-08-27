/* FUN_140018f8 @ 0x140018f8 */

void FUN_140018f8(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 8) {
    uVar1 = 0;
  }
  else if (param_2 == 0x10) {
    uVar1 = 0x2000;
  }
  else if (param_2 == 0x40) {
    uVar1 = 0x6000;
  }
  else {
    uVar1 = 0x4000;
  }
  *(uint *)(DAT_14001924 + 0x38) = *(uint *)(DAT_14001924 + 0x38) & 0xffff9fff | uVar1;
  return;
}

