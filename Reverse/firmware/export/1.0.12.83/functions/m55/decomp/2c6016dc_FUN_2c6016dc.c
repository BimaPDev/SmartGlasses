/* FUN_2c6016dc @ 0x2c6016dc */

void FUN_2c6016dc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_2 != 0) || (param_2 = FUN_2c5fee44(*DAT_2c601794), param_2 != 0)) {
    iVar2 = FUN_2c606b94(param_2,1);
    if (iVar2 == 0) {
      FUN_2c60138c(param_1,param_2);
    }
    iVar2 = FUN_2c6041d4(param_2);
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar2 = FUN_2c6041fc(iVar1);
      if (iVar2 != 0) {
        iVar4 = 0;
        uVar6 = 0;
LAB_2c601720:
        do {
          iVar5 = *(int *)(**(int **)(iVar1 + 8) + iVar4 * 4);
          if (uVar6 == 0) {
            uVar3 = (uint)(iVar5 == param_2);
          }
          else {
            uVar3 = FUN_2c606b94(iVar5,1);
            if (uVar3 == 0) {
              iVar4 = iVar4 + 1;
              FUN_2c60138c(param_1,iVar5);
              if (iVar2 == iVar4) break;
              goto LAB_2c601720;
            }
          }
          iVar4 = iVar4 + 1;
          uVar6 = uVar3;
        } while (iVar2 != iVar4);
      }
      FUN_2c602340(iVar1,0x17,param_1);
      FUN_2c602340(iVar1,0x18,param_1);
      FUN_2c602340(iVar1,0x19,param_1);
      iVar2 = FUN_2c6041d4(iVar1);
      param_2 = iVar1;
    }
  }
  return;
}

