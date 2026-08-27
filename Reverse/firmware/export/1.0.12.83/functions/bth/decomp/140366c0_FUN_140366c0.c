/* FUN_140366c0 @ 0x140366c0 */

void FUN_140366c0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  char local_18 [4];
  uint local_14;
  
  uVar2 = DAT_14036760;
  local_14 = *DAT_14036764;
  FUN_1402a6e8(4,199,DAT_14036768,DAT_1403676c,DAT_1403675c,DAT_14036760);
  iVar1 = FUN_140dd3b4(DAT_14036770,param_1,0x13);
  if (iVar1 == 0) {
    FUN_14033980(0x80,local_18);
    uVar3 = 0xcd;
  }
  else {
    iVar1 = FUN_140dd3b4(DAT_14036774,param_1,0x17);
    if (iVar1 != 0) {
      FUN_1402a6e8(4,0xd7,DAT_14036768,DAT_1403676c,DAT_14036778,uVar2);
      iVar1 = 0;
      uVar2 = extraout_r1;
      goto LAB_14036710;
    }
    FUN_14033b6c(0,local_18);
    uVar3 = 0xd3;
  }
  FUN_1402a6e8(4,uVar3,DAT_14036768,DAT_1403676c,DAT_1403677c,uVar2,(int)local_18[0]);
  iVar1 = (int)local_18[0];
  uVar2 = extraout_r1_00;
LAB_14036710:
  if ((*DAT_14036764 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(iVar1,uVar2,*DAT_14036764 ^ local_14,0);
}

