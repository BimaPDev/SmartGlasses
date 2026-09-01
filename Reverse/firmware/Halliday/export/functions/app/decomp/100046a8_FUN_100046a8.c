/* FUN_100046a8 @ 0x100046a8 */

void FUN_100046a8(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined1 local_2a;
  int local_24;
  
  iVar11 = *DAT_10004974;
  local_24 = *(int *)PTR_DAT_1000497c;
  uVar9 = ((int)PTR_DAT_10004978 - DAT_10004970) * 0x20 & 0xff00;
  uVar10 = DAT_10004988;
  puVar7 = PTR_s_prompter_detail_start_autopager_10004984;
  puVar8 = PTR_s_p_prompter_data_is_NULL_in_promp_10004980;
  piVar12 = DAT_10004974;
  if (iVar11 != 0) goto LAB_100046e6;
LAB_100046d0:
  do {
    FUN_100a5b78(uVar10 | uVar9,puVar7,puVar8);
    while( true ) {
      while( true ) {
        if (*(int *)PTR_DAT_1000497c == local_24) {
          return;
        }
        FUN_1013cdc0();
LAB_100046e6:
        iVar1 = FUN_1011ea10(iVar11 + 0x170);
        uVar10 = DAT_10004990;
        puVar7 = PTR_s_prompter_detail_start_autopager_10004984;
        puVar8 = DAT_1000498c;
        if (iVar1 == 0) goto LAB_100046d0;
        FUN_100a5b78(uVar9 | 0x4d00031,PTR_s_prompter_detail_start_autopager_10004984,DAT_10004994,
                     iVar11 + 0x170);
        puVar8 = PTR_s_Setting_default_speed___d_1000499c;
        uVar10 = DAT_10004998;
        puVar7 = PTR_s_prompter_detail_start_autopager_10004984;
        if (*(int *)(iVar11 + 0x158) == 0) break;
        FUN_100a5b78(DAT_10004a84 | uVar9,DAT_10004a8c,DAT_10004a88);
        FUN_1012b350(*(undefined4 *)(iVar11 + 0x158));
        FUN_1012b32c(*(undefined4 *)(iVar11 + 0x158));
      }
      if (*(short *)(iVar11 + 0x16e) == 0) {
        *(undefined2 *)(iVar11 + 0x16e) = 0x104;
        FUN_100a5b78(uVar10 | uVar9,puVar7,puVar8);
      }
      uVar2 = FUN_100337e0();
      iVar1 = FUN_10094a1c(PTR_LAB_10033668_1_100049a0,uVar2,iVar11);
      *(int *)(iVar11 + 0x158) = iVar1;
      uVar10 = DAT_100049a8;
      puVar7 = PTR_s_prompter_detail_start_autopager_10004984;
      puVar8 = PTR_s_Failed_to_create_timer_for_auto_p_100049a4;
      if (iVar1 == 0) break;
      FUN_100a5b78(DAT_100049ac | uVar9,PTR_s_prompter_detail_start_autopager_10004984,DAT_100049b0,
                   *(undefined2 *)(iVar11 + 0x16e));
      FUN_100a5b78(DAT_100049b4 | uVar9,PTR_s_prompter_detail_start_autopager_10004984,
                   PTR_s_Initializing_content_for_auto_pa_100049b8);
      iVar11 = *piVar12;
      uVar10 = DAT_100049c4;
      puVar7 = PTR_s_prompter_detail_content_init_100049c0;
      puVar8 = PTR_s_p_prompter_data_is_NULL_in_promp_100049bc;
      if ((iVar11 == 0) ||
         (uVar10 = DAT_100049cc, puVar8 = DAT_100049c8, *(int *)(iVar11 + 0x14) == 0)) break;
      iVar13 = *(int *)(iVar11 + 0x168);
      FUN_100a5b78(DAT_100049d0 | uVar9,PTR_s_prompter_detail_content_init_100049c0,DAT_100049d4,
                   iVar13,*(undefined1 *)(iVar11 + 0x16c),iVar11 + 0x170);
      FUN_1011ea48(auStack_38,0,0x14);
      iVar1 = FUN_1003494c(*(undefined1 *)(iVar11 + 0x16c),auStack_38);
      if (iVar1 == 0) {
        FUN_100a5b78(DAT_100049d8 | uVar9,PTR_s_prompter_detail_content_init_100049c0,DAT_100049dc,
                     *(undefined1 *)(iVar11 + 0x16c),local_2a,local_34);
      }
      else {
        FUN_100a5b78(DAT_100049ec | uVar9,PTR_s_prompter_detail_content_init_100049c0,DAT_100049f0);
      }
      if (iVar13 == 0) {
        FUN_100a5b78(DAT_100049e0 | uVar9,PTR_s_prompter_detail_content_init_100049c0,DAT_100049e4);
        *(undefined4 *)(iVar11 + 0x168) = 0;
        *(undefined4 *)(iVar11 + 0x160) = 0;
      }
      piVar12 = (int *)(iVar11 + 0x271);
      iVar1 = FUN_1003304c(piVar12,iVar13);
      if (iVar1 == 0) {
        uVar9 = uVar9 | 0x4500011;
        puVar7 = PTR_s_prompter_detail_content_init_100049c0;
        uVar2 = DAT_100049e8;
LAB_10004802:
        FUN_100a5b78(uVar9,puVar7,uVar2,iVar13);
LAB_10004960:
        uVar2 = 0x35;
        uVar10 = *(uint *)(iVar11 + 0x14);
LAB_10004830:
        piVar3 = (int *)FUN_1004cf14(uVar2);
        uVar9 = uVar10;
LAB_10004a3a:
        FUN_10097998(uVar10,piVar3);
      }
      else {
        iVar1 = FUN_1011ea10(piVar12);
        if (iVar1 == 0) {
          FUN_100a5b78(DAT_100049f4 | uVar9,PTR_s_prompter_detail_content_init_100049c0,
                       PTR_s_Content_buffer_is_empty_for_page_100049f8,iVar13);
          uVar2 = 0x36;
          uVar10 = *(uint *)(iVar11 + 0x14);
          goto LAB_10004830;
        }
        iVar1 = FUN_10032df8();
        if (iVar1 != 0) {
          iVar1 = FUN_1011ea10(piVar12);
          if (iVar1 == 0) {
            uVar9 = DAT_10004a7c | uVar9;
            puVar7 = DAT_10004a74;
            uVar2 = DAT_10004a80;
            goto LAB_10004802;
          }
          FUN_100a5b78(DAT_10004a70 | uVar9,DAT_10004a74,DAT_10004a78,piVar12);
          uVar10 = *(uint *)(iVar11 + 0x14);
          piVar3 = piVar12;
          goto LAB_10004a3a;
        }
        iVar14 = iVar11 + 0xa71;
        FUN_1003304c(iVar14,iVar13 + 1);
        iVar1 = FUN_1011ea10(piVar12);
        if ((iVar1 == 0) || (iVar1 = FUN_1011ea10(iVar14), iVar1 == 0)) {
          iVar1 = FUN_1011ea10(piVar12);
          if (iVar1 == 0) {
            FUN_100a5b78(DAT_10004a18 | uVar9,PTR_s_prompter_detail_content_init_100049c0,
                         DAT_10004a1c,iVar13,iVar13 + 1);
            goto LAB_10004960;
          }
          FUN_100a5b78(DAT_10004a10 | uVar9,PTR_s_prompter_detail_content_init_100049c0,DAT_10004a14
                       ,piVar12);
LAB_1000491c:
          FUN_10097998(*(undefined4 *)(iVar11 + 0x14),piVar12);
        }
        else {
          FUN_100a5b78(uVar9 | 0x4600033,PTR_s_prompter_detail_content_init_100049c0,
                       PTR_s_>>>__s__text__s__s_100049fc,PTR_s_prompter_detail_content_init_100049c0
                       ,piVar12,iVar14);
          FUN_10097aec(*(undefined4 *)(iVar11 + 0x14),PTR_DAT_10004a00,piVar12,iVar14);
          iVar1 = FUN_1012691c(*(undefined4 *)(iVar11 + 0x14),0,0x57);
          if (iVar1 != 0) {
            iVar13 = *(int *)(iVar1 + 8);
            iVar1 = FUN_10126fae(*(undefined4 *)(iVar11 + 0x14));
            if ((iVar1 != 0) && (0 < iVar13)) {
              iVar1 = FUN_10125790();
              iVar4 = FUN_1011ea10(piVar12);
              iVar14 = FUN_1011ea10(iVar14);
              iVar5 = FUN_100348d0(*(undefined1 *)(iVar11 + 0x16c));
              if (iVar5 == 0) {
                uVar10 = 0xf;
              }
              else {
                uVar10 = (uint)*(ushort *)(iVar5 + 8);
              }
              uVar15 = FUN_10003a14((iVar4 + iVar14 + -1 + uVar10) / uVar10);
              FUN_10003b08((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_10004968,DAT_1000496c);
              uVar6 = FUN_100040b8();
              uVar16 = uVar6;
              FUN_100a5b78(DAT_10004a04 | uVar9,PTR_s_prompter_detail_content_init_100049c0,
                           DAT_10004a08,iVar4 + iVar14,uVar10,uVar6);
              uVar10 = (iVar1 + -0x3c) / iVar13 & 0xffff;
              if (uVar10 < uVar6) {
                FUN_100a5b78(uVar9 | 0x4800022,PTR_s_prompter_detail_content_init_100049c0,
                             DAT_10004a0c,uVar6,uVar10,uVar16);
                goto LAB_1000491c;
              }
            }
          }
        }
        FUN_1008a2b0(*(undefined4 *)(iVar11 + 0x14),0);
      }
    }
  } while( true );
}

