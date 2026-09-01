/* FUN_1003172c @ 0x1003172c */

uint FUN_1003172c(uint param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = *DAT_100317f0;
  uVar6 = *DAT_100317f4;
  uVar7 = ((int)PTR_DAT_100317f8 - (int)PTR_DAT_100317fc) * 0x20 & 0xff00;
  if (uVar6 != 0) goto LAB_1003176a;
  uVar2 = uVar7 | 0xce0000;
  puVar5 = PTR_s_p_prompter_data_is_NULL_in_promp_10031800;
  do {
    FUN_100a5b78(uVar2 | 0x11,PTR_s_prompter_get_file_name_from_list_10031804,puVar5);
    while( true ) {
      if (*DAT_100317f0 == iVar4) {
        return uVar6;
      }
      param_1 = FUN_1013cdc0();
LAB_1003176a:
      if (*(int *)(uVar6 + 8) == 0) break;
      bVar1 = FUN_10126fd2(*(int *)(uVar6 + 8));
      if (param_1 < bVar1) {
        uVar6 = FUN_10034a08(param_1);
        if (uVar6 == 0) {
          uVar2 = uVar7 | 0xe60011;
          puVar5 = PTR_s_prompter_get_file_name_by_index_r_10031810;
        }
        else {
          iVar3 = FUN_1011ea10();
          if (iVar3 == 0) {
            FUN_100a5b78(uVar7 | 0xeb0011,PTR_s_prompter_get_file_name_from_list_10031804,
                         PTR_s_File_name_is_empty_for_index__d_10031814,param_1);
            goto LAB_1003179a;
          }
          uVar2 = uVar7 | 0xef0031;
          puVar5 = PTR_s_prompter_name_from_list_view__s_10031818;
          param_1 = uVar6;
        }
        FUN_100a5b78(uVar2,PTR_s_prompter_get_file_name_from_list_10031804,puVar5,param_1);
      }
      else {
        FUN_100a5b78(uVar7 | 0xda0012,PTR_s_prompter_get_file_name_from_list_10031804,
                     PTR_s_index__d_>__count__d_1003180c,param_1,(uint)bVar1);
LAB_1003179a:
        uVar6 = 0;
      }
    }
    uVar2 = uVar7 | 0xd30000;
    uVar6 = 0;
    puVar5 = PTR_s_data_>obj_list_is_NULL_10031808;
  } while( true );
}

