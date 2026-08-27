/* FUN_1409e6bc @ 0x1409e6bc */

undefined4 FUN_1409e6bc(void)

{
  code *pcVar1;
  
  if ((*DAT_1409e6d0 != 0) && (pcVar1 = *(code **)(*DAT_1409e6d0 + 4), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  return 0;
}

