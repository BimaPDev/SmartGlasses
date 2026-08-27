/* FUN_1408ac24 @ 0x1408ac24 */

undefined4 FUN_1408ac24(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 != (undefined1 *)0x0) {
    piVar5 = DAT_1408acdc + 8;
    piVar2 = DAT_1408acdc;
    do {
      piVar3 = piVar2 + 1;
      iVar4 = *piVar2;
      if ((iVar4 != 0) && (iVar1 = FUN_140db784(param_1,iVar4 + 8,6), iVar1 == 0)) {
        iVar6 = iVar4 + param_2 * 4;
        iVar1 = *(int *)(iVar6 + 0x48);
        if (iVar1 != 0) {
          return *(undefined4 *)(iVar1 + 4);
        }
        piVar2 = (int *)FUN_140759b8(param_3 + 0xcU & 0xffff);
        if (piVar2 != (int *)0x0) {
          FUN_140e5658(piVar2,0,param_3 + 0xcU);
          *piVar2 = iVar4;
          piVar2[1] = (int)(piVar2 + 3);
          piVar2[2] = param_4;
          *(int **)(iVar6 + 0x48) = piVar2;
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x44,DAT_1408ace8,*(undefined1 *)(iVar4 + 0x11),iVar4,param_2,piVar2[1]);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_1408acec,*(undefined1 *)(iVar4 + 0x11),DAT_1408ace0);
      }
      piVar2 = piVar3;
    } while (piVar5 != piVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_1408ace4,DAT_1408ace0,*param_1,param_1[1],param_1[5]);
}

