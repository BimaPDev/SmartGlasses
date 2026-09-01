/* FUN_1002222c @ 0x1002222c */

void FUN_1002222c(undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  
  iVar1 = *(int *)PTR_DAT_10022350;
  uVar2 = ((int)PTR_DAT_10022354 - (int)PTR_DAT_10022358) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_10022360 | uVar2,DAT_10022364,PTR_s_gAppCfg_gNoteStyle____d_1002235c,*param_1);
  FUN_100a5b78(uVar2 | 0x1860031,DAT_10022364,DAT_10022368,param_1[1]);
  FUN_100a5b78(DAT_1002236c | uVar2,DAT_10022364,PTR_s_gAppCfg_gPin_kw_len____d_10022370,param_1[2])
  ;
  iVar4 = 0;
  puVar3 = param_1 + 4;
  uVar5 = uVar2 | DAT_10022380;
  puVar8 = PTR_s_len____d_1002237c;
  do {
    if ((int)(uint)(byte)param_1[2] <= iVar4) {
      FUN_100a5b78(uVar2 | 0x1920031,DAT_10022364,PTR_s_gAppCfg_gFilter_kw_len____d_10022374,
                   param_1[0x148]);
      puVar3 = param_1 + 0x14a;
      uVar5 = uVar2 | DAT_10022384;
      for (iVar4 = 0; iVar4 < (int)(uint)(byte)param_1[0x148]; iVar4 = iVar4 + 1) {
        FUN_100a5b78(uVar2 | 0x1960031,DAT_10022364,PTR_s_len____d_1002237c,puVar3[-1]);
        puVar8 = PTR_s_kw_i_____02x_10022378;
        puVar7 = puVar3;
        for (iVar6 = 0; iVar6 < (int)(uint)(byte)puVar3[-1]; iVar6 = iVar6 + 1) {
          FUN_100a5b78(uVar5,DAT_10022364,puVar8,*puVar7);
          puVar7 = puVar7 + 1;
        }
        puVar3 = puVar3 + 0x41;
      }
      if (*(int *)PTR_DAT_10022350 == iVar1) {
        return;
      }
      FUN_1013cdc0();
    }
    FUN_100a5b78(uVar5,DAT_10022364,puVar8,puVar3[-1]);
    puVar7 = puVar3;
    for (iVar6 = 0; iVar6 < (int)(uint)(byte)puVar3[-1]; iVar6 = iVar6 + 1) {
      FUN_100a5b78(uVar2 | 0x18e0031,DAT_10022364,PTR_s_kw_i_____02x_10022378,*puVar7);
      puVar7 = puVar7 + 1;
    }
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 0x41;
  } while( true );
}

