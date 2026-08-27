/* FUN_2c4bf3bc @ 0x2c4bf3bc */

void FUN_2c4bf3bc(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = DAT_2c4bf438;
  FUN_2c6745a8(0);
  uVar3 = DAT_2c4bf440;
  iVar2 = DAT_2c4bf43c;
  *(undefined4 *)(DAT_2c4bf43c + 0x1a8) = 1;
  *(undefined4 *)(iVar2 + 0x118) = uVar3;
  *(undefined4 *)(iVar2 + 0xfc) = uVar1;
  *(undefined4 *)(iVar2 + 0x100) = 0;
  *(undefined4 *)(iVar2 + 0x104) = uVar3;
  *(undefined4 *)(iVar2 + 0x108) = uVar3;
  *(undefined4 *)(iVar2 + 0x180) = 8;
  uVar1 = DAT_2c4bf444;
  *(undefined4 *)(iVar2 + 0x188) = 0x2301;
  *(undefined4 *)(iVar2 + 0x210) = uVar1;
  *(undefined4 *)(iVar2 + 0x194) = 0x81;
  *(undefined4 *)(iVar2 + 0x264) = 0x201;
  *(undefined4 *)(iVar2 + 0x1c8) = 0x40000;
  *(undefined4 *)(iVar2 + 0x1c4) = 0;
  iVar4 = DAT_2c4bf448;
  *(undefined4 *)(iVar2 + 0x1c0) = 0x200000;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0x40) = DAT_2c4bf44c;
  puVar5 = DAT_2c4bf450;
  DataSynchronizationBarrier(0xf);
  *(undefined1 *)(DAT_2c4bf450 + 0xc0) = 0xa0;
  puVar5[0x60] = 1;
  *puVar5 = 1;
  return;
}

