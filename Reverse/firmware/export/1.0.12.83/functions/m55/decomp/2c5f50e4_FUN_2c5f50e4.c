/* FUN_2c5f50e4 @ 0x2c5f50e4 */

void FUN_2c5f50e4(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar3 = *(uint *)(param_1 + 0x18);
  if (iVar2 < *(int *)(param_1 + 0x1c)) {
    uVar4 = *(uint *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  else {
    *(int *)(param_1 + 0x1c) = iVar2;
    *(uint *)(param_1 + 0x20) = uVar3;
    cVar1 = *(char *)(*param_2 + iVar2);
    if (cVar1 == '\0') {
      iVar5 = 0;
      goto LAB_2c5f514e;
    }
    uVar4 = uVar3 & 3;
    if (-1 < (int)-uVar3) {
      uVar4 = -(-uVar3 & 3);
    }
    iVar5 = 4 - uVar4;
    uVar4 = uVar3;
    do {
      iVar2 = iVar2 + 1;
      if (cVar1 == ' ') {
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + -1;
        *(int *)(param_1 + 0x1c) = iVar2;
        if (iVar5 == 0) {
          iVar5 = 4;
        }
        *(uint *)(param_1 + 0x20) = uVar4;
      }
      else {
        if (cVar1 != '\t') {
          iVar5 = uVar4 - uVar3;
          iVar2 = *(int *)(param_1 + 0x1c);
          goto LAB_2c5f514e;
        }
        uVar4 = uVar4 + iVar5;
        iVar5 = 4;
        *(int *)(param_1 + 0x1c) = iVar2;
        *(uint *)(param_1 + 0x20) = uVar4;
      }
      cVar1 = *(char *)(*param_2 + iVar2);
    } while (cVar1 != '\0');
  }
  iVar5 = uVar4 - uVar3;
LAB_2c5f514e:
  *(int *)(param_1 + 0x28) = iVar5;
  *(bool *)(param_1 + 0x2c) =
       *(char *)(*param_2 + iVar2) == '\r' || *(char *)(*param_2 + iVar2) == '\n';
  return;
}

