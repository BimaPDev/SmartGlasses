/* FUN_10096e9c @ 0x10096e9c */

void FUN_10096e9c(int param_1)

{
  if (((int)((uint)*(byte *)(param_1 + 0x54) << 0x19) < 0) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_10094268(*(int *)(param_1 + 0x30),DAT_10096ec4);
  }
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xbf;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

