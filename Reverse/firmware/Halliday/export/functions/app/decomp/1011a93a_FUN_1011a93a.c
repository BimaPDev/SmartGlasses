/* FUN_1011a93a @ 0x1011a93a */

void FUN_1011a93a(void)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar2;
  undefined4 in_r3;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_1005608c();
  uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
  iVar4 = *(int *)((int)uVar5 + 0x48);
  iVar3 = *(int *)((int)uVar5 + 0x4c);
  uVar2 = extraout_r2;
  if (*(int *)(iVar3 + 0x14) << 0x1b < 0) {
    *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) | 0x10;
    thunk_FUN_1011598c(300);
    uVar1 = extraout_r1;
    uVar2 = extraout_r2_00;
  }
  *(uint *)(iVar4 + 0x40) = *(uint *)(iVar4 + 0x40) & 0xffffffef;
  *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0xffffffef;
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfc000000;
  thunk_FUN_1011598c(300,uVar1,uVar2,in_r3);
  return;
}

