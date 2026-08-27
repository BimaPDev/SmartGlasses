/* FUN_2c50b658 @ 0x2c50b658 */

void FUN_2c50b658(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 extraout_r3;
  char *pcVar3;
  char *pcVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  undefined4 uVar5;
  
  cVar2 = *(char *)(param_1 + 0x1c);
  if (((*(char **)(param_1 + 0x144))[-1] == cVar2) &&
     (pcVar3 = *(char **)(param_1 + 0x140),
     *(char **)(param_1 + 0x140) != *(char **)(param_1 + 0x144))) {
    do {
      pcVar4 = pcVar3 + 1;
      *pcVar3 = *pcVar3 + '\x01';
      pcVar3 = pcVar4;
    } while (*(char **)(param_1 + 0x144) != pcVar4);
    cVar2 = *(char *)(param_1 + 0x1c);
  }
  uVar1 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x14),cVar2);
  FUN_2c50ece8(param_1 + 0x2a0,uVar1);
  uVar1 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x1c));
  FUN_2c50ece8((undefined4 *)(param_1 + 0x204),uVar1);
  *(byte *)(param_1 + 0x1c) = *(char *)(param_1 + 0x1c) + 1U & 3;
  uVar1 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x14));
  FUN_2c605208(uVar1,1);
  uVar1 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x1c));
  FUN_2c50ec60(param_1 + 0x2a0,uVar1);
  uVar1 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x208) != 0) {
    uVar5 = extraout_r3;
    FUN_2c62e838(*(int *)(param_1 + 0x208),DAT_2c50ec94);
    if (*(int *)(param_1 + 0x208) != 0) {
      FUN_2c50e398(*(int *)(param_1 + 0x208),*(undefined1 *)(*(int *)(param_1 + 0x298) + 0x18),
                   *(undefined1 *)(*(int *)(param_1 + 0x298) + 8),1,uVar5,unaff_r4,unaff_r5,unaff_lr
                  );
    }
  }
  *(undefined4 *)(param_1 + 0x208) = uVar1;
  *(undefined4 *)(param_1 + 0x204) = 0;
  FUN_2c62e8ec(param_1 + 0x210);
  return;
}

