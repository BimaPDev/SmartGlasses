/* FUN_2c4903d0 @ 0x2c4903d0 */

int FUN_2c4903d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_2c49040c;
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = 0;
    iVar3 = 0;
    while( true ) {
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 6;
      iVar2 = FUN_2c66b624(param_1,*(undefined4 *)(iVar1 + iVar2));
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 1;
      if (iVar3 == 0x15) {
        return 0;
      }
    }
    iVar4 = DAT_2c490410 + iVar3 * 0xc;
    *(undefined4 *)(DAT_2c490410 + iVar3 * 0xc) = 0;
  }
  return iVar4;
}

