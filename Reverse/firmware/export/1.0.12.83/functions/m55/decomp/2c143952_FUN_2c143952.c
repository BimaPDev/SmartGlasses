/* FUN_2c143952 @ 0x2c143952 */

int FUN_2c143952(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      FUN_2c142530();
      iVar1 = 0;
    }
    else {
      uVar2 = FUN_2c1439b0();
      if (((uVar2 < param_3) || (iVar1 = param_2, param_3 <= uVar2 >> 1)) &&
         (iVar1 = FUN_2c142608(param_1,param_3), iVar1 != 0)) {
        if (uVar2 <= param_3) {
          param_3 = uVar2;
        }
        FUN_2c13e7f0(iVar1,param_2,param_3);
        FUN_2c142530(param_1,param_2);
      }
    }
    return iVar1;
  }
  iVar1 = FUN_2c142608(param_1,param_3);
  return iVar1;
}

