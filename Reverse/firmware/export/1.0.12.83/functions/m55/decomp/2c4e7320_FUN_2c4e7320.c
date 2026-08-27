/* FUN_2c4e7320 @ 0x2c4e7320 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e7320(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined8 uVar4;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = *_LAB_2c4e7378;
  uStack_14 = 0;
  uStack_10 = 0;
  uVar4 = FUN_2c48ba30(&uStack_14,2,0);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar1 = _LAB_2c4e737c;
  if ((int)uVar4 == 0) {
    iVar2 = FUN_2c4e9354();
    (**(code **)(iVar2 + 0x58))(_LAB_2c4e7380,uStack_14);
    iVar2 = FUN_2c4e9354();
    (**(code **)(iVar2 + 0x58))(_LAB_2c4e7384,uStack_10);
    uVar1 = _LAB_2c4e7388;
    uVar3 = extraout_r1;
  }
  if ((*_LAB_2c4e7378 ^ uStack_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar1,uVar3,*_LAB_2c4e7378 ^ uStack_c,0);
  }
  return;
}

