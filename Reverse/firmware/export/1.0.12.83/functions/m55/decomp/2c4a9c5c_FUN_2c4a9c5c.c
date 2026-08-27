/* FUN_2c4a9c5c @ 0x2c4a9c5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_2c4a9c5c(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uStack_16;
  int iStack_14;
  
  iVar3 = 6;
  iVar4 = *(int *)(param_1 + 0xa8);
  iStack_14 = *_LAB_2c4a9cf8;
  uStack_16 = 0;
  while( true ) {
    iVar2 = FUN_2c4a8764(iVar4,0x45,&uStack_16);
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x123,_LAB_2c4a9d08,_LAB_2c4a9d04,_LAB_2c4a9d0c,*(undefined1 *)(iVar4 + 0xc),
            _LAB_2c4a9cfc,0x45);
    }
    uVar1 = uStack_16 & 8;
    uStack_16 = uStack_16 & 8;
    if (uVar1 == 0) break;
    FUN_2c6444fc(0x1e);
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x12f,_LAB_2c4a9d08,_LAB_2c4a9d04,_LAB_2c4a9d00,*(undefined1 *)(iVar4 + 0xc),
            _LAB_2c4a9cfc);
    }
  }
  if (*_LAB_2c4a9cf8 == iStack_14) {
    return uStack_16;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

