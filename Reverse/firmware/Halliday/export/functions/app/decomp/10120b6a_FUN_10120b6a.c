/* FUN_10120b6a @ 0x10120b6a */

void FUN_10120b6a(int param_1,uint param_2,int param_3,uint *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_5 = 0;
  *param_6 = -1;
  param_6[1] = 0;
  uVar2 = (uint)*(byte *)(**(int **)(param_1 + 0xc) + 0xb);
  uVar4 = uVar2 * *(byte *)(**(int **)(param_1 + 0xc) + 10);
  if (uVar4 != 0) {
    if (uVar4 != 0x20) {
      uVar2 = 1;
    }
    uVar1 = param_2 - uVar4 * (param_2 / uVar4);
    *param_4 = param_2 / uVar4;
    if (uVar4 != 0x20) {
      uVar2 = (uVar2 << (uVar4 & 0xff)) - 1;
    }
    else {
      uVar2 = 0xffffffff;
    }
    uVar3 = uVar1 + param_3;
    uVar1 = uVar2 << (uVar1 & 0xff);
    if (uVar4 < uVar3) {
      param_4[1] = uVar1 & uVar2;
      while (uVar3 = uVar3 - uVar4, uVar4 <= uVar3) {
        *param_5 = *param_5 + 1;
      }
      if (uVar3 != 0) {
        uVar1 = *param_4;
        param_6[1] = uVar2 >> (uVar4 - uVar3 & 0xff);
        *param_6 = uVar1 + 1 + *param_5;
      }
    }
    else {
      param_4[1] = uVar2 >> (uVar4 - uVar3 & 0xff) & uVar1;
    }
  }
  return;
}

