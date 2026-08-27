/* FUN_1406db30 @ 0x1406db30 */

int FUN_1406db30(undefined2 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_14073fdc(param_2 + 0xc,2);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 8) = param_1;
    iVar1 = iVar1 + 0xc;
  }
  return iVar1;
}

