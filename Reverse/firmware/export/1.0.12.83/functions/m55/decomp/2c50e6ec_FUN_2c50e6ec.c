/* FUN_2c50e6ec @ 0x2c50e6ec */

void FUN_2c50e6ec(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 8) != 0) {
    FUN_2c50e398(*(int *)(iVar1 + 8),*(undefined1 *)(*(int *)(iVar1 + 0x98) + 0x18),
                 *(undefined1 *)(*(int *)(iVar1 + 0x98) + 9),0);
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}

