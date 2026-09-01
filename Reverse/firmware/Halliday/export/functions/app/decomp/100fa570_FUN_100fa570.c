/* FUN_100fa570 @ 0x100fa570 */

void FUN_100fa570(int param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    piVar5 = *(int **)(param_1 + 4);
    if (piVar5 != (int *)0x0) {
      piVar6 = piVar5 + *(short *)(param_1 + 2) * 2;
      for (; piVar5 < piVar6; piVar5 = piVar5 + 2) {
        if (piVar5 == (int *)0x0) {
          if (piVar6 < &DAT_00000009) {
            return;
          }
          piVar5 = (int *)&NMI;
        }
        lVar1 = (longlong)*param_2 * (longlong)*piVar5;
        lVar1 = lVar1 + (ulonglong)((int)(lVar1 >> 0x3f) + 0x8000);
        lVar2 = (longlong)param_2[1] * (longlong)piVar5[1];
        lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
        lVar3 = (longlong)param_2[2] * (longlong)*piVar5;
        lVar3 = lVar3 + (ulonglong)((int)(lVar3 >> 0x3f) + 0x8000);
        lVar4 = (longlong)param_2[3] * (longlong)piVar5[1];
        lVar4 = lVar4 + (ulonglong)((int)(lVar4 >> 0x3f) + 0x8000);
        *piVar5 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) * 0x10000) +
                  ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000);
        piVar5[1] = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) * 0x10000) +
                    ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) * 0x10000);
      }
    }
    return;
  }
  return;
}

