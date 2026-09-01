/* FUN_10052a24 @ 0x10052a24 */

int FUN_10052a24(undefined1 param_1,undefined2 param_2,int param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  char *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 extraout_r1_01;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_30;
  int local_2c;
  
  pcVar3 = DAT_10052bbc;
  local_2c = *DAT_10052bb0;
  uVar7 = (DAT_10052bb4 - DAT_10052bb8) * 0x20 & 0xff00;
  uVar10 = 0x78;
  FUN_100a5b78(uVar7 | 0x780032,DAT_10052bc4,DAT_10052bc8,DAT_10052bc0,0x78);
  uVar5 = (uint)(byte)pcVar3[0x8c];
  if ((uVar5 != 0) && (uVar4 = extraout_r1, *pcVar3 != '\0')) goto LAB_10052a96;
  FUN_100a5b78(uVar7 | 0x7a0033,DAT_10052bc4,DAT_10052bcc,DAT_10052bc0,uVar5,*pcVar3);
  iVar9 = -0x13;
  while( true ) {
    if (*DAT_10052bb0 == local_2c) break;
    FUN_1013cdc0();
    uVar4 = extraout_r1_00;
    uVar10 = uVar5;
LAB_10052a96:
    uVar5 = uVar10;
    if (0x40 < param_4) {
      FUN_100a5b78(uVar7 | 0x7f0021,DAT_10052bc4,DAT_10052bd0,param_4,uVar5);
      param_4 = 0x40;
      uVar4 = extraout_r1_01;
    }
    iVar9 = FUN_10113cfc(DAT_10052bd4,uVar4,100,0);
    if (iVar9 == 0) {
      uVar1 = *(ushort *)(pcVar3 + 2);
      if ((uint)uVar1 <= (uint)*(ushort *)(pcVar3 + 0x28)) {
        iVar6 = *(ushort *)(pcVar3 + 0x28) - 1;
        *(int *)(pcVar3 + 0x10) = *(int *)(pcVar3 + 0x10) + 1;
        *(short *)(pcVar3 + 0x28) = (short)iVar6;
        *(ushort *)(pcVar3 + 0x26) =
             (short)(*(ushort *)(pcVar3 + 0x26) + 1) -
             uVar1 * (short)((*(ushort *)(pcVar3 + 0x26) + 1) / (uint)uVar1);
        FUN_100a5b78(uVar7 | 0x8f0021,DAT_10052bc4,DAT_10052bdc,iVar6,uVar5);
      }
      uVar1 = *(ushort *)(pcVar3 + 0x24);
      iVar6 = *(int *)(pcVar3 + 0x20);
      iVar8 = iVar6 + (uint)uVar1 * 0x4c;
      FUN_100434c0(&local_30);
      *(undefined4 *)(iVar6 + (uint)uVar1 * 0x4c) = local_30;
      *(undefined2 *)(iVar8 + 4) = param_2;
      *(undefined1 *)(iVar8 + 6) = param_1;
      *(undefined1 *)(iVar8 + 7) = 0;
      *(short *)(iVar8 + 8) = (short)param_4;
      FUN_1011ea48(iVar8 + 10,0,0x40);
      if ((param_3 != 0) && (param_4 != 0)) {
        FUN_1011ea40(iVar8 + 10,param_3,param_4);
      }
      FUN_100a5b78(uVar7 | 0x9e0032,DAT_10052bc4,DAT_10052bc8,DAT_10052bc0,0x9e);
      uVar1 = *(ushort *)(pcVar3 + 2);
      *(ushort *)(pcVar3 + 0x24) =
           (short)(*(ushort *)(pcVar3 + 0x24) + 1) -
           uVar1 * (short)((*(ushort *)(pcVar3 + 0x24) + 1) / (uint)uVar1);
      sVar2 = *(short *)(pcVar3 + 0x28);
      *(int *)(pcVar3 + 0xc) = *(int *)(pcVar3 + 0xc) + 1;
      *(ushort *)(pcVar3 + 0x28) = sVar2 + 1U;
      *(uint *)(pcVar3 + 0x1c) = ((uint)(ushort)(sVar2 + 1U) * 100) / (uint)uVar1;
      FUN_10052834();
      FUN_10052804();
      uVar5 = 0xac;
      FUN_100a5b78(uVar7 | 0xac0032,DAT_10052bc4,DAT_10052bc8,DAT_10052bc0,0xac);
    }
    else {
      FUN_100a5b78(uVar7 | 0x850011,DAT_10052bc4,DAT_10052bd8,iVar9,uVar5);
    }
  }
  return iVar9;
}

