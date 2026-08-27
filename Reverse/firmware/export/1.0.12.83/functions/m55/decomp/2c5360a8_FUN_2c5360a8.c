/* FUN_2c5360a8 @ 0x2c5360a8 */

int FUN_2c5360a8(int *param_1)

{
  int iVar1;
  
  if (((param_1[1] != 0) && (iVar1 = FUN_2c53c04c(), iVar1 != 0)) &&
     (iVar1 = FUN_2c53c064(param_1[1]), iVar1 != 0)) {
    return param_1[1];
  }
  if (((*param_1 != 0) && (iVar1 = FUN_2c53c04c(), iVar1 != 0)) &&
     (iVar1 = FUN_2c53c064(*param_1), iVar1 != 0)) {
    return *param_1;
  }
  if (((param_1[2] != 0) && (iVar1 = FUN_2c53c04c(), iVar1 != 0)) &&
     (iVar1 = FUN_2c53c064(param_1[2]), iVar1 != 0)) {
    return param_1[2];
  }
  return 0;
}

