/* FUN_100ce5c0 @ 0x100ce5c0 */

void FUN_100ce5c0(undefined4 param_1,int param_2,byte *param_3,int param_4,undefined4 *param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  if ((param_2 == 0) && (param_4 != 0)) {
    if (param_5[1] == 0) {
      pbVar6 = param_3 + 1;
      for (uVar4 = param_4 - 1; uVar5 = uVar4 & 0xffff, uVar5 != 0; uVar4 = uVar5 - uVar4) {
        if (*(short *)pbVar6 == 0) {
          FUN_100a5b78(DAT_100ce6d0 | (DAT_100ce6cc - DAT_100ce6c8) * 0x20 & 0xff00U,DAT_100ce6d8,
                       DAT_100ce6d4);
          return;
        }
        bVar1 = *param_3;
        *(short *)(param_5 + 2) = *(short *)pbVar6;
        if (uVar5 < bVar1) {
          uVar2 = (ushort)uVar4;
        }
        else {
          uVar2 = (ushort)bVar1;
        }
        iVar3 = (*(code *)*param_5)(param_1,0,param_5,pbVar6 + 2,uVar2 - 2);
        if (iVar3 == 0) {
          return;
        }
        uVar4 = (uint)*param_3;
        if (uVar5 < uVar4) break;
        if (*(short *)((int)param_5 + 10) == *(short *)(param_5 + 2)) {
          param_2 = 0;
          UNRECOVERED_JUMPTABLE = (code *)*param_5;
          goto LAB_100ce5dc;
        }
        *(short *)(param_5 + 2) = *(short *)(param_5 + 2) + 1;
        pbVar6 = pbVar6 + uVar4;
      }
      iVar3 = FUN_100ce4e8(param_1,param_5);
      if (-1 < iVar3) {
        return;
      }
      UNRECOVERED_JUMPTABLE = (code *)*param_5;
    }
    else {
      iVar3 = (*(code *)*param_5)(param_1,0,param_5,param_3,param_4,0,param_3);
      if (iVar3 == 0) {
        return;
      }
      iVar3 = FUN_10135318(param_1);
      if (param_4 < iVar3 + -1) {
        UNRECOVERED_JUMPTABLE = (code *)*param_5;
        goto LAB_100ce5dc;
      }
      *(short *)((int)param_5 + 10) = (short)param_4 + *(short *)((int)param_5 + 10);
      iVar3 = FUN_100ce4e8(param_1,param_5);
      if (-1 < iVar3) {
        return;
      }
      UNRECOVERED_JUMPTABLE = (code *)*param_5;
    }
    param_2 = 0xe;
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)*param_5;
  }
LAB_100ce5dc:
                    /* WARNING: Could not recover jumptable at 0x100ce5e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_5,0);
  return;
}

