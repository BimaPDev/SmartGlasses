/* FUN_10114cf4 @ 0x10114cf4 */

void FUN_10114cf4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (((*(char *)((int)param_1 + 0xd) < '\0') || ((*(byte *)((int)param_1 + 0xd) & 0x1f) != 0)) ||
     (param_1[6] != 0)) {
    return;
  }
  *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 0x80;
  iVar1 = DAT_10114d7c;
  if (param_1 == (undefined4 *)DAT_10114d7c) {
    FUN_10119dc2(DAT_10114d88,DAT_10114d84,DAT_10114d80,0xb1,param_1,param_2);
    FUN_1011a1f0(DAT_10114d80,0xb1,0,iVar1);
  }
  iVar1 = DAT_10114d8c;
  piVar2 = *(int **)(DAT_10114d8c + 0x20);
  piVar3 = *(int **)(DAT_10114d8c + 0x24);
  if ((piVar2 != (int *)(DAT_10114d8c + 0x20)) && (piVar2 != (int *)0x0)) {
    do {
      if (((int)*(char *)((int)param_1 + 0xe) != (int)*(char *)((int)piVar2 + 0xe)) &&
         (0 < (int)*(char *)((int)piVar2 + 0xe) - (int)*(char *)((int)param_1 + 0xe))) {
        piVar3 = (int *)piVar2[1];
        *param_1 = piVar2;
        param_1[1] = piVar3;
        *piVar3 = (int)param_1;
        piVar2[1] = (int)param_1;
        goto LAB_10114d5c;
      }
    } while ((piVar3 != piVar2) && (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0));
  }
  *param_1 = (int *)(DAT_10114d8c + 0x20);
  param_1[1] = piVar3;
  *piVar3 = (int)param_1;
  *(undefined4 **)(iVar1 + 0x24) = param_1;
LAB_10114d5c:
  FUN_10114b50(0);
  return;
}

