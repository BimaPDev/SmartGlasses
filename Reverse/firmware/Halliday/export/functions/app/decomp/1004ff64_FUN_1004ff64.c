/* FUN_1004ff64 @ 0x1004ff64 */

undefined4 FUN_1004ff64(int param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *extraout_r1;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined *puVar13;
  
  piVar1 = DAT_1005014c;
  iVar8 = 0;
  iVar5 = *(int *)PTR_DAT_10050150;
  uVar7 = ((int)PTR_DAT_10050154 - (int)PTR_DAT_10050158) * 0x20 & 0xff00;
  FUN_100a5b78(uVar7 | 0x390031,PTR_s_ble_add_stream_10050160,
               PTR_s_ble_add_stream_handle___p_1005015c,param_1);
  FUN_1011dbf4(DAT_10050164,0xffffffff);
  puVar13 = (undefined *)(uVar7 | 0x3c0032);
  piVar10 = piVar1;
  do {
    iVar6 = *piVar10;
    FUN_100a5b78(puVar13,PTR_s_ble_add_stream_10050160,PTR_s_ble_create_stream__d____p_10050168,
                 iVar8,iVar6);
    puVar2 = PTR_s_ble_add_stream_10050160;
    puVar4 = PTR_s_ble_add_stream_handle___p_1005015c;
    piVar12 = piVar10 + 1;
    if (*piVar10 == 0) {
      piVar1[iVar8] = param_1;
      FUN_100a5b78(uVar7 | 0x3f0031,puVar2,puVar4,param_1,iVar6);
      break;
    }
    iVar8 = iVar8 + 1;
    piVar10 = piVar12;
  } while (iVar8 != 5);
  FUN_1004f8bc(DAT_10050164);
  if (iVar8 == 5) {
    FUN_100a5b78(uVar7 | 0x460011,PTR_s_ble_add_stream_10050160,
                 PTR_s_Failed_to_add_stream_handle__p_10050178,param_1,iVar6);
    uVar11 = 0xfffffffb;
  }
  else {
    puVar3 = (undefined4 *)thunk_FUN_1009f30c(0x80,PTR_s_ble_stream_init_1005016c);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_1011ea48(puVar3,0,0x80);
      puVar3[1] = *(undefined4 *)(param_2 + 4);
      puVar3[2] = (uint)*(byte *)(param_2 + 8);
      puVar3[5] = *(undefined4 *)(param_2 + 0xc);
      puVar3[6] = *(undefined4 *)(param_2 + 0x10);
      puVar3[7] = *(undefined4 *)(param_2 + 0x14);
      puVar3[8] = *(undefined4 *)(param_2 + 0x18);
      puVar3[9] = *(undefined4 *)(param_2 + 0x1c);
      puVar3[0xc] = *(undefined4 *)(param_2 + 0x24);
      puVar3[0xd] = *(undefined4 *)(param_2 + 0x28);
      puVar3[10] = *(undefined4 *)(param_2 + 0x20);
      *(undefined2 *)(puVar3 + 0x1f) = *(undefined2 *)(param_2 + 0x2c);
      *(byte *)((int)puVar3 + 0x7e) =
           *(byte *)((int)puVar3 + 0x7e) & 0xfe | *(byte *)(param_2 + 0x2e) & 1;
      FUN_1013c856(puVar3 + 0xf);
      FUN_1013c856(puVar3 + 0x1a);
      FUN_1013ca1a(puVar3 + 0x14,0,1);
      puVar4 = PTR_LAB_1004fc70_1_10050188;
      iVar8 = puVar3[8];
      *(undefined4 **)(param_1 + 0x54) = puVar3;
      *(undefined **)(iVar8 + 8) = puVar4;
      *(undefined **)(*(int *)(puVar3[7] + 0xc) + 0x34) = PTR_FUN_1004fa28_1_1005018c;
      uVar11 = 0;
      *puVar3 = PTR_LAB_1004fe4c_1_10050190;
      FUN_100beebc(puVar3);
      piVar10 = piVar1;
      goto LAB_1005012e;
    }
    FUN_100a5b78(uVar7 | 0xf40011,PTR_s_ble_stream_init_10050174,
                 PTR_s_cache_stream_info_malloc_failed_10050170);
    uVar11 = 0xfffffff4;
  }
  puVar3 = (undefined4 *)0x0;
  FUN_1011dbf4(DAT_10050164,0xffffffff);
  piVar12 = (int *)(uVar7 | 0x530032);
  puVar4 = PTR_s_ble_remove_stream_1005017c;
  piVar9 = piVar1;
  puVar13 = PTR_s_ble_remove_stream__d____p_10050180;
  do {
    iVar6 = *piVar9;
    FUN_100a5b78(piVar12,puVar4,puVar13,puVar3,iVar6);
    puVar4 = PTR_s_ble_remove_stream_1005017c;
    piVar10 = piVar9 + 1;
    if (param_1 != *piVar9) goto LAB_1005013c;
    piVar1[(int)puVar3] = 0;
    iVar6 = 0;
    FUN_100a5b78(uVar7 | 0x560032,puVar4,PTR_s_ble_remove_stream__d____p_10050180,puVar3,0);
    do {
      FUN_1004f8bc(DAT_10050164);
      if (puVar3 == (undefined4 *)&DAT_00000005) {
        FUN_100a5b78(uVar7 | 0x5d0011,PTR_s_ble_remove_stream_1005017c,
                     PTR_s_Failed_to_remove_stream_handle___10050184,param_1,iVar6);
      }
LAB_1005012e:
      if (*(int *)PTR_DAT_10050150 == iVar5) {
        return uVar11;
      }
      FUN_1013cdc0();
      puVar4 = extraout_r1;
LAB_1005013c:
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      piVar9 = piVar10;
    } while (puVar3 == (undefined4 *)&DAT_00000005);
  } while( true );
}

