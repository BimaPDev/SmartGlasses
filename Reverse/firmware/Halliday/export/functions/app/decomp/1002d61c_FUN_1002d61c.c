/* FUN_1002d61c @ 0x1002d61c */

void FUN_1002d61c(uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *(int *)PTR_DAT_1002d88c;
  uVar8 = ((int)PTR_DAT_1002d890 - (int)PTR_DAT_1002d894) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_1002d898 | uVar8,PTR_s_Reminder_delete_1002d8a0,
               PTR_s_Reminder_delete_id___d_1002d89c,param_1);
  puVar1 = (undefined1 *)thunk_FUN_1009f30c(0x114,PTR_s_Reminder_delete_1002d8a4);
  puVar2 = puVar1;
  if (puVar1 != (undefined1 *)0x0) goto LAB_1002d67a;
  FUN_100a5b78(uVar8 | 0x2d80011,PTR_s_Reminder_delete_1002d8a0,
               PTR_s_Memory_allocation_error___d_1002d8a8,0x114);
LAB_1002d66a:
  if (*(int *)PTR_DAT_1002d88c == local_2c) {
    return;
  }
  puVar2 = (undefined1 *)FUN_1013cdc0();
LAB_1002d67a:
  FUN_1011ea48(puVar2,0,0x114);
  local_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  iVar3 = FUN_1006ba84(&local_38,PTR_s__NAND__SYSTEM_REMIND_remind_lib_1002d8ac,3);
  if (-1 < iVar3) {
    uVar10 = uVar8 | DAT_1002d900;
    uVar9 = 0;
    do {
      iVar3 = FUN_1006bd24(&local_38,uVar9 * 0x114,0);
      uVar11 = uVar9 + 1;
      if (iVar3 < 0) {
        FUN_100a5b78(DAT_1002d8b4 | uVar8,PTR_s_Reminder_delete_1002d8a0,DAT_1002d8b8,uVar9);
      }
      else {
        FUN_1011ea48(puVar1,0,0x114);
        iVar3 = FUN_1006bc84(&local_38,puVar1,0x114);
        if (iVar3 == 0x114) {
          puVar7 = puVar1 + 0x14;
          uVar4 = uVar9;
          puVar2 = puVar7;
          FUN_100a5b78(uVar10,PTR_s_Reminder_delete_1002d8a0,
                       PTR_s___d_read_remind_id__d__i__d__mat_1002d8cc,*puVar1,puVar1[1],uVar9,
                       puVar7);
          if ((byte)puVar1[1] == param_1) {
            FUN_100a5b78(uVar8 | 0x2f80032,PTR_s_Reminder_delete_1002d8a0,
                         PTR_s_Reminder_found_at_index__d_with_i_1002d8d0,uVar9,param_1,uVar4,puVar2
                        );
            FUN_1002cb88(puVar1,uVar9 & 0xff);
            uVar9 = (uint)(char)uVar11;
            uVar10 = uVar8 | DAT_1002d904;
            goto LAB_1002d76e;
          }
        }
        else {
          FUN_100a5b78(DAT_1002d8c4 | uVar8,PTR_s_Reminder_delete_1002d8a0,
                       PTR_s_File_read_error_at_index__d__ret_1002d8c8,uVar9,iVar3);
        }
      }
      uVar4 = DAT_1002d8c0;
      uVar6 = DAT_1002d8bc;
      uVar5 = param_1;
      uVar9 = uVar11;
    } while (uVar11 != 0x14);
    goto LAB_1002d6f2;
  }
  FUN_100a5b78(uVar8 | 0x2e00011,PTR_s_Reminder_delete_1002d8a0,PTR_s_File_open_error_1002d8b0);
  goto LAB_1002d6aa;
LAB_1002d76e:
  if (0x13 < (uVar9 & 0xff)) goto code_r0x1002d780;
  FUN_1011ea48(puVar1,0,0x114);
  iVar3 = FUN_1006bd24(&local_38,uVar9 * 0x114,0);
  uVar11 = DAT_1002d8dc;
  uVar4 = uVar9;
  if (iVar3 < 0) {
LAB_1002d7c6:
    FUN_100a5b78(uVar11 | uVar8,PTR_s_Reminder_delete_1002d8a0,DAT_1002d8b8,uVar4);
  }
  else {
    iVar3 = FUN_1006bc84(&local_38,puVar1,0x114);
    if (iVar3 == 0x114) {
      iVar3 = FUN_1006bd24(&local_38,uVar9 * 0x114 + -0x114,0);
      uVar11 = DAT_1002d8e0;
      uVar4 = uVar9 - 1;
      if (iVar3 < 0) goto LAB_1002d7c6;
      uVar11 = uVar9;
      puVar2 = puVar7;
      FUN_100a5b78(uVar10,PTR_s_Reminder_delete_1002d8a0,DAT_1002d8e4,*puVar1,puVar1[1],uVar9,puVar7
                  );
      iVar3 = FUN_1006bcd4(&local_38,puVar1,0x114);
      if (iVar3 != 0x114) {
        FUN_100a5b78(DAT_1002d8e8 | uVar8,PTR_s_Reminder_delete_1002d8a0,DAT_1002d8ec,uVar9 - 1,
                     iVar3,uVar11,puVar2);
      }
    }
    else {
      FUN_100a5b78(uVar8 | 0x3140012,PTR_s_Reminder_delete_1002d8a0,
                   PTR_s_File_read_error_at_index__d__ret_1002d8c8,uVar9,iVar3);
      FUN_1011ea48(puVar1,0,0x114);
      FUN_1006bcd4(&local_38,puVar1,0x114);
    }
  }
  uVar9 = uVar9 + 1;
  goto LAB_1002d76e;
code_r0x1002d780:
  FUN_1011ea48(puVar1,0,0x114);
  iVar3 = FUN_1006bd24(&local_38,0x147c,0);
  if (iVar3 < 0) {
    FUN_100a5b78(DAT_1002d8d4 | uVar8,PTR_s_Reminder_delete_1002d8a0,DAT_1002d8d8);
  }
  else {
    uVar5 = FUN_1006bcd4(&local_38,puVar1,0x114);
    uVar4 = DAT_1002d8f4;
    uVar6 = DAT_1002d8f0;
    if (uVar5 == 0x114) {
      uVar4 = DAT_1002d8fc;
      uVar6 = DAT_1002d8f8;
      uVar5 = param_1;
    }
LAB_1002d6f2:
    FUN_100a5b78(uVar4 | uVar8,PTR_s_Reminder_delete_1002d8a0,uVar6,uVar5);
  }
  FUN_1006bc30(&local_38);
LAB_1002d6aa:
  FUN_1012d1f4(puVar1);
  goto LAB_1002d66a;
}

