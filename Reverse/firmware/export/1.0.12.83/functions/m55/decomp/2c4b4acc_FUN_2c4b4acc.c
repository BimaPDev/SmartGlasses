/* FUN_2c4b4acc @ 0x2c4b4acc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4b4acc(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = _LAB_2c4b4b24;
  func_0x2c4bf3a8();
  uVar2 = *puVar1;
  uVar4 = (uint)(char)uVar2;
  if (-1 < (int)uVar4) {
    iVar3 = 1 << (uVar2 & 0x1f);
    iVar5 = _LAB_2c4b4b28 + (uVar4 >> 5) * 4;
    *(int *)(iVar5 + 0x180) = iVar3;
    *(int *)(iVar5 + 0x80) = iVar3;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  func_0x2c4b4eb4(_LAB_2c4b4b2c);
  func_0x2c4b4eb4(puVar1[2]);
  func_0x2c4b4eb4(*(undefined4 *)(_LAB_2c4b4b30 + 8));
  func_0x2c674838();
  func_0x2c673df8();
  *_LAB_2c4b4b34 = 0;
  return;
}

