/* FUN_101233ba @ 0x101233ba */

uint FUN_101233ba(int param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  char *local_2c [2];
  
  *param_4 = 0;
  uVar3 = FUN_101225c6(param_1,local_2c);
  uVar9 = uVar3;
  if ((uVar3 == 0) && (uVar9 = (uint)*(byte *)(param_1 + 0x31), uVar3 = uVar9, uVar9 == 0)) {
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x30) << 0x1e)) {
      FUN_10122b7a(local_2c[0],7);
      return 7;
    }
    if ((*local_2c[0] != '\x04') && (CARRY4(*(uint *)(param_1 + 0x38),param_3))) {
      param_3 = ~*(uint *)(param_1 + 0x38);
    }
    for (; param_3 != 0; param_3 = param_3 - uVar3) {
      uVar3 = *(uint *)(param_1 + 0x38);
      if ((uVar3 & 0x1ff) == 0) {
        uVar10 = *(ushort *)(local_2c[0] + 10) - 1 & (uVar3 >> 9 | *(int *)(param_1 + 0x3c) << 0x17)
        ;
        if (uVar10 == 0) {
          if (*(int *)(param_1 + 0x3c) == 0 && uVar3 == 0) {
            iVar4 = *(int *)(param_1 + 8);
            if (iVar4 == 0) {
              uVar7 = 0;
              goto LAB_10123446;
            }
          }
          else {
            uVar7 = *(undefined4 *)(param_1 + 0x40);
LAB_10123446:
            iVar4 = FUN_10122b90(param_1,uVar7);
            if (iVar4 == 0) break;
          }
          if (iVar4 != 1) {
            if (iVar4 != -1) {
              *(int *)(param_1 + 0x40) = iVar4;
              if (*(int *)(param_1 + 8) == 0) {
                *(int *)(param_1 + 8) = iVar4;
              }
              goto LAB_10123484;
            }
            goto LAB_10123478;
          }
          uVar3 = 2;
        }
        else {
LAB_10123484:
          if ((*(int *)(local_2c[0] + 0x4c) != *(int *)(param_1 + 0x44)) ||
             (iVar4 = FUN_10122656(), iVar4 == 0)) {
            pcVar2 = local_2c[0];
            iVar4 = FUN_101222f0(local_2c[0],*(undefined4 *)(param_1 + 0x40));
            if (iVar4 == 0) {
              *(undefined1 *)(param_1 + 0x31) = 2;
              local_2c[0] = pcVar2;
              uVar3 = 2;
              uVar9 = 2;
              goto LAB_1012345e;
            }
            iVar4 = uVar10 + iVar4;
            if (param_3 < 0x200) {
              bVar11 = *(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0x3c);
              if (*(uint *)(param_1 + 0x3c) == *(uint *)(param_1 + 0x14)) {
                bVar11 = *(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 0x38);
              }
              if (bVar11) {
                iVar5 = FUN_10122656(pcVar2);
                if (iVar5 != 0) goto LAB_10123478;
                *(int *)(local_2c[0] + 0x4c) = iVar4;
              }
              *(int *)(param_1 + 0x44) = iVar4;
              goto LAB_1012355e;
            }
            uVar3 = param_3 >> 9;
            if ((uint)*(ushort *)(pcVar2 + 10) < uVar10 + (param_3 >> 9)) {
              uVar3 = *(ushort *)(pcVar2 + 10) - uVar10;
            }
            iVar5 = FUN_1008630c(pcVar2[1],param_2,iVar4,uVar3);
            if (iVar5 == 0) {
              if ((uint)(*(int *)(local_2c[0] + 0x4c) - iVar4) < uVar3) {
                FUN_10122580(local_2c[0] + 0x50,
                             param_2 + (*(int *)(local_2c[0] + 0x4c) - iVar4) * 0x200,0x200);
                local_2c[0][3] = '\0';
              }
              uVar3 = uVar3 << 9;
              goto LAB_10123504;
            }
          }
LAB_10123478:
          uVar3 = 1;
        }
        *(char *)(param_1 + 0x31) = (char)uVar3;
        uVar9 = uVar3;
        goto LAB_1012345e;
      }
LAB_1012355e:
      uVar3 = 0x200 - (*(uint *)(param_1 + 0x38) & 0x1ff);
      if (param_3 <= uVar3) {
        uVar3 = param_3;
      }
      iVar4 = FUN_10122662(local_2c[0],*(undefined4 *)(param_1 + 0x44));
      if (iVar4 != 0) goto LAB_10123478;
      FUN_10122580(local_2c[0] + (*(uint *)(param_1 + 0x38) & 0x1ff) + 0x50,param_2,uVar3);
      local_2c[0][3] = '\x01';
LAB_10123504:
      uVar6 = *(uint *)(param_1 + 0x38) + uVar3;
      uVar8 = *(int *)(param_1 + 0x3c) + (uint)CARRY4(*(uint *)(param_1 + 0x38),uVar3);
      uVar10 = *(uint *)(param_1 + 0x14);
      bVar11 = uVar8 <= uVar10;
      if (uVar10 == uVar8) {
        bVar11 = uVar6 <= *(uint *)(param_1 + 0x10);
      }
      uVar1 = *(uint *)(param_1 + 0x10);
      if (!bVar11) {
        uVar10 = uVar8;
        uVar1 = uVar6;
      }
      *(uint *)(param_1 + 0x10) = uVar1;
      *(uint *)(param_1 + 0x14) = uVar10;
      iVar4 = *param_4;
      *(uint *)(param_1 + 0x38) = uVar6;
      *(uint *)(param_1 + 0x3c) = uVar8;
      param_2 = param_2 + uVar3;
      *param_4 = iVar4 + uVar3;
    }
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 0x40;
    uVar3 = 0;
  }
LAB_1012345e:
  FUN_10122b7a(local_2c[0],uVar3);
  return uVar9;
}

