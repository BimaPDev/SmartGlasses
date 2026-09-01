/* FUN_1011ff48 @ 0x1011ff48 */

int FUN_1011ff48(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; -1 < (int)(param_1 << 0x1f); param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

