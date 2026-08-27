/* FUN_1405bef8 @ 0x1405bef8 */

uint FUN_1405bef8(uint param_1)

{
  int iVar1;
  
  if ((param_1 < 2) && (iVar1 = *(int *)(DAT_1405bf14 + param_1 * 4), iVar1 != 0)) {
    return (*(byte *)(iVar1 + 0x39) & 7) >> 2;
  }
  return 0;
}

