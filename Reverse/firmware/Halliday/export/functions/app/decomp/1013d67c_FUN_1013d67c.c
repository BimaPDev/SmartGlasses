/* FUN_1013d67c @ 0x1013d67c */

uint FUN_1013d67c(int param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r2;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar3 = (int *)(param_1 + 0x48);
  uVar5 = 0;
  do {
    iVar6 = piVar3[1];
    iVar4 = piVar3[2];
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      if ((1 < *(ushort *)(iVar4 + 0xc)) && (iVar2 = *(short *)(iVar4 + 0xe) + 1, iVar2 != 0)) {
        uVar1 = (*param_2)(param_1,iVar4,param_3,iVar2,param_4);
        uVar5 = uVar5 | uVar1;
        param_3 = extraout_r2;
      }
      iVar4 = iVar4 + 0x68;
    }
    piVar3 = (int *)*piVar3;
  } while (piVar3 != (int *)0x0);
  return uVar5;
}

