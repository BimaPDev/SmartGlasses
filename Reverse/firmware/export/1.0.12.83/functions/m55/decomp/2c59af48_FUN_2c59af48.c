/* FUN_2c59af48 @ 0x2c59af48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59af48(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(code **)(*param_1 + 0x14) == _LAB_2c59af74) {
    uVar2 = FUN_2c5d78f0();
    func_0x2c5d7a44(uVar2,_LAB_2c59af78);
  }
  else {
    (**(code **)(*param_1 + 0x14))();
  }
  piVar1 = _LAB_2c59af7c;
  if (*_LAB_2c59af7c != 0) {
    FUN_2c62be1c();
    *piVar1 = 0;
  }
  return;
}

