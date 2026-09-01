/* FUN_10105438 @ 0x10105438 */

void FUN_10105438(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  uVar2 = param_3 & 0xc0;
  if (uVar2 == 0x80) {
    param_2 = param_2 << 1;
LAB_1010544c:
    bVar5 = (param_3 & 0x30) == 0x20;
    bVar1 = bVar5;
  }
  else {
    if (uVar2 < 0x81) {
      if (uVar2 == 0) {
        param_2 = param_2 >> 1;
      }
      else if (uVar2 != 0x40) goto LAB_10105482;
      goto LAB_1010544c;
    }
    if (uVar2 == 0xc0) goto LAB_1010544c;
LAB_10105482:
    bVar5 = (param_3 & 0x30) == 0x20;
    param_2 = *(int *)(param_1 + 0x1e0);
    bVar1 = false;
  }
  if (bVar5) {
    iVar4 = param_2 - (param_2 >> 0x1f) >> 9;
    goto joined_r0x1010549a;
  }
  uVar2 = param_3 & 0x30;
  if (bVar1 || uVar2 < 0x20) {
    iVar4 = 0;
    if (uVar2 == 0) goto joined_r0x1010549a;
    if (uVar2 == 0x10) {
      iVar4 = param_2;
      if (param_2 < 0) {
        iVar4 = param_2 + 3;
      }
      iVar4 = iVar4 >> 10;
      goto joined_r0x1010549a;
    }
  }
  else if (uVar2 == 0x30) {
    iVar4 = param_2 * 3;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    iVar4 = iVar4 >> 10;
    goto joined_r0x1010549a;
  }
  iVar4 = *(int *)(param_1 + 0x1e4) >> 8;
joined_r0x1010549a:
  if ((param_3 & 0xf) == 0) {
    iVar3 = param_2 + -1;
  }
  else {
    iVar3 = param_2 * ((param_3 & 0xf) - 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    iVar3 = iVar3 >> 3;
  }
  *(int *)(param_1 + 0x1e4) = iVar4;
  *(int *)(param_1 + 0x1e8) = iVar3 >> 8;
  *(int *)(param_1 + 0x1e0) = param_2 >> 8;
  return;
}

