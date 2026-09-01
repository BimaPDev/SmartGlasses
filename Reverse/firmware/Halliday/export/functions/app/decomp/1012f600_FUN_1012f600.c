/* FUN_1012f600 @ 0x1012f600 */

undefined4 FUN_1012f600(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  
  uVar5 = 0xffffffea;
  piVar1 = (int *)(param_1 + 4);
  do {
    piVar6 = piVar1 + 1;
    piVar1 = (int *)*piVar1;
    if ((piVar1 == (int *)0x0) || (puVar3 = (undefined4 *)*piVar1, puVar3 == (undefined4 *)0x0))
    goto switchD_1012f622_caseD_3;
    switch(param_2) {
    case 0:
      pcVar4 = (code *)*puVar3;
      break;
    case 1:
      pcVar4 = (code *)puVar3[2];
      break;
    case 2:
      pcVar4 = (code *)puVar3[3];
      break;
    default:
      goto switchD_1012f622_caseD_3;
    case 4:
      pcVar4 = (code *)puVar3[4];
      break;
    case 5:
      pcVar4 = (code *)puVar3[5];
      break;
    case 6:
      pcVar4 = (code *)puVar3[1];
      break;
    case 8:
      pcVar4 = (code *)puVar3[7];
      goto LAB_1012f65c;
    case 9:
      pcVar4 = (code *)puVar3[8];
LAB_1012f65c:
      if (pcVar4 != (code *)0x0) {
        iVar2 = (*pcVar4)(piVar1,param_3);
        goto LAB_1012f636;
      }
      goto switchD_1012f622_caseD_3;
    }
    if (pcVar4 != (code *)0x0) {
      iVar2 = (*pcVar4)();
LAB_1012f636:
      if (iVar2 == 0) {
        uVar5 = 0;
      }
    }
switchD_1012f622_caseD_3:
    piVar1 = piVar6;
    if (piVar6 == (int *)(param_1 + 0x10)) {
      return uVar5;
    }
  } while( true );
}

