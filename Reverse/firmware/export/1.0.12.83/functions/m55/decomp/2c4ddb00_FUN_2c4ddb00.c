/* FUN_2c4ddb00 @ 0x2c4ddb00 */

int FUN_2c4ddb00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c4df506((int)param_1 + *(int *)(*param_1 + -0xc) + 0x10,8);
  if ((iVar1 != 0) && (param_3 == 0)) {
    return iVar1;
  }
  if (param_2 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xbb89,0x34,1);
    FUN_2c4e0504(DAT_2c4ddc14,0,0,0,DAT_2c4ddc1c,0x34,DAT_2c4ddc18,0x1300,DAT_2c4ddc10);
    return 0;
  }
  if (param_1[8] == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xbb89,0x35,1);
    uVar2 = 0x35;
    uVar3 = DAT_2c4ddc20;
LAB_2c4ddb84:
    iVar1 = 0;
    FUN_2c4e0504(DAT_2c4ddc14,0,0,0,DAT_2c4ddc1c,uVar2,DAT_2c4ddc18,0x1300,uVar3);
  }
  else {
    param_2 = param_1[8] * param_2;
    if (param_1[4] == 0) {
LAB_2c4ddbb6:
      if ((char)param_1[0x29] != '\0') {
        param_2 = param_2 + 4;
      }
      iVar1 = FUN_2c4de67a(*(int *)(*param_1 + -0xc) + (int)param_1,param_2);
      param_1[4] = iVar1;
      if (iVar1 == 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xbb89,0x3b,1);
        uVar2 = 0x3b;
        uVar3 = DAT_2c4ddc24;
        goto LAB_2c4ddb84;
      }
      param_1[5] = param_2;
      FUN_2c674268(param_1 + 0xc,0,0x1c);
      param_1[10] = iVar1;
      param_1[0xb] = param_2;
    }
    else if (param_1[5] != param_2) {
      FUN_2c4de692(*(int *)(*param_1 + -0xc) + (int)param_1,param_1 + 4);
      goto LAB_2c4ddbb6;
    }
    iVar1 = 1;
  }
  return iVar1;
}

