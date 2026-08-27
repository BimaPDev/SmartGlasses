/* FUN_2c63655c @ 0x2c63655c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63655c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = _LAB_2c6365b8;
  uVar2 = _LAB_2c6365b4;
  *(undefined4 *)(param_2 + 0x24) = 0x870000;
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined2 *)(param_2 + 0x36) = 0x2d0;
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  *(undefined4 *)(param_2 + 0x30) = 0x640000;
  *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) & 0xf0 | 8;
  uVar2 = FUN_2c629df4();
  *(undefined2 *)(param_2 + 0x3c) = *(undefined2 *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  lv_obj_add_flag_invalidate(param_2,2);
  FUN_2c606abc(param_2,0x310);
  FUN_2c606bc8();
  *(undefined2 *)(*(int *)(param_2 + 8) + 0x14) = 0xd;
  return;
}

