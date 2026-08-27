/* FUN_2c4c3400 @ 0x2c4c3400 */

int FUN_2c4c3400(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_2c4c32b8(param_1 * param_2);
    if (iVar1 != 0) {
      FUN_2c674268(iVar1,0,param_1 * param_2);
    }
    return iVar1;
  }
  return 0;
}

