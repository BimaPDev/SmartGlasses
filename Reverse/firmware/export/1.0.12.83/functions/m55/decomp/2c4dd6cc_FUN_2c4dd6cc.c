/* FUN_2c4dd6cc @ 0x2c4dd6cc */

void FUN_2c4dd6cc(undefined4 param_1,uint *param_2,uint param_3,int *param_4)

{
  int iVar1;
  
  if (((char)param_4[9] != '\0') && (*param_4 != 0)) {
    iVar1 = FUN_2c66b450(*param_2,param_3 - *param_2,DAT_2c4dd6f4,*param_4,param_4);
    if (param_3 < iVar1 + *param_2) {
      *param_2 = param_3;
    }
    else {
      *param_2 = iVar1 + *param_2;
    }
  }
  return;
}

