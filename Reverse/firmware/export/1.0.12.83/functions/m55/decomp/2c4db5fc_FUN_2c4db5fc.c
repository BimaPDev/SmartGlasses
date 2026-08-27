/* FUN_2c4db5fc @ 0x2c4db5fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c4db5fc(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int unaff_pc;
  
  iVar2 = _LAB_2c4db690;
  bVar4 = (*(byte *)(param_2 + 2) & 1) << 2 | *(byte *)(param_2 + 3) >> 6;
  if (bVar4 == 0) {
    bVar4 = 8;
  }
  *(byte *)(param_1 + 0xcc) = bVar4;
  uVar3 = *(uint *)(iVar2 + (*(byte *)(param_2 + 2) & 0x3c));
  *(undefined4 *)(param_1 + 0xd4) = 0x400;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x400;
  *(uint *)(param_1 + 200) = uVar3;
  *(undefined1 *)(param_1 + 0xcd) = 2;
  *(undefined2 *)(param_1 + 0xce) = 0x210;
  lVar1 = (ulonglong)
          ((uint)*(byte *)(param_2 + 4) << 3 | (*(byte *)(param_2 + 3) & 3) << 0xb |
          (uint)(*(byte *)(param_2 + 5) >> 5)) * (ulonglong)uVar3;
  uVar3 = (uint)lVar1;
  if ((int)(uVar3 | unaff_pc << 3) < 0) {
    uVar3 = uVar3 + 0x3ff;
  }
  *(uint *)(param_1 + 0xe8) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = 0x1000;
  *(undefined4 *)(param_1 + 0x24) = 7;
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20),1);
}

