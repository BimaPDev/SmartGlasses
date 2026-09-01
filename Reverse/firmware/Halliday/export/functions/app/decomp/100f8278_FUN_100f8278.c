/* FUN_100f8278 @ 0x100f8278 */

undefined4 FUN_100f8278(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar6 = *(int *)(param_2 + 4);
    iVar3 = iVar6;
  }
  else {
    iVar6 = *(int *)(param_2 + 4);
    iVar3 = iVar6 * *(int *)(param_2 + 0xc) + 0x24;
    iVar3 = (int)((longlong)DAT_100f833c * (longlong)iVar3 >> 0x24) - (iVar3 >> 0x1f);
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar2 = *(int *)(param_2 + 8);
    iVar4 = iVar2;
  }
  else {
    iVar2 = *(int *)(param_2 + 8);
    iVar4 = iVar2 * *(int *)(param_2 + 0x10) + 0x24;
    iVar4 = (int)((longlong)DAT_100f833c * (longlong)iVar4 >> 0x24) - (iVar4 >> 0x1f);
  }
  if (iVar6 == 0) {
    if (iVar2 != 0) {
      iVar3 = iVar4;
    }
  }
  else if (iVar2 == 0) {
    iVar4 = iVar3;
  }
  uVar7 = iVar3 + 0x20U & 0xffffffc0;
  uVar5 = iVar4 + 0x20U & 0xffffffc0;
  if (((uVar7 != 0) && (uVar5 != 0)) && (iVar3 = *(int *)(param_1 + 0x1c), 0 < iVar3)) {
    iVar4 = *(int *)(param_1 + 0x20);
    iVar6 = 0;
    if (param_3 == 0) {
      do {
        iVar2 = iVar6 + 1;
        if ((uVar5 == (*(int *)(iVar4 + 0xc) + 0x20U & 0xffffffc0)) &&
           (uVar7 == (*(int *)(iVar4 + 8) + 0x20U & 0xffffffc0))) {
LAB_100f832c:
          if (param_4 == (int *)0x0) {
            return 0;
          }
          *param_4 = iVar6;
          return 0;
        }
        iVar4 = iVar4 + 0x10;
        iVar6 = iVar2;
      } while (iVar2 != iVar3);
    }
    else {
      iVar6 = 0;
      do {
        piVar1 = (int *)(iVar4 + 0xc);
        iVar2 = iVar6 + 1;
        iVar4 = iVar4 + 0x10;
        if (uVar5 == (*piVar1 + 0x20U & 0xffffffc0)) goto LAB_100f832c;
        iVar6 = iVar2;
      } while (iVar2 != iVar3);
    }
  }
  return 0x17;
}

