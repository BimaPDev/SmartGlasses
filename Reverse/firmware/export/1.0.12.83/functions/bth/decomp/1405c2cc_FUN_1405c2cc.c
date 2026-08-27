/* FUN_1405c2cc @ 0x1405c2cc */

uint FUN_1405c2cc(uint param_1)

{
  int iVar1;
  
  if ((param_1 < 2) && (iVar1 = *(int *)(DAT_1405c2e8 + param_1 * 4), iVar1 != 0)) {
    return (*(byte *)(iVar1 + 0x43) & 3) >> 1;
  }
  return 0;
}

