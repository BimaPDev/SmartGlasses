/* FUN_2c50e69c @ 0x2c50e69c */

void FUN_2c50e69c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_2c50e398(*(int *)(iVar1 + 4),*(undefined1 *)(*(int *)(iVar1 + 0x94) + 0x18),
                 *(undefined1 *)(*(int *)(iVar1 + 0x94) + 9),1);
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  return;
}

