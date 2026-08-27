/* FUN_2c671064 @ 0x2c671064 */

int FUN_2c671064(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      FUN_2c669b3c();
      iVar1 = 0;
    }
    else {
      uVar2 = FUN_2c671b38();
      if (((uVar2 < param_3) || (iVar1 = param_2, param_3 <= uVar2 >> 1)) &&
         (iVar1 = FUN_2c669c14(param_1,param_3), iVar1 != 0)) {
        if (uVar2 <= param_3) {
          param_3 = uVar2;
        }
        FUN_2c674668(iVar1,param_2,param_3);
        FUN_2c669b3c(param_1,param_2);
      }
    }
    return iVar1;
  }
  iVar1 = FUN_2c669c14(param_1,param_3);
  return iVar1;
}

