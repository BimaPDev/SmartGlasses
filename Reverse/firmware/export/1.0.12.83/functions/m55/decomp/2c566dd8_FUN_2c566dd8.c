/* FUN_2c566dd8 @ 0x2c566dd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c566dd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = _LAB_2c566e6c;
  *param_1 = _LAB_2c566e6c;
  uVar2 = _LAB_2c566e70;
  if ((undefined4 *)param_1[0x14] != param_1 + 0x16) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar3 = (undefined4 *)param_1[0x13];
  if (puVar3 == (undefined4 *)0x0) {
    if ((undefined4 *)param_1[0xd] != param_1 + 0xf) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)param_1[7] != param_1 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)param_1[1] != param_1 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,param_1,uVar1,param_1 + 3,param_4);
  }
  *puVar3 = _LAB_2c566e70;
  if ((undefined4 *)puVar3[0xd] != puVar3 + 0xf) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar3[7] != puVar3 + 9) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar3[1] != puVar3 + 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,puVar3,uVar2,puVar3 + 3,param_4);
}

