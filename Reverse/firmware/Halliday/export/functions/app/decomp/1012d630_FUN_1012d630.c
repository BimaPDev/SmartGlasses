/* FUN_1012d630 @ 0x1012d630 */

byte FUN_1012d630(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_100a0310(param_1,2);
  bVar1 = 0;
  if ((iVar2 != 0) && (bVar1 = *(byte *)(param_1 + 0xc) & 2, (*(byte *)(param_1 + 0xc) & 2) != 0)) {
    iVar2 = FUN_1012d608(param_1);
    if (iVar2 < 1) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1;
}

