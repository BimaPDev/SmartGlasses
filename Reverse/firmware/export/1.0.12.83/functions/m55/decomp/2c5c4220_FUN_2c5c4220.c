/* FUN_2c5c4220 @ 0x2c5c4220 */

void FUN_2c5c4220(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(char *)(*(int *)(iVar1 + 0x4c) + 0xbc) == '\0') && (*(int *)(iVar1 + 0x44) != 0)) {
    FUN_2c62be1c();
    *(undefined4 *)(iVar1 + 0x44) = 0;
  }
  FUN_2c5c359c(iVar1);
  *(char *)(*(int *)(iVar1 + 0x4c) + 0xbc) = *(char *)(*(int *)(iVar1 + 0x4c) + 0xbc) + -1;
  return;
}

