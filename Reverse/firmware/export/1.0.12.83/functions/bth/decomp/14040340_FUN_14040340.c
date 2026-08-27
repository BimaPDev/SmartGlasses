/* FUN_14040340 @ 0x14040340 */

void FUN_14040340(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = DAT_140403a0 + param_1 * 0x38;
  FUN_1402a6e8(4,0x3cd,DAT_140403a8,DAT_140403a4,DAT_1404039c,*(undefined1 *)(iVar2 + 0x43e),
               *(undefined1 *)(iVar2 + 0x43f));
  if (*(short *)(iVar2 + 0x43e) != 2) {
    return;
  }
  puVar1 = (undefined1 *)FUN_14074378(0xe10,3,0);
  *puVar1 = (char)param_1;
  puVar1[1] = 0x12;
  FUN_140743d0();
  *(undefined1 *)(iVar2 + 0x43f) = 1;
  return;
}

