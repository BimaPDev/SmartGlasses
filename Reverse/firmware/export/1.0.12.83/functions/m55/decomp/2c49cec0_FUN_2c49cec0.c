/* FUN_2c49cec0 @ 0x2c49cec0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49cec0(void)

{
  int iVar1;
  int iVar2;
  byte local_19;
  undefined2 local_18;
  undefined4 local_14;
  
  iVar1 = _LAB_2c49cf98;
  local_14 = *_LAB_2c49cf9c;
  iVar2 = FUN_2c49c6a0(_LAB_2c49cf98,0,&local_19,0);
  if (-1 < iVar2) {
    *(uint *)(iVar1 + 0x10) = (uint)local_19;
  }
  FUN_2c49ce4c(_LAB_2c49cf98);
  FUN_2c49cbf8(_LAB_2c49cf98);
  iVar2 = FUN_2c4baafc();
  if (iVar2 == 2) {
    *(undefined4 *)(iVar1 + 0x24) = 0xfa;
  }
  else {
    FUN_2c49c6fc();
  }
  FUN_2c49cb44(_LAB_2c49cf98);
  local_18 = 0;
  iVar2 = FUN_2c49c9e8(_LAB_2c49cf98,0xa4,&local_18);
  if (-1 < iVar2) {
    iVar2 = (uint)local_18._1_1_ + (uint)(byte)local_18 * 0x100;
    *_LAB_2c49cfa0 = (short)iVar2;
    *(int *)(iVar1 + 0x30) = iVar2 >> 4;
  }
  FUN_2c49c7b0();
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x407,_LAB_2c49cfac,_LAB_2c49cfa8,_LAB_2c49cfa4,*(undefined4 *)(iVar1 + 0x10),
        *(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x20),
        *(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x30),
        *(undefined4 *)(iVar1 + 0x38),*(undefined1 *)(iVar1 + 4));
}

