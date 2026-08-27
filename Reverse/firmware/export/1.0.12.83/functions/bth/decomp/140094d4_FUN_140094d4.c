/* FUN_140094d4 @ 0x140094d4 */

void FUN_140094d4(undefined4 param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  undefined1 uVar4;
  uint uVar5;
  int unaff_r7;
  int *unaff_r8;
  undefined4 *unaff_r10;
  undefined4 *unaff_r11;
  
  if (DAT_14009650 < param_2) {
    uVar4 = FUN_1400a3a0((int)((ulonglong)param_2 * 100),(int)((ulonglong)param_2 * 100 >> 0x20),
                         param_3,0);
    puVar3 = DAT_14009688;
    *DAT_14009658 = uVar4;
    uVar5 = *puVar3;
    if (DAT_14009650 < uVar5) {
      uVar4 = FUN_1400a3a0((int)((ulonglong)uVar5 * 100),(int)((ulonglong)uVar5 * 100 >> 0x20),
                           param_3,0);
    }
    else {
      uVar4 = (undefined1)((uVar5 * 100) / param_3);
    }
    *unaff_r11 = 0;
    *unaff_r10 = 0;
    *puVar3 = 0;
    *DAT_1400965c = uVar4;
    pcVar1 = DAT_14009660;
    *unaff_r8 = unaff_r7;
    *pcVar1 = '\x01';
    FUN_1400a350();
    piVar2 = DAT_14009668;
    if (((*pcVar1 != '\0') && (*DAT_14009664 != 0)) &&
       (*DAT_14009664 <= (uint)(unaff_r7 - *DAT_14009668))) {
      FUN_1400a3e0(4,0x2cd,DAT_14009674,DAT_14009670);
      *piVar2 = unaff_r7;
    }
    return;
  }
  FUN_140094ec();
  return;
}

