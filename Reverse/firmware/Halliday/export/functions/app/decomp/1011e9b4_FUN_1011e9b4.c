/* FUN_1011e9b4 @ 0x1011e9b4 */

int FUN_1011e9b4(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_10068b80;
  iVar3 = 0;
  while( true ) {
    if (param_3 <= iVar3) {
      return iVar3;
    }
    iVar2 = (*(code *)*puVar1)();
    *(char *)(param_2 + iVar3) = (char)iVar2;
    iVar3 = iVar3 + 1;
    if (iVar2 == 10) break;
    if (iVar2 == 0xd) {
      return iVar3;
    }
  }
  return iVar3;
}

