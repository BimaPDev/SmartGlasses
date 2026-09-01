/* FUN_1004ced0 @ 0x1004ced0 */

void FUN_1004ced0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_1004cf0c;
  iVar2 = *DAT_1004cf08;
  if (*DAT_1004cf0c != 0) {
    FUN_1004cddc();
    FUN_10138e24(DAT_1004cf10);
    FUN_1012d1f4(*piVar1);
    *piVar1 = 0;
  }
  if (*DAT_1004cf08 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

