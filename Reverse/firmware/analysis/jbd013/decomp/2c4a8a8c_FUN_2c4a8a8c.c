/* FUN_2c4a8a8c @ 0x2c4a8a8c */

undefined4 FUN_2c4a8a8c(int *param_1,undefined4 param_2,uint *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ushort uStack_26;
  int iStack_24;
  
  iStack_24 = *DAT_2c4a8c74;
  FUN_2c4a94d0();
  if (param_4 == 0) {
    iVar2 = *param_1;
    uStack_26 = 0;
    iVar1 = FUN_2c4a85ac(param_1,*(undefined1 *)(iVar2 + 0x1cc),param_2);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x131,DAT_2c4a8c7c,DAT_2c4a8c84,LAB_2c4a8c80,(char)param_1[3],DAT_2c4a8c94,iVar1);
    }
    iVar1 = FUN_2c4a8638(param_1,*(undefined1 *)(iVar2 + 0x1d0),&uStack_26);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x137,DAT_2c4a8c7c,DAT_2c4a8c84,LAB_2c4a8c80,(char)param_1[3],DAT_2c4a8c94,iVar1);
    }
    *param_3 = (uint)uStack_26;
  }
  else {
    if (param_4 != 1) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x178,DAT_2c4a8c7c,DAT_2c4a8c84,DAT_2c4a8c9c,(char)param_1[3],DAT_2c4a8c88,param_4);
    }
    iVar2 = *param_1;
    uStack_26 = 0;
    iVar1 = FUN_2c4a85ac(param_1,*(undefined1 *)(iVar2 + 0x1cc),param_2);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x14b,DAT_2c4a8c7c,DAT_2c4a8c84,LAB_2c4a8c80,(char)param_1[3],DAT_2c4a8c78,iVar1);
    }
    iVar1 = FUN_2c4a8638(param_1,*(undefined1 *)(iVar2 + 0x1d0),&uStack_26);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x152,DAT_2c4a8c7c,DAT_2c4a8c84,DAT_2c4a8c90,(char)param_1[3],DAT_2c4a8c78,iVar1);
    }
    *param_3 = (uint)uStack_26;
    iVar1 = FUN_2c4a8638(param_1,*(undefined1 *)(iVar2 + 0x1d0),&uStack_26);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x15b,DAT_2c4a8c7c,DAT_2c4a8c84,DAT_2c4a8c90,(char)param_1[3],DAT_2c4a8c78,iVar1);
    }
    *param_3 = *param_3 | (uint)uStack_26 << 0x10;
  }
  FUN_2c4a8638(param_1,*(undefined1 *)(*param_1 + 0x208),&uStack_26);
  FUN_2c4a94e0();
  if (*DAT_2c4a8c74 == iStack_24) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

