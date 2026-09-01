/* FUN_1011b81c @ 0x1011b81c */

undefined4 FUN_1011b81c(undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_1005c4e4();
  if ((piVar1 == (int *)0x0) || ((char)piVar1[3] != '\0')) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar4 = *piVar1;
    iVar3 = piVar1[1];
    if (*(char *)((int)piVar1 + 0xd) != -1) {
      iVar4 = iVar4 + 0x12000000;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar4;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar3;
    }
    FUN_1011b72e();
    uVar2 = 0;
  }
  return uVar2;
}

