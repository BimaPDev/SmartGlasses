/* FUN_1406adcc @ 0x1406adcc */

undefined4
FUN_1406adcc(undefined4 param_1,int param_2,char *param_3,undefined4 param_4,short param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  *(undefined2 *)(param_2 + 0x24) = *(undefined2 *)(param_3 + 2);
  if (*param_3 == '\f') {
    uVar3 = *(undefined2 *)(param_3 + 4);
  }
  else {
    uVar3 = 0;
  }
  *(undefined2 *)(param_2 + 0x26) = uVar3;
  *(short *)(param_2 + 0x2a) = param_5 + -1;
  *(char *)(param_2 + 0x2c) = *param_3;
  FUN_1406d250();
  iVar1 = FUN_1405be00(param_1,*param_3,*(undefined2 *)(param_2 + 0x24));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x12;
  }
  return uVar2;
}

