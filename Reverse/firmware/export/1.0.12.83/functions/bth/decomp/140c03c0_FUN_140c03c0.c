/* FUN_140c03c0 @ 0x140c03c0 */

int FUN_140c03c0(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = *DAT_140c03d4;
    *DAT_140c03d4 = iVar1 + 1;
    *param_1 = iVar1 + 1;
  }
  return *param_1 + -1;
}

