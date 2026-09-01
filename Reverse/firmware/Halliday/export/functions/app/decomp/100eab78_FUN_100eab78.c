/* FUN_100eab78 @ 0x100eab78 */

int FUN_100eab78(ushort *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  byte bVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  ushort *puVar17;
  int local_20;
  int local_1c;
  
  puVar17 = param_1;
  local_20 = param_3;
  local_1c = param_4;
  puVar5 = (uint *)FUN_10094254(0x60,PTR_s_lvgl_virtual_display_create_100ead6c,param_3,param_4,
                                param_1,param_2);
  if (puVar5 == (uint *)0x0) {
    FUN_10094174(3,PTR_s_WEST_TOPDIR_framework_display_lv_100ead74,0xa9,
                 PTR_s_lvgl_virtual_display_create_100ead6c,PTR_s_Failed_to_alloc_driver_100ead70);
  }
  else {
    FUN_10092c10();
    FUN_1009ae54(puVar5);
    puVar2 = PTR_s_lvgl_virtual_display_create_100ead6c;
    bVar16 = (DAT_100ead78 & *(uint *)(param_1 + 2)) != 0;
    bVar11 = (byte)puVar5[7] & 0xbf | bVar16 << 6;
    *(byte *)(puVar5 + 7) = bVar11;
    puVar6 = (undefined4 *)FUN_10094254(0x18,puVar2,bVar11,bVar16,puVar17,param_2);
    if (puVar6 == (undefined4 *)0x0) {
      FUN_10094174(3,PTR_s_WEST_TOPDIR_framework_display_lv_100ead74,0xba,
                   PTR_s_lvgl_virtual_display_create_100ead6c,DAT_100ead7c);
    }
    else {
      FUN_1011ea48(puVar6 + 1,0,0x14);
      if ((puVar5[7] & 0x40) == 0) {
        uVar7 = 4;
      }
      else {
        uVar7 = 5;
      }
      *puVar6 = param_1;
      puVar6[5] = puVar5;
      uVar7 = FUN_100e8ae8(uVar7,0);
      uVar10 = DAT_100ead80;
      puVar6[1] = uVar7;
      cVar1 = *(char *)(uVar10 + 0x10);
      puVar5[0x17] = (uint)puVar6;
      if (cVar1 == '\0') {
        uVar8 = FUN_100ed964();
        uVar14 = uVar8 >> 1 & 0xffffffc0;
        uVar15 = DAT_100ead88;
        uVar8 = DAT_100eadb8;
        if (uVar14 <= DAT_100ead84) {
          uVar15 = uVar14;
          uVar8 = uVar14 / 3;
        }
        local_20 = FUN_100ed95c();
        local_1c = local_20 + uVar15;
        FUN_1012a6f4(DAT_100ead80,&local_20,2,uVar8);
      }
      puVar5[6] = uVar10;
      FUN_1013ca1a(DAT_100ead8c,0,1);
      *puVar5 = (uint)*param_1;
      puVar5[1] = (uint)param_1[1];
      if ((param_1[0x1c] & 1) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = 0x5a;
      }
      if ((param_1[0x1c] & 2) == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = 0xb4;
      }
      bVar4 = FUN_100ea950(iVar9 + iVar13);
      bVar11 = (bVar4 & 3) << 4;
      bVar12 = bVar11;
      if ((bVar4 & 3) != 0) {
        bVar12 = 1;
      }
      *(byte *)(puVar5 + 7) = (byte)puVar5[7] & 0xcb | bVar11 | (bVar12 & 1) << 2;
      puVar5[8] = (uint)PTR_LAB_100ea9e0_1_100ead90;
      puVar5[0xd] = (uint)PTR_FUN_100ea9d0_1_100ead94;
      puVar5[0x10] = (uint)PTR_FUN_100ea8c8_1_100ead98;
      puVar5[0x11] = (uint)PTR_LAB_10138f18_1_100ead9c;
      iVar9 = FUN_1013938e();
      if (iVar9 == 0) {
        puVar5[9] = (uint)PTR_LAB_10138f7e_1_100eada0;
      }
      uVar10 = FUN_10094254(puVar5[0x16],PTR_s_lvgl_virtual_display_create_100ead6c);
      puVar5[0x13] = uVar10;
      if (uVar10 == 0) {
        FUN_10094174(3,PTR_s_WEST_TOPDIR_framework_display_lv_100ead74,0xdf,
                     PTR_s_lvgl_virtual_display_create_100ead6c,
                     PTR_s_Failed_to_allocate_dirver_ctx_100eada4);
      }
      else {
        (*(code *)puVar5[0x14])(puVar5,uVar10);
        iVar9 = FUN_10092c64(puVar5);
        if (iVar9 != 0) {
          FUN_10086c7c(iVar9,0);
          FUN_10086cd8(iVar9,(int)(((byte)puVar5[7] ^ 0x40) << 0x19) >> 0x1f & 0xff);
          FUN_1012b322(*(undefined4 *)(iVar9 + 4));
          FUN_10139136(param_1,0,PTR_FUN_100ea870_1_100eadac,iVar9);
          pcVar3 = DAT_100eadb0;
          FUN_1013915a(param_1,*(undefined1 *)(puVar5[6] + 0x10));
          if (*pcVar3 != '\0') {
            return iVar9;
          }
          *pcVar3 = '\x01';
          iVar13 = FUN_100e8b38();
          pcVar3[1] = iVar13 != 0;
          FUN_1013ca1a(pcVar3 + 0x18,0,1);
          FUN_10114438(pcVar3 + 8,DAT_100eadb4);
          return iVar9;
        }
        FUN_10094174(3,PTR_s_WEST_TOPDIR_framework_display_lv_100ead74,0xe7,
                     PTR_s_lvgl_virtual_display_create_100ead6c,
                     PTR_s_Failed_to_register_driver__100eada8);
        if ((code *)puVar5[0x15] != (code *)0x0) {
          (*(code *)puVar5[0x15])(puVar5,puVar5[0x13]);
        }
        FUN_10094268(puVar5[0x13],PTR_s_lvgl_virtual_display_create_100ead6c);
      }
      FUN_10094268(puVar5[0x17],PTR_s_lvgl_virtual_display_create_100ead6c);
    }
    FUN_10094268(puVar5,PTR_s_lvgl_virtual_display_create_100ead6c);
  }
  return 0;
}

