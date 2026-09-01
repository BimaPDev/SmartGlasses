/* FUN_100338b4 @ 0x100338b4 */

void FUN_100338b4(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_100338ec;
  iVar2 = *DAT_100338e8;
  if (*(int *)(*DAT_100338ec + 0x158) != 0) {
    FUN_10094ab8();
    *(undefined4 *)(*piVar1 + 0x158) = 0;
  }
  if (*DAT_100338e8 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

