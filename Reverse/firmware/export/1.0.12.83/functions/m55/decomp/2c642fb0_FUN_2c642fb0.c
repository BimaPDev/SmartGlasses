/* FUN_2c642fb0 @ 0x2c642fb0 */

void FUN_2c642fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined8 uVar4;
  int local_20;
  int iStack_1c;
  uint local_14;
  
  pcVar2 = DAT_2c643034;
  piVar1 = DAT_2c64302c;
  local_14 = *DAT_2c643030;
  if (*DAT_2c64302c == 0) {
    cVar3 = *DAT_2c643034;
    if (cVar3 != '\x03') goto LAB_2c642fde;
LAB_2c642ff6:
    local_20 = 100;
    iStack_1c = 0;
    uVar4 = FUN_2c5e31b4(0x2b,&local_20);
    param_2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      if ((local_20 == 200 && iStack_1c == 0) &&
         (uVar4 = FUN_2c48a2b8(), param_2 = (undefined4)((ulonglong)uVar4 >> 0x20), (int)uVar4 != 0)
         ) {
        if (*piVar1 != 0) {
          FUN_2c644080();
          param_2 = extraout_r1_01;
        }
        cVar3 = '\x02';
        goto LAB_2c642fde;
      }
    }
  }
  else {
    FUN_2c644044(*DAT_2c64302c,3000,param_3,0);
    param_2 = extraout_r1;
    if (*pcVar2 == '\x03') goto LAB_2c642ff6;
  }
  if (*piVar1 != 0) {
    FUN_2c644080();
    param_2 = extraout_r1_00;
  }
  cVar3 = *pcVar2;
LAB_2c642fde:
  if ((*DAT_2c643030 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(cVar3,param_2,*DAT_2c643030 ^ local_14,0);
}

