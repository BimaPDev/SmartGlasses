/* FUN_100b92b8 @ 0x100b92b8 */

bool FUN_100b92b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar2 = (int *)(DAT_100b92d0 + 0xc);
  uVar4 = param_1 + *piVar2;
  bVar1 = uVar4 <= *(uint *)(DAT_100b92d0 + 4);
  piVar3 = (int *)(DAT_100b92d0 + 8);
  if (bVar1) {
    *(uint *)(DAT_100b92d0 + 0x10) = uVar4;
    *piVar3 = *piVar2;
  }
  return bVar1;
}

