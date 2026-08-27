/* FUN_2c4f7804 @ 0x2c4f7804 */

undefined4 FUN_2c4f7804(int param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_28;
  int iStack_24;
  uint local_20;
  int local_1c;
  
  pcVar2 = DAT_2c4f798c;
  pcVar1 = DAT_2c4f7988;
  local_1c = *DAT_2c4f7984;
  if ((*DAT_2c4f7988 == '\0') || (*DAT_2c4f798c != '\0')) {
LAB_2c4f7824:
    uVar4 = FUN_2c490280();
  }
  else {
    iVar7 = *DAT_2c4f79b0;
    if (iVar7 == 8000) {
      cVar3 = FUN_2c48fde8(0x12,DAT_2c4f7998,param_2 >> 1);
      *pcVar2 = cVar3;
    }
    else {
      if (iVar7 != 16000) {
        *DAT_2c4f7988 = '\0';
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x34e,DAT_2c4f79b8,DAT_2c4f79bc,DAT_2c4f79b4,iVar7);
      }
      cVar3 = FUN_2c48fde8(0x13,DAT_2c4f7998,param_2 >> 1);
      *pcVar2 = cVar3;
    }
    if ((*pcVar1 == '\0') || (uVar4 = DAT_2c4f7998, *pcVar2 != '\0')) goto LAB_2c4f7824;
  }
  if (*DAT_2c4f7990 == '\0') goto LAB_2c4f7894;
  if (*DAT_2c4f7994 != '\0') {
    uVar4 = FUN_2c674268(uVar4,0,param_2);
  }
  local_20 = param_2 >> 2;
  local_28 = uVar4;
  iStack_24 = param_1;
  FUN_2c4fb1c8(0,&local_28);
  FUN_2c674268(DAT_2c4f7998,0,param_2);
  piVar8 = DAT_2c4f79a0;
  if ((*DAT_2c4f799c == '\0') || (iVar7 = *DAT_2c4f79a0, iVar7 < 1)) {
    if (*DAT_2c4f79a4 != '\0') goto LAB_2c4f786a;
LAB_2c4f78de:
    piVar8 = DAT_2c4f79ac;
    pcVar1 = DAT_2c4f79a4;
    FUN_2c674268(param_1,0,param_2);
    if (2 < *piVar8) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x39e,DAT_2c4f79b8,DAT_2c4f79bc,DAT_2c4f79c8,DAT_2c4f79c0);
    }
    *pcVar1 = '\x01';
    if (*DAT_2c4f79a8 != '\0') goto LAB_2c4f78fa;
LAB_2c4f7874:
    iVar7 = *piVar8;
  }
  else {
    FUN_2c674268(param_1,0,param_2);
    *piVar8 = iVar7 + -1;
    if (*DAT_2c4f79a4 == '\0') goto LAB_2c4f78de;
LAB_2c4f786a:
    piVar8 = DAT_2c4f79ac;
    if (*DAT_2c4f79a8 == '\0') goto LAB_2c4f7874;
LAB_2c4f78fa:
    FUN_2c674268(param_1,0,param_2);
    iVar7 = *piVar8;
  }
  if (3 < iVar7) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x3a6,DAT_2c4f79b8,DAT_2c4f79bc,DAT_2c4f79c4,DAT_2c4f79c0,param_2);
  }
  iVar7 = (param_2 >> 1) - 1;
  if (0 < iVar7) {
    puVar6 = (undefined2 *)(param_1 + (param_2 >> 1) * 2);
    do {
      iVar5 = iVar7 >> 1;
      iVar7 = iVar7 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *(undefined2 *)(param_1 + iVar5 * 2);
    } while (iVar7 != 0);
  }
LAB_2c4f7894:
  if (*DAT_2c4f7984 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

