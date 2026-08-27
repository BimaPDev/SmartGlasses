/* FUN_2c4fdf64 @ 0x2c4fdf64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fdf64(int param_1)

{
  int iVar1;
  
  FUN_2c63bb98(0xd);
  iVar1 = FUN_2c4e9354();
  (**(code **)(iVar1 + 0x88))(1);
  iVar1 = FUN_2c4e9354();
  (**(code **)(iVar1 + 0x10))();
  *_LAB_2c4fe008 = *(undefined4 *)(param_1 + 4);
  func_0x2c4ebd8c();
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x60,_LAB_2c4fe014,_LAB_2c4fe010,_LAB_2c4fe00c,*(undefined4 *)(param_1 + 4));
}

