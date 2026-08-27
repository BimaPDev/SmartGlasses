/* FUN_140d1c2c @ 0x140d1c2c */

int * FUN_140d1c2c(int *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  FUN_140d1900(param_1,param_3,param_5,DAT_140d1d20,param_1,param_2,param_3);
  uVar5 = param_1[1] + (param_5 - param_3);
  if ((int *)*param_1 == param_1 + 2) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = param_1[2];
  }
  if (uVar2 < uVar5) {
    FUN_140d19ca(param_1,param_2,param_3,param_4,param_5);
    goto LAB_140d1cd2;
  }
  iVar3 = *param_1 + param_2;
  iVar4 = param_1[1] - (param_2 + param_3);
  iVar1 = FUN_140d1918(param_1,param_4);
  if (iVar1 == 0) {
    if (param_5 == 0) {
LAB_140d1ca8:
      if ((iVar4 == 0) || (param_3 == param_5)) goto LAB_140d1cd2;
LAB_140d1cb2:
      FUN_140d1948(iVar3 + param_5,iVar3 + param_3,iVar4);
      if (param_5 <= param_3) goto LAB_140d1cd2;
    }
    else {
      if (param_5 <= param_3) {
        FUN_140d1948(iVar3,param_4,param_5);
        goto LAB_140d1ca8;
      }
      if (iVar4 != 0) goto LAB_140d1cb2;
    }
    uVar2 = param_3 + iVar3;
    if (param_4 + param_5 <= uVar2) {
      FUN_140d1948(iVar3,param_4,param_5);
      goto LAB_140d1cd2;
    }
    if (param_4 < uVar2) {
      iVar1 = uVar2 - param_4;
      FUN_140d1948(iVar3,param_4,iVar1);
      param_4 = iVar3 + param_5;
      iVar3 = iVar3 + iVar1;
      param_5 = param_5 - iVar1;
    }
    else {
      param_4 = param_4 + (param_5 - param_3);
    }
  }
  else {
    if ((iVar4 != 0) && (param_3 != param_5)) {
      FUN_140d1948(iVar3 + param_5,iVar3 + param_3,iVar4);
    }
    if (param_5 == 0) goto LAB_140d1cd2;
  }
  FUN_140d1930(iVar3,param_4,param_5);
LAB_140d1cd2:
  param_1[1] = uVar5;
  *(undefined1 *)(*param_1 + uVar5) = 0;
  return param_1;
}

