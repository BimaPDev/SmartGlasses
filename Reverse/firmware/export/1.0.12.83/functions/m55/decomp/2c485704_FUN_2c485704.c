/* FUN_2c485704 @ 0x2c485704 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_2c485704(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 extraout_r2;
  uint uVar5;
  int iVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar7;
  int *piVar8;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  puVar2 = _LAB_2c485768;
  if (param_1 != (int *)0x0) {
    piVar7 = (int *)*param_1;
    while (piVar7 != (int *)0x0) {
      while( true ) {
        piVar8 = (int *)*piVar7;
        if ((code *)param_1[3] != (code *)0x0) {
          (*(code *)param_1[3])(piVar7[1]);
        }
        if ((code *)param_1[5] != (code *)0x0) break;
        thunk_FUN_2c647824(*puVar2,piVar7);
        param_1[2] = param_1[2] + -1;
        piVar7 = piVar8;
        if (piVar8 == (int *)0x0) goto LAB_2c485744;
      }
      (*(code *)param_1[5])(piVar7);
      param_1[2] = param_1[2] + -1;
      piVar7 = piVar8;
    }
LAB_2c485744:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if ((code *)param_1[5] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c485756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar3 = (char *)(*(code *)param_1[5])(param_1);
    return pcVar3;
  }
  pcVar3 = (char *)*_LAB_2c48576c;
  FUN_2c643b90();
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getCurrentExceptionNumber();
    uVar5 = uVar5 & 0x1ff;
  }
  if (uVar5 == 0) {
    iVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar6 = isIRQinterruptsEnabled();
    }
    if (iVar6 == 0) {
      iVar6 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar6 = getBasePriority();
      }
      if (iVar6 == 0) {
        software_interrupt(0);
        return pcVar3;
      }
    }
  }
  if ((pcVar3 == (char *)0x0) || (*pcVar3 != -9)) {
    pcVar4 = (char *)0xfffffffc;
    FUN_2c643b70(pcVar3);
  }
  else {
    pcVar4 = (char *)FUN_2c64749c(pcVar3 + 0xc,param_1,extraout_r2,0xf7,unaff_r4,unaff_r5,unaff_r6,
                                  unaff_lr);
    if (pcVar4 == (char *)0x0) {
      FUN_2c646d24(pcVar3);
      FUN_2c643b94(pcVar3,param_1);
      return (char *)0x0;
    }
    FUN_2c643b98(pcVar3,param_1);
  }
  return pcVar4;
}

