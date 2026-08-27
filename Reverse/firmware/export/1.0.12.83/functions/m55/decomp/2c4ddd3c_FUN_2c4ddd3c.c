/* FUN_2c4ddd3c @ 0x2c4ddd3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ddd3c(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((int *)*param_3 == (int *)0x0) {
    if (param_1[4] == 0) {
      iVar1 = FUN_2c4ddb00(param_1,1);
      if (iVar1 == 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xbb89,0x62,1);
        uVar2 = 0x62;
        uVar4 = _LAB_2c4ddebc;
      }
      else {
        if (param_1[4] != 0) goto LAB_2c4dddc0;
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xbb89,99,1);
        uVar2 = 99;
        uVar4 = _LAB_2c4ddecc;
      }
    }
    else {
LAB_2c4dddc0:
      *param_3 = (int)(param_1 + 10);
      if (param_1[10] != 0) {
        param_1[0xe] = 0;
        goto LAB_2c4dddf4;
      }
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xbb89,0x66,1);
      uVar2 = 0x66;
      uVar4 = _LAB_2c4dded0;
    }
LAB_2c4ddd7e:
    uVar3 = 0;
    FUN_2c4e0504(_LAB_2c4ddec8,0,0,0,_LAB_2c4ddec4,uVar2,_LAB_2c4ddec0,0x1300,uVar4);
  }
  else {
    if (*(int *)*param_3 == 0) {
      if (param_1[4] == 0) {
        iVar1 = FUN_2c4ddb00(param_1,1);
        if (iVar1 == 0) {
          FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xbb89,0x6d,1);
          uVar2 = 0x6d;
          uVar4 = _LAB_2c4ddebc;
        }
        else {
          if (param_1[4] != 0) goto LAB_2c4dde82;
          FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xbb89,0x6e,1);
          uVar2 = 0x6e;
          uVar4 = _LAB_2c4ddecc;
        }
        goto LAB_2c4ddd7e;
      }
LAB_2c4dde82:
      *(int *)*param_3 = param_1[10];
      *(int *)(*param_3 + 4) = param_1[0xb];
    }
LAB_2c4dddf4:
    if (*(int *)(*param_3 + 0xc) == 0) {
      *(undefined4 *)(*param_3 + 8) = 0;
    }
    iVar1 = *param_3;
    if ((((*(int *)(iVar1 + 0xc) == 0) || (param_1[3] == 0)) ||
        ((*(uint *)(iVar1 + 0x10) & 0x100) != 0)) ||
       (FUN_2c4ddcac(param_1,iVar1,0), *(int *)(*param_3 + 0xc) == 0)) {
      if ((char)param_1[0x29] != '\0') {
        *(int *)(*param_3 + 8) = *(int *)(*param_3 + 8) + 4;
      }
      uVar3 = 1;
      param_1[0x24] = param_1[0x24] - *(int *)(*param_3 + 0xc);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

