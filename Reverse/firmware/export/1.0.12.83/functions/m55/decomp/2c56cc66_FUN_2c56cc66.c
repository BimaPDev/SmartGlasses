/* FUN_2c56cc66 @ 0x2c56cc66 */

/* WARNING: Removing unreachable block (ram,0x2c617dd6) */

void FUN_2c56cc66(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short *psVar6;
  
  iVar5 = *param_4;
  psVar2 = *(short **)(param_1 + 0x3c);
  psVar6 = psVar2 + iVar5;
  if (psVar6 == psVar2) {
    psVar2 = *(short **)(param_1 + 0x40);
    iVar3 = (int)psVar6[iVar5];
    psVar6 = psVar2 + iVar5;
    if (psVar6 == psVar2) goto LAB_2c56cce2;
  }
  else {
    iVar3 = (int)*psVar2;
    while (psVar2 = psVar2 + 1, psVar6 != psVar2) {
      if (iVar3 < *psVar2) {
        iVar3 = (int)*psVar2;
      }
    }
    psVar2 = *(short **)(param_1 + 0x40);
    psVar6 = psVar2 + iVar5;
    if (psVar6 == psVar2) {
LAB_2c56cce2:
      iVar5 = (int)psVar6[iVar5];
      goto LAB_2c56ccb0;
    }
  }
  iVar5 = (int)*psVar2;
  while (psVar2 = psVar2 + 1, psVar6 != psVar2) {
    if (*psVar2 <= iVar5) {
      iVar5 = (int)*psVar2;
    }
  }
LAB_2c56ccb0:
  if (iVar3 - iVar5 < 0x3d) {
    if (iVar3 - iVar5 < 0x1f) {
      sVar4 = 5;
    }
    else {
      sVar4 = 10;
    }
  }
  else {
    sVar4 = 0xf;
  }
  sVar1 = sVar4 + (short)iVar3;
  iVar3 = (int)sVar1;
  iVar5 = (int)(short)((short)iVar5 - sVar4);
  if (iVar3 == iVar5) {
    iVar3 = (int)(short)(sVar1 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x2c617d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((uint)bRam2c617da0 * 2 + 0x2c617da0))(*(undefined4 *)(param_1 + 0x28),0,iVar5,iVar3);
  return;
}

