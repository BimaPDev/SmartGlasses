/* FUN_2c4d3c14 @ 0x2c4d3c14 */

void FUN_2c4d3c14(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_2c4dc570(*(undefined4 *)(iVar1 + 0x68));
      *(undefined4 *)(iVar1 + 0x68) = 0;
      FUN_2c4dc570(*param_1);
      *param_1 = 0;
    }
    return;
  }
  return;
}

