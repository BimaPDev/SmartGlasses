/* FUN_1009f30c @ 0x1009f30c */

int FUN_1009f30c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_101132fc(DAT_1009f340,4,param_1,param_4,0xffffffff,0xffffffff,param_3);
  if (iVar1 == 0) {
    FUN_1011a060(DAT_1009f340);
  }
  else {
    FUN_1011ea48(iVar1,0,param_1);
  }
  return iVar1;
}

