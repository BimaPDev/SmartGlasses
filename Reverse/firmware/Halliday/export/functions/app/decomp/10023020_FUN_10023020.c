/* FUN_10023020 @ 0x10023020 */

int FUN_10023020(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_174;
  undefined4 uStack_170;
  char local_16c;
  char local_16b [263];
  undefined4 local_64;
  undefined1 auStack_60 [60];
  int local_24;
  
  local_24 = *(int *)PTR_DAT_10023198;
  FUN_1011ea48(&local_16c,0,0x108,0);
  local_64 = 0;
  FUN_1011ea48(auStack_60,0,0x3c);
  local_174 = 0;
  uStack_170 = 0;
  iVar4 = FUN_1006be64(&local_174,PTR_s__NAND__SYSTEM_REMIND_CFG_1002319c);
  iVar8 = 0;
  if (iVar4 == 0) goto LAB_1002308e;
  FUN_100a5b78(((int)PTR_DAT_100231a4 - (int)PTR_DAT_100231a0) * 0x20 & 0xff00U | 0x3380032,
               PTR_s_appnotify_del_allCfg_100231ac,PTR_s_Failed_to_open_directory___s___e_100231a8,
               PTR_s__NAND__SYSTEM_REMIND_CFG_1002319c,iVar4);
  do {
    iVar8 = -1;
    while( true ) {
      if (*(int *)PTR_DAT_10023198 == local_24) {
        return iVar8;
      }
      FUN_1013cdc0();
LAB_1002308e:
      iVar4 = FUN_100ed61c(2,0x1000,PTR_s_appnotify_del_allCfg_100231b0);
      if (iVar4 == 0) break;
      FUN_1011ea48(iVar4,iVar8,0x1000);
      uVar9 = ((int)PTR_DAT_100231a4 - (int)PTR_DAT_100231a0) * 0x20 & 0xff00;
      FUN_100a5b78(DAT_100231b4 | uVar9,PTR_s_appnotify_del_allCfg_100231ac,DAT_100231b8,
                   PTR_s__NAND__SYSTEM_REMIND_CFG_1002319c);
      puVar7 = PTR_s__File___s__size___d_bytes__100231d8;
      while (iVar5 = FUN_1006c070(&local_174,&local_16c), iVar5 == 0) {
        if (local_16b[0] == '\0') goto LAB_100230ee;
        if (local_16c == '\0') {
          FUN_100a5b78(uVar9 | 0x3540032,PTR_s_appnotify_del_allCfg_100231ac,puVar7,local_16b,0x101)
          ;
          FUN_1011ea40(iVar4 + iVar8 * 0x40,local_16b,0x101);
          iVar8 = iVar8 + 1;
        }
      }
      FUN_100a5b78(DAT_100231bc | uVar9,PTR_s_appnotify_del_allCfg_100231ac,DAT_100231c0,iVar5);
LAB_100230ee:
      FUN_1006c184(&local_174);
      FUN_100a5b78(DAT_100231c4 | uVar9,PTR_s_appnotify_del_allCfg_100231ac,
                   PTR_s_Total_files_in_directory___s_____100231c8,
                   PTR_s__NAND__SYSTEM_REMIND_CFG_1002319c,iVar8);
      uVar3 = DAT_100231e0;
      uVar2 = DAT_100231dc;
      for (iVar5 = 0; (iVar5 != iVar8 && (iVar5 != 0x40)); iVar5 = iVar5 + 1) {
        FUN_10118a1c(&local_64,0x40,PTR_s__s__s_100231cc,PTR_s__NAND__SYSTEM_REMIND_CFG_1002319c,
                     iVar4 + iVar5 * 0x40);
        iVar6 = FUN_1006c2a0(&local_64);
        puVar7 = PTR_s_Delete__File___s___>failed_100231d4;
        uVar1 = uVar2;
        if (iVar6 == 0) {
          puVar7 = PTR_s_Delete__File___s___>success_100231d0;
          uVar1 = uVar3;
        }
        FUN_100a5b78(uVar9 | uVar1,PTR_s_appnotify_del_allCfg_100231ac,puVar7,&local_64);
      }
      FUN_100ed77c(2,iVar4);
    }
    FUN_1006c184(&local_174);
  } while( true );
}

