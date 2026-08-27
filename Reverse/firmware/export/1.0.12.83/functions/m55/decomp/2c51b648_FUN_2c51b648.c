/* FUN_2c51b648 @ 0x2c51b648 */

void FUN_2c51b648(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_2c606abc(*(undefined4 *)(param_1 + 0xc),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x10),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x14),1);
  (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  uVar1 = FUN_2c5ef8d0();
  uVar1 = FUN_2c5dc51c(uVar1,1);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = registry_lookup(DAT_2c51b6a8);
  FUN_2c638814(uVar3,DAT_2c51b6ac,uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(4,uVar1);
}

