/* FUN_10028bd0 @ 0x10028bd0 */

void FUN_10028bd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)PTR_DAT_10028c6c;
  FUN_100a5b78(((int)PTR_DAT_10028c64 - (int)PTR_DAT_10028c68) * 0x20 & 0xff00U | 0x330031,
               PTR_s_music_view_update_play_state_10028c74,
               PTR_s_music_view_update_play_state__d_10028c70,param_1,param_1,iVar2,param_3);
  iVar3 = *DAT_10028c78;
  if (param_1 == 0) goto LAB_10028c4a;
  FUN_10126eac(*(undefined4 *)(iVar3 + 0xc),iVar3 + 0x88,0);
  iVar1 = iVar3 + 0x94;
  while( true ) {
    FUN_10126eac(*(undefined4 *)(iVar3 + 0xc),iVar1,2);
    FUN_1012569c(*(undefined4 *)(iVar3 + 0xc),(*(uint *)(iVar3 + 0x88) & 0x1fffff) >> 10,
                 *(ushort *)(iVar3 + 0x72) >> 5);
    *(byte *)(iVar3 + 0x2d8) = *(byte *)(iVar3 + 0x2d8) & 0xfe | (byte)param_1 & 1;
    if (*(int *)PTR_DAT_10028c6c == iVar2) break;
    FUN_1013cdc0();
LAB_10028c4a:
    FUN_10126eac(*(undefined4 *)(iVar3 + 0xc),iVar3 + 0x70,param_1);
    iVar1 = iVar3 + 0x7c;
  }
  return;
}

