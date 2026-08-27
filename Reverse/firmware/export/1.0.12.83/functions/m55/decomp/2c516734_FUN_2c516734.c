/* FUN_2c516734 @ 0x2c516734 */

void FUN_2c516734(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x5c) == '\0') {
    return;
  }
  FUN_2c516704(iVar1);
  if (*(char *)(iVar1 + 0x5d) != '\0') {
    FUN_2c5155a4(*(undefined4 *)(iVar1 + 0x58),*(undefined1 *)(iVar1 + 0x5e));
    *(undefined1 *)(iVar1 + 0x5d) = 0;
  }
  *(undefined1 *)(iVar1 + 0x5c) = 0;
  return;
}

