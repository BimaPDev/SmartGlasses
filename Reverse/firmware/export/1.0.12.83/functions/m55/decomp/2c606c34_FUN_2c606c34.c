/* FUN_2c606c34 @ 0x2c606c34 */

int FUN_2c606c34(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int extraout_r2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = FUN_2c62a4ec(0);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar5 = *(int *)(iVar1 + 0x28);
    if (iVar5 != 0) {
      iVar2 = 0;
      piVar4 = (int *)(*(int *)(iVar1 + 0xc) + -4);
      do {
        piVar4 = piVar4 + 1;
        iVar3 = *piVar4;
        if (iVar3 == param_1) {
          return 1;
        }
        iVar2 = FUN_2c60646c(*(undefined4 *)(iVar3 + 8),param_1,iVar2 + 1,iVar3,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = extraout_r2;
      } while (extraout_r2 != iVar5);
    }
    iVar1 = FUN_2c62a4ec(iVar1);
  } while( true );
}

