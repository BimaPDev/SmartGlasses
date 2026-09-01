/* FUN_100e0004 @ 0x100e0004 */

int * FUN_100e0004(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 == *DAT_100e0038) && (*(byte *)((int)DAT_100e0038 + 0x62) == param_2)) {
    iVar1 = 0;
  }
  else {
    if ((param_1 != DAT_100e0038[0x28]) || (*(byte *)((int)DAT_100e0038 + 0x102) != param_2)) {
      return (int *)0x0;
    }
    iVar1 = 1;
  }
  return DAT_100e0038 + iVar1 * 0x28;
}

