/* FUN_2c4a9b98 @ 0x2c4a9b98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a9b98(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort uStack_16;
  int iStack_14;
  
  iVar2 = *(int *)(param_1 + 0xa8);
  iStack_14 = *_LAB_2c4a9c40;
  uStack_16 = 0;
  FUN_2c4a8764(iVar2,6,&uStack_16);
  switch(uStack_16 & 0xf) {
  case 0:
    uVar1 = 1000;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xc2,_LAB_2c4a9c50,_LAB_2c4a9c4c,_LAB_2c4a9c48,*(undefined1 *)(iVar2 + 0xc),
          _LAB_2c4a9c44);
  case 3:
    uVar1 = 2000;
    break;
  case 6:
    uVar1 = 4000;
    break;
  case 7:
    uVar1 = 0x157c;
    break;
  case 8:
    uVar1 = 6000;
    break;
  case 9:
    uVar1 = 12000;
    break;
  case 10:
    uVar1 = 24000;
  }
  *param_2 = uVar1;
  FUN_2c4a88c8(iVar2,0x9f44,uVar1,1);
  if (*_LAB_2c4a9c40 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

