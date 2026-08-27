/* FUN_140a5088 @ 0x140a5088 */

void FUN_140a5088(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 1) {
    return;
  }
  FUN_140a5748();
  piVar1 = DAT_140a4b58;
  if (*DAT_140a4b58 == 0) {
    iVar2 = FUN_140e56e8(DAT_140a4b70);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      FUN_1402a6e8(4,0x4b,DAT_140a4b6c,DAT_140a4b68,DAT_140a4b74);
    }
  }
  piVar1 = DAT_140a4b64;
  FUN_1402a6e8(4,0x75,DAT_140a4b6c,DAT_140a4b68,DAT_140a4b5c,DAT_140a4b60);
  if (*piVar1 == 0) {
    iVar2 = FUN_140e5418(DAT_140a4b78);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a4b7c);
    }
  }
  return;
}

