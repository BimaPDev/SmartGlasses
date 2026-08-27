/* FUN_2c62e528 @ 0x2c62e528 */

int FUN_2c62e528(undefined4 param_1,int param_2,uint param_3,int param_4,code *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  do {
    while( true ) {
      if (param_3 == 0) {
        return 0;
      }
      uVar2 = param_3 >> 1;
      iVar3 = param_4 * uVar2 + param_2;
      iVar1 = (*param_5)(param_1,iVar3);
      if (iVar1 < 1) break;
      param_2 = iVar3 + param_4;
      param_3 = uVar2 - (~param_3 & 1);
    }
    param_3 = uVar2;
  } while (iVar1 != 0);
  return iVar3;
}

