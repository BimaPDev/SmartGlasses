/* FUN_100e5da8 @ 0x100e5da8 */

int * FUN_100e5da8(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 == *DAT_100e5ddc) && (*(byte *)(DAT_100e5ddc + 2) == param_2)) {
    iVar1 = 0;
  }
  else {
    if ((param_1 != DAT_100e5ddc[0x87]) || (*(byte *)(DAT_100e5ddc + 0x89) != param_2)) {
      return (int *)0x0;
    }
    iVar1 = 1;
  }
  return DAT_100e5ddc + iVar1 * 0x87;
}

