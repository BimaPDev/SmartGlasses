/* FUN_100293f8 @ 0x100293f8 */

uint FUN_100293f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  
  pbVar2 = DAT_1002947c;
  iVar7 = *DAT_10029478;
  iVar3 = FUN_1000f6f0();
  if (iVar3 == 0) goto LAB_1002944a;
  uVar4 = (**(code **)(*(int *)(PTR_DAT_10029480 + 0x30) + 0x1c))();
  if (*pbVar2 == uVar4) goto LAB_1002943a;
  uVar5 = ((int)PTR_DAT_10029488 - (int)PTR_DAT_10029484) * 0x20 & 0xff00U | 0x1820000;
  puVar6 = PTR_s_bt_call_volume_updata__d_1002948c;
  do {
    FUN_100a5b78(uVar5 | 0x31,PTR_s__volume_get_10029490,puVar6,uVar4,param_1,iVar7,param_3);
LAB_1002943a:
    do {
      piVar1 = DAT_10029478;
      *pbVar2 = (byte)uVar4;
      if (*piVar1 == iVar7) {
        return uVar4;
      }
      FUN_1013cdc0();
LAB_1002944a:
      uVar4 = (**(code **)(PTR_DAT_10029494 + 0x24))();
    } while (*pbVar2 == uVar4);
    uVar5 = ((int)PTR_DAT_10029488 - (int)PTR_DAT_10029484) * 0x20 & 0xff00U | 0x18a0000;
    puVar6 = PTR_s_bt_music_volume_updata__d_10029498;
  } while( true );
}

