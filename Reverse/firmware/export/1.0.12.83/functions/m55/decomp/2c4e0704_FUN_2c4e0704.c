/* FUN_2c4e0704 @ 0x2c4e0704 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4e0704(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c4de02c();
  if (iVar1 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x2d77,10,1);
    FUN_2c4e0504(_LAB_2c4e0770,0,0,0,_LAB_2c4e0778,10,_LAB_2c4e0774,0x1300,_LAB_2c4e076c);
  }
  else {
    FUN_2c674268(param_1 + 0x2a,0,0x14);
    param_1[0x2f] = (int)(param_1 + 0x14);
    param_1[0x30] = 0;
  }
  return iVar1;
}

