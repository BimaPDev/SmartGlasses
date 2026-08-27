/* FUN_2c4de61e @ 0x2c4de61e */

void FUN_2c4de61e(int param_1,char *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)param_4 >> 0x1f;
  do {
    param_2 = param_2 + 1;
    uVar2 = (uint)*param_2;
    if (uVar2 == 0) break;
    param_3 = param_3 + 8;
    param_4 = param_4 | uVar2;
    uVar1 = uVar1 | uVar2 | (int)&stack0xffffffec * 0x100;
  } while (param_3 != 0x40);
  *(uint *)(param_1 + 8) = param_4;
  *(uint *)(param_1 + 0xc) = uVar1;
  return;
}

