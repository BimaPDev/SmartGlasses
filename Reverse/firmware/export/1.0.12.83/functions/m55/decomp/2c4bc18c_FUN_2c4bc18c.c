/* FUN_2c4bc18c @ 0x2c4bc18c */

ulonglong FUN_2c4bc18c(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[0xd];
  if ((uVar3 & 0x4b) == 0) {
    return CONCAT44(param_2,uVar3) & 0xffffffff0000004b;
  }
  uVar2 = param_1[0x20];
  uVar1 = uVar2 << 0x16;
  if ((int)uVar1 < 0) {
    *param_1 = *param_1 | 0x20;
    param_1[1] = param_1[1] & 0xfffff7ff;
    param_1[1] = param_1[1] & 0xfffffbff;
    uVar1 = param_1[0x15];
  }
  if ((uVar3 & 0xb) != 0) {
    uVar2 = uVar2 | 0x20000000;
  }
  return CONCAT44(uVar1,uVar2);
}

