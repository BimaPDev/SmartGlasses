/* FUN_10031c54 @ 0x10031c54 */

void FUN_10031c54(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_10031c94;
  iVar2 = *DAT_10031c90;
  if (*(int *)(*DAT_10031c94 + 0x30) != 0) {
    FUN_10127012();
    *(undefined4 *)(*piVar1 + 0x30) = 0;
  }
  FUN_100316d0();
  if (*DAT_10031c90 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_10031a1c();
  return;
}

