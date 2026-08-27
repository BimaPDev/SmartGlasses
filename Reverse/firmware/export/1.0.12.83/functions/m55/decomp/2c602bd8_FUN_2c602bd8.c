/* FUN_2c602bd8 @ 0x2c602bd8 */

int FUN_2c602bd8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_2c62a5c0(0);
  if (iVar1 != 0) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      while( true ) {
        iVar2 = iVar1;
        iVar1 = FUN_2c5ff4e4(iVar2);
        if (*(int *)(iVar2 + 0x50) != param_1) break;
        if (iVar1 == 2) {
          return iVar2;
        }
        if (iVar1 == 4) {
          iVar3 = iVar2;
        }
        iVar1 = FUN_2c62a5c0(iVar2);
        iVar4 = iVar2;
        if (iVar1 == 0) goto LAB_2c602c1a;
      }
      iVar1 = FUN_2c62a5c0(iVar2);
    } while (iVar1 != 0);
LAB_2c602c1a:
    if (iVar3 != 0) {
      return iVar3;
    }
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  iVar1 = FUN_2c62a5c0(0);
  return iVar1;
}

