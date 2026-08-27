/* FUN_140d38ec @ 0x140d38ec */

void FUN_140d38ec(int param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  param_5 = param_5 - param_6;
  uVar2 = *(uint *)(param_1 + 0xc) & 0xb0;
  if (uVar2 == 0x20) {
    if (param_6 != 0) {
      FUN_140df878(param_3,param_4,param_6);
    }
    FUN_140d2504(param_3 + param_6,param_5,param_2);
    return;
  }
  if (uVar2 == 0x10) {
    uVar1 = FUN_140d2a04(param_1 + 0x6c);
    iVar4 = FUN_140c9d5e(uVar1,0x2d);
    if ((iVar4 == *param_4) || (iVar4 = FUN_140c9d5e(uVar1,0x2b), iVar4 == *param_4)) {
      iVar4 = 1;
      piVar3 = param_3 + 1;
      *param_3 = *param_4;
      goto LAB_140d392a;
    }
    iVar4 = FUN_140c9d5e(uVar1,0x30);
    if (((iVar4 == *param_4) && (1 < param_6)) &&
       ((iVar4 = FUN_140c9d5e(uVar1,0x78), iVar4 == param_4[1] ||
        (iVar4 = FUN_140c9d5e(uVar1,0x58), iVar4 == param_4[1])))) {
      piVar3 = param_3 + 2;
      iVar4 = 2;
      *param_3 = *param_4;
      param_3[1] = param_4[1];
      goto LAB_140d392a;
    }
  }
  iVar4 = 0;
  piVar3 = param_3;
LAB_140d392a:
  FUN_140d2504(piVar3,param_5,param_2);
  if (param_6 - iVar4 == 0) {
    return;
  }
  FUN_140df878(piVar3 + param_5,param_4 + iVar4,param_6 - iVar4,param_4);
  return;
}

