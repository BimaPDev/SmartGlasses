/* FUN_10123bbc @ 0x10123bbc */

int FUN_10123bbc(undefined4 param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 local_5c [2];
  char *local_54;
  char *local_50 [13];
  
  local_5c[0] = param_1;
  iVar1 = FUN_10084bcc(local_5c,&local_54,0);
  iVar2 = iVar1;
  if (iVar1 == 0) {
    iVar10 = *(int *)(local_54 + 0x34);
    uVar4 = *(uint *)(local_54 + 0x1c);
    uVar7 = iVar10 - 2;
    *param_3 = local_54;
    if (uVar7 < uVar4) {
      if (*local_54 == '\x01') {
        uVar7 = 2;
        local_50[0] = local_54;
        uVar4 = 0;
        do {
          iVar1 = FUN_1012270e(local_50,uVar7);
          if (iVar1 == -1) {
            iVar2 = 1;
            break;
          }
          if (iVar1 == 1) {
            iVar2 = 2;
            break;
          }
          if (iVar1 == 0) {
            uVar4 = uVar4 + 1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(local_54 + 0x34));
      }
      else if (*local_54 == '\x04') {
        uVar4 = 0;
        uVar9 = 0;
        iVar10 = *(int *)(local_54 + 0x48);
        do {
          iVar11 = iVar10;
          if (uVar9 == 0) {
            iVar11 = iVar10 + 1;
            iVar2 = FUN_10122662(local_54,iVar10);
            if (iVar2 != 0) break;
          }
          uVar5 = uVar7 - 8;
          uVar6 = (uint)(byte)local_54[uVar9 + 0x50];
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            if (-1 < (int)(uVar6 << 0x1f)) {
              uVar4 = uVar4 + 1;
            }
            uVar6 = uVar6 >> 1;
          } while (uVar7 != uVar5);
          uVar9 = uVar9 + 1 & 0x1ff;
          iVar10 = iVar11;
          iVar2 = iVar1;
        } while (uVar7 != 0);
      }
      else {
        iVar3 = *(int *)(local_54 + 0x40);
        uVar4 = 0;
        psVar8 = (short *)0x0;
        iVar11 = 0;
        do {
          if (iVar11 == 0) {
            iVar2 = FUN_10122662(local_54,iVar3);
            if (iVar2 != 0) break;
            iVar11 = 0x200;
            psVar8 = (short *)(local_54 + 0x50);
            iVar3 = iVar3 + 1;
          }
          if (*local_54 == '\x02') {
            iVar11 = iVar11 + -2;
            if (*psVar8 == 0) {
              uVar4 = uVar4 + 1;
            }
            psVar8 = psVar8 + 1;
          }
          else {
            uVar12 = FUN_1012227a(psVar8);
            iVar3 = (int)(uVar12 >> 0x20);
            if ((uVar12 & 0xfffffff) == 0) {
              uVar4 = uVar4 + 1;
            }
            psVar8 = psVar8 + 2;
            iVar11 = iVar11 + -4;
          }
          iVar10 = iVar10 + -1;
          iVar2 = iVar1;
        } while (iVar10 != 0);
      }
      *param_2 = uVar4;
      *(uint *)(local_54 + 0x1c) = uVar4;
      local_54[4] = local_54[4] | 1;
    }
    else {
      *param_2 = uVar4;
    }
  }
  FUN_10122b7a(local_54,iVar2);
  return iVar2;
}

