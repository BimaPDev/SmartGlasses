/* FUN_10048308 @ 0x10048308 */

void FUN_10048308(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined1 local_16;
  int local_14;
  
  local_14 = *DAT_100483fc;
  local_24 = 0;
  local_20 = (undefined1 *)0x0;
  local_1c = 0;
  uVar5 = (DAT_10048400 - DAT_10048404) * 0x20 & 0xff00;
  FUN_100a5b78(uVar5 | 0x1620031,DAT_1004840c,DAT_10048408,param_1);
  iVar6 = DAT_10048410;
  if (param_1 != 0) {
    if (*(int *)(DAT_10048410 + 0xe8) == 0) {
      uVar2 = thunk_FUN_1009f30c(0x1b86,DAT_10048414);
      *(undefined4 *)(iVar6 + 0xe8) = uVar2;
    }
    iVar3 = *(int *)(iVar6 + 0xe8);
    if (iVar3 != 0) goto LAB_1004837c;
    FUN_100a5b78(DAT_10048418 | uVar5,DAT_1004840c,DAT_1004841c,0x1b86);
    while( true ) {
      if (*DAT_100483fc == local_14) break;
      iVar3 = FUN_1013cdc0();
LAB_1004837c:
      FUN_1011ea48(iVar3,0,0x1b86);
      *(undefined1 *)(*(int *)(iVar6 + 0xe8) + 1) = 1;
      uVar4 = uVar5 | 0x16c0031;
      uVar2 = DAT_10048420;
LAB_1004839a:
      uVar5 = 0;
      FUN_100a5b78(uVar4,DAT_1004840c,uVar2);
      iVar6 = DAT_10048428;
      local_16 = 0;
      _local_18 = CONCAT11((char)((ushort)*DAT_10048424 >> 8),(char)param_1);
      uVar1 = (**(code **)(DAT_10048428 + 0x14))();
      _local_18 = CONCAT11(uVar1,local_18);
      local_16 = (**(code **)(iVar6 + 0x30))();
      local_24 = CONCAT22(local_24._2_2_,0x705);
      local_20 = &local_18;
      local_1c = CONCAT13(local_1c._3_1_,3);
      FUN_100506fc(&local_24);
    }
    return;
  }
  if (*(int *)(DAT_10048410 + 0xe8) != 0) {
    FUN_1012d1f4();
    *(undefined4 *)(iVar6 + 0xe8) = 0;
  }
  uVar4 = DAT_1004842c | uVar5;
  uVar2 = DAT_10048430;
  goto LAB_1004839a;
}

