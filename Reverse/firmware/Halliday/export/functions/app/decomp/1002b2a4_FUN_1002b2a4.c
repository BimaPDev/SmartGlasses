/* FUN_1002b2a4 @ 0x1002b2a4 */

void FUN_1002b2a4(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_1002b2f4;
  iVar2 = *DAT_1002b2f0;
  if (*DAT_1002b2f4 != 0) {
    FUN_10029f00();
    if (*(int *)(*piVar1 + 4) != 0) {
      FUN_10127012();
      *(undefined4 *)(*piVar1 + 4) = 0;
    }
    FUN_1012d1f4(*piVar1);
    *piVar1 = 0;
  }
  if (*DAT_1002b2f0 != iVar2) {
    FUN_1013cdc0();
  }
  (**(code **)(DAT_1002b2f8 + 0x14))();
  return;
}

