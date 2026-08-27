/* FUN_2c4fe3e8 @ 0x2c4fe3e8 */

int FUN_2c4fe3e8(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_2c6033b4(param_1,0,0x55);
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  uVar2 = FUN_2c6033b4(param_1,0,0x57);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  uVar1 = FUN_2c6033b4(param_1,0,0x58);
  *(undefined2 *)(param_1 + 0xae) = uVar1;
  uVar1 = FUN_2c6033b4(param_1,0,0x59);
  *(undefined2 *)(param_1 + 0xac) = uVar1;
  return param_1 + 0x94;
}

