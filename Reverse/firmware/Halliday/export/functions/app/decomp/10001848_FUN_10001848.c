/* FUN_10001848 @ 0x10001848 */

void FUN_10001848(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  puVar1 = DAT_1000186c;
  *DAT_1000186c = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = unaff_r4;
  puVar1[5] = unaff_r5;
  puVar1[6] = unaff_r6;
  puVar1[7] = unaff_r7;
  puVar1[8] = unaff_r8;
  puVar1[9] = unaff_r9;
  puVar1[10] = unaff_r10;
  puVar1[0xb] = unaff_r11;
  uVar2 = getMainStackPointer();
  uVar3 = getProcessStackPointer();
  puVar1[0xc] = register0x00000054;
  puVar1[0xd] = unaff_lr;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = uVar3;
  DataSynchronizationBarrier(0xf);
  WaitForInterrupt();
  InstructionSynchronizationBarrier(0xf);
  return;
}

