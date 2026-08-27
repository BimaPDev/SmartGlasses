/* FUN_2c498fe0 @ 0x2c498fe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c498fe0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uStack_18;
  int iStack_14;
  
  piVar1 = _LAB_2c4991f4;
  iStack_14 = *_LAB_2c4991f0;
  uStack_18 = 0;
  iVar2 = *_LAB_2c4991f4;
  while (iVar2 == 1) {
    FUN_2c6444fc(5);
    iVar2 = *piVar1;
  }
  iVar2 = FUN_2c498f54(param_1,5,&uStack_18,4);
  if ((uStack_18 & 0xff) != 0x10 && iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x377,_LAB_2c499208,_LAB_2c499204,_LAB_2c499200,param_1,uStack_18 & 0xff,
          uStack_18 >> 8 & 0xff,uStack_18 >> 0x10 & 0xff,uStack_18 >> 0x18);
  }
  uStack_18 = 0;
  iVar2 = *piVar1;
  while (iVar2 == 1) {
    FUN_2c6444fc(5);
    iVar2 = *piVar1;
  }
  iVar2 = FUN_2c498f54(param_1,99,&uStack_18,4);
  if (iVar2 == 0 && (uStack_18 != 0 && uStack_18 != 0xffffff)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,900,_LAB_2c499208,_LAB_2c499204,_LAB_2c499210,param_1,uStack_18 & 0xff,
          uStack_18 >> 8 & 0xff,uStack_18 >> 0x10 & 0xff,uStack_18 >> 0x18);
  }
  uStack_18 = 0;
  iVar2 = *piVar1;
  while (iVar2 == 1) {
    FUN_2c6444fc(5);
    iVar2 = *piVar1;
  }
  iVar2 = FUN_2c498f54(param_1,0x35,&uStack_18,4);
  if (iVar2 == 0 && uStack_18 != _LAB_2c4991f8) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x390,_LAB_2c499208,_LAB_2c499204,_LAB_2c49920c,param_1,uStack_18 & 0xff,
          uStack_18 >> 8 & 0xff,uStack_18 >> 0x10 & 0xff,uStack_18 >> 0x18);
  }
  uStack_18 = 0;
  iVar2 = *piVar1;
  while (iVar2 == 1) {
    FUN_2c6444fc(5);
    iVar2 = *piVar1;
  }
  iVar2 = FUN_2c498f54(param_1,0x47,&uStack_18,4);
  if (iVar2 == 0 && uStack_18 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x39c,_LAB_2c499208,_LAB_2c499204,_LAB_2c499214,param_1,0,uStack_18 >> 8 & 0xff,
          uStack_18 >> 0x10 & 0xff,uStack_18 >> 0x18);
  }
  uStack_18 = 0;
  iVar2 = *piVar1;
  while (iVar2 == 1) {
    FUN_2c6444fc(5);
    iVar2 = *piVar1;
  }
  iVar2 = FUN_2c498f54(param_1,0xc1,&uStack_18,4);
  if ((uStack_18 != _LAB_2c4991fc) && (iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x3a9,_LAB_2c499208,_LAB_2c499204,_LAB_2c499218,param_1,uStack_18 & 0xff,
          uStack_18 >> 8 & 0xff,uStack_18 >> 0x10 & 0xff,uStack_18 >> 0x18);
  }
  if (*_LAB_2c4991f0 == iStack_14) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

