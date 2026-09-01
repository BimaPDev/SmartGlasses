/* FUN_10137dc8 @ 0x10137dc8 */

int FUN_10137dc8(uint param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (param_3 <= iVar1) {
      return -0x16;
    }
    if (*(ushort *)(param_2 + iVar1 * 8) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

