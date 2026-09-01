/* FUN_101242f6 @ 0x101242f6 */

int FUN_101242f6(undefined4 param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 1) {
    iVar1 = -0x5b;
  }
  else {
    iVar1 = FUN_10086b44();
    if (iVar1 < 0) {
      iVar1 = -0x16;
      *param_2 = 0x3f;
    }
  }
  return iVar1;
}

