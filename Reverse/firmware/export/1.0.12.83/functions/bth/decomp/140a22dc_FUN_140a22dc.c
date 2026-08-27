/* FUN_140a22dc @ 0x140a22dc */

void FUN_140a22dc(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_3c [28];
  uint local_20;
  int local_1c;
  
  piVar2 = DAT_140a2380;
  local_1c = *DAT_140a2378;
  if (param_1 == 0) {
    if (*DAT_140a2378 == local_1c) {
      return;
    }
  }
  else {
    if (*DAT_140a237c == 0) {
      if (0 < *DAT_140a2380) {
        iVar3 = 0;
        piVar4 = DAT_140a2384;
        do {
          FUN_140a2bac(*piVar4,auStack_3c);
          iVar1 = *piVar4;
          if ((0 < param_1 - iVar1) && ((uint)(param_1 - iVar1) < local_20)) {
            if (iVar3 < *piVar2) {
              piVar2 = (int *)0x0;
              if (*DAT_140a2378 == local_1c) goto LAB_140a233e;
              goto LAB_140a2360;
            }
            break;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar3 < *piVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a238c,DAT_140a2388,param_1);
    }
    if (*DAT_140a2378 == local_1c) {
      iVar1 = *DAT_140a2390;
      piVar2 = DAT_140a2390;
LAB_140a233e:
      FUN_140a2a30(iVar1,param_1,0,piVar2);
      return;
    }
  }
LAB_140a2360:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

