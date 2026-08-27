/* FUN_14088a34 @ 0x14088a34 */

void FUN_14088a34(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar8 = param_1 + 2;
  local_1c = *DAT_14088ba8;
  iVar4 = FUN_14085c48(iVar8,param_2,param_3,0);
  if ((iVar4 == 0) && (iVar4 = FUN_14085ad0(iVar8), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14088bc4,DAT_14088bc0);
  }
  cVar1 = *(char *)(param_1 + 0xb);
  if (cVar1 == '\x01') {
    *(undefined1 *)(iVar4 + 0x4a) = 1;
    *(undefined1 *)(iVar4 + 0x35) = 0;
    iVar8 = DAT_14088bbc;
    uVar2 = *(undefined1 *)(param_1 + 10);
    *(undefined2 *)(iVar4 + 0x8c) = *(undefined2 *)(param_1 + 8);
    pcVar6 = *(code **)(iVar8 + 0x5c);
    *(undefined1 *)(iVar4 + 0x8e) = uVar2;
    if ((pcVar6 == (code *)0x0) || (*(char *)(iVar8 + 100) == '\0')) {
      FUN_14087594(iVar4 + 0x10,1);
      *(undefined1 *)(iVar4 + 0x4b) = 2;
    }
    else {
      local_20 = 8;
      local_24 = iVar4;
      (*pcVar6)(0x21,&local_24);
    }
LAB_14088adc:
    if (*DAT_14088ba8 == local_1c) {
      return;
    }
  }
  else {
    if ((*(char *)(iVar4 + 0x1e) == '\0') && ((code *)*DAT_14088bac != (code *)0x0)) {
      iVar5 = (*(code *)*DAT_14088bac)(*(undefined1 *)(iVar4 + 0x52),iVar8);
      *(undefined1 *)(iVar4 + 0x22) = 0;
      piVar3 = DAT_14088ba8;
      if (iVar5 == 1) {
        cVar1 = *(char *)(param_1 + 0xb);
joined_r0x14088ad6:
        if (cVar1 == '\0') {
          if (*DAT_14088ba8 == local_1c) {
            FUN_14087594(iVar4 + 0x10,1,0,0);
            return;
          }
          goto LAB_14088b70;
        }
        if (cVar1 == '\x02') {
          if (*DAT_14088ba8 == local_1c) {
            FUN_14088870(iVar4,iVar8,0,0);
            return;
          }
          goto LAB_14088b70;
        }
        goto LAB_14088adc;
      }
      if (iVar5 == 2) {
        *(undefined1 *)(iVar4 + 0x22) = *(undefined1 *)(param_1 + 0xb);
        if (*piVar3 == local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x41,DAT_14088bb0);
        }
        goto LAB_14088b70;
      }
    }
    else {
      bVar7 = *(char *)(DAT_14088bb4 + 0x12) == '\x01';
      if (*(char *)(DAT_14088bb4 + 0x26) == '\x01') {
        bVar7 = bVar7 + 1;
      }
      if (bVar7 < *DAT_14088bb8) goto joined_r0x14088ad6;
    }
    if (*DAT_14088ba8 == local_1c) {
      FUN_1408755c(iVar8,0xd,0,0);
      return;
    }
  }
LAB_14088b70:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

