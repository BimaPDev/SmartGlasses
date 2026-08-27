/* FUN_1408f6a0 @ 0x1408f6a0 */

void FUN_1408f6a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_1408f764;
  if (param_1 != 0) {
    piVar1 = (int *)(DAT_1408f764 + 4);
    piVar4 = (int *)*piVar1;
    if (piVar4 != piVar1) {
      iVar6 = 0x3ea;
      do {
        if ((piVar4 != (int *)0x0) && (param_1 == piVar4[4])) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x43,DAT_1408f774,param_1,param_2,piVar4[2]);
        }
        iVar6 = iVar6 + -1;
        piVar4 = (int *)*piVar4;
        if (iVar6 == 0) {
          FUN_1408ef64();
          goto LAB_1408f756;
        }
      } while (piVar4 != piVar1);
    }
  }
  if (0x13 < *(ushort *)(DAT_1408f764 + 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_1408f778);
  }
  iVar6 = FUN_140759b8(0x14);
  uVar3 = DAT_1408f76c;
  if (iVar6 != 0) {
    if (param_1 == DAT_1408f768) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 0xc);
      *(int *)(iVar2 + 0xc) = iVar5 + 1;
    }
    *(int *)(iVar6 + 8) = iVar5;
    *(undefined4 *)(iVar6 + 0xc) = param_2;
    *(int *)(iVar6 + 0x10) = param_1;
    FUN_14074a88(iVar6,uVar3);
    uVar3 = DAT_1408f770;
    *(short *)(iVar2 + 2) = *(short *)(iVar2 + 2) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x45,uVar3);
  }
LAB_1408f756:
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x40,DAT_1408f77c);
}

