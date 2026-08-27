/* FUN_2c5b05a4 @ 0x2c5b05a4 */

int FUN_2c5b05a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_2c606b94(*(int *)(param_1 + 4),1,param_3,param_4,param_4);
    iVar3 = 0;
    if (iVar1 == 0) {
      do {
        iVar1 = FUN_2c6041fc(*(undefined4 *)(param_1 + 0x20));
        if (iVar1 <= iVar3) {
          return 0;
        }
        uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20),iVar3);
        iVar1 = FUN_2c606bb4(uVar2,0x10);
        iVar3 = iVar3 + 1;
      } while (iVar1 == 0);
      return iVar1;
    }
  }
  return 0;
}

