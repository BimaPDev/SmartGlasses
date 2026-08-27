/* FUN_2c567918 @ 0x2c567918 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c567918(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  puVar1 = _LAB_2c567a1c;
  iStack_14 = *_LAB_2c567a18;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c567a34,0xec,_LAB_2c567a38,_LAB_2c567a30);
  }
  *_LAB_2c567a1c = *(undefined4 *)(param_2 + 0x68);
  iVar2 = func_0x2c5922b4();
  if ((iVar2 == 1) || (iVar2 = func_0x2c5924c4(param_1), iVar2 == 0)) {
    FUN_2c5924fc(param_1,_LAB_2c567a20);
    iVar2 = FUN_2c66b624(_LAB_2c567a24,*(undefined4 *)(param_2 + 0x68));
    if (iVar2 == 0) {
      FUN_2c512ba4();
      uStack_18 = *(undefined4 *)(_LAB_2c567a28 + 4);
      uStack_1c = _LAB_2c567a2c;
      FUN_2c593c2c(param_1,&uStack_1c,0);
      if (*_LAB_2c567a18 == iStack_14) {
        uStack_18 = *(undefined4 *)(param_1 + 0xc);
        iStack_14 = 1;
        uStack_1c = _LAB_2c592298;
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5922a0,0xc9,_LAB_2c592298,_LAB_2c59229c);
      }
    }
    else {
      uStack_18 = *(undefined4 *)(_LAB_2c567a28 + 4);
      uStack_1c = _LAB_2c567a2c;
      FUN_2c593c2c(param_1,&uStack_1c,0);
      if (*_LAB_2c567a18 == iStack_14) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c592204,0xc4,DAT_2c592200,DAT_2c5921fc,*(undefined4 *)(param_1 + 0xc));
      }
    }
  }
  else {
    FUN_2c5c55d8();
    if (*_LAB_2c567a18 == iStack_14) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5c585c,0x48,DAT_2c5c5858,DAT_2c5c5854,*puVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

