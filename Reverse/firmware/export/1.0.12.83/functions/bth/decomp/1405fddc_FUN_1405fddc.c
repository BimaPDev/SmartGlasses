/* FUN_1405fddc @ 0x1405fddc */

void FUN_1405fddc(void)

{
  int iVar1;
  
  iVar1 = DAT_1405fdf0;
  if (*(int *)(DAT_1405fdf0 + 0x28) != 0) {
    FUN_14074168();
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  return;
}

