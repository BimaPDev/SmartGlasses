/* FUN_2c4a88c8 @ 0x2c4a88c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4a88c8(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1e [2];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c4a8a64;
  FUN_2c4a94d0();
  if (param_4 == 0) {
    iVar2 = *param_1;
    iVar1 = FUN_2c4a85ac(param_1,*(undefined1 *)(iVar2 + 0x1cc),param_2);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xc4,_LAB_2c4a8a6c,_LAB_2c4a8a74,_LAB_2c4a8a70,(char)param_1[3],_LAB_2c4a8a68,iVar1);
    }
    iVar1 = FUN_2c4a85ac(param_1,*(undefined1 *)(iVar2 + 0x1d0),param_3 & 0xffff);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xca,_LAB_2c4a8a6c,_LAB_2c4a8a74,_LAB_2c4a8a70,(char)param_1[3],_LAB_2c4a8a68,iVar1);
    }
  }
  else {
    if (param_4 != 1) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x11a,_LAB_2c4a8a6c,_LAB_2c4a8a74,_LAB_2c4a8a88,(char)param_1[3],_LAB_2c4a8a7c,param_4
           );
    }
    iVar2 = *param_1;
    iVar1 = FUN_2c4a85ac(param_1,*(undefined1 *)(iVar2 + 0x1cc),param_2);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xdb,_LAB_2c4a8a6c,_LAB_2c4a8a74,_LAB_2c4a8a70,(char)param_1[3],_LAB_2c4a8a78,iVar1);
    }
    iVar1 = FUN_2c4a85ac(param_1,*(undefined1 *)(iVar2 + 0x1d0),param_3 & 0xffff);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xe2,_LAB_2c4a8a6c,_LAB_2c4a8a74,_LAB_2c4a8a70,(char)param_1[3],_LAB_2c4a8a78,iVar1);
    }
    iVar1 = FUN_2c4a85ac(param_1,*(undefined1 *)(iVar2 + 0x1d0),param_3 >> 0x10);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xe9,_LAB_2c4a8a6c,_LAB_2c4a8a74,_LAB_2c4a8a70,(char)param_1[3],_LAB_2c4a8a78,iVar1);
    }
  }
  FUN_2c4a8638(param_1,*(undefined1 *)(*param_1 + 0x208),auStack_1e);
  FUN_2c4a94e0();
  if (*_LAB_2c4a8a64 == iStack_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

