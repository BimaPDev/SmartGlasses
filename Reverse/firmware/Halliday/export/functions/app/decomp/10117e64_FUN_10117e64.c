/* FUN_10117e64 @ 0x10117e64 */

void FUN_10117e64(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  if (param_2 == 0) {
    return;
  }
  piVar5 = (int *)(param_2 + -4);
  if (*(int *)(param_2 + -4) < 0) {
    piVar5 = (int *)((int)piVar5 + *(int *)(param_2 + -4));
  }
  FUN_1011935c();
  puVar1 = DAT_10117f00;
  piVar4 = (int *)*DAT_10117f00;
  if (piVar4 == (int *)0x0) {
    piVar5[1] = 0;
    *puVar1 = piVar5;
  }
  else if (piVar5 < piVar4) {
    piVar2 = (int *)((int)piVar5 + *piVar5);
    bVar8 = piVar4 == piVar2;
    if (bVar8) {
      iVar3 = *piVar4;
      piVar4 = (int *)piVar4[1];
      piVar2 = (int *)(iVar3 + *piVar5);
    }
    piVar5[1] = (int)piVar4;
    if (bVar8) {
      *piVar5 = (int)piVar2;
    }
    *puVar1 = piVar5;
  }
  else {
    do {
      piVar2 = piVar4;
      piVar4 = (int *)piVar2[1];
      if (piVar4 == (int *)0x0) break;
    } while (piVar4 <= piVar5);
    piVar7 = (int *)((int)piVar2 + *piVar2);
    if (piVar7 == piVar5) {
      iVar3 = *piVar2 + *piVar5;
      *piVar2 = iVar3;
      if (piVar4 == (int *)((int)piVar2 + iVar3)) {
        iVar6 = *piVar4;
        piVar2[1] = piVar4[1];
        *piVar2 = iVar3 + iVar6;
      }
    }
    else if (piVar5 < piVar7) {
      *param_1 = 0xc;
    }
    else {
      piVar7 = (int *)((int)piVar5 + *piVar5);
      bVar8 = piVar4 == piVar7;
      if (bVar8) {
        iVar3 = *piVar4;
        piVar4 = (int *)piVar4[1];
        piVar7 = (int *)(iVar3 + *piVar5);
      }
      piVar5[1] = (int)piVar4;
      if (bVar8) {
        *piVar5 = (int)piVar7;
      }
      piVar2[1] = (int)piVar5;
    }
  }
  FUN_10119368();
  return;
}

