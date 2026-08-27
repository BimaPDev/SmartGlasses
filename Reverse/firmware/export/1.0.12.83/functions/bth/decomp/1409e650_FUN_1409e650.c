/* FUN_1409e650 @ 0x1409e650 */

undefined4 FUN_1409e650(void)

{
  code *pcVar1;
  
  if (((undefined4 *)*DAT_1409e664 != (undefined4 *)0x0) &&
     (pcVar1 = *(code **)*DAT_1409e664, pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  return 0;
}

