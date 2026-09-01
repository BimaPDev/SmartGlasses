/* FUN_100e4f04 @ 0x100e4f04 */

int * FUN_100e4f04(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 == *DAT_100e4f34) && (*(byte *)((int)DAT_100e4f34 + 9) == param_2)) {
    iVar1 = 0;
  }
  else {
    if ((param_1 != DAT_100e4f34[7]) || (*(byte *)((int)DAT_100e4f34 + 0x25) != param_2)) {
      return (int *)0x0;
    }
    iVar1 = 1;
  }
  return DAT_100e4f34 + iVar1 * 7;
}

