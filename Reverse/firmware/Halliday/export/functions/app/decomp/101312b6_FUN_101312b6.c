/* FUN_101312b6 @ 0x101312b6 */

uint FUN_101312b6(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100ba05c(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else if (param_1 == 1) {
      if ((*(byte *)(iVar1 + 8) & 0xc) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else if (param_1 == 2) {
      uVar2 = (*(byte *)(iVar1 + 8) & 7) >> 2;
    }
    else if (param_1 == 3) {
      uVar2 = (*(byte *)(iVar1 + 8) & 0xf) >> 3;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

