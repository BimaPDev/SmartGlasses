/* FUN_2c58d264 @ 0x2c58d264 */

void FUN_2c58d264(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    iVar1 = 0;
    do {
      while( true ) {
        uVar3 = (uint)*param_1;
        if (uVar3 == 0) {
          return;
        }
        if ((uVar3 & 0xf0) != 0xf0) break;
        iVar1 = iVar1 + 1;
        param_1 = param_1 + 4;
        if (param_2 == iVar1) {
          return;
        }
      }
      if ((uVar3 & 0xe0) == 0xe0) {
        iVar2 = 3;
      }
      else if ((uVar3 & 0xc0) == 0xc0) {
        iVar2 = 2;
      }
      else {
        iVar2 = 1;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + iVar2;
    } while (param_2 != iVar1);
    return;
  }
  return;
}

