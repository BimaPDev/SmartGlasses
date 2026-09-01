/* FUN_10101088 @ 0x10101088 */

char * FUN_10101088(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  int local_34;
  int local_30;
  char *local_2c [2];
  
  pcVar8 = *(char **)(param_1 + 0x2c8);
  if ((pcVar8 != (char *)0x0) || (iVar3 = FUN_100fdac4(param_1,6,&local_34,&local_30), iVar3 == 0))
  {
    return pcVar8;
  }
  if (local_34 != -1) {
    iVar3 = *(int *)(param_1 + 0x164) + local_34 * 0x14;
    uVar10 = *(undefined4 *)(param_1 + 100);
    iVar9 = *(int *)(param_1 + 0x170);
    local_2c[0] = pcVar8;
    pcVar8 = (char *)FUN_100fb248(uVar10,(*(ushort *)(iVar3 + 8) >> 1) + 1,local_2c);
    if (local_2c[0] == (char *)0x0) {
      local_2c[0] = (char *)FUN_100fad58(iVar9,*(undefined4 *)(iVar3 + 0xc));
      if ((local_2c[0] == (char *)0x0) &&
         (local_2c[0] = (char *)FUN_100faf14(iVar9,*(undefined2 *)(iVar3 + 8)), iVar2 = DAT_10101244
         , local_2c[0] == (char *)0x0)) {
        pcVar5 = (char *)(uint)(*(ushort *)(iVar3 + 8) >> 1);
        pcVar6 = *(char **)(iVar9 + 0x20);
        pcVar11 = pcVar8;
        pcVar4 = pcVar5;
        while (pcVar4 != (char *)0x0) {
          if (*pcVar6 != '\0') {
LAB_101011fe:
            FUN_100fafbc(iVar9);
            goto LAB_10101204;
          }
          uVar7 = (uint)pcVar6[1];
          if ((0x7f < uVar7) || (((uint)*(byte *)(iVar2 + (uVar7 >> 3)) & 1 << (uVar7 & 7)) == 0))
          goto LAB_101011fe;
          *pcVar11 = pcVar6[1];
          pcVar4 = pcVar8 + ((int)pcVar5 - (int)(pcVar11 + 1));
          pcVar6 = pcVar6 + 2;
          pcVar11 = pcVar11 + 1;
        }
        *pcVar11 = '\0';
        FUN_100fafbc(iVar9);
        if (pcVar8 != (char *)0x0) goto LAB_10101164;
      }
      else {
LAB_10101204:
        FUN_100fb5cc(uVar10,pcVar8);
        *(undefined2 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        FUN_100fb5cc(uVar10,*(undefined4 *)(iVar3 + 0x10));
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
    }
  }
  pcVar8 = (char *)0x0;
  if (local_30 != -1) {
    iVar3 = *(int *)(param_1 + 0x164) + local_30 * 0x14;
    uVar10 = *(undefined4 *)(param_1 + 100);
    local_2c[0] = (char *)0x0;
    iVar9 = *(int *)(param_1 + 0x170);
    pcVar4 = (char *)FUN_100fb248(uVar10,*(ushort *)(iVar3 + 8) + 1,local_2c);
    if (local_2c[0] == (char *)0x0) {
      local_2c[0] = (char *)FUN_100fad58(iVar9,*(undefined4 *)(iVar3 + 0xc));
      if ((local_2c[0] == (char *)0x0) &&
         (local_2c[0] = (char *)FUN_100faf14(iVar9,*(undefined2 *)(iVar3 + 8)), iVar2 = DAT_10101244
         , local_2c[0] == (char *)0x0)) {
        uVar1 = *(ushort *)(iVar3 + 8);
        pcVar6 = pcVar4;
        if (uVar1 != 0) {
          pcVar11 = (char *)(*(int *)(iVar9 + 0x20) + -1);
          pcVar5 = pcVar4;
          do {
            pcVar11 = pcVar11 + 1;
            uVar7 = (uint)*pcVar11;
            if ((0x7f < uVar7) || (((uint)*(byte *)(iVar2 + (uVar7 >> 3)) & 1 << (uVar7 & 7)) == 0))
            {
              FUN_100fafbc(iVar9);
              goto LAB_1010114c;
            }
            pcVar6 = pcVar5 + 1;
            *pcVar5 = *pcVar11;
            pcVar5 = pcVar6;
          } while (pcVar4 + ((uint)uVar1 - (int)pcVar6) != (char *)0x0);
        }
        *pcVar6 = '\0';
        FUN_100fafbc(iVar9);
        pcVar8 = pcVar4;
      }
      else {
LAB_1010114c:
        FUN_100fb5cc(uVar10,pcVar4);
        *(undefined4 *)(iVar3 + 0xc) = 0;
        *(undefined2 *)(iVar3 + 8) = 0;
        FUN_100fb5cc(uVar10,*(undefined4 *)(iVar3 + 0x10));
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
    }
  }
LAB_10101164:
  *(char **)(param_1 + 0x2c8) = pcVar8;
  return pcVar8;
}

