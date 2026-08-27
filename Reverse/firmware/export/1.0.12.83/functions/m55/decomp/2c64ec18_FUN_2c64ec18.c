/* FUN_2c64ec18 @ 0x2c64ec18 */

undefined4 FUN_2c64ec18(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c64eb34(param_2,param_4);
  if (iVar1 == 0) {
LAB_2c64ec48:
    uVar2 = 1;
  }
  else {
    while ((uint *)param_1[1] != (uint *)*param_1) {
      if (param_3 < *(uint *)*param_1) {
        return 2;
      }
      iVar1 = FUN_2c64e8fc(param_2);
      if (iVar1 == 0) goto LAB_2c64ec48;
      *param_1 = *param_1 + 4;
    }
    uVar2 = 0;
  }
  return uVar2;
}

