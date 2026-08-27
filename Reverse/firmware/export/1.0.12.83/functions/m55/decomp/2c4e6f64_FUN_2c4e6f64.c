/* FUN_2c4e6f64 @ 0x2c4e6f64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e6f64(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  uint uStack_1c;
  
  uStack_1c = *_LAB_2c4e6fc8;
  uVar1 = FUN_2c66d418(*param_2,auStack_24,10,0);
  uStack_20 = 0;
  iVar2 = FUN_2c4e94fc();
  if (param_1 == 2) {
    uStack_20 = FUN_2c66d418(param_2[1],auStack_24,0x10);
  }
  iVar2 = (**(code **)(iVar2 + 0x28))(uVar1,&uStack_20);
  uVar3 = _LAB_2c4e6fd0;
  if (iVar2 != 0) {
    uVar3 = _LAB_2c4e6fcc;
  }
  if ((*_LAB_2c4e6fc8 ^ uStack_1c) == 0) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar2,*_LAB_2c4e6fc8 ^ uStack_1c,0);
}

