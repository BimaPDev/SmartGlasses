/* FUN_2c48e63a @ 0x2c48e63a */

int FUN_2c48e63a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)*param_4)(0x28);
  if (iVar1 != 0) {
    FUN_2c674268(iVar1,0,0x28);
    *(undefined4 *)(iVar1 + 0xc) = 0x40;
  }
  iVar2 = FUN_2c48dd84(param_1,param_2,iVar1,0);
  if (iVar2 != 0) {
    return iVar1;
  }
  FUN_2c48dea0(iVar1);
  return 0;
}

