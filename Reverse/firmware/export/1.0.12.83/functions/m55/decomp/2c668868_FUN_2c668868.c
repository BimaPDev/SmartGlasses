/* FUN_2c668868 @ 0x2c668868 */

void FUN_2c668868(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_2c668850();
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar2 = *DAT_2c6688d0;
    *(undefined4 *)(param_1 + 0x28) = DAT_2c6688d4;
    if (iVar2 == param_1) {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
    uVar1 = FUN_2c6688d8(param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = FUN_2c6688d8(param_1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = FUN_2c6688d8(param_1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    FUN_2c6687b8(*(undefined4 *)(param_1 + 4),4,0);
    FUN_2c6687b8(*(undefined4 *)(param_1 + 8),9,1);
    FUN_2c6687b8(*(undefined4 *)(param_1 + 0xc),0x12,2);
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  FUN_2c6694ac(DAT_2c668864);
  return;
}

