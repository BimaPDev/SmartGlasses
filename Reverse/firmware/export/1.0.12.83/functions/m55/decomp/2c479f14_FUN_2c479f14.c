/* FUN_2c479f14 @ 0x2c479f14 */

void FUN_2c479f14(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_2c479f5c;
  piVar1 = DAT_2c479f58;
  if (param_1 == 1) {
    iVar3 = *DAT_2c479f5c;
    if (iVar3 == 0) {
      iVar3 = FUN_2c64418c(DAT_2c479f60,0,0);
      *piVar2 = iVar3;
    }
  }
  else {
    if (param_1 != 2) {
      return;
    }
    iVar3 = *DAT_2c479f58;
    if (iVar3 == 0) {
      iVar3 = FUN_2c64418c(DAT_2c479f64,0,0);
      *piVar1 = iVar3;
    }
  }
  FUN_2c6448b4(iVar3,param_2);
  return;
}

