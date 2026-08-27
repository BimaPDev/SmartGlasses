/* FUN_2c4d7080 @ 0x2c4d7080 */

uint FUN_2c4d7080(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if ((((param_1[2] == 0) && (iVar1 = *param_1, iVar1 != 0)) && (param_3 < (uint)param_1[1])) &&
     (param_2 < *(byte *)(iVar1 + param_3 * 8 + 4))) {
    param_2 = (uint)*(byte *)(*(int *)(iVar1 + param_3 * 8) + param_2);
  }
  return param_2;
}

