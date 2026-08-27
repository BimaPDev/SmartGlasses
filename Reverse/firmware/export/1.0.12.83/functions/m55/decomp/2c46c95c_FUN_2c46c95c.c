/* FUN_2c46c95c @ 0x2c46c95c */

undefined4 FUN_2c46c95c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2 + 1;
  if (param_1[2] <= iVar3) {
    iVar4 = param_1[2] * 2;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    iVar1 = FUN_2c66b218(*param_1,iVar4 << 2);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    *param_1 = iVar1;
    FUN_2c674268(iVar1 + param_1[2] * 4,0,(iVar4 - param_1[2]) * 4);
    param_1[2] = iVar4;
  }
  puVar2 = (undefined4 *)(*param_1 + param_2 * 4);
  if (*(int *)(*param_1 + param_2 * 4) != 0) {
    (*(code *)param_1[3])();
    puVar2 = (undefined4 *)(*param_1 + param_2 * 4);
  }
  *puVar2 = param_3;
  if (param_1[1] <= param_2) {
    param_1[1] = iVar3;
  }
  return 0;
}

