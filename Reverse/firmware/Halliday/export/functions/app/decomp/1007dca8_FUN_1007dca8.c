/* FUN_1007dca8 @ 0x1007dca8 */

void FUN_1007dca8(int *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  int iVar8;
  
  iVar7 = *param_1;
  bVar1 = *(byte *)(iVar7 + 0x10);
  if ((param_5 - 1U < 2) || (param_5 == 4)) {
    if (((param_2 | param_3) & param_5 - 1U) == 0) {
      iVar8 = 0x10 / param_5;
      if ((3 < bVar1) && (*(code **)(iVar7 + 0xc) != (code *)0x0)) {
        (**(code **)(iVar7 + 0xc))
                  (DAT_1007ddb4,DAT_1007dda8,0x18,param_2,param_3,(int)param_3 / param_5,iVar8);
      }
      uVar5 = DAT_1007ddcc;
      uVar2 = DAT_1007ddc8;
      iVar7 = 0;
      do {
        if ((int)param_3 / param_5 <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x1007dd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0xc))(DAT_1007ddb8);
          return;
        }
        if (iVar7 == iVar8 * (iVar7 / iVar8)) {
          (**(code **)(*param_1 + 0xc))(DAT_1007ddbc,param_4 + (iVar7 / iVar8) * 0x10);
        }
        iVar6 = *param_1;
        if (param_5 == 2) {
          UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 0xc);
          uVar4 = (uint)*(ushort *)(param_2 + iVar7 * 2);
          uVar3 = uVar2;
        }
        else if (param_5 == 4) {
          UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 0xc);
          uVar4 = *(uint *)(param_2 + iVar7 * 4);
          uVar3 = uVar5;
        }
        else {
          if (param_5 != 1) {
            if (*(byte *)(iVar6 + 0x10) < 4) {
              return;
            }
            UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 0xc);
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
              return;
            }
            uVar5 = 0x36;
            uVar2 = DAT_1007ddc4;
            goto LAB_1007dcd4;
          }
          UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 0xc);
          uVar4 = (uint)*(byte *)(param_2 + iVar7);
          uVar3 = DAT_1007ddc0;
        }
        (*UNRECOVERED_JUMPTABLE)(uVar3,uVar4);
        iVar7 = iVar7 + 1;
      } while( true );
    }
    if ((1 < bVar1) && (*(code **)(iVar7 + 0xc) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1007dcfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar7 + 0xc))(DAT_1007ddb0,DAT_1007dda8,0x11,param_5);
      return;
    }
  }
  else if ((1 < bVar1) &&
          (UNRECOVERED_JUMPTABLE = *(code **)(iVar7 + 0xc), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar5 = 10;
    uVar2 = DAT_1007ddac;
LAB_1007dcd4:
                    /* WARNING: Could not recover jumptable at 0x1007dcda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar2,DAT_1007dda8,uVar5);
    return;
  }
  return;
}

