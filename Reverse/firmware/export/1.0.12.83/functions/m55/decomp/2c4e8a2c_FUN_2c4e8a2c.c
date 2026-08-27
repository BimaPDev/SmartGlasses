/* FUN_2c4e8a2c @ 0x2c4e8a2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e8a2c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 auStack_50 [17];
  undefined1 auStack_3f [16];
  undefined1 auStack_2f [19];
  int iStack_1c;
  
  uVar2 = _LAB_2c4e8a9c;
  uVar1 = _LAB_2c4e8a98;
  uVar5 = 0;
  iStack_1c = *_LAB_2c4e8a90;
  puVar6 = _LAB_2c4e8a94;
  do {
    func_0x2c4892fc(uVar5 & 0xff,auStack_50);
    uVar5 = uVar5 + 1;
    iVar3 = FUN_2c4e9354();
    uVar4 = *puVar6;
    (**(code **)(iVar3 + 0x58))(uVar1,uVar4,auStack_3f);
    iVar3 = FUN_2c4e9354();
    (**(code **)(iVar3 + 0x58))(uVar2,uVar4,auStack_2f);
    puVar6 = puVar6 + 1;
  } while (uVar5 != 5);
  if (*_LAB_2c4e8a90 == iStack_1c) {
    return _LAB_2c4e8aa0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

