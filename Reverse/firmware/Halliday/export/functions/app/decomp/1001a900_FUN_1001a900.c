/* FUN_1001a900 @ 0x1001a900 */

void FUN_1001a900(int *param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1001a930;
  *param_1 = *param_1 + 1;
  if (*DAT_1001a930 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

