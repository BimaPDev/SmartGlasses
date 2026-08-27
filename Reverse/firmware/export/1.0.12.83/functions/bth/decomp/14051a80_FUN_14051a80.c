/* FUN_14051a80 @ 0x14051a80 */

void FUN_14051a80(int param_1,int param_2)

{
  int iVar1;
  
  FUN_1402a6e8(4,0x9c4,DAT_14051b00,DAT_14051afc,DAT_14051af8,*(undefined1 *)(param_1 + 10));
  if (*(char *)(param_1 + 0x111) != '\0') {
    *(undefined1 *)(param_1 + 0x111) = 0;
    FUN_140e5718(*(undefined4 *)(param_1 + 0x114));
    FUN_1409dc10(*(undefined1 *)(param_1 + 10),5,6);
  }
  if (((param_2 != 0) && (*(char *)(param_1 + 10) != '\0')) &&
     (iVar1 = FUN_1404a1b4(0), *(char *)(iVar1 + 0x111) != '\0')) {
    *(undefined1 *)(iVar1 + 0x111) = 0;
    FUN_140e5718(*(undefined4 *)(iVar1 + 0x114));
    FUN_1409dc10(*(undefined1 *)(param_1 + 10),5,6);
    return;
  }
  return;
}

