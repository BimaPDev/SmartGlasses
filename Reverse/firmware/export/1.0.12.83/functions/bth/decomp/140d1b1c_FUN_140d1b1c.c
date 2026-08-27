/* FUN_140d1b1c @ 0x140d1b1c */

void FUN_140d1b1c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  uVar2 = iVar3 + 1;
  if ((int *)*param_1 == param_1 + 2) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = param_1[2];
  }
  if (uVar1 < uVar2) {
    FUN_140d19ca(param_1,iVar3,0,0,1,param_2,param_3);
  }
  *(char *)(*param_1 + iVar3) = (char)param_2;
  param_1[1] = uVar2;
  *(undefined1 *)(*param_1 + uVar2) = 0;
  return;
}

