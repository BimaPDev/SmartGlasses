/* FUN_2c5aceac @ 0x2c5aceac */

void FUN_2c5aceac(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_2c5d5cd0();
    iVar5 = *(int *)(param_1 + 0x1a4);
    if (iVar5 != 0) {
      FUN_2c5d5ccc(iVar5);
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,iVar5);
    }
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  piVar1 = DAT_2c5acf18;
  FUN_2c62a470();
  uVar2 = FUN_2c5fee80();
  uVar4 = *param_2;
  if (*piVar1 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  uVar3 = FUN_2c47245c(0,0xc);
  FUN_2c5d5910(uVar3,uVar2,4,uVar4);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  return;
}

