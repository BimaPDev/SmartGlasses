/* FUN_2c4e07b4 @ 0x2c4e07b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4e07b4(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c4e0878;
  iStack_3c = *param_2 + param_2[2];
  iStack_38 = param_2[3];
  iStack_34 = param_2[4];
  iStack_2c = *param_3 + param_3[2] + param_3[3];
  iStack_28 = (param_3[1] - param_3[2]) - param_3[3];
  iStack_24 = param_3[4];
  param_3[6] = param_2[6];
  param_3[7] = param_2[7];
  param_3[8] = (int)param_2;
  piStack_30 = param_2;
  piStack_20 = param_3;
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,&iStack_3c);
  if (iVar1 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xf7d1,0x1c,1);
    FUN_2c4e0504(_LAB_2c4e0880,0,0,0,_LAB_2c4e0888,0x1c,_LAB_2c4e0884,0x1300,_LAB_2c4e087c);
  }
  else {
    param_2[3] = param_2[3] - iStack_38;
    param_2[2] = param_2[2] + iStack_38;
    param_2[4] = iStack_34;
    param_3[3] = param_3[3] + iStack_28;
    param_3[4] = iStack_24;
  }
  if (*_LAB_2c4e0878 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar1;
}

