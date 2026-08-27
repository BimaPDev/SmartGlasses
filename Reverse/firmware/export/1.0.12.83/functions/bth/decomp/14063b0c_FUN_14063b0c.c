/* FUN_14063b0c @ 0x14063b0c */

undefined4 FUN_14063b0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = (undefined1 *)FUN_1406db30(0x2043,0x3a);
  if (puVar2 != (undefined1 *)0x0) {
    uVar1 = FUN_14060420(*(undefined1 *)(DAT_14063c0c + 0xac));
    puVar2[1] = uVar1;
    if (*(char *)(param_1 + 0xe) == '\x01') {
      *puVar2 = 1;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 3) = 0;
      *(undefined2 *)(puVar2 + 7) = 0;
    }
    else {
      *puVar2 = 0;
      puVar2[2] = *(undefined1 *)(param_2 + 0x36);
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 0x30);
      *(undefined2 *)(puVar2 + 7) = *(undefined2 *)(param_2 + 0x34);
    }
    puVar2[9] = *(byte *)(param_2 + 1) & 7;
    uVar5 = (uint)*(byte *)(param_2 + 1);
    uVar3 = uVar5 & 1;
    if ((*(byte *)(param_2 + 1) & 1) != 0) {
      *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(param_2 + 4);
      *(undefined2 *)(puVar2 + 0xc) = *(undefined2 *)(param_2 + 6);
      *(undefined2 *)(puVar2 + 0xe) = *(undefined2 *)(param_2 + 0xc);
      *(undefined2 *)(puVar2 + 0x10) = *(undefined2 *)(param_2 + 0xe);
      *(undefined2 *)(puVar2 + 0x16) = *(undefined2 *)(param_2 + 0x14);
      *(undefined2 *)(puVar2 + 0x18) = *(undefined2 *)(param_2 + 0x16);
      *(undefined2 *)(puVar2 + 0x12) = *(undefined2 *)(param_2 + 0x10);
      *(undefined2 *)(puVar2 + 0x14) = *(undefined2 *)(param_2 + 0x12);
      uVar5 = (uint)*(byte *)(param_2 + 1);
    }
    uVar4 = uVar3;
    if ((uVar5 & 2) != 0) {
      *(undefined2 *)(puVar2 + uVar3 * 0x10 + 10) = 0;
      *(undefined2 *)(puVar2 + uVar3 * 0x10 + 0xc) = 0;
      uVar4 = uVar3 + 1;
      *(undefined2 *)(puVar2 + uVar3 * 0x10 + 0xe) = *(undefined2 *)(param_2 + 0x18);
      *(undefined2 *)(puVar2 + uVar3 * 0x10 + 0x10) = *(undefined2 *)(param_2 + 0x1a);
      *(undefined2 *)(puVar2 + uVar3 * 0x10 + 0x16) = *(undefined2 *)(param_2 + 0x20);
      *(undefined2 *)(puVar2 + uVar3 * 0x10 + 0x18) = *(undefined2 *)(param_2 + 0x22);
      *(undefined2 *)(puVar2 + uVar3 * 0x10 + 0x12) = *(undefined2 *)(param_2 + 0x1c);
      *(undefined2 *)(puVar2 + uVar3 * 0x10 + 0x14) = *(undefined2 *)(param_2 + 0x1e);
      uVar5 = (uint)*(byte *)(param_2 + 1);
    }
    if ((uVar5 & 4) != 0) {
      *(undefined2 *)(puVar2 + uVar4 * 0x10 + 10) = *(undefined2 *)(param_2 + 8);
      *(undefined2 *)(puVar2 + uVar4 * 0x10 + 0xc) = *(undefined2 *)(param_2 + 10);
      *(undefined2 *)(puVar2 + uVar4 * 0x10 + 0xe) = *(undefined2 *)(param_2 + 0x24);
      *(undefined2 *)(puVar2 + uVar4 * 0x10 + 0x10) = *(undefined2 *)(param_2 + 0x26);
      *(undefined2 *)(puVar2 + uVar4 * 0x10 + 0x16) = *(undefined2 *)(param_2 + 0x2c);
      *(undefined2 *)(puVar2 + uVar4 * 0x10 + 0x18) = *(undefined2 *)(param_2 + 0x2e);
      *(undefined2 *)(puVar2 + uVar4 * 0x10 + 0x12) = *(undefined2 *)(param_2 + 0x28);
      *(undefined2 *)(puVar2 + uVar4 * 0x10 + 0x14) = *(undefined2 *)(param_2 + 0x2a);
    }
    FUN_1406da30(puVar2,param_3,param_4);
    return 0;
  }
  return 0x4b;
}

