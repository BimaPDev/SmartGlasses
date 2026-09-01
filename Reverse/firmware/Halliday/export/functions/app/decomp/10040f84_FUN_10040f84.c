/* FUN_10040f84 @ 0x10040f84 */

void FUN_10040f84(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint unaff_r4;
  int unaff_r5;
  int unaff_r7;
  uint unaff_r8;
  undefined *unaff_r9;
  undefined *unaff_r10;
  undefined *unaff_r11;
  undefined4 local_13c;
  undefined4 uStack_138;
  char local_134;
  char local_133 [263];
  int local_2c;
  
  local_2c = *(int *)PTR_DAT_10041068;
  local_13c = 0;
  uStack_138 = 0;
  iVar1 = FUN_1006be64(&local_13c,param_1);
  if (iVar1 < 0) goto LAB_10041016;
  unaff_r5 = FUN_100ed61c(2,0x102,PTR_s_fs_clear_path_1004106c);
  if (unaff_r5 != 0) {
    unaff_r7 = 0x101;
    unaff_r4 = ((int)PTR_DAT_10041070 - (int)PTR_DAT_10041074) * 0x20 & 0xff00;
    unaff_r8 = unaff_r4 | 0x320031;
    unaff_r9 = PTR_s__s__s_10041084;
    unaff_r10 = PTR_s_delete_file__s_10041088;
    unaff_r11 = PTR_s_fs_clear_path_1004107c;
    do {
      unaff_r7 = unaff_r7 + -1;
      if (unaff_r7 == 0) goto LAB_10040ffa;
      iVar1 = FUN_1006c070(&local_13c,&local_134);
      if (iVar1 == 0) goto LAB_10041024;
      uVar2 = unaff_r4 | 0x240011;
      puVar3 = PTR_s_Unable_to_read_directory_10041078;
      while( true ) {
        FUN_100a5b78(uVar2,PTR_s_fs_clear_path_1004107c,puVar3);
LAB_10040ffa:
        FUN_100ed77c(2,unaff_r5);
        FUN_1006c184(&local_13c);
        FUN_1006c2a0(param_1);
LAB_10041016:
        if (*(int *)PTR_DAT_10041068 == local_2c) {
          return;
        }
        FUN_1013cdc0();
LAB_10041024:
        if (local_133[0] != '\0') break;
        uVar2 = unaff_r4 | 0x290031;
        puVar3 = PTR_s_scan_finish_of_this_directory____10041080;
      }
      if (local_134 == '\0') {
        FUN_10118a84(unaff_r5,unaff_r9,param_1,local_133);
        FUN_100a5b78(unaff_r8,unaff_r11,unaff_r10,unaff_r5);
        FUN_1006c2a0(unaff_r5);
      }
    } while( true );
  }
  FUN_1006c184(&local_13c);
  goto LAB_10041016;
}

