/* FUN_1011b24e @ 0x1011b24e */

undefined4 FUN_1011b24e(int param_1,int param_2,int param_3,ushort *param_4)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = (int *)(param_1 + 4);
  piVar3 = (int *)*piVar2;
  if (piVar3 == piVar2) goto LAB_1011b25e;
  piVar4 = *(int **)(param_1 + 0xc);
  if (param_2 == 0) {
    if (piVar4 == (int *)0x0) goto LAB_1011b25e;
    if (piVar4 == piVar3) {
LAB_1011b270:
      *(undefined4 *)(param_1 + 0xc) = 0;
      goto LAB_1011b25e;
    }
    piVar3 = (int *)piVar4[1];
  }
  else if (piVar4 != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 8);
    if (piVar4 == piVar2) goto LAB_1011b270;
    piVar3 = (int *)*piVar4;
  }
  *(int **)(param_1 + 0xc) = piVar3;
  if (piVar3 != (int *)0x0) {
    FUN_1011ea40(param_3,(int)piVar3 + 0xc,*(undefined2 *)((int)piVar3 + 8),piVar2,param_4);
    uVar1 = *(ushort *)((int)piVar3 + 8);
    *param_4 = uVar1;
    *(undefined1 *)(param_3 + (uint)uVar1) = 0;
    return 1;
  }
LAB_1011b25e:
  *param_4 = 0;
  return 0;
}

