/* FUN_2c64cf04 @ 0x2c64cf04 */

int FUN_2c64cf04(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = *DAT_2c64cf18;
    *DAT_2c64cf18 = iVar1 + 1;
    *param_1 = iVar1 + 1;
  }
  return *param_1 + -1;
}

