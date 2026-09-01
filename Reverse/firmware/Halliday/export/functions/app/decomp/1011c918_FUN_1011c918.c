/* FUN_1011c918 @ 0x1011c918 */

void FUN_1011c918(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; (char)iVar1 < param_3; iVar1 = iVar1 + 1) {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_2 + iVar1 * 4);
  }
  return;
}

