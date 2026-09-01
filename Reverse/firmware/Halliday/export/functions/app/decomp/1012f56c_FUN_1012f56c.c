/* FUN_1012f56c @ 0x1012f56c */

undefined4
FUN_1012f56c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_1012ef56(*param_1,4,0,param_4,param_4);
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

