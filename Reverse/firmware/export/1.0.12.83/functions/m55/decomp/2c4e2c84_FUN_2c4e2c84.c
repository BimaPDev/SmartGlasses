/* FUN_2c4e2c84 @ 0x2c4e2c84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4e2c84(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_2c4e1600(param_1,param_2 + param_1[0x6a],0);
  if (iVar1 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x24,0x202);
    FUN_2c4e0504(_LAB_2c4e2d28,0,0,0,_LAB_2c4e2d30,0x24,_LAB_2c4e2d2c,0x1300,_LAB_2c4e2d24);
  }
  else {
    iVar2 = FUN_2c4e29bc(param_1,4,0);
    if (iVar2 == 0) {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x25,0x602);
      FUN_2c4e0504(_LAB_2c4e2d28,0,0,0,_LAB_2c4e2d30,0x25,_LAB_2c4e2d2c,0x1300,_LAB_2c4e2d34);
      iVar1 = 0;
    }
  }
  return iVar1;
}

