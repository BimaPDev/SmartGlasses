/* FUN_10042200 @ 0x10042200 */

void FUN_10042200(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)PTR_DAT_10042280;
  uVar1 = FUN_100a735c();
  uVar2 = FUN_10042198();
  uVar1 = uVar1 & 0xffff;
  uVar4 = uVar2;
  uVar5 = uVar1;
  if (uVar1 != 0) goto LAB_10042260;
  while( true ) {
    uVar4 = uVar4 & 0xffff;
    uVar5 = ((int)PTR_DAT_10042288 - (int)PTR_DAT_10042284) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1004228c | uVar5,PTR_s_ring_play_volume_config_10042294,
                 PTR_s_xs_pcm_play_handle_volume__d_10042290,uVar4);
    FUN_100a5b78(uVar5 | 0x1520033,PTR_s_ring_play_volume_config_10042294,
                 PTR_s_xs_pcm_play_handle_volume__d__ri_10042298,uVar4,uVar2,uVar1);
    if (*(int *)PTR_DAT_10042280 == iVar3) break;
    uVar4 = FUN_1013cdc0();
    uVar5 = extraout_r3;
LAB_10042260:
    uVar4 = (uVar4 * uVar5) / 100;
  }
  FUN_100a9130(4,uVar4,0);
  return;
}

