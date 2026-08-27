/* FUN_2c62a998 @ 0x2c62a998 */

void FUN_2c62a998(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  undefined8 uVar5;
  longlong lVar6;
  short local_20;
  short local_1e;
  uint local_1c;
  
  sVar1 = *param_1;
  local_1c = *DAT_2c62aa48;
  psVar4 = param_2;
  if (*param_2 <= sVar1) {
    psVar4 = (short *)(int)param_2[1];
    if ((int)psVar4 <= (int)param_1[1]) {
      sVar2 = param_1[2];
      psVar4 = (short *)(int)param_2[2];
      if ((int)sVar2 <= (int)psVar4) {
        sVar3 = param_1[3];
        psVar4 = (short *)(int)param_2[3];
        if ((int)sVar3 <= (int)psVar4) {
          if (param_3 == 0) {
            lVar6 = CONCAT44(psVar4,1);
            goto LAB_2c62a9f2;
          }
          local_20 = sVar1;
          local_1e = param_1[1];
          uVar5 = FUN_2c62a750(param_2,&local_20);
          psVar4 = (short *)((ulonglong)uVar5 >> 0x20);
          if ((int)uVar5 != 0) {
            local_20 = sVar2;
            uVar5 = FUN_2c62a750(param_2,&local_20,param_3);
            psVar4 = (short *)((ulonglong)uVar5 >> 0x20);
            if ((int)uVar5 != 0) {
              local_20 = sVar1;
              local_1e = sVar3;
              uVar5 = FUN_2c62a750(param_2,&local_20,param_3);
              psVar4 = (short *)((ulonglong)uVar5 >> 0x20);
              if ((int)uVar5 != 0) {
                local_20 = sVar2;
                lVar6 = FUN_2c62a750(param_2,&local_20,param_3);
                goto LAB_2c62a9f2;
              }
            }
          }
        }
      }
    }
  }
  lVar6 = ZEXT48(psVar4) << 0x20;
LAB_2c62a9f2:
  if ((*DAT_2c62aa48 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),*DAT_2c62aa48 ^ local_1c,0);
}

