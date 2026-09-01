/* FUN_100b260c @ 0x100b260c */

int FUN_100b260c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (param_1 == 0) {
    iVar5 = -0xe;
  }
  else if (param_3 == 1) {
    *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) | 8;
    thunk_FUN_10113fd0();
    pcVar6 = *(code **)(*(int *)(param_1 + 8) + 100);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(0x15,0,0,*(undefined4 *)(*(int *)(param_1 + 8) + 0x68));
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      FUN_1011dbf4(param_1 + 0xac,0xffffffff);
    }
    local_24 = *param_2;
    if (local_24 == 0) {
      if (param_2[1] < 0) {
        param_2[1] = 0;
      }
      else if (*(int *)(param_1 + 0x24) < param_2[1]) {
        param_2[1] = *(int *)(param_1 + 0x24);
      }
    }
    iVar1 = param_2[2];
    local_28 = param_2[1];
    uVar7 = (DAT_100b2738 - DAT_100b2734) * 0x20 & 0xff00;
    local_1c = iVar1;
    FUN_100a5b78(DAT_100b273c | uVar7,PTR_s_origin__d__time_offset__d__file__100b2740,local_24,
                 local_28,iVar1);
    iVar5 = (**(code **)(*(int *)(param_1 + 0x58) + 8))(*(undefined4 *)(param_1 + 0xc),4,&local_28);
    if (*(int *)(param_1 + 0x90) != 0) {
      FUN_10113e2c(param_1 + 0xac);
    }
    iVar2 = param_2[1];
    uVar4 = *(uint *)(param_1 + 0x24);
    if (iVar2 < (int)uVar4) {
      if (iVar5 != 0) {
        FUN_100a5b78(uVar7 | 0x3280011,PTR_s_AP_CMD_SEEK_failed__ret__d__100b2748,iVar5,uVar4,iVar1)
        ;
        return iVar5;
      }
    }
    else {
      uVar4 = *(byte *)(param_1 + 99) | 1;
      *(char *)(param_1 + 99) = (char)uVar4;
      local_20 = iVar2;
    }
    FUN_100a5b78(uVar7 | 0x32c0031,PTR_s_chunk_start_time____d_100b2744,local_20,uVar4,iVar1);
    iVar5 = 0;
    if (local_20 < 0) {
      local_20 = param_2[1];
    }
    param_2[3] = local_20;
    *(int *)(param_1 + 0x68) = local_20;
    *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) & 0xfc;
  }
  else {
    if (param_3 == 2) {
      puVar3 = *(undefined1 **)(param_1 + 0x14);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) & 0xf7;
      thunk_FUN_10113fd0();
    }
    iVar5 = -0x58;
  }
  return iVar5;
}

