/* FUN_2c664bbc @ 0x2c664bbc */

int * FUN_2c664bbc(int *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  FUN_2c6648d0(param_1,param_3,param_5,DAT_2c664cc4,param_1,param_2,param_3);
  uVar6 = param_1[1] + (param_5 - param_3);
  if ((int *)*param_1 == param_1 + 2) {
    uVar3 = 3;
  }
  else {
    uVar3 = param_1[2];
  }
  if (uVar3 < uVar6) {
    FUN_2c66499e(param_1,param_2,param_3,param_4,param_5);
    goto LAB_2c664c74;
  }
  iVar2 = (int)((int *)*param_1 + param_2);
  iVar5 = param_1[1] - (param_2 + param_3);
  iVar1 = FUN_2c6648e8(param_1,param_4);
  if (iVar1 == 0) {
    if (param_5 == 0) {
LAB_2c664c3e:
      if ((iVar5 == 0) || (param_3 == param_5)) goto LAB_2c664c74;
LAB_2c664c48:
      FUN_2c66491a(iVar2 + param_5 * 4,iVar2 + param_3 * 4,iVar5);
      if (param_5 <= param_3) goto LAB_2c664c74;
    }
    else {
      if (param_5 <= param_3) {
        FUN_2c66491a(iVar2,param_4,param_5);
        goto LAB_2c664c3e;
      }
      if (iVar5 != 0) goto LAB_2c664c48;
    }
    uVar3 = iVar2 + param_3 * 4;
    iVar1 = param_5 * 4;
    if (param_4 + param_5 * 4 <= uVar3) {
      FUN_2c66491a(iVar2,param_4,param_5);
      goto LAB_2c664c74;
    }
    if (param_4 < uVar3) {
      iVar4 = uVar3 - param_4;
      iVar5 = iVar4 >> 2;
      FUN_2c66491a(iVar2,param_4,iVar5);
      param_5 = param_5 - iVar5;
      param_4 = iVar2 + iVar1;
      iVar2 = iVar2 + iVar4;
    }
    else {
      param_4 = param_4 + (param_5 - param_3) * 4;
    }
  }
  else {
    if ((iVar5 != 0) && (param_3 != param_5)) {
      FUN_2c66491a(iVar2 + param_5 * 4,iVar2 + param_3 * 4,iVar5);
    }
    if (param_5 == 0) goto LAB_2c664c74;
  }
  FUN_2c664902(iVar2,param_4,param_5);
LAB_2c664c74:
  FUN_2c664850(param_1,uVar6);
  return param_1;
}

