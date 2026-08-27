/* FUN_140866dc @ 0x140866dc */

void FUN_140866dc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  
  piVar4 = (int *)*DAT_1408678c;
  if (piVar4 != DAT_1408678c) {
    iVar2 = 0x3ea;
    cVar5 = '\0';
    piVar3 = piVar4;
    do {
      if (((*(byte *)((int)piVar3 + 0x4b) - 3 < 2) && (param_1 != piVar3)) &&
         (*(char *)((int)piVar3 + 0x1e) != '\0')) {
        cVar5 = cVar5 + '\x01';
        piVar3 = (int *)*piVar3;
      }
      else {
        piVar3 = (int *)*piVar3;
      }
      if (iVar2 == 1) {
LAB_1408671a:
                    /* WARNING: Subroutine does not return */
        FUN_14085398();
      }
      iVar2 = iVar2 + -1;
    } while (piVar3 != DAT_1408678c);
    if (cVar5 != '\0') {
      cVar1 = '\x10';
      cVar5 = cVar5 + '\x10';
      do {
        iVar2 = 0x3ea;
        piVar3 = piVar4;
        while (((1 < *(byte *)((int)piVar3 + 0x4b) - 3 || (param_1 == piVar3)) ||
               ((*(char *)((int)piVar3 + 0x1e) == '\0' || (*(char *)((int)piVar3 + 0x52) != cVar1)))
               )) {
          iVar2 = iVar2 + -1;
          piVar3 = (int *)*piVar3;
          if (iVar2 == 0) goto LAB_1408671a;
          if (piVar3 == DAT_1408678c) {
            *(char *)((int)param_1 + 0x52) = cVar1;
            goto LAB_14086762;
          }
        }
        cVar1 = cVar1 + '\x01';
      } while (cVar1 != cVar5);
      goto LAB_1408675e;
    }
  }
  cVar5 = '\x10';
LAB_1408675e:
  *(char *)((int)param_1 + 0x52) = cVar5;
  cVar1 = cVar5;
LAB_14086762:
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_14086794,DAT_14086790,cVar1,param_4);
}

