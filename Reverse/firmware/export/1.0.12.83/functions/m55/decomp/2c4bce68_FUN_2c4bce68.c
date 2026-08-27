/* FUN_2c4bce68 @ 0x2c4bce68 */

undefined4 FUN_2c4bce68(uint param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = DAT_2c4bcf14;
  iVar4 = DAT_2c4bcf10;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bcf1c,param_1);
  }
  if (*(char *)(DAT_2c4bcf10 + param_1 * 0x70 + 0xc) == '\0') {
    return 0;
  }
  iVar5 = *(int *)(DAT_2c4bcf14 + param_1 * 0xc);
  bVar3 = *(byte *)(DAT_2c4bcf14 + param_1 * 0xc + 10);
  if (bVar3 < 0x48) {
    iVar6 = 1 << (bVar3 & 0x1f);
    iVar7 = DAT_2c4bcf18 + ((uint)(int)(char)bVar3 >> 5) * 4;
    *(int *)(iVar7 + 0x80) = iVar6;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
    *(int *)(iVar7 + 0x180) = iVar6;
  }
  iVar8 = iVar8 + param_1 * 0xc;
  *(uint *)(iVar5 + 0x6c) = *(uint *)(iVar5 + 0x6c) & 0xfffffffe;
  FUN_2c4bbfe4(param_1);
  uVar2 = *(undefined1 *)(iVar8 + 9);
  FUN_2c673af8(uVar2);
  uVar1 = *(undefined1 *)(iVar8 + 8);
  FUN_2c673af8(uVar1);
  FUN_2c673ce8(uVar2);
  FUN_2c673ce8(uVar1);
  *(undefined1 *)(iVar4 + param_1 * 0x70 + 0xc) = 0;
  return 0;
}

