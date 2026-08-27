/* FUN_2c46a4e4 @ 0x2c46a4e4 */

undefined4 FUN_2c46a4e4(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[2];
  if (param_2 == -1) {
    param_2 = param_1[1];
  }
  iVar2 = param_2 + param_4;
  if (iVar1 < iVar2) {
    iVar3 = iVar1 << 1;
    if (iVar1 * 2 <= iVar2 + 7) {
      iVar3 = iVar2 + 8;
    }
    iVar1 = FUN_2c66b218(*param_1,iVar3,iVar2 + 7,iVar1,param_4);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    param_1[2] = iVar3;
    *param_1 = iVar1;
  }
  else {
    iVar1 = *param_1;
  }
  FUN_2c674268(iVar1 + param_2,param_3,param_4);
  if (param_1[1] < iVar2) {
    param_1[1] = iVar2;
  }
  return 0;
}

