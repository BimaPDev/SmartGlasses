/* FUN_100be278 @ 0x100be278 */

void FUN_100be278(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_1011dbf4(DAT_100be2b8,0xffffffff);
  uVar1 = DAT_100be2c0;
  piVar2 = (int *)*DAT_100be2bc;
  if (piVar2 != (int *)0x0) {
    while (piVar3 = piVar2 + -4, piVar3 != (int *)0x0) {
      if ((code *)*piVar3 != (code *)0x0) {
        (*(code *)*piVar3)(uVar1,param_1);
      }
      if ((piVar3 == (int *)0xfffffff0) || (piVar2 = (int *)*piVar2, piVar2 == (int *)0x0)) break;
    }
  }
  thunk_FUN_10113e2c(DAT_100be2b8);
  return;
}

