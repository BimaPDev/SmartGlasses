/* FUN_100433f8 @ 0x100433f8 */

void FUN_100433f8(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1004342c;
  FUN_1004337c();
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 0x76c;
  *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  if (*DAT_1004342c != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

