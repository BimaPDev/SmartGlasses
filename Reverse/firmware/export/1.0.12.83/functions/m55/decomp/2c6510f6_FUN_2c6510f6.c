/* FUN_2c6510f6 @ 0x2c6510f6 */

void FUN_2c6510f6(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uStack_14;
  undefined4 uStack_10;
  
  iVar1 = *param_1;
  if ((param_2 != *(uint *)(iVar1 + -8)) || (0 < *(int *)(iVar1 + -4))) {
    uVar2 = *(uint *)(iVar1 + -0xc);
    if (param_2 < uVar2) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_2 - uVar2;
    }
    uStack_14 = param_2;
    uStack_10 = param_3;
    iVar1 = FUN_2c6510c4((uint *)(iVar1 + -0xc),&uStack_14,iVar3,param_4,param_1);
    FUN_2c650e44(*param_1 + -0xc,&uStack_14);
    *param_1 = iVar1;
  }
  return;
}

