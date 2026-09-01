/* FUN_100d3d2c @ 0x100d3d2c */

void FUN_100d3d2c(ushort param_1,int param_2)

{
  if (param_2 != 0) {
    *(ushort *)(*DAT_100d3d40 + 2) = param_1 | *(ushort *)(*DAT_100d3d40 + 2);
    return;
  }
  FUN_100d3a28();
  return;
}

