/* FUN_1010c174 @ 0x1010c174 */

int FUN_1010c174(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1013b026();
  if (iVar1 == 0) {
    iVar1 = 3;
  }
  else if ((*(int *)(param_1 + *(int *)(param_1 + 0x6e4) * 4 + 0x6dc) + 0x10U <
            *(uint *)(param_1 + 0x6d8)) ||
          ((iVar1 = FUN_1010b660(param_1), iVar1 == 0 &&
           (iVar1 = FUN_1010b62c(param_1,0), iVar1 == 0)))) {
    iVar1 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
    *(uint *)(*(int *)(iVar1 + 0x6d0) + *(int *)(iVar1 + 0x6dc)) = param_3 + 7U >> 3 | 0x60000000;
    iVar1 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
    *(undefined4 *)(*(int *)(iVar1 + 0x6dc) + *(int *)(iVar1 + 0x6d0) + 4) = param_2;
    iVar1 = DAT_1010c200;
    param_1 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
    *(int *)(param_1 + 0x6dc) = *(int *)(param_1 + 0x6dc) + 8;
    iVar2 = FUN_1013b026();
    if (iVar2 == 0) {
      iVar2 = 3;
    }
    else if ((*(int *)(iVar1 + *(int *)(iVar1 + 0x6e4) * 4 + 0x6dc) + 0x10U <
              *(uint *)(iVar1 + 0x6d8)) ||
            ((iVar2 = FUN_1010b660(iVar1), iVar2 == 0 && (iVar2 = FUN_1010b62c(iVar1,0), iVar2 == 0)
             ))) {
      iVar2 = 0;
      iVar3 = iVar1 + *(int *)(iVar1 + 0x6e4) * 4;
      *(undefined4 *)(*(int *)(iVar3 + 0x6d0) + *(int *)(iVar3 + 0x6dc)) = 0x10000010;
      iVar3 = iVar1 + *(int *)(iVar1 + 0x6e4) * 4;
      *(undefined4 *)(*(int *)(iVar3 + 0x6dc) + *(int *)(iVar3 + 0x6d0) + 4) = 0;
      iVar3 = iVar1 + *(int *)(iVar1 + 0x6e4) * 4;
      *(undefined4 *)(*(int *)(iVar3 + 0x6dc) + *(int *)(iVar3 + 0x6d0) + 8) = 0x20000010;
      iVar3 = iVar1 + *(int *)(iVar1 + 0x6e4) * 4;
      *(undefined4 *)(*(int *)(iVar3 + 0x6dc) + *(int *)(iVar3 + 0x6d0) + 0xc) = 0;
      iVar1 = iVar1 + *(int *)(iVar1 + 0x6e4) * 4;
      *(int *)(iVar1 + 0x6dc) = *(int *)(iVar1 + 0x6dc) + 0x10;
    }
    return iVar2;
  }
  return iVar1;
}

