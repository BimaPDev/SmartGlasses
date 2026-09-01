/* FUN_100e4ed0 @ 0x100e4ed0 */

int * FUN_100e4ed0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 == *DAT_100e4f00) && (*(byte *)(DAT_100e4f00 + 2) == param_2)) {
    iVar1 = 0;
  }
  else {
    if ((param_1 != DAT_100e4f00[7]) || (*(byte *)(DAT_100e4f00 + 9) != param_2)) {
      return (int *)0x0;
    }
    iVar1 = 1;
  }
  return DAT_100e4f00 + iVar1 * 7;
}

