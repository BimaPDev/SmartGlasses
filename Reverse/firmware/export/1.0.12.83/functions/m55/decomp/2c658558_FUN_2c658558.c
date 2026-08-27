/* FUN_2c658558 @ 0x2c658558 */

int FUN_2c658558(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar2 != param_3 &&
         (iVar1 = func_0x2c66ae2c(*(undefined4 *)(param_2 + iVar2 * 4),
                                  *(undefined4 *)(param_1 + 0x20)), iVar1 != -1))) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

