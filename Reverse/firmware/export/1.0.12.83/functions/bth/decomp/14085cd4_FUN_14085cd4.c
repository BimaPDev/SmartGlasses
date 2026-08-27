/* FUN_14085cd4 @ 0x14085cd4 */

int * FUN_14085cd4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_24;
  undefined2 local_20;
  int local_1c;
  
  local_1c = *DAT_14085d88;
  local_24 = *DAT_14085d84;
  local_20 = (undefined2)DAT_14085d84[1];
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14085d9c,DAT_14085d94);
  }
  iVar2 = FUN_140db784(param_1,&local_24,6);
  piVar1 = DAT_14085d8c;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14085d98,DAT_14085d94);
  }
  piVar4 = (int *)*DAT_14085d8c;
  if (piVar4 != DAT_14085d8c) {
    if (piVar4 != (int *)0x0) {
      iVar2 = 0x3ea;
      do {
        iVar3 = FUN_140db784(param_1,piVar4 + 4,6);
        if ((iVar3 == 0) &&
           ((*(byte *)((int)piVar4 + 0x4b) - 3 < 2 || (*(byte *)((int)piVar4 + 0x4b) == 1))))
        goto LAB_14085d3e;
        iVar2 = iVar2 + -1;
        piVar4 = (int *)*piVar4;
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_14085398();
        }
        if (piVar4 == piVar1) goto LAB_14085d3c;
      } while (piVar4 != (int *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_14085d90);
  }
LAB_14085d3c:
  piVar4 = (int *)0x0;
LAB_14085d3e:
  if (*DAT_14085d88 == local_1c) {
    return piVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

