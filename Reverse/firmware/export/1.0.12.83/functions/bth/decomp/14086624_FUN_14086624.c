/* FUN_14086624 @ 0x14086624 */

void FUN_14086624(int param_1,undefined1 param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  
  if (((code *)*DAT_140866d4 == (code *)0x0) ||
     (iVar2 = (*(code *)*DAT_140866d4)(param_1 + 0x10), iVar2 != 0)) {
    piVar4 = (int *)*DAT_140866d8;
    if (piVar4 == DAT_140866d8) {
      bVar1 = 0;
    }
    else {
      iVar2 = 0x3ea;
      bVar1 = 0;
      piVar3 = piVar4;
      do {
        if (((*(byte *)((int)piVar3 + 0x4b) - 3 < 2) && (*(char *)((int)piVar3 + 0x52) != '\x0f'))
           && (*(char *)((int)piVar3 + 0x1e) == '\0')) {
          bVar1 = bVar1 + 1;
        }
        iVar2 = iVar2 + -1;
        piVar3 = (int *)*piVar3;
        if (iVar2 == 0) {
LAB_140866ca:
                    /* WARNING: Subroutine does not return */
          FUN_14085398();
        }
      } while (piVar3 != DAT_140866d8);
      if (bVar1 != 0) {
        bVar5 = 0;
        do {
          iVar2 = 0x3ea;
          piVar3 = piVar4;
          while ((1 < *(byte *)((int)piVar3 + 0x4b) - 3 || (*(byte *)((int)piVar3 + 0x52) != bVar5))
                ) {
            iVar2 = iVar2 + -1;
            piVar3 = (int *)*piVar3;
            if (iVar2 == 0) goto LAB_140866ca;
            if (piVar3 == DAT_140866d8) {
              *(byte *)(param_1 + 0x52) = bVar5;
              return;
            }
          }
          bVar5 = bVar5 + 1;
        } while (bVar5 < bVar1);
      }
    }
    *(byte *)(param_1 + 0x52) = bVar1;
    *(undefined1 *)(param_1 + 0x25) = param_2;
  }
  else {
    *(undefined1 *)(param_1 + 0x25) = 0;
    *(undefined1 *)(param_1 + 0x52) = 0xf;
  }
  *(undefined1 *)(param_1 + 0x27) = 0;
  return;
}

