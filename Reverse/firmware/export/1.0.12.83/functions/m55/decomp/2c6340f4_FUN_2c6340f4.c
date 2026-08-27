/* FUN_2c6340f4 @ 0x2c6340f4 */

int FUN_2c6340f4(int param_1,short param_2,int param_3,undefined4 param_4,short param_5,
                short param_6,short param_7,short param_8,short param_9)

{
  short sVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 auStack_38 [2];
  short local_36;
  int local_34;
  
  local_34 = *DAT_2c63422c;
  uVar11 = (uint)*(ushort *)(param_1 + 0x24);
  iVar9 = (int)(short)(*(short *)(param_3 + 8) + param_8 + param_9);
  if (uVar11 != 0) {
    uVar7 = (int)(short)*(ushort *)(param_1 + 0x24) * (int)param_2 & 0xffff;
    uVar6 = 0;
    uVar8 = uVar7;
    do {
      pbVar10 = *(byte **)(*(int *)(param_1 + 0x28) + uVar8 * 4);
      if (pbVar10 != (byte *)0x0) {
        uVar5 = 0;
        sVar1 = *(short *)(*(int *)(param_1 + 0x30) + uVar6 * 2);
        uVar3 = uVar6;
        while ((((int)uVar3 < (int)(uVar11 - 1) &&
                (pbVar2 = *(byte **)(*(int *)(param_1 + 0x28) + (uVar5 + uVar8) * 4),
                pbVar2 != (byte *)0x0)) && ((int)((uint)*pbVar2 << 0x1f) < 0))) {
          uVar5 = uVar5 + 1 & 0xffff;
          sVar1 = sVar1 + *(short *)(*(int *)(param_1 + 0x30) + (uVar3 + 1) * 2);
          uVar3 = uVar5 + uVar6;
        }
        if ((*pbVar10 & 2) == 0) {
          uVar8 = uVar8 + uVar5 & 0xffff;
          uVar6 = uVar6 + uVar5 & 0xffff;
          FUN_2c62b954(auStack_38,pbVar10 + 1,param_3,param_4,(int)param_5,
                       (int)(short)(sVar1 - (param_6 + param_7)),*pbVar10 & 2);
          uVar11 = (uint)*(ushort *)(param_1 + 0x24);
          iVar4 = (int)local_36 + (int)param_8 + (int)param_9;
          if (iVar9 < iVar4) {
            iVar9 = iVar4;
          }
          iVar9 = (int)(short)iVar9;
        }
        else if (iVar9 < (int)*(short *)(param_3 + 8) + (int)param_8 + (int)param_9) {
          iVar9 = (int)(short)(*(short *)(param_3 + 8) + param_8 + param_9);
        }
      }
      uVar8 = uVar8 + 1 & 0xffff;
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar8 < uVar11 + uVar7);
  }
  if (*DAT_2c63422c == local_34) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

