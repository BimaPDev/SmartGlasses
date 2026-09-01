/* FUN_1010c204 @ 0x1010c204 */

int FUN_1010c204(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1013b1e8(DAT_1010c224,0xa1b,0x11,in_r3,in_r3);
  iVar3 = DAT_1010c224;
  if (iVar1 == 0) {
    iVar1 = FUN_1013b026();
    if (iVar1 == 0) {
      iVar1 = 3;
    }
    else if ((*(int *)(iVar3 + *(int *)(iVar3 + 0x6e4) * 4 + 0x6dc) + 0x10U <
              *(uint *)(iVar3 + 0x6d8)) ||
            ((iVar1 = FUN_1010b660(iVar3), iVar1 == 0 && (iVar1 = FUN_1010b62c(iVar3,0), iVar1 == 0)
             ))) {
      iVar1 = 0;
      iVar2 = iVar3 + *(int *)(iVar3 + 0x6e4) * 4;
      *(undefined **)(*(int *)(iVar2 + 0x6d0) + *(int *)(iVar2 + 0x6dc)) = &DAT_10000007;
      iVar2 = iVar3 + *(int *)(iVar3 + 0x6e4) * 4;
      *(undefined4 *)(*(int *)(iVar2 + 0x6dc) + *(int *)(iVar2 + 0x6d0) + 4) = 0;
      iVar2 = iVar3 + *(int *)(iVar3 + 0x6e4) * 4;
      *(undefined4 *)(*(int *)(iVar2 + 0x6dc) + *(int *)(iVar2 + 0x6d0) + 8) = 0x20000007;
      iVar2 = iVar3 + *(int *)(iVar3 + 0x6e4) * 4;
      *(undefined4 *)(*(int *)(iVar2 + 0x6dc) + *(int *)(iVar2 + 0x6d0) + 0xc) = 0;
      iVar3 = iVar3 + *(int *)(iVar3 + 0x6e4) * 4;
      *(int *)(iVar3 + 0x6dc) = *(int *)(iVar3 + 0x6dc) + 0x10;
    }
    return iVar1;
  }
  return iVar1;
}

