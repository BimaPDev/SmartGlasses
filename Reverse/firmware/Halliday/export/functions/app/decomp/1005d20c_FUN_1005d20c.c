/* FUN_1005d20c @ 0x1005d20c */

void FUN_1005d20c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_1005d23c;
  if ((*DAT_1005d23c != 0) && (iVar2 = FUN_10057234(), iVar2 == 0)) {
    if (param_1 == 0) {
      FUN_1005d0f4();
      FUN_1005d040(0);
      *(undefined1 *)(piVar1 + 6) = 0;
    }
    else {
      *DAT_1005d240 = 0;
      FUN_1005d040(1);
      *(undefined1 *)(piVar1 + 6) = 1;
    }
  }
  return;
}

