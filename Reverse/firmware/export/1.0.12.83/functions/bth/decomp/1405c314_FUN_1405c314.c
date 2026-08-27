/* FUN_1405c314 @ 0x1405c314 */

uint FUN_1405c314(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_1405c340 + param_1 * 4);
  if (param_2 == 1) {
    return (*(ushort *)(iVar1 + 0x3a) & 0xf) >> 3;
  }
  if (param_2 != 2) {
    if (param_2 != 0) {
      return 0;
    }
    return (*(ushort *)(iVar1 + 0x3a) & 7) >> 2;
  }
  return (*(ushort *)(iVar1 + 0x3a) & 0x1f) >> 4;
}

