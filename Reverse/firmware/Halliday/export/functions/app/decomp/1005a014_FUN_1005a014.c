/* FUN_1005a014 @ 0x1005a014 */

void FUN_1005a014(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  
  piVar4 = param_2;
  if (*param_2 == 0) {
    sVar2 = 0;
  }
  else {
    sVar2 = FUN_1011ea10();
  }
  uVar1 = DAT_1005a054;
  sVar3 = FUN_1011ea10(DAT_1005a054);
  FUN_10059990(param_1,0,DAT_1005a058,*param_2,uVar1,piVar4,param_3);
  FUN_10059e2c(param_1,param_2[1],sVar2 + sVar3);
  return;
}

