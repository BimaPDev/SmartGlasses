/* FUN_100a8d1c @ 0x100a8d1c */

undefined4 FUN_100a8d1c(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(PTR_s_WEST_TOPDIR_framework_audio_audi_100a8de8,0x3c7,
                 PTR_s_audio_track_set_fifo_src_100a8de4,PTR_s_handle_10169e47_8_100a8de0,0,param_2)
    ;
  }
  FUN_100a5b78(DAT_100a8df4 | ((int)PTR_DAT_100a8df0 - (int)PTR_DAT_100a8dec) * 0x20 & 0xff00U,
               DAT_100a8dfc,DAT_100a8df8,param_2,param_1);
  if (param_2 == 0) {
    uVar2 = FUN_100646e4(*(undefined4 *)(param_1 + 0x24),param_1[4],0);
    return uVar2;
  }
  cVar1 = *param_1;
  if (cVar1 == '\x04') {
    iVar3 = (*(uint *)(param_1 + 0xc) / 1000) * (uint)(byte)param_1[2] * 0x10;
  }
  else if (cVar1 == '\x05') {
    iVar3 = (*(uint *)(param_1 + 0xc) / 1000) * (uint)(byte)param_1[2] * 4;
  }
  else {
    if (cVar1 != '\x02') {
      iVar4 = 0xf4;
      iVar3 = 0xf0;
      goto LAB_100a8d76;
    }
    iVar3 = (uint)(byte)param_1[2] * (*(uint *)(param_1 + 0xc) / 1000) * 0xc;
  }
  iVar4 = iVar3 + 4;
LAB_100a8d76:
  param_1[9] = param_1[9] | 0x80;
  FUN_10064698(*(undefined4 *)(param_1 + 0x24),iVar3,iVar4);
  uVar2 = FUN_100646e4(*(undefined4 *)(param_1 + 0x24),param_1[4],1,param_3);
  FUN_100643d4(*(undefined4 *)(param_1 + 0x24));
  param_1[9] = param_1[9] | 2;
  return uVar2;
}

