/* FUN_10077630 @ 0x10077630 */

void FUN_10077630(int param_1)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  
  pcVar3 = DAT_10077698;
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    cVar4 = *DAT_10077698 + -1;
  }
  else {
    cVar4 = *DAT_10077698 + '\x01';
  }
  *DAT_10077698 = cVar4;
  if (cVar4 < '\0') {
    FUN_100a5b78(((int)PTR_DAT_100776a0 - (int)PTR_DAT_1007769c) * 0x20 & 0xff00U | 0x9a0021,
                 PTR_s_adc_reset_control_100776a8,PTR_s_adc_reset_count_<_0_100776a4);
    *pcVar3 = '\0';
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*pcVar3 == '\0') {
    FUN_10055b54(0x23);
    return;
  }
  FUN_10055b98();
  return;
}

