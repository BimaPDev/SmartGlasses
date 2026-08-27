/* FUN_2c4e798a @ 0x2c4e798a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e798a(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_d;
  uint uStack_c;
  
  uStack_c = *param_4;
  iVar1 = func_0x2c4efeec(*param_2,param_2,param_3,0);
  if (iVar1 == 0) {
    uStack_d = 0xfd;
  }
  else {
    uStack_d = 0xfe;
  }
  iVar1 = FUN_2c4eab7c();
  iVar1 = (**(code **)(iVar1 + 0x58))(&uStack_d,1);
  uVar2 = _LAB_2c4e79e4;
  if (iVar1 == 0) {
    uVar2 = _LAB_2c4e79e0;
  }
  if ((*_LAB_2c4e79dc ^ uStack_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(iVar1,*_LAB_2c4e79dc ^ uStack_c,0);
  }
  return uVar2;
}

