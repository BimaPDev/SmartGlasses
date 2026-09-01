/* FUN_1001a000 @ 0x1001a000 */

void FUN_1001a000(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1001a048;
  if ((int)((uint)*(byte *)(param_1 + 0x94) << 0x1f) < 0) {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xfe;
    if (*DAT_1001a048 == iVar1) goto LAB_1001a02a;
  }
  else if (*DAT_1001a048 == iVar1) {
    return;
  }
  param_1 = FUN_1013cdc0();
LAB_1001a02a:
  FUN_100932b0(param_1,DAT_1001a04c);
  return;
}

