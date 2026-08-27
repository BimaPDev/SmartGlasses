/* FUN_2c5f5170 @ 0x2c5f5170 */

void FUN_2c5f5170(int param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_3 < 1) {
    return;
  }
  do {
    while( true ) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (*(char *)(*param_2 + iVar2) == '\0') {
        return;
      }
      if (*(char *)(*param_2 + iVar2) == '\t') break;
      *(undefined1 *)(param_1 + 0x2d) = 0;
      *(int *)(param_1 + 0x14) = iVar2 + 1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
LAB_2c5f518a:
      param_3 = param_3 + -1;
      if (param_3 < 1) {
        return;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x18);
    uVar3 = uVar5 & 3;
    if (-1 < (int)-uVar5) {
      uVar3 = -(-uVar5 & 3);
    }
    iVar4 = 4 - uVar3;
    if (param_4 == 0) {
      *(undefined1 *)(param_1 + 0x2d) = 0;
      *(int *)(param_1 + 0x14) = iVar2 + 1;
      *(uint *)(param_1 + 0x18) = iVar4 + uVar5;
      goto LAB_2c5f518a;
    }
    iVar6 = iVar4;
    if (param_3 <= iVar4) {
      iVar6 = param_3;
    }
    bVar1 = iVar4 <= param_3;
    if (bVar1) {
      iVar2 = iVar2 + 1;
    }
    param_3 = param_3 - iVar6;
    *(bool *)(param_1 + 0x2d) = !bVar1;
    *(int *)(param_1 + 0x14) = iVar2;
    *(uint *)(param_1 + 0x18) = uVar5 + iVar6;
    if (param_3 < 1) {
      return;
    }
  } while( true );
}

