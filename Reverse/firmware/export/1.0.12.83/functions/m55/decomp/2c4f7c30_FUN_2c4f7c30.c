/* FUN_2c4f7c30 @ 0x2c4f7c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f7c30(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  *(int *)(param_4 + param_2) = param_1;
  if ((param_1 == 0) && (*_LAB_2c4f7c6c == '\0')) {
    return 0;
  }
  iVar1 = FUN_2c490280();
  FUN_2c674668(param_1,iVar1 + *_DAT_2c4f7c70,param_2);
  return 0;
}

