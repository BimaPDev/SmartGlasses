/* FUN_2c6684dc @ 0x2c6684dc */

int FUN_2c6684dc(undefined4 param_1,int param_2,uint param_3,int param_4,code *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar4 = 0;
    do {
      uVar2 = uVar4 + param_3 >> 1;
      iVar3 = uVar2 * param_4 + param_2;
      iVar1 = (*param_5)(param_1,iVar3);
      if (-1 < iVar1) {
        if (iVar1 == 0) {
          return iVar3;
        }
        uVar4 = uVar2 + 1;
        uVar2 = param_3;
      }
      param_3 = uVar2;
    } while (uVar4 < uVar2);
  }
  return 0;
}

