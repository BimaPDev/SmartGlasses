/* FUN_1010b660 @ 0x1010b660 */

int FUN_1010b660(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  undefined4 local_1c;
  int iStack_18;
  int local_14;
  
  iVar2 = FUN_10062a28(0x17,0);
  if (iVar2 != 0) {
    FUN_10062a28(0x18,0);
  }
  iVar3 = FUN_1013b026(param_1);
  iVar2 = DAT_1010b730;
  if (iVar3 == 0) {
    iVar2 = 3;
  }
  else {
    iVar4 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
    iVar3 = *(int *)(iVar4 + 0x6dc);
    if (iVar3 == 0) {
      iVar2 = 1;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x6d0);
      if (*(char *)(DAT_1010b730 + 0x7e4) == '\x01') {
        *(undefined4 *)(iVar4 + iVar3) = 1;
        iVar3 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
        *(undefined4 *)(*(int *)(iVar3 + 0x6dc) + *(int *)(iVar3 + 0x6d0) + 4) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + iVar3) = 0;
        iVar3 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
        *(undefined4 *)(*(int *)(iVar3 + 0x6dc) + *(int *)(iVar3 + 0x6d0) + 4) = 0;
      }
      *(undefined1 *)(iVar2 + 0x7e4) = 0;
      piVar1 = DAT_1010b734;
      local_14 = *(int *)(param_1 + 0x6e4);
      iVar2 = param_1 + local_14 * 4;
      iStack_18 = *(int *)(iVar2 + 0x6dc) + 8;
      *(int *)(iVar2 + 0x6dc) = iStack_18;
      local_1c = *(undefined4 *)(iVar2 + 0x6d0);
      local_20 = param_1;
      if (((*piVar1 == 0) || (iVar2 = FUN_1010b62c(DAT_1010b730), iVar2 == 0)) &&
         (iVar2 = FUN_10062a28(4,&local_20), iVar2 == 0)) {
        *piVar1 = 1;
        *(undefined4 *)(param_1 + *(int *)(param_1 + 0x6e4) * 4 + 0x6dc) = 0;
      }
    }
  }
  return iVar2;
}

