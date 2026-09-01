/* FUN_10063eb0 @ 0x10063eb0 */

undefined4 FUN_10063eb0(undefined4 param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 auStack_60 [20];
  undefined1 auStack_4c [4];
  int local_48;
  int local_44;
  undefined4 local_30;
  
  FUN_1013d064(auStack_60,0,param_2,0x14);
  local_30 = 0;
  if (param_3 == 0xffffffff) {
    param_3 = 0xffffffff;
    iVar3 = -1;
  }
  else {
    param_3 = param_3 & ~((int)param_3 >> 0x1f);
    iVar3 = (int)param_3 >> 0x1f;
  }
  local_48 = param_2;
  local_44 = param_2;
  iVar3 = FUN_10113c54(DAT_10063f90,auStack_4c,auStack_60,iVar3,param_3,iVar3);
  piVar1 = DAT_10063f94;
  if (iVar3 == 0) {
    *DAT_10063f94 = *DAT_10063f94 + 1;
    FUN_1011ea40(param_1,auStack_60,param_2);
    FUN_1011dbf4(DAT_10063f98,0xffffffff);
    if ((local_44 == 1) && (piVar5 = (int *)piVar1[2], piVar5 != (int *)0x0)) {
      piVar7 = (int *)*piVar5;
      while (iVar3 = FUN_1011ea30(piVar5 + 4,param_1,param_2), iVar3 != 0) {
        if (piVar7 == (int *)0x0) goto LAB_10063f5c;
        piVar5 = piVar7;
        piVar7 = (int *)*piVar7;
      }
      piVar7 = (int *)piVar1[2];
      piVar4 = (int *)0x0;
      while (piVar2 = piVar7, piVar2 != (int *)0x0) {
        if (piVar5 == piVar2) {
          iVar3 = *piVar5;
          if (piVar4 == (int *)0x0) {
            piVar1[2] = iVar3;
            if (piVar5 == (int *)piVar1[3]) {
              piVar1[3] = iVar3;
            }
          }
          else {
            *piVar4 = iVar3;
            if (piVar5 == (int *)piVar1[3]) {
              piVar1[3] = (int)piVar4;
            }
          }
          *piVar5 = 0;
          break;
        }
        piVar4 = piVar2;
        piVar7 = (int *)*piVar2;
      }
      *(undefined1 *)(piVar5 + 1) = 0;
      *(char *)((int)piVar1 + 5) = *(char *)((int)piVar1 + 5) + '\x01';
    }
LAB_10063f5c:
    FUN_10063b70();
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffff8c;
  }
  return uVar6;
}

