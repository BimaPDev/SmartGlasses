/* FUN_1005ce1c @ 0x1005ce1c */

int FUN_1005ce1c(undefined4 param_1,char param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  piVar1 = (int *)FUN_1005cb80();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar8 = FUN_1005df28(param_1,param_2 + '\n');
  iVar2 = (int)uVar8;
  if (iVar2 == 0) {
    return 0;
  }
  FUN_10113cfc(DAT_1005ced4,(int)((ulonglong)uVar8 >> 0x20),0xffffffff,0xffffffff);
  iVar6 = *(int *)(iVar2 + 0xc);
  FUN_10119dc2(DAT_1005ced8,iVar6,param_3);
  iVar3 = FUN_1005cc5c(piVar1,param_4,iVar6,0x20);
  if (iVar3 == 0) {
    iVar3 = FUN_1011ea30(param_4,DAT_1005cee0,8);
    uVar4 = DAT_1005cee4;
    if (iVar3 == 0) {
      iVar7 = *(int *)(param_4 + 0xc);
      for (iVar3 = 0; iVar6 = iVar6 + 0x20, iVar3 < iVar7; iVar3 = iVar3 + 1) {
        FUN_1005cc5c(piVar1,param_4,iVar6,0x20);
        iVar5 = FUN_10118ac4(param_3,param_4,0xc);
        if (iVar5 == 0) goto LAB_1005ce7e;
      }
      goto LAB_1005ce7c;
    }
  }
  else {
    iVar6 = *piVar1;
    uVar4 = DAT_1005cedc;
  }
  FUN_10119dc2(uVar4,iVar6);
LAB_1005ce7c:
  param_4 = 0;
LAB_1005ce7e:
  FUN_10113e2c(DAT_1005ced4);
  if (param_4 != 0) {
    *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + *(int *)(iVar2 + 0xc);
    return param_4;
  }
  return 0;
}

