/* FUN_100ef8e8 @ 0x100ef8e8 */

void FUN_100ef8e8(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_100ef914 + 0xc);
  if (piVar2 != (int *)(DAT_100ef914 + 0xc)) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if (param_1 == piVar2[2]) {
        uVar1 = *(undefined2 *)piVar2[4];
        goto LAB_100ef910;
      }
      if (piVar2 == (int *)*(int *)(DAT_100ef914 + 0x10)) break;
    }
  }
  uVar1 = 0;
LAB_100ef910:
  *(undefined2 *)(DAT_100ef914 + 6) = uVar1;
  return;
}

