/* FUN_10074904 @ 0x10074904 */

void FUN_10074904(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  piVar4 = DAT_100749c4;
  if (param_2 != (int *)0x0) {
    uVar10 = param_2[7];
    if (*DAT_100749c4 == 0) {
      iVar6 = FUN_10061948();
      *piVar4 = iVar6;
    }
    pcVar5 = DAT_100749c8;
    if (*DAT_100749c8 == '\0') {
      iVar6 = FUN_10061948();
      lVar3 = (ulonglong)(uint)(iVar6 - *piVar4) * (ulonglong)DAT_100749cc;
      uVar7 = FUN_10004238((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),DAT_100749d0,0);
      if (DAT_100749d4 < uVar7) {
        *pcVar5 = '\x01';
      }
    }
    if ((*param_2 == DAT_100749d8) && (param_2[4] != 0)) {
      uVar9 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        uVar9 = getBasePriority();
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if ((bVar2) && (uVar7 = getBasePriority(), uVar7 == 0 || 0x20 < uVar7)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      cVar1 = *pcVar5;
      if (param_4 == 1) {
        if (cVar1 == '\0') {
          FUN_1011ea48(param_2[6]);
        }
        uVar8 = 1;
      }
      else {
        if (cVar1 == '\0') {
          FUN_1011ea48(param_2[6] + (uVar10 >> 1));
        }
        uVar8 = 2;
      }
      (*(code *)param_2[4])(param_2[5],uVar8);
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar9);
      }
      InstructionSynchronizationBarrier(0xf);
    }
    return;
  }
  FUN_100a5b78(((int)PTR_DAT_100749b4 - (int)PTR_DAT_100749b8) * 0x20 & 0xff00U | 0x1880021,
               PTR_s_audio_in_dma_reload_100749c0,PTR_s_session_is_NULL_100749bc);
  return;
}

