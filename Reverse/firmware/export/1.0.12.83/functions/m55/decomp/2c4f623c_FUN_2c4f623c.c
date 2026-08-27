/* FUN_2c4f623c @ 0x2c4f623c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_2c4f623c(short *param_1,short param_2,int param_3,short *param_4)

{
  ushort uVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 unaff_r4;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)(param_3 - (int)param_4) >> 5;
  if (uVar7 != 0) {
    psVar3 = param_4 + uVar7 * 0x10;
    do {
      if (*param_4 == *param_1) {
        if ((*(code **)(param_4 + 0xc) != (code *)0x0) &&
           (iVar6 = *(int *)(param_4 + 8),
           param_1 = (short *)(**(code **)(param_4 + 0xc))(param_1 + 1,param_2 + -2), iVar6 != 0)) {
          psVar3 = *(short **)(_LAB_2c4f6290 + 8);
          param_1 = (short *)0x0;
          if (psVar3 != (short *)0x0) {
            iVar6 = _LAB_2c4f6290;
            FUN_2c643b5c();
            uVar7 = 0;
            bVar2 = (bool)isCurrentModePrivileged();
            if (bVar2) {
              uVar7 = getCurrentExceptionNumber();
              uVar7 = uVar7 & 0x1ff;
            }
            if (uVar7 == 0) {
              iVar4 = 0;
              bVar2 = (bool)isCurrentModePrivileged();
              if (bVar2) {
                iVar4 = isIRQinterruptsEnabled();
              }
              if (iVar4 == 0) {
                iVar4 = 0;
                bVar2 = (bool)isCurrentModePrivileged();
                if (bVar2) {
                  iVar4 = getBasePriority();
                }
                if (iVar4 == 0) {
                  software_interrupt(0);
                  return psVar3;
                }
              }
            }
            if ((psVar3 == (short *)0x0) || ((char)*psVar3 != -10)) {
              FUN_2c643b3c(psVar3,0xfffffffc);
              return (short *)0xfffffffc;
            }
            puVar5 = (ushort *)(psVar3 + 6);
            goto LAB_2c647260;
          }
        }
        return param_1;
      }
      param_4 = param_4 + 0x10;
    } while (param_4 != psVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f6298,_LAB_2c4f6294);
  while( true ) {
    bVar2 = (bool)hasExclusiveAccess(puVar5);
    if (bVar2) break;
LAB_2c647260:
    ExclusiveAccess(puVar5);
    uVar1 = *puVar5;
    if ((ushort)psVar3[7] <= uVar1) {
      ClearExclusiveLocal();
      goto LAB_2c647278;
    }
  }
  *puVar5 = uVar1 + 1;
LAB_2c647278:
  if (uVar1 < (ushort)psVar3[7]) {
    FUN_2c646d24(psVar3);
    FUN_2c643b60(psVar3,psVar3[6]);
    return (short *)0x0;
  }
  FUN_2c643b3c(psVar3,0xffffffef,psVar3[7],uVar1,iVar6,unaff_r4);
  return (short *)0xfffffffd;
}

