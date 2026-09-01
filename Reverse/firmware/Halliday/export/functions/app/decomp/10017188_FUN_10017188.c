/* FUN_10017188 @ 0x10017188 */

void FUN_10017188(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_100171b4;
  iVar2 = *DAT_100171b8;
  if (*DAT_100171b4 != 0) {
    FUN_1012d552();
  }
  *piVar1 = 0;
  if (*DAT_100171b8 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

