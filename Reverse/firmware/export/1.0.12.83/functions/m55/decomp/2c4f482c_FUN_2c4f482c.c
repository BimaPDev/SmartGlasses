/* FUN_2c4f482c @ 0x2c4f482c */

uint FUN_2c4f482c(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0x34);
  if (param_4 != 0) {
    if (param_4 == 1) {
      param_3 = param_3 + uVar2;
    }
    else {
      if (param_4 != 2) {
        if (uVar2 <= *(uint *)(param_1 + 0x70)) {
          return uVar2;
        }
        return 0xffffffea;
      }
      uVar1 = *(uint *)(param_2 + 0x2c);
      if (*(int *)(param_2 + 0x30) << 0xe < 0) {
        if (uVar1 < uVar2) {
          uVar1 = uVar2;
        }
        param_3 = uVar1 + param_3;
      }
      else {
        param_3 = uVar1 + param_3;
      }
    }
  }
  if (param_3 <= *(uint *)(param_1 + 0x70)) {
    if (uVar2 == param_3) {
      return uVar2;
    }
    uVar2 = FUN_2c4f2bfc(param_1,param_2);
    if (uVar2 == 0) {
      *(uint *)(param_2 + 0x34) = param_3;
      uVar2 = param_3;
    }
    return uVar2;
  }
  return 0xffffffea;
}

