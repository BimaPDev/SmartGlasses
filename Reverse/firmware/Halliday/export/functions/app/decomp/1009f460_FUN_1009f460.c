/* FUN_1009f460 @ 0x1009f460 */

void FUN_1009f460(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  sVar4 = *(short *)(param_1 + 0x192) - *(short *)(param_1 + 0x196);
  if (param_2 == 0) {
    *(short *)(param_1 + 0x192) = sVar4;
    if (sVar4 == 0) {
      uVar7 = (uint)*(byte *)(param_1 + 0x194);
      *(byte *)(param_1 + 0x195) = *(byte *)(param_1 + 0x194);
      if (*(short *)(*(int *)(param_1 + uVar7 * 4) + 4) == 0) {
        do {
          uVar3 = uVar7 - 1;
          uVar7 = uVar3 & 0xff;
        } while (*(short *)(*(int *)(param_1 + uVar7 * 4) + 4) == 0);
        *(char *)(param_1 + 0x195) = (char)uVar3;
      }
      sVar6 = (*(short *)(param_1 + 400) + 1) -
              *(short *)(*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x195) * 4) + 4);
    }
    else {
      uVar7 = (uint)*(byte *)(param_1 + 0x195);
      do {
        uVar3 = uVar7 - 1;
        uVar7 = uVar3 & 0xff;
        sVar6 = *(short *)(*(int *)(param_1 + uVar7 * 4) + 4);
      } while (sVar6 == 0);
      *(char *)(param_1 + 0x195) = (char)uVar3;
      sVar6 = (sVar4 + 1) - sVar6;
    }
  }
  else {
    uVar5 = sVar4 + 1 + *(short *)(*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x195) * 4) + 4);
    *(ushort *)(param_1 + 0x192) = uVar5;
    if (uVar5 <= *(ushort *)(param_1 + 400)) goto LAB_1009f492;
    sVar6 = 1;
  }
  *(short *)(param_1 + 0x192) = sVar6;
LAB_1009f492:
  uVar7 = 0;
  iVar2 = 0;
  uVar5 = *(ushort *)(param_1 + 0x192);
  do {
    puVar8 = *(undefined4 **)(param_1 + iVar2 * 4);
    uVar1 = *(ushort *)(puVar8 + 1);
    uVar7 = uVar7 + uVar1;
    if (uVar5 <= uVar7) {
      *(char *)(param_1 + 0x195) = (char)iVar2;
      *(ushort *)(param_1 + 0x196) = (uVar1 + uVar5) - (short)uVar7;
      FUN_100a5b78(((int)PTR_DAT_1009f540 - (int)PTR_DAT_1009f53c) * 0x20 & 0xff00U | 0xd80033,
                   PTR_s_calc_next_folder_playlist_info_1009f548,
                   PTR_s_file_seq_num__d_folder_seq_num___1009f544,(uint)uVar5,iVar2,*puVar8,param_3
                  );
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 <= (int)(uint)*(byte *)(param_1 + 0x194));
  return;
}

