/* FUN_100169f4 @ 0x100169f4 */

void FUN_100169f4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_10016a40;
  if (param_1 == 0) goto LAB_10016a28;
  if (*(int *)(param_1 + 0x264) == 0) goto LAB_10016a28;
  uVar1 = 0;
  if (param_2 == 0) goto LAB_10016a36;
  FUN_10015354(*(int *)(param_1 + 0x264),param_1 + 0x25c,param_3,0,param_1);
  while( true ) {
    FUN_10015684(*(undefined4 *)(param_1 + 0x264));
    *(undefined4 *)(param_1 + 0x264) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x800;
LAB_10016a28:
    if (*DAT_10016a40 == iVar2) break;
    FUN_1013cdc0();
    uVar1 = extraout_r1;
LAB_10016a36:
    *(undefined4 *)(param_1 + 0x25c) = uVar1;
    *(undefined4 *)(param_1 + 0x260) = uVar1;
  }
  return;
}

