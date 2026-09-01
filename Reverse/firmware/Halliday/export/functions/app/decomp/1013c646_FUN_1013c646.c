/* FUN_1013c646 @ 0x1013c646 */

bool FUN_1013c646(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = (**(ushort **)(param_1 + 0xc) & 0x1ff) == 0x100;
  }
  return bVar1;
}

