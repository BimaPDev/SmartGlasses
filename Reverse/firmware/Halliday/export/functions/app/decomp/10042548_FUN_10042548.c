/* FUN_10042548 @ 0x10042548 */

void FUN_10042548(int param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *DAT_100426a8;
  if ((param_1 == 0) || (param_2 == 0)) {
    if (*DAT_100426a8 == iVar5) {
      return;
    }
  }
  else {
    iVar4 = FUN_10113cfc(DAT_100426ac,param_2,10000,0,param_1,iVar5,param_3);
    if (iVar4 != 0) {
      FUN_100a5b78(((int)PTR_DAT_100426b4 - (int)PTR_DAT_100426b0) * 0x20 & 0xff00U | 0xc20011,
                   PTR_s__sync_btmusic_play_info_100426bc,
                   PTR_s_music_view_mutex_Deadlock________100426b8);
    }
    iVar4 = FUN_1011ea18(param_1,DAT_100426c0);
    if (iVar4 != 0) {
      uVar3 = FUN_1011ea10(param_1);
      uVar6 = ((int)PTR_DAT_100426b4 - (int)PTR_DAT_100426b0) * 0x20 & 0xff00;
      if (0x80 < uVar3) {
        FUN_100a5b78(uVar6 | 0xca0031,PTR_s__sync_btmusic_play_info_100426bc,DAT_100426c4,0x7f);
        uVar3 = 0x7f;
      }
      iVar4 = DAT_100426d4;
      FUN_1011ea48(DAT_100426d4 + 0x8d,0,0x80);
      FUN_1013d03e(iVar4 + 0x8d,param_1,uVar3,0x83);
      *(undefined1 *)(iVar4 + 0xc) = 1;
      uVar2 = DAT_100426c8;
      puVar1 = PTR_s__sync_btmusic_play_info_100426bc;
      *(undefined4 *)(iVar4 + 8) = param_3;
      FUN_100a5b78(uVar6 | 0xd20031,puVar1,uVar2,iVar4 + 0x8d);
    }
    iVar4 = FUN_1011ea18(param_2,DAT_100426cc);
    if (iVar4 != 0) {
      uVar3 = FUN_1011ea10(param_2);
      uVar6 = ((int)PTR_DAT_100426b4 - (int)PTR_DAT_100426b0) * 0x20 & 0xff00;
      if (0x80 < uVar3) {
        FUN_100a5b78(uVar6 | 0xdd0031,PTR_s__sync_btmusic_play_info_100426bc,DAT_100426d0,0x7f);
        uVar3 = 0x7f;
      }
      iVar4 = DAT_100426d4;
      FUN_1011ea48(DAT_100426d4 + 0xd,0,0x80);
      FUN_1013d03e(iVar4 + 0xd,param_2,uVar3,0x103);
      *(undefined1 *)(iVar4 + 0xc) = 1;
      uVar2 = DAT_100426d8;
      puVar1 = PTR_s__sync_btmusic_play_info_100426bc;
      *(undefined4 *)(iVar4 + 8) = param_3;
      FUN_100a5b78(uVar6 | 0xe40031,puVar1,uVar2,iVar4 + 0xd);
    }
    if (*DAT_100426a8 == iVar5) goto LAB_1004268c;
  }
  FUN_1013cdc0();
LAB_1004268c:
  FUN_10113e2c(DAT_100426ac);
  return;
}

