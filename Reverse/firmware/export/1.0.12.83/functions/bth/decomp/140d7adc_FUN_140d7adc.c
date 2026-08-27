/* FUN_140d7adc @ 0x140d7adc */

int * FUN_140d7adc(int *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  FUN_140d77f0(param_1,param_3,param_5,DAT_140d7be4,param_1,param_2,param_3);
  uVar6 = param_1[1] + (param_5 - param_3);
  if ((int *)*param_1 == param_1 + 2) {
    uVar3 = 3;
  }
  else {
    uVar3 = param_1[2];
  }
  if (uVar3 < uVar6) {
    FUN_140d78be(param_1,param_2,param_3,param_4,param_5);
    goto LAB_140d7b94;
  }
  iVar2 = (int)((int *)*param_1 + param_2);
  iVar5 = param_1[1] - (param_2 + param_3);
  iVar1 = FUN_140d7808(param_1,param_4);
  if (iVar1 == 0) {
    if (param_5 == 0) {
LAB_140d7b5e:
      if ((iVar5 == 0) || (param_3 == param_5)) goto LAB_140d7b94;
LAB_140d7b68:
      FUN_140d783a(iVar2 + param_5 * 4,iVar2 + param_3 * 4,iVar5);
      if (param_5 <= param_3) goto LAB_140d7b94;
    }
    else {
      if (param_5 <= param_3) {
        FUN_140d783a(iVar2,param_4,param_5);
        goto LAB_140d7b5e;
      }
      if (iVar5 != 0) goto LAB_140d7b68;
    }
    uVar3 = iVar2 + param_3 * 4;
    iVar1 = param_5 * 4;
    if (param_4 + param_5 * 4 <= uVar3) {
      FUN_140d783a(iVar2,param_4,param_5);
      goto LAB_140d7b94;
    }
    if (param_4 < uVar3) {
      iVar4 = uVar3 - param_4;
      iVar5 = iVar4 >> 2;
      FUN_140d783a(iVar2,param_4,iVar5);
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
      FUN_140d783a(iVar2 + param_5 * 4,iVar2 + param_3 * 4,iVar5);
    }
    if (param_5 == 0) goto LAB_140d7b94;
  }
  FUN_140d7822(iVar2,param_4,param_5);
LAB_140d7b94:
  FUN_140d7770(param_1,uVar6);
  return param_1;
}

