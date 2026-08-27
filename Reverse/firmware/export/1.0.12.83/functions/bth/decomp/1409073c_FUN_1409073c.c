/* FUN_1409073c @ 0x1409073c */

void FUN_1409073c(undefined4 param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  code *pcVar4;
  undefined8 uVar5;
  int local_a0 [7];
  int local_84;
  undefined4 uStack_80;
  undefined4 auStack_7c [24];
  uint local_1c;
  
  local_1c = *DAT_1408ee38;
  FUN_140e5658(auStack_7c,0,0x60,0);
  auStack_7c[1] = DAT_1408ee3c;
  auStack_7c[2] = DAT_1408ee3c;
  auStack_7c[3] = DAT_1408ee3c;
  auStack_7c[4] = DAT_1408ee3c;
  auStack_7c[8] = DAT_1408ee40;
  auStack_7c[9] = DAT_1408ee40;
  auStack_7c[10] = DAT_1408ee40;
  auStack_7c[5] = DAT_1408ee44;
  auStack_7c[6] = DAT_1408ee44;
  auStack_7c[7] = DAT_1408ee44;
  if (0x16 < *param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_1408ee48);
  }
  pcVar4 = (code *)auStack_7c[*param_2];
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_1408ee4c);
  }
  iVar1 = FUN_1408ecd4(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_1408ee54,DAT_1408ee50);
  }
  uVar5 = (*pcVar4)(iVar1,param_2,0);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  iVar2 = (int)uVar5;
  if (iVar2 != 0) {
    uVar3 = 0;
    uStack_80 = *(undefined4 *)(param_2 + 8);
    local_a0[1] = 0;
    local_a0[2] = 0;
    local_a0[3] = 0;
    local_a0[4] = 0;
    local_a0[0] = (uint)*param_2 << 0x10;
    local_a0[5] = 0;
    local_a0[6] = iVar2;
    local_84 = iVar1;
    if (*(code **)(param_2 + 4) != (code *)0x0) {
      (**(code **)(param_2 + 4))(iVar1 + 4,0,local_a0);
      uVar3 = extraout_r1;
    }
  }
  if ((*DAT_1408ee38 ^ local_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(0,uVar3,*DAT_1408ee38 ^ local_1c,0);
  }
  return;
}

