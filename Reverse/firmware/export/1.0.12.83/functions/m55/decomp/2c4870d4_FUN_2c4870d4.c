/* FUN_2c4870d4 @ 0x2c4870d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4870d4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puStack_c;
  
  FUN_2c648600(_LAB_2c4870ec,_DAT_2c4870e8);
  piVar1 = _LAB_2c487268;
  if (*_LAB_2c487268 == 0) {
    return 0;
  }
  puStack_c = (undefined1 *)FUN_2c6442f0(*_LAB_2c487268,0);
  if (puStack_c != (undefined1 *)0x0) {
    iVar2 = *piVar1;
    *puStack_c = 0;
    if (iVar2 == 0) {
      uVar3 = 0xfffffffc;
    }
    else if (puStack_c == (undefined1 *)0x0) {
      uVar3 = 0xffffff81;
    }
    else {
      uVar3 = FUN_2c6450ec(*(undefined4 *)(iVar2 + 4),&puStack_c,0);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c48726c);
}

