/* FUN_1005842c @ 0x1005842c */

void FUN_1005842c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined1 *)(iVar1 + 4) = 2;
  if (*(int *)(iVar1 + 0x38) == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined1 *)(iVar1 + 0x42) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    if (*(int *)(*(int *)(param_1 + 8) + 0x260) << 0xe < 0) {
      FUN_10059990(param_1,4,DAT_10058474,DAT_10058470);
      FUN_1011ab12(*(int *)(param_1 + 8) + 0x260,0xfffdffff);
    }
    FUN_10059c18(param_1);
    return;
  }
  return;
}

