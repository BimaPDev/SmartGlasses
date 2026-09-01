/* FUN_10022060 @ 0x10022060 */

void FUN_10022060(int param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_r3;
  uint uVar8;
  int iVar9;
  int local_13c;
  int iStack_138;
  char local_134;
  char local_133 [263];
  int local_2c;
  
  puVar1 = PTR_DAT_100221fc;
  iVar9 = 0;
  local_2c = *(int *)PTR_DAT_100221f8;
  local_13c = 0;
  iStack_138 = 0;
  FUN_1011ea48(&local_134,0,0x108,0);
  uVar8 = ((int)puVar1 - (int)PTR_DAT_10022200) * 0x20 & 0xff00;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (int *)0x0)) goto LAB_100220c2;
  FUN_100a5b78(uVar8 | 0x13c0031,PTR_s_read_appnotifycfg_dir_10022208,
               PTR_s_ERROR__maybe_a_NULL_point__data__10022204);
  uVar4 = 0;
  do {
    while( true ) {
      if (*(int *)PTR_DAT_100221f8 == local_2c) {
        return;
      }
      FUN_1013cdc0(uVar4);
      param_2 = extraout_r3;
LAB_100220c2:
      local_13c = iVar9;
      iStack_138 = iVar9;
      iVar9 = FUN_1006be64(&local_13c,param_2);
      if (iVar9 == 0) break;
      FUN_100a5b78(uVar8 | 0x1440032,PTR_s_read_appnotifycfg_dir_10022208,
                   PTR_s_Failed_to_open_directory___s___e_1002220c,param_2,iVar9);
LAB_100220e8:
      uVar4 = 0xffffffff;
    }
    FUN_100a5b78(uVar8 | 0x1480031,PTR_s_read_appnotifycfg_dir_10022208,
                 PTR_s_Directory___s__contains__10022210,param_2);
    iVar5 = FUN_100ed61c(2,0x1000,PTR_s_read_appnotifycfg_dir_10022214);
    if (iVar5 == 0) {
      FUN_1006c184(&local_13c);
      goto LAB_100220e8;
    }
    FUN_1011ea48(iVar5,0,0x1000);
    while (iVar6 = FUN_1006c070(&local_13c,&local_134), iVar6 == 0) {
      if (local_133[0] == '\0') goto LAB_10022140;
      if (local_134 == '\0') {
        FUN_100a5b78(uVar8 | 0x1600033,PTR_s_read_appnotifycfg_dir_10022208,
                     PTR_s_appnotifycfg__File__d___s__size__10022224,iVar9,local_133,0x101);
        FUN_1011ea40(iVar5 + iVar9 * 0x40,local_133,0x101);
        iVar9 = iVar9 + 1;
      }
    }
    FUN_100a5b78(DAT_10022218 | uVar8,PTR_s_read_appnotifycfg_dir_10022208,
                 PTR_s_Error_reading_directory__error____1002221c,iVar6);
LAB_10022140:
    FUN_1006c184(&local_13c);
    FUN_100a5b78(uVar8 | 0x1660031,PTR_s_read_appnotifycfg_dir_10022208,
                 PTR_s_appnotifycfg_file_count___d_10022220,iVar9);
    puVar1 = PTR_s_appnotifycfg_appcount___d_aApple_10022228;
    uVar4 = 0;
    for (iVar6 = 0; (iVar9 != iVar6 && (iVar6 != 0x40)); iVar6 = iVar6 + 1) {
      iVar7 = iVar5 + iVar6 * 0x40;
      cVar2 = FUN_10020860(iVar7);
      if ((byte)(cVar2 - 1U) < 0x19) {
        uVar3 = FUN_10021e38(param_1,iVar7);
        uVar4 = uVar4 + 1 & 0xff;
        *param_3 = *param_3 + (uint)uVar3;
        param_1 = param_1 + (uint)uVar3;
        FUN_10119dc2(puVar1,uVar4);
      }
    }
    FUN_100ed77c(2,iVar5);
    uVar8 = uVar4;
  } while( true );
}

