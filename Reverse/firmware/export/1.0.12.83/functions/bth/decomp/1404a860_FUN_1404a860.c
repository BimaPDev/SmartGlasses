/* FUN_1404a860 @ 0x1404a860 */

void FUN_1404a860(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_1404a8a4;
  *DAT_1404a8a4 = (char)param_1;
  if (param_1 != 3) {
    FUN_140e5718(*DAT_1404a8a8);
    FUN_14048620(*puVar1);
    FUN_1402a6e8(4,0x7dd,DAT_1404a8b4,DAT_1404a8b0,DAT_1404a8ac,*puVar1);
    return;
  }
  FUN_14048958(3,0,DAT_1404a8b8);
  return;
}

