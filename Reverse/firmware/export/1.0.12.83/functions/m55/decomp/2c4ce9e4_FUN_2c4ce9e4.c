/* FUN_2c4ce9e4 @ 0x2c4ce9e4 */

void FUN_2c4ce9e4(int param_1,int param_2,int param_3,int *param_4,int param_5,byte param_6,
                 char param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar18;
  int local_10c;
  int local_108;
  undefined1 auStack_f8 [80];
  undefined4 auStack_a8 [31];
  int local_2c;
  byte *pbVar17;
  
  iVar2 = DAT_2c4ceb90;
  local_2c = *DAT_2c4ceb8c;
  uVar4 = (uint)param_6;
  if (*(char *)(param_1 + 0x261) != '\0') {
    local_108 = 0;
    if (*(char *)(param_2 + 0xb) == '\x02') {
      iVar10 = 8;
    }
    else {
      iVar10 = 1;
    }
    local_10c = 0;
    pbVar17 = (byte *)(param_1 + 600);
    do {
      pbVar16 = pbVar17 + 1;
      if (*pbVar17 != 0) {
        iVar13 = 0;
        iVar12 = param_1 + local_108;
        do {
          uVar14 = (uint)*(byte *)(iVar12 + 0x18);
          if (uVar14 != 0) {
            pcVar9 = (char *)(iVar12 + -1);
            if (*(char *)(iVar12 + 0x17) == '\x03') {
              pcVar5 = pcVar9 + uVar14;
              puVar8 = auStack_a8;
              do {
                pcVar9 = pcVar9 + 1;
                *puVar8 = *(undefined4 *)(DAT_2c4ceba0 + (*pcVar9 + 4) * 4);
                puVar8 = puVar8 + 1;
              } while (pcVar9 != pcVar5);
              if (param_5 == 0x1e0) goto LAB_2c4ceb66;
LAB_2c4cea6a:
              if (param_5 == 0x200) {
                uVar18 = (uint)*(byte *)(DAT_2c4ceb9c + param_4[3]);
                cVar3 = *(char *)(param_2 + 0xb);
              }
              else {
                cVar3 = *(char *)(param_2 + 0xb);
                uVar18 = (uint)*(byte *)(DAT_2c4ceb94 + param_4[3] * 2 + (uint)(cVar3 == '\x02'));
              }
            }
            else {
              pcVar5 = pcVar9 + uVar14;
              puVar8 = auStack_a8;
              do {
                pcVar9 = pcVar9 + 1;
                *puVar8 = *(undefined4 *)(iVar2 + (*pcVar9 + 8) * 4);
                puVar8 = puVar8 + 1;
              } while (pcVar9 != pcVar5);
              if (param_5 != 0x1e0) goto LAB_2c4cea6a;
LAB_2c4ceb66:
              uVar18 = (uint)*(byte *)(DAT_2c4ceb98 + param_4[3]);
              cVar3 = *(char *)(param_2 + 0xb);
            }
            uVar11 = (uint)*(byte *)(iVar12 + 0x14);
            if (uVar4 <= *(byte *)(iVar12 + 0x14)) {
              uVar11 = uVar4;
            }
            if (uVar18 <= uVar11) {
              uVar11 = uVar18;
            }
            piVar1 = param_4;
            if (cVar3 == '\x02') {
              piVar1 = param_4 + 1;
            }
            iVar7 = *piVar1;
            iVar15 = (int)*(short *)(iVar7 + uVar11 * 2);
            if (param_7 == '\0') {
              uVar11 = (uint)*(byte *)(iVar12 + 0x15);
              if (uVar4 <= *(byte *)(iVar12 + 0x15)) {
                uVar11 = uVar4;
              }
              if (uVar11 <= uVar18) {
                uVar18 = uVar11;
              }
              iVar7 = *(short *)(iVar7 + uVar18 * 2) - iVar15;
            }
            else {
              uVar18 = (uint)*(byte *)(iVar12 + 0x15);
              if (uVar4 <= *(byte *)(iVar12 + 0x15)) {
                uVar18 = uVar4;
              }
              iVar7 = *(short *)(iVar7 + uVar18 * 2) - iVar15;
            }
            if (iVar7 != 0) {
              uVar6 = FUN_2c674268(auStack_f8,0,0x50);
              FUN_2c4d7164(param_3 + (iVar15 + local_10c) * 4,iVar7,0,0,
                           (int)*(char *)(iVar12 + 0x16),auStack_a8,uVar14,uVar6);
            }
          }
          iVar13 = iVar13 + 1;
          iVar12 = iVar12 + 0x19;
        } while (iVar13 < (int)(uint)*pbVar17);
      }
      local_10c = local_10c + param_5;
      local_108 = local_108 + 0x4b;
      pbVar17 = pbVar16;
    } while (pbVar16 != (byte *)(param_1 + 600) + iVar10);
  }
  if (*DAT_2c4ceb8c == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

