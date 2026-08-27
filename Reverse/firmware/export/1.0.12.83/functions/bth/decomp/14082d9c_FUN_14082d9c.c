/* FUN_14082d9c @ 0x14082d9c */

undefined4 FUN_14082d9c(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  cVar1 = (char)param_2[1];
  if (cVar1 == '\x01') {
    piVar5 = *(int **)(param_1 + 0xc);
    if (piVar5 != (int *)(param_1 + 0xc)) {
      uVar2 = FUN_1408ad70();
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14082e98,uVar2,*(undefined1 *)(piVar5 + 0xc));
    }
  }
  else {
    if (cVar1 == '\0') {
      if (*param_2 != 0) {
        piVar5 = (int *)(param_1 + 0xc);
        piVar4 = (int *)*piVar5;
        if (piVar4 != piVar5) {
          iVar3 = 0x3ea;
          do {
            if (*param_2 == piVar4[8]) {
              param_2[4] = (int)piVar4;
              return 0;
            }
            iVar3 = iVar3 + -1;
            piVar4 = (int *)*piVar4;
            if (iVar3 == 0) goto LAB_14082e60;
          } while (piVar4 != piVar5);
        }
      }
      param_2[4] = 0;
      return 1;
    }
    if (cVar1 != '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14082e94);
    }
    if (param_2[2] != param_1) {
      piVar5 = (int *)(param_1 + 0xc);
      piVar4 = (int *)*piVar5;
      if (piVar4 != piVar5) {
        iVar3 = 0x3ea;
        do {
          if (*(short *)piVar4[10] == *(short *)param_2[3]) {
            param_2[4] = (int)piVar4;
            uVar2 = FUN_1408ad70(param_1);
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x44,DAT_14082e9c,uVar2,*(undefined2 *)param_2[3],
                         *(undefined1 *)(param_2[4] + 0x19),*(undefined1 *)(param_2[4] + 0x18));
          }
          iVar3 = iVar3 + -1;
          piVar4 = (int *)*piVar4;
          if (iVar3 == 0) {
LAB_14082e60:
                    /* WARNING: Subroutine does not return */
            FUN_14082394();
          }
        } while (piVar4 != piVar5);
      }
    }
  }
  return 1;
}

