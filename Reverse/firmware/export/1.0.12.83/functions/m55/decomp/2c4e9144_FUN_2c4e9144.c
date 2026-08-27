/* FUN_2c4e9144 @ 0x2c4e9144 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e9144(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  puVar1 = _LAB_2c4e9164;
  *_LAB_2c4e9164 = param_1;
  puVar1[1] = param_2;
  FUN_2c673c88();
  uVar3 = func_0x2c674808();
  puVar2 = _LAB_2c4e916c;
  *_LAB_2c4e9168 = uVar3;
  *puVar2 = 1;
  return 1;
}

