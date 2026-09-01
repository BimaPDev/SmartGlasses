/* FUN_100fa228 @ 0x100fa228 */

int FUN_100fa228(short *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  byte *local_64;
  int local_5c;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  
  if (param_1 == (short *)0x0) {
    return 0x14;
  }
  if (param_2 == (undefined4 *)0x0) {
    iVar7 = 6;
  }
  else {
    uVar9 = param_2[4];
    iVar7 = param_2[5];
    if (0 < *param_1) {
      iVar10 = 0;
      local_5c = 0;
      do {
        iVar5 = (int)*(short *)(*(int *)(param_1 + 6) + local_5c * 2);
        if (iVar5 < 0) {
          return 0x14;
        }
        iVar4 = *(int *)(param_1 + 2);
        piVar6 = (int *)(iVar4 + iVar10 * 8);
        local_50 = (*piVar6 << (uVar9 & 0xff)) - iVar7;
        iStack_4c = (piVar6[1] << (uVar9 & 0xff)) - iVar7;
        piVar2 = (int *)(iVar4 + iVar5 * 8);
        iVar3 = *(int *)(param_1 + 4);
        local_64 = (byte *)(iVar3 + iVar10);
        if ((*(byte *)(iVar3 + iVar10) & 3) == 2) {
          return 0x14;
        }
        local_48 = local_50;
        local_44 = iStack_4c;
        if ((*(byte *)(iVar3 + iVar10) & 3) == 0) {
          local_48 = (*(int *)(iVar4 + iVar5 * 8) << (uVar9 & 0xff)) - iVar7;
          local_44 = (piVar2[1] << (uVar9 & 0xff)) - iVar7;
          if ((*(byte *)(iVar3 + iVar5) & 3) == 1) {
            piVar2 = piVar2 + -2;
          }
          else {
            local_48 = (local_50 + local_48) / 2;
            local_44 = (local_44 + iStack_4c) / 2;
          }
          local_64 = local_64 + -1;
          piVar6 = piVar6 + -2;
        }
        iVar10 = (*(code *)*param_2)(&local_48,param_3);
        if (iVar10 != 0) {
          return iVar10;
        }
        while (piVar6 < piVar2) {
          pbVar8 = local_64 + 1;
          if ((local_64[1] & 3) == 0) {
            local_50 = (piVar6[2] << (uVar9 & 0xff)) - iVar7;
            iStack_4c = (piVar6[3] << (uVar9 & 0xff)) - iVar7;
            piVar1 = piVar6 + 2;
            while( true ) {
              if (piVar2 <= piVar1) {
                iVar10 = (*(code *)param_2[2])(&local_50,&local_48,param_3);
                goto LAB_100fa3fc;
              }
              piVar6 = piVar1 + 2;
              pbVar8 = pbVar8 + 1;
              local_38 = (*piVar6 << (uVar9 & 0xff)) - iVar7;
              local_34 = (piVar1[3] << (uVar9 & 0xff)) - iVar7;
              if ((*pbVar8 & 3) == 1) break;
              if ((*pbVar8 & 3) != 0) {
                return 0x14;
              }
              local_30 = (local_50 + local_38) / 2;
              iStack_2c = (iStack_4c + local_34) / 2;
              iVar10 = (*(code *)param_2[2])(&local_50,&local_30,param_3);
              piVar1 = piVar6;
              local_50 = local_38;
              iStack_4c = local_34;
              if (iVar10 != 0) {
                return iVar10;
              }
            }
            iVar10 = (*(code *)param_2[2])(&local_50,&local_38,param_3);
            local_64 = pbVar8;
joined_r0x100fa3e2:
            if (iVar10 != 0) {
              return iVar10;
            }
          }
          else {
            if ((local_64[1] & 3) == 1) {
              iStack_2c = (piVar6[3] << (uVar9 & 0xff)) - iVar7;
              local_30 = (piVar6[2] << (uVar9 & 0xff)) - iVar7;
              iVar10 = (*(code *)param_2[1])(&local_30,param_3);
              piVar6 = piVar6 + 2;
              local_64 = pbVar8;
              goto joined_r0x100fa3e2;
            }
            if (piVar2 < piVar6 + 4) {
              return 0x14;
            }
            if ((local_64[2] & 3) != 2) {
              return 0x14;
            }
            local_40 = (piVar6[2] << (uVar9 & 0xff)) - iVar7;
            iStack_3c = (piVar6[3] << (uVar9 & 0xff)) - iVar7;
            local_38 = (piVar6[4] << (uVar9 & 0xff)) - iVar7;
            local_34 = (piVar6[5] << (uVar9 & 0xff)) - iVar7;
            if (piVar2 < piVar6 + 6) {
              iVar10 = (*(code *)param_2[3])(&local_40,&local_38,&local_48,param_3);
              goto LAB_100fa3fc;
            }
            local_30 = (piVar6[6] << (uVar9 & 0xff)) - iVar7;
            iStack_2c = (piVar6[7] << (uVar9 & 0xff)) - iVar7;
            iVar10 = (*(code *)param_2[3])(&local_40,&local_38,&local_30,param_3);
            if (iVar10 != 0) {
              return iVar10;
            }
            local_64 = local_64 + 3;
            piVar6 = piVar6 + 6;
          }
        }
        iVar10 = (*(code *)param_2[1])(&local_48,param_3);
LAB_100fa3fc:
        if (iVar10 != 0) {
          return iVar10;
        }
        local_5c = local_5c + 1;
        iVar10 = iVar5 + 1;
      } while (local_5c < *param_1);
    }
    iVar7 = 0;
  }
  return iVar7;
}

