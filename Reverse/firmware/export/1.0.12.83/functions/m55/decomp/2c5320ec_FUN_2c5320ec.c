/* FUN_2c5320ec @ 0x2c5320ec */

undefined4 FUN_2c5320ec(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = FUN_2c48e738();
  uVar2 = FUN_2c48e738();
  uVar3 = FUN_2c48e6c0(*param_1);
  FUN_2c48e47c(uVar2,DAT_2c5321a4,uVar3);
  uVar3 = FUN_2c48e6c0(param_1[6]);
  FUN_2c48e47c(uVar2,DAT_2c5321a8,uVar3);
  uVar3 = FUN_2c48e738();
  uVar4 = FUN_2c48e6c0(param_1[0xc]);
  FUN_2c48e47c(uVar3,DAT_2c5321ac,uVar4);
  FUN_2c48e47c(uVar2,DAT_2c5321b0,uVar3);
  uVar3 = FUN_2c48e6c0(param_1[0x12]);
  FUN_2c48e47c(uVar2,DAT_2c5321b4,uVar3);
  FUN_2c48e474(uVar1,DAT_2c5321b8,uVar2);
  FUN_2c48e5b4(uVar1,DAT_2c5321c0,DAT_2c5321bc);
  uVar2 = FUN_2c48e3e8(uVar1);
  FUN_2c48dea0(uVar1);
  iVar5 = FUN_2c66c4ec(uVar2);
  uVar1 = FUN_2c47245c(0,iVar5 + 1);
  iVar5 = FUN_2c66c4ec(uVar2);
  FUN_2c674268(uVar1,0,iVar5 + 1);
  FUN_2c6435c4(uVar1,uVar2);
  FUN_2c48e87c(uVar2);
  return uVar1;
}

