/* FUN_2c4b5474 @ 0x2c4b5474 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4b5474(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = _LAB_2c4b5504;
  iVar3 = *_LAB_2c4b5504;
  if (iVar3 == 0) {
    func_0x2c6742f8();
    iVar3 = *piVar1;
  }
  iVar2 = _LAB_2c4b5508;
  *piVar1 = iVar3 + 1;
  *(uint *)(iVar2 + 0x614) = *(uint *)(iVar2 + 0x614) | 0x5555;
  *(uint *)(iVar2 + 0x634) = *(uint *)(iVar2 + 0x634) | 0x5555;
  *(uint *)(iVar2 + 0x614) = *(uint *)(iVar2 + 0x614) & 0xff7fffff;
  *(uint *)(iVar2 + 0x634) = *(uint *)(iVar2 + 0x634) & 0xff7fffff;
  *(uint *)(iVar2 + 0x670) = *(uint *)(iVar2 + 0x670) & 0xffffff7f;
  *(uint *)(iVar2 + 0x674) = *(uint *)(iVar2 + 0x674) & 0xffffff7f;
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x2c673f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_LAB_2c673f54)(0x5555);
  return;
}

