/* FUN_100227b4 @ 0x100227b4 */

undefined4 * FUN_100227b4(undefined4 *param_1,undefined1 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [60];
  int local_1c;
  
  local_1c = *(int *)PTR_DAT_100229d4;
  uVar6 = ((int)PTR_DAT_100229d8 - (int)PTR_DAT_100229dc) * 0x20 & 0xff00;
  FUN_100a5b78(uVar6 | 0x1d0032,PTR_s_appnotify_cfg_store_100229e0,
               PTR_s___func_____s__LINE_____d_100229e8,PTR_s_appnotify_cfg_store_100229e4,0x1d);
  local_5c = 0;
  FUN_1011ea48(auStack_58,0,0x3c);
  local_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  if ((param_2 != (undefined1 *)0x0) && (uVar7 = extraout_r1, param_1 != (undefined4 *)0x0))
  goto LAB_10022828;
  uVar1 = uVar6 | 0x250031;
  puVar4 = PTR_s_ERROR__maybe_a_NULL_point__data__100229ec;
  do {
    FUN_100a5b78(uVar1,PTR_s_appnotify_cfg_store_100229e0,puVar4);
    param_1 = (undefined4 *)0xffffffff;
    while( true ) {
      if (*(int *)PTR_DAT_100229d4 == local_1c) {
        return param_1;
      }
      FUN_1013cdc0();
      uVar7 = extraout_r1_00;
LAB_10022828:
      iVar2 = FUN_10113cfc(DAT_100229f0,uVar7,10000,0);
      if (iVar2 != 0) break;
      FUN_100a5b78(uVar6 | 0x2d0032,PTR_s_appnotify_cfg_store_100229e0,
                   PTR_s___func_____s__LINE_____d_100229e8,PTR_s_appnotify_cfg_store_100229e4,0x2d);
      iVar2 = FUN_1011ea18(param_1,PTR_s_gAppnotifyCfg_100229f8);
      if (iVar2 == 0) {
        FUN_100226d8(param_2);
      }
      else {
        FUN_100a5b78(uVar6 | 0x370037,PTR_s_appnotify_cfg_store_100229e0,
                     PTR_s_appnotify_cfg_store__s_appSettin_10022a10,param_1,*param_2,param_2[0x41],
                     param_2[0x42],param_2[0x188],param_2[0x2ce],param_2[0x414]);
      }
      FUN_10118a1c(&local_5c,0x40,PTR_s__s__s_10022a00,PTR_s__NAND__SYSTEM_REMIND_CFG_100229fc,
                   param_1);
      iVar2 = FUN_1004108c(&local_5c);
      if (iVar2 == 0) {
LAB_100228b8:
        puVar5 = &local_5c;
        uVar7 = 0x4a;
        FUN_100a5b78(uVar6 | 0x4a0033,PTR_s_appnotify_cfg_store_100229e0,
                     PTR_s___func_____s__LINE_____d__cfg_pa_10022a04,
                     PTR_s_appnotify_cfg_store_100229e4,0x4a,puVar5);
        iVar2 = FUN_1006ba84(&local_68,&local_5c,0x13);
        if (iVar2 < 0) {
          FUN_1006c1dc(PTR_s__NAND__SYSTEM_REMIND_CFG_100229fc);
          param_1 = (undefined4 *)FUN_1006ba84(&local_68,&local_5c,0x13);
          if ((int)param_1 < 0) {
            puVar3 = &local_5c;
            uVar1 = uVar6 | 0x520000;
            puVar4 = PTR_s_File___s__open_failed__10022a0c;
            goto LAB_1002293c;
          }
        }
        FUN_100a5b78(uVar6 | 0x570032,PTR_s_appnotify_cfg_store_100229e0,
                     PTR_s___func_____s__LINE_____d_100229e8,PTR_s_appnotify_cfg_store_100229e4,0x57
                     ,puVar5);
        FUN_1006bdc4(&local_68,0x800);
        FUN_1006bd24(&local_68,0);
        param_1 = (undefined4 *)FUN_1006bcd4(&local_68,param_2,param_3);
        if ((int)param_1 < 0) {
          uVar1 = uVar6 | 0x5e0000;
          puVar4 = PTR_s_Failed_to_write_to_file___s___er_10022a1c;
          puVar5 = &local_5c;
          puVar3 = param_1;
        }
        else {
          puVar3 = (undefined4 *)0x61;
          uVar1 = uVar6 | 0x610000;
          puVar4 = PTR_s___func_____s__LINE_____d_100229e8;
          puVar5 = (undefined4 *)PTR_s_appnotify_cfg_store_100229e4;
        }
        FUN_100a5b78(uVar1 | 0x32,PTR_s_appnotify_cfg_store_100229e0,puVar4,puVar5,puVar3);
      }
      else {
        puVar5 = &local_5c;
        uVar7 = 0x3d;
        FUN_100a5b78(uVar6 | 0x3d0033,PTR_s_appnotify_cfg_store_100229e0,
                     PTR_s___func_____s__LINE_____d__cfg_pa_10022a04,
                     PTR_s_appnotify_cfg_store_100229e4,0x3d,puVar5);
        puVar3 = (undefined4 *)FUN_1006c2a0(&local_5c);
        if (puVar3 == (undefined4 *)0x0) {
          FUN_100a5b78(uVar6 | 0x410031,PTR_s_appnotify_cfg_store_100229e0,
                       PTR_s_File_deleted_successfully__10022a08);
          goto LAB_100228b8;
        }
        uVar1 = uVar6 | 0x450000;
        puVar4 = PTR_s_Failed_to_delete_file__error___d_10022a14;
        param_1 = puVar3;
LAB_1002293c:
        FUN_100a5b78(uVar1 | 0x31,PTR_s_appnotify_cfg_store_100229e0,puVar4,puVar3,uVar7,puVar5);
      }
      FUN_100a5b78(uVar6 | 0x630033,PTR_s_appnotify_cfg_store_100229e0,
                   PTR_s___func_____s__LINE_____d_ret_____10022a18,
                   PTR_s_appnotify_cfg_store_100229e4,99,param_1);
      FUN_1006be14(&local_68);
      FUN_1006bc30(&local_68);
      FUN_10021ba0();
    }
    uVar1 = uVar6 | 0x2a0011;
    puVar4 = PTR_s_appcfg_file_mutex_Deadlock_______100229f4;
  } while( true );
}

