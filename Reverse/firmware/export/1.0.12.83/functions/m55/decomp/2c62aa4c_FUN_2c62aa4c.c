/* FUN_2c62aa4c @ 0x2c62aa4c */

void FUN_2c62aa4c(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  undefined8 uVar6;
  short local_20;
  short local_1e;
  uint local_1c;
  
  sVar1 = param_1[2];
  local_1c = *DAT_2c62ab00;
  psVar5 = param_2;
  if (((*param_2 <= sVar1) && (sVar2 = param_1[3], param_2[1] <= sVar2)) &&
     (sVar3 = *param_1, sVar3 <= param_2[2])) {
    psVar5 = (short *)(int)param_2[3];
    if ((int)param_1[1] <= (int)psVar5) {
      if (param_3 != 0) {
        local_20 = sVar3;
        local_1e = param_1[1];
        uVar6 = FUN_2c62a750(param_2,&local_20);
        psVar5 = (short *)((ulonglong)uVar6 >> 0x20);
        if ((int)uVar6 == 0) {
          local_20 = sVar1;
          uVar6 = FUN_2c62a750(param_2,&local_20,param_3);
          psVar5 = (short *)((ulonglong)uVar6 >> 0x20);
          if ((int)uVar6 == 0) {
            local_20 = sVar3;
            local_1e = sVar2;
            uVar6 = FUN_2c62a750(param_2,&local_20,param_3);
            psVar5 = (short *)((ulonglong)uVar6 >> 0x20);
            if ((int)uVar6 == 0) {
              local_20 = sVar1;
              uVar6 = FUN_2c62a750(param_2,&local_20,param_3);
              psVar5 = (short *)((ulonglong)uVar6 >> 0x20);
              uVar4 = ((uint)uVar6 ^ 1) & 0xff;
              goto LAB_2c62aaaa;
            }
          }
        }
      }
      uVar4 = 0;
      goto LAB_2c62aaaa;
    }
  }
  uVar4 = 1;
LAB_2c62aaaa:
  if ((*DAT_2c62ab00 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar4,psVar5,*DAT_2c62ab00 ^ local_1c,0);
}

