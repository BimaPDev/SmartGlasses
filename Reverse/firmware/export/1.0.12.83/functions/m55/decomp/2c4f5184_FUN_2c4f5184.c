/* FUN_2c4f5184 @ 0x2c4f5184 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_2c4f5184(short *param_1,short param_2,int param_3,short *param_4)

{
  ushort uVar1;
  bool bVar2;
  char *pcVar3;
  ushort *puVar4;
  undefined4 unaff_r4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  undefined4 *puVar8;
  
  uVar6 = (uint)(param_3 - (int)param_4) >> 5;
  if (uVar6 != 0) {
    psVar7 = param_4 + uVar6 * 0x10;
    do {
      if (*param_4 == *param_1) {
        iVar5 = *(int *)(param_4 + 8);
        if (*(code **)(param_4 + 0xc) == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar3 = (char *)(*DAT_2c6741f4)(0x1290,_LAB_2c4f51e8);
          return pcVar3;
        }
        pcVar3 = (char *)(**(code **)(param_4 + 0xc))(param_1 + 1,param_2 + -2);
        if (iVar5 == 0) {
          return pcVar3;
        }
        pcVar3 = (char *)*_LAB_2c4f51e4;
        puVar8 = _LAB_2c4f51e4;
        FUN_2c643b5c();
        uVar6 = 0;
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          uVar6 = getCurrentExceptionNumber();
          uVar6 = uVar6 & 0x1ff;
        }
        if (uVar6 == 0) {
          iVar5 = 0;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            iVar5 = isIRQinterruptsEnabled();
          }
          if (iVar5 == 0) {
            iVar5 = 0;
            bVar2 = (bool)isCurrentModePrivileged();
            if (bVar2) {
              iVar5 = getBasePriority();
            }
            if (iVar5 == 0) {
              software_interrupt(0);
              return pcVar3;
            }
          }
        }
        if ((pcVar3 == (char *)0x0) || (*pcVar3 != -10)) {
          FUN_2c643b3c(pcVar3,0xfffffffc);
          return (char *)0xfffffffc;
        }
        puVar4 = (ushort *)(pcVar3 + 0xc);
        goto LAB_2c647260;
      }
      param_4 = param_4 + 0x10;
    } while (param_4 != psVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f51f0,_LAB_2c4f51ec);
  while( true ) {
    bVar2 = (bool)hasExclusiveAccess(puVar4);
    if (bVar2) break;
LAB_2c647260:
    ExclusiveAccess(puVar4);
    uVar1 = *puVar4;
    if (*(ushort *)(pcVar3 + 0xe) <= uVar1) {
      ClearExclusiveLocal();
      goto LAB_2c647278;
    }
  }
  *puVar4 = uVar1 + 1;
LAB_2c647278:
  if (uVar1 < *(ushort *)(pcVar3 + 0xe)) {
    FUN_2c646d24(pcVar3);
    FUN_2c643b60(pcVar3,*(undefined2 *)(pcVar3 + 0xc));
    return (char *)0x0;
  }
  FUN_2c643b3c(pcVar3,0xffffffef,*(ushort *)(pcVar3 + 0xe),uVar1,puVar8,unaff_r4);
  return (char *)0xfffffffd;
}

