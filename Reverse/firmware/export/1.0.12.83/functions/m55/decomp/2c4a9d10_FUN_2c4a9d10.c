/* FUN_2c4a9d10 @ 0x2c4a9d10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4a9d10(int param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  
  iVar2 = *(int *)(param_1 + 0xa8);
  iStack_1c = *_LAB_2c4a9dd0;
  uStack_24 = 0;
  uStack_20 = 0;
  iVar1 = FUN_2c4a8a8c(iVar2,0x9ce2,&uStack_24,0);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xf9,_LAB_2c4a9de0,_LAB_2c4a9ddc,_LAB_2c4a9dd8,*(undefined1 *)(iVar2 + 0xc),
          _LAB_2c4a9dd4);
  }
  iVar1 = FUN_2c4a8a8c(iVar2,0x9d71,&uStack_20,0);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x100,_LAB_2c4a9de0,_LAB_2c4a9ddc,_LAB_2c4a9de4,*(undefined1 *)(iVar2 + 0xc),
          _LAB_2c4a9dd4);
  }
  *(bool *)param_2 = (uStack_24 & 1) != 0 || (uStack_20 & 0x10) != 0;
  if ((uStack_20 & 0x4000) == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
  }
  if (*_LAB_2c4a9dd0 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

