/* FUN_10027884 @ 0x10027884 */

uint FUN_10027884(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [60];
  int local_24;
  
  local_24 = *(int *)PTR_DAT_10027a7c;
  uVar6 = ((int)PTR_DAT_10027a80 - (int)PTR_DAT_10027a84) * 0x20 & 0xff00;
  if (param_1 == 0) {
    FUN_100a5b78(uVar6 | 0x750011,PTR_s_Records_add_10027a8c,PTR_s_Records_add_data_is_NULL_10027a88
                );
  }
  else {
    local_70 = 0;
    uStack_6c = 0;
    local_68 = 0;
    local_64 = 0;
    FUN_1011ea48(auStack_60,0,0x3c);
    uVar5 = FUN_100275d0();
    FUN_100a5b78(uVar6 | 0x7e0031,PTR_s_Records_add_10027a8c,
                 PTR_s_Records_add_records_num_____d_10027a90,uVar5);
    if ((int)uVar5 < 0) goto LAB_10027a66;
    uVar1 = FUN_1011ea10(param_1 + 0x1d);
    FUN_10047ff4(0,param_1 + 0x1d,uVar1);
    iVar2 = FUN_1006ba84(&local_70,PTR_s__NAND__SYSTEM_CALL_records_lib_10027a94,3);
    if (iVar2 < 0) {
      FUN_100a5b78(uVar6 | 0x870012,PTR_s_Records_add_10027a8c,
                   PTR_s_fs_open__s_error_ret__d_10027a98,
                   PTR_s__NAND__SYSTEM_CALL_records_lib_10027a94,iVar2);
    }
    else {
      if (uVar5 == 0) {
        iVar2 = 0;
LAB_100279c2:
        FUN_1006bd24(&local_70,0x40,0);
        iVar7 = FUN_1006bcd4(&local_70,param_1,0x5a);
        if (iVar7 < 0) {
          uVar6 = uVar6 | 0xaa0000;
          puVar4 = PTR_s_fs_write_error_ret__d_10027aa8;
        }
        else {
          if ((int)uVar5 < 0x1e) {
            uVar5 = uVar5 + 1;
          }
          local_64 = CONCAT31(local_64._1_3_,(char)uVar5);
          FUN_100a5b78(uVar6 | 0xb30031,PTR_s_Records_add_10027a8c,
                       PTR_s_Records_add_records_count_____d_10027aac,uVar5 & 0xff);
          FUN_1006bd24(&local_70,0);
          iVar7 = FUN_1006bcd4(&local_70,&local_64,0x40);
          if (iVar7 < 0) {
            uVar6 = uVar6 | 0xb90000;
            puVar4 = PTR_s_fs_write_header_error_ret__d_10027ab0;
          }
          else {
            iVar7 = FUN_1006be14(&local_70);
            if (-1 < iVar7) {
              FUN_100a5b78(uVar6 | 0xc40031,PTR_s_Records_add_10027a8c,
                           PTR_s_Records_add_success_count_____d_10027ab8,uVar5);
              if (iVar2 != 0) {
                FUN_100ed77c(2,iVar2);
              }
              FUN_1006bc30(&local_70);
              uVar5 = 0;
              goto LAB_10027a66;
            }
            uVar6 = uVar6 | 0xc00000;
            puVar4 = PTR_s_fs_sync_error_ret__d_10027ab4;
          }
        }
        FUN_100a5b78(uVar6 | 0x11,PTR_s_Records_add_10027a8c,puVar4);
        if (iVar2 != 0) {
LAB_1002798c:
          FUN_100ed77c(2,iVar2);
        }
      }
      else {
        iVar7 = uVar5 * 0x5a;
        iVar2 = FUN_100ed61c(2,iVar7,PTR_s_Records_add_10027a9c);
        if (iVar2 != 0) {
          FUN_1011ea48(iVar2,0,iVar7);
          FUN_1006bd24(&local_70,0x40,0);
          iVar3 = FUN_1006bc84(&local_70,iVar2,iVar7);
          if (iVar3 < 0) {
            FUN_100a5b78(uVar6 | 0x990012,PTR_s_Records_add_10027a8c,
                         PTR_s_fs_read__s_error_ret__d_10027aa4,
                         PTR_s__NAND__SYSTEM_CALL_records_lib_10027a94,iVar3);
          }
          else {
            FUN_1006bd24(&local_70,0x9a,0);
            iVar7 = FUN_1006bcd4(&local_70,iVar2,iVar7);
            if (-1 < iVar7) goto LAB_100279c2;
            FUN_100a5b78(uVar6 | 0xa10011,PTR_s_Records_add_10027a8c,
                         PTR_s_fs_write_error_ret__d_10027aa8);
          }
          goto LAB_1002798c;
        }
        FUN_100a5b78(uVar6 | 0x900011,PTR_s_Records_add_10027a8c,
                     PTR_s_records_buf_malloc_failed_10027aa0);
      }
      FUN_1006bc30(&local_70);
    }
  }
  uVar5 = 0xffffffff;
LAB_10027a66:
  if (*(int *)PTR_DAT_10027a7c != local_24) {
    FUN_1013cdc0();
  }
  return uVar5;
}

