/* FUN_2c651de8 @ 0x2c651de8 */

undefined4 * FUN_2c651de8(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  do {
    puVar2 = param_3;
    if (param_4 <= puVar2) {
      return puVar2;
    }
    iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,*puVar2);
    param_3 = puVar2 + 1;
  } while (iVar1 != 0);
  return puVar2;
}

