/* FUN_1010c09c @ 0x1010c09c */

int FUN_1010c09c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_2 + 7U & 0xfffffff8;
  iVar1 = FUN_1013b026();
  if (iVar1 == 0) {
    iVar1 = 3;
  }
  else if ((*(int *)(param_1 + *(int *)(param_1 + 0x6e4) * 4 + 0x6dc) + 0x10 + uVar3 <
            *(uint *)(param_1 + 0x6d8)) ||
          ((iVar1 = FUN_1010b660(param_1), iVar1 == 0 &&
           (iVar1 = FUN_1010b62c(param_1,0), iVar1 == 0)))) {
    if (*(uint *)(param_1 + 0x6d8) < uVar3 + 0x10) {
      FUN_101188d0(DAT_1010c170);
      iVar1 = 5;
    }
    else {
      iVar1 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
      iVar4 = *(int *)(iVar1 + 0x6d0);
      iVar1 = *(int *)(iVar1 + 0x6dc);
      puVar2 = (undefined4 *)(iVar4 + uVar3 + iVar1);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(uint *)(iVar4 + iVar1) = param_2 + 7U >> 3 | 0x40000000;
      iVar1 = 0;
      iVar4 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
      *(undefined4 *)(*(int *)(iVar4 + 0x6dc) + *(int *)(iVar4 + 0x6d0) + 4) = 0;
      iVar4 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
      FUN_1011ea40(*(int *)(iVar4 + 0x6dc) + 8 + *(int *)(iVar4 + 0x6d0),param_3,param_2);
      param_1 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
      *(uint *)(param_1 + 0x6dc) = uVar3 + *(int *)(param_1 + 0x6dc) + 8;
    }
  }
  return iVar1;
}

