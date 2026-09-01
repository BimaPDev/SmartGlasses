/* FUN_1010b738 @ 0x1010b738 */

int FUN_1010b738(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_1010b7e0;
  iVar1 = FUN_1013b026(DAT_1010b7e0);
  if (iVar1 == 0) {
    iVar1 = 3;
  }
  else if ((*(int *)(iVar4 + *(int *)(iVar4 + 0x6e4) * 4 + 0x6dc) + 0x10U < *(uint *)(iVar4 + 0x6d8)
           ) || ((iVar1 = FUN_1010b660(iVar4), iVar1 == 0 &&
                 (iVar1 = FUN_1010b62c(iVar4,0), iVar1 == 0)))) {
    iVar1 = 0;
    *(undefined4 *)
     (*(int *)(iVar4 + (*(int *)(iVar4 + 0x6e4) + 0x1b4) * 4) +
     *(int *)(iVar4 + *(int *)(iVar4 + 0x6e4) * 4 + 0x6dc)) = DAT_1010b7e4;
    *(undefined4 *)
     (*(int *)(iVar4 + *(int *)(iVar4 + 0x6e4) * 4 + 0x6dc) +
      *(int *)(iVar4 + (*(int *)(iVar4 + 0x6e4) + 0x1b4) * 4) + 4) = 0;
    iVar3 = iVar4 + (*(int *)(iVar4 + 0x6e4) + 0x1b6) * 4;
    iVar2 = *(int *)(iVar3 + 4);
    iVar4 = *(int *)(iVar4 + (*(int *)(iVar4 + 0x6e4) + 0x1b4) * 4) + iVar2;
    *(undefined2 *)(iVar4 + 8) = param_1;
    *(undefined2 *)(iVar4 + 10) = param_2;
    *(undefined2 *)(iVar4 + 0xc) = param_3;
    *(undefined2 *)(iVar4 + 0xe) = param_4;
    *(int *)(iVar3 + 4) = iVar2 + 0x10;
  }
  return iVar1;
}

