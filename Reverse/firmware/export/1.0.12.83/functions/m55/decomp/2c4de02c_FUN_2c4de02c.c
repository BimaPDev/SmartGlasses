/* FUN_2c4de02c @ 0x2c4de02c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4de02c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c4dd098(*(int *)(*param_1 + -0xc) + (int)param_1);
  if (iVar1 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xbb89,0x44,1);
    FUN_2c4e0504(_LAB_2c4de0b4,0,0,0,_LAB_2c4de0bc,0x44,_LAB_2c4de0b8,0x1300,_LAB_2c4de0b0);
  }
  else {
    FUN_2c674268(param_1 + 10,0,0x24);
    FUN_2c674268(param_1 + 0x14,0,0x38);
    FUN_2c674268(param_1 + 0x22,0,0x10);
    param_1[0x26] = 0x7fffffff;
    param_1[0x27] = (int)(param_1 + 0x14);
  }
  return iVar1;
}

