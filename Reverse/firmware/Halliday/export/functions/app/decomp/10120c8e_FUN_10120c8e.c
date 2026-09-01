/* FUN_10120c8e @ 0x10120c8e */

int FUN_10120c8e(int *param_1,uint param_2,uint param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  bool bVar16;
  undefined1 local_4c [6];
  ushort local_46;
  ushort local_44 [2];
  short local_40;
  ushort local_3e;
  undefined1 local_3c;
  undefined2 uStack_3b;
  undefined1 uStack_39;
  char cStack_38;
  undefined4 local_37;
  int local_33;
  undefined1 *local_2f;
  int local_2b;
  undefined1 local_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  uint uStack_24;
  
  if ((*(char *)(*param_1 + 7) == '\0') &&
     (param_2 < (uint)*(ushort *)(*(int *)param_1[3] + 0xe) << 1)) {
    piVar11 = (int *)param_1[3];
    local_3c = 0;
    iVar15 = *piVar11;
    uVar13 = (uint)*(byte *)(iVar15 + 0xb);
    uVar12 = param_2 * uVar13;
    uVar4 = FUN_10120c34(param_1,uVar12);
    if (uVar4 == 0xffffffff) {
      iVar15 = 0;
      if (*(char *)(*param_1 + 0x10) != '\0') {
        pcVar8 = *(code **)(*param_1 + 0xc);
        if (pcVar8 == (code *)0x0) {
          iVar15 = 0;
        }
        else {
          (*pcVar8)(PTR_s_Error___s__d_Can_t_find_mapblk_f_1007ebf0,
                    PTR_s_FTL_MbrecPageWrite_1007ebec,0x189);
          iVar15 = 0;
        }
      }
    }
    else {
      uVar10 = (uint)*(ushort *)(iVar15 + 0xe);
      if (param_2 == uVar10 * (param_2 / uVar10)) {
        FUN_10120a74(param_1,&local_3c,0,uVar4,0);
        FUN_1007e6ec(param_1,&local_3c);
      }
      uVar2 = uVar4;
      if (piVar11[0x7ad] != uVar4) {
        uVar2 = uVar4 - 1;
      }
      uStack_39 = (undefined1)uVar2;
      cStack_38 = (char)(uVar2 >> 8);
      if ((3 < *(byte *)(*param_1 + 0x10)) &&
         (pcVar8 = *(code **)(*param_1 + 0xc), pcVar8 != (code *)0x0)) {
        (*pcVar8)(PTR_s_Debug___s__d_write_mbrec__d__Buf_1007ebf4,PTR_s_FTL_MbrecPageWrite_1007ebec,
                  0x197,uVar4,param_2,uVar2 & 0xffff,param_4);
      }
      if ((param_2 == 0) ||
         ((uint)*(ushort *)(*piVar11 + 0xe) * (uint)CONCAT11(cStack_38,uStack_39) - param_2 == 0)) {
        uVar10 = uVar10 * uVar13;
        if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
          iVar15 = 0xee;
        }
        else {
          iVar15 = 0xbb;
        }
        local_46 = ~((ushort)~(ushort)((uint)(iVar15 << 0x11) >> 0x10) >> 1);
        local_4c[0] = 0xff;
        local_2f = local_4c;
      }
      else {
        local_2f = (undefined1 *)0x0;
      }
      uStack_3b = (undefined2)param_2;
      local_37 = param_3;
      local_33 = param_4;
      iVar15 = FUN_1007e498(param_1,&local_3c);
    }
    return iVar15;
  }
  FUN_10121be4(param_1,&local_40,param_2,param_3);
  piVar11 = (int *)param_1[3];
  local_2f = (undefined1 *)0x0;
  if (cStack_38 != *(char *)((int)piVar11 + 0x10e9)) {
    FUN_10121c28(param_1);
    iVar15 = FUN_10121a00(param_1,cStack_38);
    if (iVar15 != 1) {
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return iVar15;
      }
      pcVar8 = *(code **)(*param_1 + 0xc);
      if (pcVar8 == (code *)0x0) {
        return iVar15;
      }
      uVar7 = 0x3e6;
      puVar5 = PTR_s_Error___s__d_swap_block_mapping_t_1007ffdc;
      puVar6 = PTR_s_FTL_LogicPageWrite_1007ffd8;
      goto LAB_1007fe98;
    }
    *(char *)((int)piVar11 + 0x10e9) = cStack_38;
    *(undefined2 *)((int)piVar11 + 0x10ea) = 0xffff;
  }
  if (*(char *)(piVar11[0x1d] + 4) == '\0') {
    FUN_101217c0(param_1);
  }
  if (local_40 != *(short *)((int)piVar11 + 0x10ea)) {
    FUN_10121c28(param_1);
    iVar15 = FUN_1007f98c(param_1,local_40,piVar11 + 0x43e);
    if (iVar15 != 1) {
      return iVar15;
    }
    *(short *)((int)piVar11 + 0x10ea) = local_40;
  }
  sVar3 = FUN_10120b24(param_1,*(undefined1 *)(piVar11[0x1d] + 1));
  *(ushort *)((int)piVar11 + 0x1da6) = *(ushort *)((int)piVar11 + 0x10ea) | sVar3 << 10;
  if ((char)piVar11[0x43a] == 'w') {
    if (piVar11[0x43d] + 1U == param_2) {
      if (local_3e == *(ushort *)(piVar11 + 0x43b)) goto LAB_10080004;
    }
    else {
      FUN_10121c28(param_1);
    }
  }
  else {
    iVar15 = FUN_10121d3e(param_1,local_40,piVar11 + 0x76c);
    if (iVar15 != 1) {
      iVar15 = FUN_1007f9d0(param_1,local_40);
      if (iVar15 != 1) {
        return iVar15;
      }
      FUN_10121d3e(param_1,local_40,piVar11 + 0x76c);
    }
    *(undefined2 *)((int)piVar11 + 0x10fa) =
         *(undefined2 *)(*(int *)(piVar11[0x1d] + 0xc) + piVar11[0x76c] * 8 + 2);
    iVar15 = FUN_1012197a(param_1,local_40);
    if (iVar15 != 1) {
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return iVar15;
      }
      pcVar8 = *(code **)(*param_1 + 0xc);
      if (pcVar8 == (code *)0x0) {
        return iVar15;
      }
      uVar7 = 0x42d;
      puVar5 = PTR_s_Error___s__d_switch_page_mapping_1007ffe0;
      puVar6 = PTR_s_FTL_LogicPageWrite_1007ffd8;
      goto LAB_1007fe98;
    }
    FUN_1007fc00(param_1,piVar11[0x76c]);
  }
  iVar15 = FUN_10121d6e(param_1,local_3e,local_44,0x77);
  if (iVar15 != 1) {
    iVar15 = FUN_1007f9d0(param_1,local_40);
    if (iVar15 != 1) {
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return iVar15;
      }
      pcVar8 = *(code **)(*param_1 + 0xc);
      if (pcVar8 == (code *)0x0) {
        return iVar15;
      }
      uVar7 = 0x450;
      puVar5 = PTR_s_Error___s__d_create_new_log_bloc_1007ffe4;
      puVar6 = PTR_s_FTL_LogicPageWrite_1007ffd8;
LAB_1007fe98:
      (*pcVar8)(puVar5,puVar6,uVar7);
      return iVar15;
    }
    iVar15 = FUN_1012197a(param_1,local_40);
    if (iVar15 != 1) {
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return iVar15;
      }
      pcVar8 = *(code **)(*param_1 + 0xc);
      if (pcVar8 == (code *)0x0) {
        return iVar15;
      }
      uVar7 = 0x458;
      puVar5 = PTR_s_Error___s__d_switch_page_mapping_100803d0;
      puVar6 = PTR_s_FTL_LogicPageWrite_100803cc;
      goto LAB_1007fe98;
    }
    iVar15 = FUN_10121d6e(param_1,local_3e,local_44,0x77);
    if (iVar15 != 1) {
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return iVar15;
      }
      pcVar8 = *(code **)(*param_1 + 0xc);
      if (pcVar8 == (code *)0x0) {
        return iVar15;
      }
      uVar7 = 0x460;
      puVar5 = PTR_s_Error___s__d_get_log_page_to_wri_100803d4;
      puVar6 = PTR_s_FTL_LogicPageWrite_100803cc;
      goto LAB_1007fe98;
    }
    FUN_10121d3e(param_1,local_40,piVar11 + 0x76c);
    *(undefined2 *)((int)piVar11 + 0x10fa) =
         *(undefined2 *)(*(int *)(piVar11[0x1d] + 0xc) + piVar11[0x76c] * 8 + 2);
    FUN_1007fc00(param_1);
  }
  *(ushort *)(piVar11 + 0x43f) = (ushort)(((uint)local_44[0] << 0x14) >> 0x14);
  iVar15 = FUN_10121d6e(param_1,local_3e,local_44,0x72);
  if (iVar15 == 1) {
    *(ushort *)((int)piVar11 + 0x10ee) = local_44[0] & 0xfff;
    iVar15 = 0x10fa;
  }
  else {
    *(ushort *)((int)piVar11 + 0x10ee) = local_3e;
    iVar15 = 0x10f8;
  }
  *(undefined2 *)(piVar11 + 0x43c) = *(undefined2 *)((int)piVar11 + iVar15);
  puVar14 = (undefined1 *)piVar11[0x1d];
  if ((*(short *)(*(int *)(puVar14 + 0xc) + piVar11[0x76c] * 8 + 4) == -1) &&
     ((short)piVar11[0x43f] != 0)) {
    *(undefined2 *)(piVar11 + 0x769) = 0xffff;
    FUN_1011ea48((int)piVar11 + 0xc6,0xff,
                 (uint)*(byte *)(*piVar11 + 0xb) * (uint)*(byte *)(*piVar11 + 10) * 0x200);
    FUN_10120a74(param_1,(int)&local_37 + 3,*puVar14,*(ushort *)((int)piVar11 + 0x10fa) & 0xfff,0);
    uVar4 = (uint)*(byte *)(*piVar11 + 10) * (uint)*(byte *)(*piVar11 + 0xb);
    if (uVar4 == 0x20) {
      local_2f = (undefined1 *)0xffffffff;
    }
    else {
      local_2f = (undefined1 *)((1 << (uVar4 & 0xff)) - 1);
    }
    piVar9 = piVar11 + 0x768;
    local_27 = SUB41(piVar9,0);
    uStack_26 = (undefined1)((uint)piVar9 >> 8);
    uStack_25 = (undefined1)((uint)piVar9 >> 0x10);
    uStack_24._0_1_ = (undefined1)((uint)piVar9 >> 0x18);
    local_2b = (int)piVar11 + 0xc6;
    FUN_1007e498(param_1,(int)&local_37 + 3);
  }
  *(short *)(*(int *)(piVar11[0x1d] + 0xc) + piVar11[0x76c] * 8 + 4) = (short)piVar11[0x43f];
  piVar11[0x440] = 0;
LAB_10080004:
  *(undefined1 *)(piVar11 + 0x43a) = 0x77;
  if (param_3 != 0) {
    uVar4 = (uint)*(byte *)(*piVar11 + 10) * (uint)*(byte *)(*piVar11 + 0xb);
    if (uVar4 == 0x20) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (1 << (uVar4 & 0xff)) - 1;
    }
    if (uVar4 != param_3) {
      FUN_10120a74(param_1,(int)&local_37 + 3,*(undefined1 *)piVar11[0x1d],
                   *(ushort *)(piVar11 + 0x43c) & 0xfff,*(undefined2 *)((int)piVar11 + 0x10ee));
      uVar4 = CONCAT13(uStack_39,CONCAT21(uStack_3b,local_3c));
      uVar12 = (uint)*(byte *)(*piVar11 + 0xb);
      uVar13 = uVar12 * *(byte *)(*piVar11 + 10);
      if (uVar13 == 0x20) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = (1 << (uVar13 & 0xff)) - 1;
      }
      local_2f = (undefined1 *)(uVar4 ^ uVar13);
      if ((uVar4 & uVar13) == 0) {
        if (uVar12 == 0x20) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (1 << uVar12) - 1;
        }
        local_2f = (undefined1 *)((uint)local_2f ^ uVar4);
        uVar13 = uVar13 ^ uVar4;
      }
      local_3c = (undefined1)uVar13;
      uStack_3b = (undefined2)(uVar13 >> 8);
      uStack_39 = (undefined1)(uVar13 >> 0x18);
      local_27 = 0;
      uStack_26 = 0;
      uStack_25 = 0;
      uStack_24 = uStack_24 & 0xffffff00;
      for (uVar4 = 0; (1 << (uVar4 & 0xff) & param_3) != 0; uVar4 = uVar4 + 1) {
      }
      local_2b = param_4 + uVar4 * 0x200;
      FUN_1007e320(param_1,(int)&local_37 + 3);
    }
    puVar14 = (undefined1 *)piVar11[0x1d];
    uVar4 = piVar11[0x76c];
    uVar1 = *(ushort *)(*(int *)(puVar14 + 0xc) + uVar4 * 8 + 4);
    if (uVar1 == 0) {
      *(ushort *)((int)piVar11 + (uint)(byte)puVar14[1] * 2 + 0x10ca) =
           (ushort)(1 << (uVar4 & 0xff)) |
           *(ushort *)((int)piVar11 + (uint)(byte)puVar14[1] * 2 + 0x10ca);
    }
    if (uVar1 != local_3e) {
      *(ushort *)((int)piVar11 + (uint)(byte)puVar14[1] * 2 + 0x10ca) =
           *(ushort *)((int)piVar11 + (uint)(byte)puVar14[1] * 2 + 0x10ca) &
           ~(ushort)(1 << (uVar4 & 0xff));
    }
    *(ushort *)(piVar11 + 0x769) = local_3e;
    if ((short)piVar11[0x43f] != 0) {
      *(undefined1 *)((int)piVar11 + 0x1da3) = 0x55;
    }
    FUN_10120a74(param_1,(int)&local_37 + 3,*puVar14,*(ushort *)((int)piVar11 + 0x10fa) & 0xfff,
                 (short)piVar11[0x43f]);
    uVar4 = (uint)*(byte *)(*piVar11 + 0xb);
    bVar16 = uVar4 == 0x20;
    local_2f = (undefined1 *)0x0;
    uVar12 = (uint)!bVar16;
    if (bVar16) {
      uVar12 = 0xffffffff;
    }
    if (!bVar16) {
      uVar12 = uVar12 << uVar4;
    }
    uVar4 = uVar4 * *(byte *)(*piVar11 + 10);
    uVar13 = CONCAT13(uStack_39,CONCAT21(uStack_3b,local_3c));
    if (!bVar16) {
      uVar12 = uVar12 - 1;
    }
    if ((uVar13 & uVar12) != 0) {
      local_2f = (undefined1 *)uVar12;
    }
    if (uVar4 == 0x20) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (1 << (uVar4 & 0xff)) - 1;
    }
    if ((uVar13 & (uVar12 ^ uVar4)) != 0) {
      local_2f = (undefined1 *)(uVar12 ^ uVar4 | (uint)local_2f);
    }
    piVar9 = piVar11 + 0x768;
    local_27 = SUB41(piVar9,0);
    uStack_26 = (undefined1)((uint)piVar9 >> 8);
    uStack_25 = (undefined1)((uint)piVar9 >> 0x10);
    uStack_24._0_1_ = (undefined1)((uint)piVar9 >> 0x18);
    local_2b = param_4;
    iVar15 = FUN_1007e498(param_1,(int)&local_37 + 3);
    if (iVar15 == 0) {
      return 0;
    }
    uVar4 = (uint)local_2f | piVar11[0x440];
    piVar11[0x440] = uVar4;
    if (*(byte *)(*piVar11 + 0xb) == 0x20) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (1 << (uint)*(byte *)(*piVar11 + 0xb)) - 1;
    }
    if ((uVar4 & uVar12) == 0) {
      FUN_10121c28(param_1);
    }
    if ((*(ushort *)(*(int *)(piVar11[0x23] + 8) + (uint)local_3e * 2) & 0xfff) == 0xfff) {
      iVar15 = *(int *)(piVar11[0x1d] + 0xc) + piVar11[0x76c] * 8;
      *(short *)(iVar15 + 6) = *(short *)(iVar15 + 6) + 1;
    }
    FUN_10121e0c(param_1,(uint)local_3e,(short)piVar11[0x43f]);
  }
  *(ushort *)(piVar11 + 0x43b) = local_3e;
  if (param_3 == 0) {
    param_2 = param_2 - 1;
  }
  piVar11[0x43d] = param_2;
  FUN_10121554(param_1);
  FUN_10121a18(param_1);
  return 1;
}

