/* FUN_1007f9d0 @ 0x1007f9d0 */

int FUN_1007f9d0(int *param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  byte bVar14;
  uint local_48;
  int local_44;
  uint local_40;
  undefined1 auStack_3c [5];
  int local_37;
  int local_33;
  int *local_2f;
  
  local_40 = 0;
  piVar11 = (int *)param_1[3];
  if (*(char *)(piVar11[0x1d] + 1) == '\0') {
    FUN_10121a62(param_1,0,param_2);
    FUN_10121ab6(param_1);
    FUN_10121b14(param_1,&local_40);
  }
  uVar8 = piVar11[(uint)*(byte *)piVar11[0x1d] * 7 + 0xf];
  iVar4 = FUN_10121d3e(param_1,param_2,&local_48);
  if (iVar4 == 1) {
    uVar13 = 1;
  }
  else {
    bVar2 = false;
    bVar14 = 0xff;
    uVar6 = 0;
    iVar4 = *(int *)(piVar11[0x1d] + 0xc);
    local_48 = 0;
    pbVar7 = (byte *)(piVar11 + 0x441);
    for (uVar12 = 0; uVar8 != uVar12; uVar12 = uVar12 + 1) {
      if (*(short *)(iVar4 + uVar12 * 8) == -1) {
        if (bVar2) {
          local_48 = uVar6;
        }
        goto LAB_1007fa5a;
      }
      if (*pbVar7 < bVar14) {
        if (local_40 >> (uVar12 & 0xff) != 0) {
          bVar2 = true;
          uVar6 = uVar12;
          bVar14 = *pbVar7;
          goto LAB_1007fb42;
        }
      }
      else {
LAB_1007fb42:
        if (((uint)*(ushort *)(iVar4 + uVar12 * 8 + 4) == *(ushort *)((int)piVar11 + 0xc2) - 1) &&
           (((int)(uint)*(ushort *)((int)piVar11 + (*(byte *)(piVar11[0x1d] + 1) + 0x864) * 2 + 2)
            >> (uVar12 & 0xff)) << 0x1f < 0)) goto LAB_1007fb66;
      }
      pbVar7 = pbVar7 + 1;
    }
    uVar12 = local_48;
    if (bVar2) {
      uVar12 = uVar6;
    }
LAB_1007fb66:
    local_48 = uVar12;
    uVar13 = 0;
  }
  iVar4 = FUN_1012197a(param_1,*(undefined2 *)(*(int *)(piVar11[0x1d] + 0xc) + local_48 * 8));
  if (iVar4 == 1) {
    iVar4 = FUN_1007f28c(param_1,uVar13);
    uVar12 = local_48;
    if (iVar4 == 1) {
LAB_1007fa5a:
      iVar4 = FUN_1007e8dc(param_1,&local_44,0);
      if (iVar4 != 1) {
        return iVar4;
      }
      iVar4 = FUN_10121d3e(param_1,param_2,&local_48);
      if (iVar4 != 1) {
        iVar4 = *(int *)(piVar11[0x1d] + 0xc);
        iVar9 = *(int *)(piVar11[0x1d] + 0x10);
        *(ushort *)(iVar4 + uVar12 * 8) = (ushort)param_2;
        iVar4 = iVar4 + uVar12 * 8;
        *(undefined2 *)(iVar4 + 2) = *(undefined2 *)(iVar9 + local_44 * 2);
        *(undefined2 *)(iVar4 + 4) = 0xffff;
        *(undefined2 *)(iVar9 + local_44 * 2) = 0xffff;
      }
      FUN_1007f98c(param_1,param_2,piVar11 + 0x43e);
      FUN_1011ea48(piVar11 + 0x768,0xff,0x10);
      FUN_10120a74(param_1,auStack_3c,*(undefined1 *)piVar11[0x1d],
                   *(ushort *)(*(int *)((undefined1 *)piVar11[0x1d] + 8) + param_2 * 2) & 0xfff,0);
      local_33 = (int)piVar11 + 0xc6;
      local_37 = 0xf;
      local_2f = piVar11 + 0x768;
      iVar4 = FUN_1007e320(param_1,auStack_3c);
      if (iVar4 != 1) {
        return iVar4;
      }
      sVar1 = *(short *)((int)piVar11 + 0x1da6);
      sVar3 = FUN_10120b24(param_1,*(undefined1 *)(piVar11[0x1d] + 1));
      *(ushort *)((int)piVar11 + 0x1da6) = (ushort)param_2 | sVar3 << 10;
      if (sVar1 == -1) {
        uVar8 = (uint)*(byte *)(*piVar11 + 0xb) * (uint)*(byte *)(*piVar11 + 10);
        if (uVar8 == 0) {
          return 0;
        }
        if (uVar8 == 0x20) {
          local_37 = -1;
        }
        else {
          local_37 = (1 << (uVar8 & 0xff)) + -1;
        }
        FUN_1007e498(param_1,auStack_3c);
      }
      *(char *)((int)piVar11 + 0x1da2) = *(char *)((int)piVar11 + 0x1da2) + '\x01';
      return 1;
    }
    if (*(char *)(*param_1 + 0x10) == '\0') {
      return iVar4;
    }
    pcVar10 = *(code **)(*param_1 + 0xc);
    if (pcVar10 == (code *)0x0) {
      return iVar4;
    }
    uVar13 = 0x28c;
    puVar5 = PTR_s_Error___s__d_merge_log_block_fai_1007fbfc;
  }
  else {
    if (*(char *)(*param_1 + 0x10) == '\0') {
      return iVar4;
    }
    pcVar10 = *(code **)(*param_1 + 0xc);
    if (pcVar10 == (code *)0x0) {
      return iVar4;
    }
    uVar13 = 0x284;
    puVar5 = PTR_s_Error___s__d_swap_page_mapping_t_1007fbf8;
  }
  (*pcVar10)(puVar5,PTR_s__CreateNewLogBlk_1007fbf4,uVar13);
  return iVar4;
}

