/* FUN_2c5315e0 @ 0x2c5315e0 */

void FUN_2c5315e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  if (*(int *)(puVar1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  *(undefined4 *)(puVar1 + 0x18) = 0;
  puVar1[0x1c] = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,*param_1,puVar1 + 1,param_4);
}

