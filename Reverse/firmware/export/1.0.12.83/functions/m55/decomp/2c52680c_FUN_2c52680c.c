/* FUN_2c52680c @ 0x2c52680c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52680c(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *(char *)(param_1 + 0x4e) = (char)param_2;
  uVar1 = *(undefined1 *)(param_1 + 0x53);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x54) + 0xc0))();
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c526a14,0x16f,DAT_2c526a10,_LAB_2c526a0c,param_2,uVar1,uVar2,
               *(undefined1 *)(param_1 + 0x45),*(undefined1 *)(param_1 + 0x44));
}

