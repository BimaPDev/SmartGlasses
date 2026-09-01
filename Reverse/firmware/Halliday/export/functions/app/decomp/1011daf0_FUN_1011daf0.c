/* FUN_1011daf0 @ 0x1011daf0 */

undefined4 FUN_1011daf0(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (((param_1 == 0) || (param_3 == 0)) || (0x7ffff < param_2 - 1)) {
    uVar1 = 0;
  }
  else if (*(int *)(param_3 + 0x130) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_3 + 0x130) = *(int *)(param_3 + 0x130) + -1;
    iVar3 = param_3 + 0x110;
    do {
      FUN_1011d87e(param_3,param_3 + 0xf0,0x20);
      FUN_1011d8e6(param_3);
      FUN_1011d900(param_3,iVar3,0x20);
      FUN_1011d90c(iVar3,0x20,param_3);
      uVar2 = param_2;
      if (0x1f < param_2) {
        uVar2 = 0x20;
      }
      FUN_1011c59a(param_1,uVar2,iVar3,uVar2);
      if (param_2 < 0x20) {
        param_2 = 0x20;
      }
      param_2 = param_2 - 0x20;
      param_1 = param_1 + uVar2;
    } while (param_2 != 0);
    FUN_1011d95c(param_3,0,0,0,0);
    uVar1 = 1;
  }
  return uVar1;
}

