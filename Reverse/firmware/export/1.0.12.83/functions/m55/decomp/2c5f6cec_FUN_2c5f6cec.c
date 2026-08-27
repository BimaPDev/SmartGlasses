/* FUN_2c5f6cec @ 0x2c5f6cec */

void FUN_2c5f6cec(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      iVar3 = *(int *)(param_1 + 4);
      iVar6 = iVar4 + 1;
      cVar2 = *(char *)(iVar3 + iVar4);
      if (cVar2 == '\\') {
        iVar1 = FUN_2c5fb9b0((int)*(char *)(iVar3 + iVar6));
        iVar3 = *(int *)(param_1 + 4);
        if (iVar1 == 0) {
          cVar2 = *(char *)(iVar3 + iVar4);
        }
        else {
          cVar2 = *(char *)(iVar3 + iVar6);
          iVar6 = iVar4 + 2;
        }
      }
      iVar4 = iVar6;
      *(char *)(iVar3 + iVar5) = cVar2;
      iVar5 = iVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc));
    if (iVar5 < *(int *)(param_1 + 0xc)) {
      *(int *)(param_1 + 0xc) = iVar5;
      *(undefined1 *)(*(int *)(param_1 + 4) + iVar5) = 0;
    }
  }
  return;
}

