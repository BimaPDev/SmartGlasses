/* FUN_10124666 @ 0x10124666 */

void FUN_10124666(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    while (iVar1 = FUN_10093034(), iVar1 != 0) {
      *(byte *)(iVar1 + 5) = *(byte *)(iVar1 + 5) & 0xfb | (byte)(((param_2 ^ 1) & 1) << 2);
    }
  }
  else {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfb | (byte)(((param_2 ^ 1) & 1) << 2);
  }
  return;
}

