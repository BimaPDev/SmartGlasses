/* FUN_101272e4 @ 0x101272e4 */

undefined4 FUN_101272e4(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_10092f04();
  }
  else {
    iVar1 = FUN_1008af34();
  }
  if (iVar1 == 0) {
    iVar1 = FUN_10092f04();
  }
  return *(undefined4 *)(iVar1 + 8);
}

