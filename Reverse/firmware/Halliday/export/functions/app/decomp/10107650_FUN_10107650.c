/* FUN_10107650 @ 0x10107650 */

void FUN_10107650(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(param_1 + 0x1a4);
  if ((piVar4 == (int *)0x0) || (piVar1 = piVar4 + *(int *)(param_1 + 0x19c) * 6, piVar1 <= piVar4))
  {
    *(undefined4 *)(param_1 + 0xc) = 0x80;
    return;
  }
  while (((char)piVar4[3] != *(char *)(param_1 + 0x174) || ((char)piVar4[4] == '\0'))) {
    piVar4 = piVar4 + 6;
    if (piVar1 <= piVar4) {
      *(undefined4 *)(param_1 + 0xc) = 0x80;
      return;
    }
  }
  iVar3 = *(int *)(param_1 + 0x1b0);
  if (iVar3 < *(int *)(param_1 + 0x1b4)) {
    iVar5 = *(int *)(param_1 + 0x1b8);
    iVar2 = *(int *)(param_1 + 0x16c);
    *(int *)(param_1 + 0x1b0) = iVar3 + 1;
    *(undefined4 *)(iVar5 + iVar3 * 0x10) = *(undefined4 *)(param_1 + 0x164);
    iVar5 = iVar5 + iVar3 * 0x10;
    iVar3 = *piVar4;
    *(int *)(iVar5 + 4) = iVar2 + 1;
    *(undefined4 *)(iVar5 + 8) = 1;
    *(int **)(iVar5 + 0xc) = piVar4;
    if (iVar3 - 1U < 3) {
      iVar5 = param_1 + iVar3 * 8;
      iVar2 = *(int *)(iVar5 + 0x1b8);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0x8a;
      }
      else {
        iVar5 = *(int *)(iVar5 + 0x1bc);
        if (iVar5 < piVar4[1]) {
          *(undefined4 *)(param_1 + 0xc) = 0x83;
        }
        else {
          *(int *)(param_1 + 0x16c) = piVar4[1];
          *(int *)(param_1 + 0x170) = iVar5;
          *(int *)(param_1 + 0x168) = iVar2;
          *(int *)(param_1 + 0x164) = iVar3;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0x84;
    }
    *(undefined1 *)(param_1 + 0x17c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0x82;
  return;
}

