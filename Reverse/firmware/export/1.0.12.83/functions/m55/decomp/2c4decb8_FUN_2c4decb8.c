/* FUN_2c4decb8 @ 0x2c4decb8 */

int FUN_2c4decb8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c4df506((int)param_1 + *(int *)(*param_1 + -0xc) + 0x10,4);
  if ((iVar1 != 0) && (param_3 == 0)) {
    return iVar1;
  }
  if (param_2 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0x36,1);
    FUN_2c4e0504(DAT_2c4dedc4,0,0,0,DAT_2c4dedcc,0x36,DAT_2c4dedc8,0x1300,DAT_2c4dedc0);
    return 0;
  }
  if (param_1[8] == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0x37,1);
    uVar2 = 0x37;
    uVar3 = DAT_2c4dedd0;
LAB_2c4ded3c:
    iVar1 = 0;
    FUN_2c4e0504(DAT_2c4dedc4,0,0,0,DAT_2c4dedcc,uVar2,DAT_2c4dedc8,0x1300,uVar3);
  }
  else {
    param_2 = param_1[8] * param_2;
    if (param_1[4] == 0) {
LAB_2c4ded6e:
      param_2 = param_2 + 4;
      iVar1 = FUN_2c4de67a(*(int *)(*param_1 + -0xc) + (int)param_1,param_2);
      param_1[4] = iVar1;
      if (iVar1 == 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0x3d,1);
        uVar2 = 0x3d;
        uVar3 = DAT_2c4dedd4;
        goto LAB_2c4ded3c;
      }
      param_1[5] = param_2;
      FUN_2c674268(param_1 + 0xc,0,0x1c);
      param_1[10] = iVar1;
      param_1[0xb] = param_2;
    }
    else if (param_1[5] != param_2) {
      FUN_2c4de692(*(int *)(*param_1 + -0xc) + (int)param_1,param_1 + 4);
      goto LAB_2c4ded6e;
    }
    iVar1 = 1;
  }
  return iVar1;
}

