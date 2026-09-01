/* FUN_10138fe0 @ 0x10138fe0 */

/* WARNING: Removing unreachable block (ram,0x100ed94e) */

void FUN_10138fe0(void)

{
  code *pcVar1;
  
  FUN_1005d20c(0);
  pcVar1 = *(code **)(DAT_100ed950 + 0x60);
  if (pcVar1 != (code *)0x0) {
    FUN_1011dc50(DAT_100ed954,*(undefined4 *)(DAT_100ed950 + 0x48));
    (*pcVar1)();
  }
  FUN_1011dc50(DAT_100ed958);
  FUN_1005d20c(1);
  return;
}

