/* FUN_1006970c @ 0x1006970c */

int FUN_1006970c(int param_1,int param_2,uint param_3,code *UNRECOVERED_JUMPTABLE,undefined4 param_5
                )

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = DAT_100697a8;
  piVar1 = DAT_100697a4;
  if (*DAT_100697a4 == 0) {
    iVar3 = -0x13;
  }
  else {
    uVar5 = 0x1000;
    param_1 = DAT_100697a4[0xb] + param_1;
    iVar6 = param_2;
    for (; param_3 != 0; param_3 = param_3 - uVar5) {
      if (param_3 < 0x1000) {
        uVar5 = param_3;
      }
      pcVar4 = (code *)**(undefined4 **)(*piVar1 + 8);
      iVar3 = (*pcVar4)(*piVar1,pcVar4,param_1,param_1 >> 0x1f,uVar2);
      if (iVar3 != 0) goto LAB_10069738;
      if (param_2 != 0) {
        FUN_1011ea40(iVar6,uVar2,uVar5);
      }
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) &&
         (iVar3 = (*UNRECOVERED_JUMPTABLE)(param_5,uVar2,uVar5), iVar3 != 0)) goto LAB_1006978c;
      iVar6 = iVar6 + uVar5;
      param_1 = param_1 + uVar5;
    }
    iVar3 = 0;
LAB_10069738:
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_1006978c:
                    /* WARNING: Could not recover jumptable at 0x1006979a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (*UNRECOVERED_JUMPTABLE)(param_5,0);
      return iVar3;
    }
  }
  return iVar3;
}

