/* FUN_2c4d7104 @ 0x2c4d7104 */

void FUN_2c4d7104(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c4dc50c(1,param_2 + 4 + param_1,param_1,param_4,param_4);
  if (iVar1 != 0) {
    *(int *)(iVar1 + (4U - iVar1 & 7)) = iVar1;
  }
  return;
}

