/* FUN_2c607654 @ 0x2c607654 */

void FUN_2c607654(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = FUN_2c600c38();
  if (param_4 == 0) {
    while( true ) {
      if (iVar1 == 2) {
        FUN_2c606e98(param_1,param_2,0);
      }
      if ((param_3 == 0) || (param_1 = FUN_2c6041d4(param_1), param_1 == 0)) break;
      iVar1 = FUN_2c600c38();
    }
  }
  else {
    if (param_3 != 0) {
      uVar2 = FUN_2c6041d4(param_1);
      FUN_2c607654(uVar2,param_2,1);
    }
    if (iVar1 == 2) {
      FUN_2c606e98(param_1,param_2,1);
      return;
    }
  }
  return;
}

