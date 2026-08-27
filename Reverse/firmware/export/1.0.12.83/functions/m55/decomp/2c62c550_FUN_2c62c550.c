/* FUN_2c62c550 @ 0x2c62c550 */

void FUN_2c62c550(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  iVar2 = FUN_2c62bebc(*param_1,(iVar2 + 1) * 0x48);
  *param_1 = iVar2;
  FUN_2c674668(iVar2 + param_1[1] * 0x48 + -0x48,param_3,0x44);
  *(undefined4 *)(*param_1 + param_1[1] * 0x48 + -4) = param_2;
  uVar1 = DAT_2c62c5c0;
  if ((*param_3 == 0) && (param_3[1] == 0)) {
    *(int **)(*param_1 + param_1[1] * 0x48 + -0x48) = param_1;
    *(undefined4 *)(*param_1 + param_1[1] * 0x48 + -0x44) = uVar1;
    return;
  }
  return;
}

