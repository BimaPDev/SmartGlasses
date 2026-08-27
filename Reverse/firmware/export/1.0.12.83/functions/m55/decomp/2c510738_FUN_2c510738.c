/* FUN_2c510738 @ 0x2c510738 */

void FUN_2c510738(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x30;
  iVar1 = FUN_2c62ca10(iVar2);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 == param_2) break;
    iVar1 = FUN_2c62ca20(iVar2);
  }
  FUN_2c62c998(iVar2);
  if (*(char *)(iVar1 + 0xc) == '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_2c50f9b8(param_1);
  FUN_2c607df0(param_1);
  FUN_2c607588(param_1);
  return;
}

