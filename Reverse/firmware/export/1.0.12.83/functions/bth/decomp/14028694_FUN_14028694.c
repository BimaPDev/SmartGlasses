/* FUN_14028694 @ 0x14028694 */

void FUN_14028694(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_140286d0;
  if (param_1 >> 4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140286d4);
  }
  uVar3 = param_1 & 0xf;
  if (-1 < (int)(param_1 << 0x1c)) {
    iVar2 = DAT_140286d0 + uVar3 * 0x20;
    uVar3 = 1 << uVar3 & 0xff;
    *(uint *)(iVar2 + 0x110) = *(uint *)(iVar2 + 0x110) & 0xfffffffe;
    *(uint *)(iVar1 + 8) = uVar3;
    *(uint *)(iVar1 + 0x10) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140286d8,0,uVar3,param_1 << 0x1c,param_4);
}

