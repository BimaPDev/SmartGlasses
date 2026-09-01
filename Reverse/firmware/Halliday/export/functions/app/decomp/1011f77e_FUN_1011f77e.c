/* FUN_1011f77e @ 0x1011f77e */

void FUN_1011f77e(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    if (param_2 < 0) {
      param_2 = param_2 + 0xf;
    }
    uVar1 = param_2 >> 4;
    uVar3 = uVar1;
    if ((int)uVar1 < 0) {
      uVar3 = uVar1 + 0x1f;
    }
    uVar2 = uVar1 & 0x1f;
    if (-1 < (int)-uVar1) {
      uVar2 = -(-uVar1 & 0x1f);
    }
    uVar4 = *(uint *)(param_1 + ((int)uVar3 >> 5) * 4);
    uVar1 = 1 << (uVar2 & 0xff);
    if (param_3 == 0) {
      uVar4 = uVar4 & ~uVar1;
    }
    else {
      uVar4 = uVar4 | uVar1;
    }
    *(uint *)(param_1 + ((int)uVar3 >> 5) * 4) = uVar4;
  }
  return;
}

