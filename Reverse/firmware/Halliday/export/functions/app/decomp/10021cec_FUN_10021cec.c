/* FUN_10021cec @ 0x10021cec */

void FUN_10021cec(undefined1 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_9c;
  undefined1 auStack_98 [124];
  int local_1c;
  
  puVar1 = PTR_DAT_10021e08;
  local_1c = *(int *)PTR_DAT_10021e04;
  local_9c = 0;
  FUN_1011ea48(auStack_98,0,0x7c,0);
  uVar5 = ((int)puVar1 - (int)PTR_DAT_10021e0c) * 0x20 & 0xff00;
  FUN_100a5b78(uVar5 | 0xa90031,PTR_s_parse_appnotify_gSetting_10021e18,
               PTR_s___func_____s_10150c9b_0x13_10021e10,PTR_s_parse_appnotify_gSetting_10021e14);
  if (param_1 != (undefined1 *)0x0) goto LAB_10021d4e;
  FUN_100a5b78(uVar5 | 0xac0031,PTR_s_parse_appnotify_gSetting_10021e18,
               PTR_s_ERROR__setting_is_a_NULL_pointer_10021e1c);
  uVar2 = 0xffffffff;
  while( true ) {
    if (*(int *)PTR_DAT_10021e04 == local_1c) break;
    FUN_1013cdc0(uVar2);
LAB_10021d4e:
    puVar1 = PTR_s_gAppnotifyCfg_10021e34;
    FUN_10118a1c(&local_9c,0x80,PTR_s__s__s_10021e24,PTR_s__NAND__SYSTEM_REMIND_CFG_10021e20,
                 PTR_s_gAppnotifyCfg_10021e34);
    iVar3 = FUN_1004108c(&local_9c);
    if (iVar3 == 0) {
      FUN_100a5b78(uVar5 | 0xb30031,PTR_s_parse_appnotify_gSetting_10021e18,
                   PTR_s_parse_appnotify_gSetting_File____10021e28,&local_9c);
      *param_1 = 2;
      uVar2 = 4;
      param_1[1] = 1;
      param_1[2] = 0;
      param_1[0x148] = 0;
    }
    else {
      iVar3 = FUN_100ed61c(2,0x400,PTR_s_parse_appnotify_gSetting_10021e14);
      if (iVar3 == 0) {
        FUN_100a5b78(uVar5 | 0xbb0031,PTR_s_parse_appnotify_gSetting_10021e18,
                     PTR_s_ERROR__Memory_allocation_failed_10021e2c);
        uVar2 = 0;
      }
      else {
        FUN_1011ea48(iVar3,0,0x400);
        iVar4 = FUN_10021bd0(puVar1,iVar3,0x400);
        if (iVar4 < 1) {
          FUN_101188d0(PTR_s_Read_file_failed__101507c7_0x13_10021e30);
          *param_1 = 2;
          param_1[1] = 1;
          param_1[2] = 0;
          param_1[0x148] = 0;
        }
        else {
          FUN_1011ea40(param_1,iVar3,0x28e);
        }
        FUN_100ed77c(2,iVar3);
        uVar2 = 0;
      }
    }
  }
  return;
}

