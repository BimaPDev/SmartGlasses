/* FUN_140aa054 @ 0x140aa054 */

undefined4 FUN_140aa054(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  iVar1 = DAT_140aa0c0;
  FUN_140e5148(*(undefined4 *)(DAT_140aa0c0 + 0xcc),0xffffffff);
  puVar2 = DAT_140aa0c4;
  uVar4 = *(uint *)(param_1 + 0x1c);
  uVar5 = *(uint *)(DAT_140aa0c4 + 0x10);
  if (*(uint *)(DAT_140aa0c4 + 0x10) < uVar4) {
    uVar5 = uVar4;
  }
  uVar7 = *(uint *)(DAT_140aa0c4 + 0xe);
  if (uVar4 <= *(uint *)(DAT_140aa0c4 + 0xe)) {
    uVar7 = uVar4;
  }
  puVar9 = (undefined4 *)(DAT_140aa0c4 + 0x16);
  *DAT_140aa0c4 = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(uint *)(puVar2 + 0xe) = uVar7;
  *(uint *)(puVar2 + 0x10) = uVar5;
  *(undefined4 *)(puVar2 + 10) = uVar3;
  *(uint *)(puVar2 + 0xc) = uVar4;
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar8 = *(undefined4 *)(param_1 + 0x30);
  *puVar9 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar2 + 0x18) = uVar3;
  *(undefined4 *)(puVar2 + 0x1a) = uVar6;
  *(undefined4 *)(puVar2 + 0x1c) = uVar8;
  uVar3 = *(undefined4 *)(iVar1 + 0xcc);
  *(undefined4 *)(puVar2 + 0x1e) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x20);
  FUN_140e52d8(uVar3);
  return 0;
}

