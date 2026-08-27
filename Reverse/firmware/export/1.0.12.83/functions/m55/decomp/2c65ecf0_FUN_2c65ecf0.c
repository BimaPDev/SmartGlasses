/* FUN_2c65ecf0 @ 0x2c65ecf0 */

int * FUN_2c65ecf0(int *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  FUN_2c65e978(param_1,param_3,param_5,DAT_2c65ede4,param_1,param_2,param_3);
  uVar5 = param_1[1] + (param_5 - param_3);
  if ((int *)*param_1 == param_1 + 2) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = param_1[2];
  }
  if (uVar2 < uVar5) {
    FUN_2c65ea8e(param_1,param_2,param_3,param_4,param_5);
    goto LAB_2c65ed96;
  }
  iVar3 = *param_1 + param_2;
  iVar4 = param_1[1] - (param_2 + param_3);
  iVar1 = FUN_2c65e990(param_1,param_4);
  if (iVar1 == 0) {
    if (param_5 == 0) {
LAB_2c65ed6c:
      if ((iVar4 == 0) || (param_3 == param_5)) goto LAB_2c65ed96;
LAB_2c65ed76:
      FUN_2c65e9c0(iVar3 + param_5,iVar3 + param_3,iVar4);
      if (param_5 <= param_3) goto LAB_2c65ed96;
    }
    else {
      if (param_5 <= param_3) {
        FUN_2c65e9c0(iVar3,param_4,param_5);
        goto LAB_2c65ed6c;
      }
      if (iVar4 != 0) goto LAB_2c65ed76;
    }
    uVar2 = param_3 + iVar3;
    if (param_4 + param_5 <= uVar2) {
      FUN_2c65e9c0(iVar3,param_4,param_5);
      goto LAB_2c65ed96;
    }
    if (param_4 < uVar2) {
      iVar1 = uVar2 - param_4;
      FUN_2c65e9c0(iVar3,param_4,iVar1);
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
      FUN_2c65e9c0(iVar3 + param_5,iVar3 + param_3,iVar4);
    }
    if (param_5 == 0) goto LAB_2c65ed96;
  }
  FUN_2c65e9a8(iVar3,param_4,param_5);
LAB_2c65ed96:
  param_1[1] = uVar5;
  *(undefined1 *)(*param_1 + uVar5) = 0;
  return param_1;
}

