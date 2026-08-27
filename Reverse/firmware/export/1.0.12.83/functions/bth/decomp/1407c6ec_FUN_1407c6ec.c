/* FUN_1407c6ec @ 0x1407c6ec */

void FUN_1407c6ec(int param_1,byte *param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  uint uVar5;
  ushort local_2a;
  byte local_28;
  byte local_27;
  undefined1 local_26;
  uint local_24;
  
  local_24 = *DAT_1407c820;
  local_2a = 2;
  iVar2 = FUN_1407c698(param_1,param_2[2] >> 2);
  if (*DAT_1407c824 == '\0') {
    if (param_3 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_1407c82c);
    }
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_1407c828);
    }
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x18))(param_1,iVar2,&local_2a,param_4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_1407c830);
    }
    pbVar3 = (byte *)FUN_140759b8(local_2a);
    if (pbVar3 != (byte *)0x0) {
      *pbVar3 = *pbVar3 & 0xf0 | 2;
      *pbVar3 = *param_2 & 0xf0 | 2;
      pbVar3[1] = (byte)param_4 & 0x3f;
      uVar5 = (uint)local_2a;
      FUN_140e5278(pbVar3 + 2,iVar2,uVar5 - 2);
      uVar1 = FUN_1408e628(*(undefined4 *)(param_1 + 0x28),pbVar3,uVar5,0);
      FUN_14075b28(iVar2);
      FUN_14075b28(pbVar3);
      uVar4 = extraout_r1;
      goto LAB_1407c7a8;
    }
    FUN_14075b28(iVar2);
    local_26 = 0x11;
  }
  else {
    local_26 = 0xff;
  }
  local_28 = *param_2 & 0xf0 | 3;
  local_27 = (byte)param_4 & 0x3f;
  uVar1 = FUN_1408e628(*(undefined4 *)(param_1 + 0x28),&local_28,3,0);
  uVar4 = extraout_r1_00;
LAB_1407c7a8:
  if ((*DAT_1407c820 ^ local_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar1,uVar4,*DAT_1407c820 ^ local_24,0);
}

