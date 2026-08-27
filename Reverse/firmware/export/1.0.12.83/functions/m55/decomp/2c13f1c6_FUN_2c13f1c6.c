/* FUN_2c13f1c6 @ 0x2c13f1c6 */

void FUN_2c13f1c6(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
LAB_2c13f1d2:
  do {
    iVar3 = *(int *)(param_1 + 0x14);
    if ((int)((uint)*(byte *)(param_1 + 3) << 0x1c) < 0) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      func_0x2c13eebc(param_1,0);
      if (*(int *)(param_1 + 8) != 0) {
        iVar1 = FUN_2c14089c(param_1);
        FUN_2c140ec8(iVar1,0);
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(int *)(param_1 + 0xc) = iVar1;
        iVar2 = *(int *)(iVar1 + 0x2c);
        *(int *)(param_1 + 0x14) = iVar2;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x10) = param_1;
        }
        *(int *)(iVar1 + 0x2c) = param_1;
        *(undefined1 *)(param_1 + 0x18) = 1;
        func_0x2c13eeb0(param_1,1);
        param_1 = iVar3;
        if (iVar3 == 0) {
          return;
        }
        goto LAB_2c13f1d2;
      }
    }
    param_1 = iVar3;
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}

