/* FUN_2c4bedd8 @ 0x2c4bedd8 */

void FUN_2c4bedd8(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (0x1f < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bee1c);
  }
  if (-1 < (int)(param_1 << 0x1c)) {
    iVar1 = *(int *)(DAT_2c4bee18 + (param_1 >> 4) * 4);
    iVar2 = iVar1 + (param_1 & 0xf) * 0x20;
    uVar3 = 1 << (param_1 & 0xf) & 0xff;
    *(uint *)(iVar2 + 0x110) = *(uint *)(iVar2 + 0x110) & 0xfffffffe;
    *(uint *)(iVar1 + 8) = uVar3;
    *(uint *)(iVar1 + 0x10) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4bee20);
}

